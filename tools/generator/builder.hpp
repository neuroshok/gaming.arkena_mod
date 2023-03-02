#pragma once

#include <il2cpp/core.hpp>

#include "generator.hpp"
#include <set>
#include <sstream>
#include <string>

using namespace il2cpp;

struct builder
{
    builder(const Il2CppClass* klass);

    void make();

    void add_dep(const Il2CppType*, bool fwd = false);

    std::string type_name_str(const il2cpp::Il2CppType* type, bool pointer = true, bool generic = false);
    std::string make_namespace();

    //

    static std::string indent(unsigned int n);
    static std::string namespace_path(std::string namespaze, const std::string& separator);
    static std::string clean_type(std::string name);
    static std::string clean_name(std::string name);
    static std::string class_name(const il2cpp::Il2CppType* type);
    static std::string class_path(std::string class_name);
    static uintptr_t rva(il2cpp::Il2CppMethodPointer);

    static bool is_nested_type(const il2cpp::Il2CppType*);

    //
    static std::string type_namespace(const Il2CppType*);
    static std::string type_name(const Il2CppType*);


    static std::string parse_identifier(const std::string& input);

    //

    const Il2CppClass* ptr;
    const Il2CppType* type;
    int type_id;
    inline static auto cmp = [](auto a, auto b) { return std::string(api::type_get_name(a)) != api::type_get_name(b); };
    std::set<const il2cpp::Il2CppType*, decltype(cmp)> deps; // type dependency
    std::set<const il2cpp::Il2CppType*, decltype(cmp)> fwds; // fwd

    std::string assembly_name;
    bool is_nested;
    bool is_generic;
    std::string name;
    std::string namespaze;
    std::string path;
    std::string fullname;
    std::string generic_name;
    std::string generic_fullname;
    std::string filename;


    std::stringstream fields;
    std::stringstream meta_statics;
    std::stringstream statics_decl;
    std::stringstream statics_def;
    std::stringstream literals;

    std::stringstream output;
    std::stringstream nested_output;
};