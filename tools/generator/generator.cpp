#include "generator.hpp"

#include "filter.hpp"
#include "maps.hpp"

#include <filesystem>
#include <fstream>
#include <il2cpp/api.hpp>
#include <sstream>
#include <set>

void str_replace(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length(); // In case 'to' contains 'from', like replacing 'x' with 'yx'
    }
}


using namespace il2cpp;
namespace fs = std::filesystem;

generator::generator()
    : output_path_{ "au/" }
{
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

void generator::make_cpp(const Il2CppClass* klass)
{
    auto cmp = [](auto a, auto b) { return std::string(api::type_get_name(a)) != api::type_get_name(b); };
    std::set<const il2cpp::Il2CppType*, decltype(cmp)> types;

    std::string header_root;
    std::string klass_name = klass->_1.name;
    std::string klass_path = output_path_ + namespace_path(klass->_1.namespaze, "/") + "/";
    std::string klass_namespace = namespace_path(klass->_1.namespaze, "::");
    if (klass_namespace.empty()) klass_namespace = "au";

    // class type
    auto class_type = api::class_get_type(klass);
    auto class_type_id = api::type_get_type(class_type);

    // generic
    std::string tpl;
    bool generic = false;
    if (class_type_id == il2cpp::TYPE_GENERICINST)
    {
        generic = true;
        tpl = "template<class T>\n";
        klass_name = klass_name.substr(0, klass_name.find('`'));
    }

    // inheritance
    std::string inherit;
    if (klass->_1.parent)
    {
        auto parent_type = api::class_get_type(klass->_1.parent);
        types.insert(parent_type);
        inherit = std::string(", ") + namespace_path(maps::type_name(parent_type, false), "::");
        make_cpp(klass->_1.parent);
    }

    if (!fs::exists(klass_path)) fs::create_directories(klass_path);
    if (fs::exists(klass_path + klass_name + ".hpp"))
    {
        spdlog::warn("Ignore existing file {}", klass_path + klass_name + ".hpp");
        return;
    }
    spdlog::info("Generate cpp {} @ {}",  klass->_1.name, klass_path);

    std::ofstream ofs(klass_path + klass_name + ".hpp");
    if (!ofs.is_open()) throw std::logic_error("Unable to open file : " + klass_path);

    // fields
    std::stringstream fields;
    std::stringstream statics;
    std::stringstream includes;
    statics << "\n" << indent(2) << "struct internal_statics {";

    void* it = nullptr;
    for (auto i = 0; i < klass->_2.field_count; ++i)
    {
        auto field = api::class_get_fields(klass, &it);
        auto field_type_name = maps::type_name(field->type, true, generic);
        if (std::string(api::type_get_assembly_qualified_name(field->type)) != api::type_get_assembly_qualified_name(api::class_get_type(klass))) types.insert(field->type);

        auto attr = api::type_get_attrs(field->type);
        std::stringstream* output = &fields;
        if (attr & il2cpp::FIELD_ATTRIBUTE_STATIC) output = &statics;

        *output << "\n" << indent(2);
        *output << class_path(field_type_name);
        *output << " " << field->name;
        *output << "; // 0x" << std::hex << field->offset;
    }
    statics << "\n" << indent(2) << "};\n";

    for (const auto& type : types)
    {
        auto type_id = il2cpp::api::type_get_type(type);
        if (type_id == il2cpp::TYPE_CLASS)
        {
            includes << "#include <" << namespace_path(api::type_get_name(type), "/") << ".hpp>\n";
            make_cpp(api::class_from_type(type));
        }
        if (type_id == il2cpp::TYPE_STRING) includes << "#include <cs/string.hpp>\n";
        if (type_id == il2cpp::TYPE_OBJECT) includes << "#include <il2cpp/core.hpp>\n";
        if (type_id == il2cpp::TYPE_GENERICINST)
        {
            std::string base_type = api::type_get_name(type);
            auto s = base_type.find('<');
            base_type = base_type.substr(0, s);


            includes << "#include <" << namespace_path(base_type, "/") << ".hpp>\n";
            make_cpp(api::class_from_type(type));
        }
    }

    ofs << "#pragma once\n";
    ofs << "#include <ark/class.hpp>\n\n";
    ofs << includes.str();
    ofs << "\nnamespace " << klass_namespace << "\n" << "{\n" << indent(1);
    ofs << indent(0) << tpl;
    ofs << indent(0) << "struct " << klass_name << " : ark::meta<" << klass_name << inherit << ">\n" << indent(1) << "{";
    ofs << statics.str();
    ofs << fields.str();

    ofs << "\n" << indent(1) << "};\n";
    ofs << "\n}";

    ofs.close();
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

std::string generator::namespace_path(std::string namespaze, const std::string& separator) const
{
    str_replace(namespaze, ".", separator);
    return namespaze;
}

std::string generator::class_path(std::string class_name) const
{
    str_replace(class_name, ".", "::");
    return class_name;
}

std::string generator::indent(unsigned int n) const
{
    std::string result;
    while (n--)
    {
        result += "    ";
    };
    return result;
}
