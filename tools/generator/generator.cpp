#include "generator.hpp"

#include "meta.hpp"
#include "builder.hpp"
#include "filter.hpp"
#include "maps.hpp"

#include <filesystem>
#include <fstream>

#include <il2cpp/api.hpp>
#include <iostream>
#include <sstream>

namespace fs = std::filesystem;

namespace meta
{
    generator::generator(std::string input_path)
        : input_path_{ std::move(input_path) }
        , output_path_{ "au/" }
    {}

    void generator::initialize()
    {
        SetDllDirectory(input_path_.c_str());
        auto handle = LoadLibrary("GameAssembly.dll");
        if (!handle) spdlog::error("Unable to load library");

        api::initialize();

        spdlog::info("Initialize api");
        api::init("GameAssembly");

        auto dom = api::domain_get();
        assemblies_ = (il2cpp::Il2CppAssembly**)api::domain_get_assemblies(dom, &assembly_count_);
        if (assembly_count_ == 0) spdlog::error("assembly error: size == 0");

        for (auto it = assemblies_; it != assemblies_ + assembly_count_; ++it)
        {
            auto image = api::assembly_get_image(*it);
            if (!image)
            {
                spdlog::error("null assembly");
                continue;
            }

            std::string image_name = api::image_get_name(image);

            if (!images_.empty() && std::find(images_.begin(), images_.end(), image_name) == images_.end()) continue;

            auto class_count = api::image_get_class_count(image);

            spdlog::info("Load image {} Classes : {}", image_name, class_count);

            for (int i = 0; i < class_count; ++i)
            {
                auto klass = api::image_get_class(image, i);
                klasses.emplace_back(std::make_unique<meta::klass>(klass));
            }

            for (auto& klass : klasses)
            {
                klass->initialize();
            }
        }
    }

    void generator::on_process(const std::function<void(const meta::klass&)>& fn)
    {
        on_process_ = fn;
    }

    void generator::process()
    {
        initialize();

        for (const auto& klass : klasses)
        {
            on_process_(*klass);
            if (!klasses_.empty() && std::find(klasses_.begin(), klasses_.end(), klass->name()) == klasses_.end()) continue;
            make_klass(*klass);
        }
    }

    void generator::make_klass(const meta::klass& klass)
    {
        if (klass.is_native())
        {
            spdlog::warn("Ignore native type {}", klass.name());
            return;
        }

        spdlog::info("Generate cpp {} @ {}", klass.name(), klass.path());

        if (!fs::exists(output_path_ + klass.path())) fs::create_directories(output_path_ + klass.path());
        if (fs::exists(output_path_ + klass.path() + klass.name() + ".hpp"))
        {
            spdlog::warn("Ignore existing file {}", klass.path() + klass.name() + ".hpp");
            return;
        }

        std::ofstream ofs(output_path_ + klass.path() + klass.name() + ".hpp");
        if (!ofs.is_open()) throw std::logic_error("Unable to open file : " + output_path_ + klass.path() + klass.name() + ".hpp");

        std::stringstream out;
        // info
        ofs << "/* " << klass.type().info() << " */\n\n";

        // headers
        ofs << "#pragma once\n";
        ofs << "#include <ark/class.hpp>\n";

        // class dependencies
        std::stringstream klass_deps = make_deps(klass);
        ofs << klass_deps.str() << "\n\n";

        // namespace
        ofs << "namespace " << klass.namespaze() << "\n{\n";

        // generic declaration
        if (klass.is_generic())
        {
            ofs << indent(1) << "template<class... Ts>\n";
        }

        std::stringstream klass_fields = make_fields(klass);
        std::stringstream klass_methods = make_methods(klass);

        // class declaration
        std::string klass_type = "struct alignas(4) ";
        if (klass.is_enum()) klass_type = "enum class";
        ofs << klass_type << " " << klass.name() << "\n";
        ofs << "{" << "\n";
        ofs << klass_fields.str();
        ofs << "\n\n";
        ofs << klass_methods.str();
        ofs << "};\n";
        ofs << indent(0) << "} // " << klass.namespaze();
        ofs << "\n\n";

        // rva
        ofs << "namespace ark::method_info\n{\n";
        for (const auto& method : klass.methods())
        {
            ofs << indent(1) << "template<> inline uintptr_t rva<&" << klass.ns_name() << "::" << method.name() << ">() "
                << "{ return " << "0x" << std::hex << meta::klass::rva(method.address()) << "; }\n";
        }
        ofs << "} // ark::method_info";
    }

