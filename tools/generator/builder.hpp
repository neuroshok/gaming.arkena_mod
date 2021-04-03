#pragma once

#include <il2cpp/core.hpp>

#include <set>
#include <string>
#include <sstream>

using namespace il2cpp;

struct builder
{
    builder(const Il2CppClass* klass);

    void make();

    void add_dep(const Il2CppType*);

    std::string type_name(const il2cpp::Il2CppType* type, bool pointer = true, bool generic = false);

    //

    static std::string indent(unsigned int n);
    static std::string namespace_path(std::string namespaze, const std::string& separator);
    static std::string clean_type(std::string name);
    static std::string clean_name(std::string name);
    static std::string class_path(std::string class_name);
    static uintptr_t rva(il2cpp::Il2CppMethodPointer);

    static bool is_nested(const il2cpp::Il2CppType*);

    //

    const Il2CppClass* ptr;
    const Il2CppType* type;
    int type_id;
    inline static auto cmp = [](auto a, auto b) { return std::string(api::type_get_name(a)) != api::type_get_name(b); };
    std::set<const il2cpp::Il2CppType*, decltype(cmp)> deps; // type dependancy

    std::string path;
    std::string namespaze;
    std::string name;
    std::string fullname;
    std::string assembly_name;
    std::string generic_name;
    std::string generic_fullname;
    std::string filename;

    bool is_generic;

    std::stringstream fields;
    std::stringstream meta_statics;
    std::stringstream statics_decl;
    std::stringstream statics_def;
    std::stringstream literals;

    std::stringstream output;
    std::stringstream nested_output;
};