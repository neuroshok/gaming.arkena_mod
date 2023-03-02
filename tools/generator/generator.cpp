#include "generator.hpp"

#include "builder.hpp"
#include "filter.hpp"
#include "maps.hpp"

#include <filesystem>
#include <fstream>

#include <il2cpp/api.hpp>
#include <sstream>

namespace fs = std::filesystem;

generator::generator(std::string input_path)
    : input_path_{ std::move(input_path) }
    , output_path_{ "au/" }
{
    SetDllDirectory(input_path_.c_str());
    auto handle = LoadLibrary("GameAssembly.dll");
    if (!handle) spdlog::error("Unable to load library");

    api::inititialize();

    spdlog::info("Initialize api");
    api::init("GameAssembly");

    auto dom = api::domain_get();
    assemblies_ = (il2cpp::Il2CppAssembly**)api::domain_get_assemblies(dom, &assembly_count_);


    for (auto it = assemblies_; it != assemblies_ + assembly_count_; ++it)
    {
        auto image = api::assembly_get_image(*it);
        if (!image)
        {
            spdlog::error("null assembly..");
            continue;
        }

        auto image_name = api::image_get_name(image);
        auto class_count = api::image_get_class_count(image);
        spdlog::info("Load image {} Classes : {}", image_name, class_count);

        for (int i = 0; i < class_count; ++i)
        {
            auto klass = api::image_get_class(image, i);
            klasses_.emplace_back(klass);
        }
    }
}

void generator::process(const std::function<void(const Il2CppClass*)>& fn)
{
    for (const auto& klass : klasses_)
    {
        fn(klass);
    }
}

bool generator::make_cpp(const Il2CppClass* k)
{
    builder klass{ k };

    spdlog::info("Generate cpp {} @ {} | {}", klass.name, klass.path, klass.assembly_name);

    if (!fs::exists(output_path_ + klass.path)) fs::create_directories(output_path_ + klass.path);
    if (fs::exists(output_path_ + klass.path + klass.filename + ".hpp"))
    {
        //spdlog::warn("Ignore existing file {}", klass.path + klass.assembly_name + ".hpp");
        return false;
    }

    std::ofstream ofs(output_path_ + klass.path + klass.filename + ".hpp");
    if (!ofs.is_open()) throw std::logic_error("Unable to open file : " + output_path_ + klass.path + klass.filename + ".hpp");

    for (int i = 0; i < klass.ptr->_2.nested_type_count; ++i)
    {
        Il2CppClass** nested_classes = (klass.ptr->_1.nestedTypes + i);
        builder nested_class { reinterpret_cast<const il2cpp::Il2CppClass*>(*nested_classes) };
        nested_class.make();
        klass.nested_output << nested_class.output.str();
    }

    klass.make();

    std::stringstream includes;

////////////////////////////////////////////////////////////////////////////////
////////////////////////              DEPS              ////////////////////////
////////////////////////////////////////////////////////////////////////////////

    for (const auto& type : klass.deps)
    {
        auto type_id = il2cpp::api::type_get_type(type);
        switch (type_id)
        {
            case il2cpp::TYPE_CLASS: {
                make_cpp(api::class_from_type(type));
                //includes << "#include <au/" << builder::namespace_path(api::type_get_name(type), "/") << ".hpp> // FWD\n";
                includes << "namespace " << builder::type_namespace(type) << "{ struct " << builder::type_name(type) << "; }\n";
                break;
            }
            case il2cpp::TYPE_STRING: {
                includes << "#include <cs/string.hpp>\n";
                break;
            }

            case il2cpp::TYPE_SZARRAY: {
                includes << "#include <cs/array.hpp>\n";
                break;
            }
            case il2cpp::TYPE_OBJECT: {
                includes << "#include <il2cpp/core.hpp>\n";
                break;
            }
            case il2cpp::TYPE_GENERICINST: {
                std::string base_type = api::type_get_name(type);
                auto s = base_type.find('<');
                base_type = base_type.substr(0, s);


                make_cpp(api::class_from_type(type));
                //includes << "#include <au/" << builder::namespace_path(base_type, "/") << ".hpp> // FWD\n";
                includes << "namespace " << builder::type_namespace(type) << "{ struct template<class...> " << builder::type_name(type) << "; }\n";
                break;
            }
            case il2cpp::TYPE_VALUETYPE: {
                make_cpp(api::class_from_type(type));
                includes << "#include <au/" << builder::namespace_path(api::type_get_name(type), "/") << ".hpp>\n";
            }

            default: {
                //make_cpp(api::class_from_type(type));
                //includes << "#include <au/default.hpp>\n";
            }
        }
    }


    ofs << "#pragma once\n";
    ofs << "#include <ark/class.hpp>\n\n";
    ofs << includes.str();

    ofs << "\nnamespace " << klass.namespaze << "\n" << "{\n" << builder::indent(1);
    ofs << klass.output.str();
    ofs << "\n}";
    ofs << "\n" << "namespace ark {";
    ofs << "\n" << klass.meta_statics.str();
    ofs << "\n}";
    ofs << "\n\n" << klass.statics_def.str();

    ofs.close();

    return true;
}


void generator::make_sources()
{
    for (const auto& klass : klasses_)
    {
        for (const auto& klass_name : filters::klasses)
        {
            if (klass->_1.name == klass_name) make_cpp(klass);
        }
    }
}