    void generator::filter_image(const std::string& name)
    {
        images_.emplace_back(name);
    }
    void generator::filter_klass(const std::string& name)
    {
        klasses_.emplace_back(name);
    }

    std::string generator::indent(int n)
    {
        std::string result;
        while (n--)
        {
            result += "    ";
        };
        return result;
    }

    std::stringstream generator::make_deps(const klass& klass)
    {
        std::stringstream klass_deps;

        for (const auto& type : klass.forwards())
        {
            if (!type.is_klass()) continue;
            klass_deps << "namespace " << type.namespaze() << " { ";
            klass_deps << "struct " << type.name() << "; }";
            klass_deps << "\n";
        }
        return klass_deps;
    }

    std::stringstream generator::make_fields(const klass& klass)
    {
        std::stringstream klass_fields;

        int i = 0;
        for (const auto& field : klass.fields())
        {
            klass_fields << indent(1);
            // enum
            if (klass.is_enum())
            {
                std::string comma;
                if (i > 0) comma = ", ";
                klass_fields << comma << field.name() << "\n";
            }
            // class
            else
            {
                // attributes
                if (field.has_attribute(il2cpp::FIELD_ATTRIBUTE_STATIC)) klass_fields << "static ";
                if (field.has_attribute(il2cpp::FIELD_ATTRIBUTE_LITERAL)) klass_fields << "constexpr ";
                klass_fields << field.type().ns_name() << " " << field.name();
                if (!field.value().empty()) klass_fields << " = " << field.value();
                klass_fields << ";";
            }
            klass_fields << " // 0x" << std::hex << field.offset();
            klass_fields << "\n";
            ++i;
        }
        return klass_fields;
    }

    std::stringstream generator::make_methods(const klass& klass)
    {
        std::stringstream klass_methods;

        for (const auto& method : klass.methods())
        {
            klass_methods << indent(2);

            klass_methods << method.return_type().name() << " ";
            klass_methods << method.name() << "(";

            for (const auto& parameter : method.parameters())
            {
                if (parameter.index() != 0) klass_methods << ", ";
                klass_methods << parameter.type_name() << " " << parameter.name();
            }

            klass_methods << ");" << " // 0x" << std::hex << meta::klass::rva(method.address());
            klass_methods << "\n";
        }
        /*
        void* method_it = nullptr;
        for (auto i = 0; i < ptr->_2.method_count; ++i)
        {
            auto method = api::class_get_methods(ptr, &method_it);

            if (method->flags & il2cpp::METHOD_ATTRIBUTE_VIRTUAL) continue;

            std::string method_name = clean_name(method->name);
            str_replace(method_name, ".", ""); // .ctor
            std::string return_type = type_namespace(method->return_type) + "::" + type_name(method->return_type);
            add_dep(method->return_type, true);

            methods << indent(2) << return_type << " ";
            methods << method_name << "(";
            // params
            std::string param_types;
            std::string param_names;
            for (int param_index = 0; param_index < method->parameters_count; ++param_index)
            {
                std::string param_name = clean_name(api::method_get_param_name(method, param_index));

                if (param_index != 0) { methods << ", "; }
                add_dep(method->parameters->parameter_type);
                methods << namespace_path(type_name_str(api::method_get_param(method, param_index)), "::") << " ";
                methods << param_name;
                param_types += ", " + namespace_path(type_name_str(api::method_get_param(method, param_index)), "::");
                param_names += ", " + param_name;
            }
            methods << ") { ";
            methods << "return il2cpp::call<" << return_type << "(*)(" << name << "*" << param_types << ")>(0x" << std::hex << rva(method->methodPointer) << ")(this" << param_names << ");";
            methods << " } // 0x" << std::hex << rva(method->methodPointer);
            methods << "\n";
        }
         */

        return klass_methods;
    }
}