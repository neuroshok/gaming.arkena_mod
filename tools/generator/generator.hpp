#pragma once

#include <il2cpp/core.hpp>
#include <functional>
#include <string>

class generator
{
public:
    generator();

    void process(const std::function<void(const il2cpp::Il2CppClass*)>& fn);

    void make_cpp(const il2cpp::Il2CppClass* klass);
    void make_sources();

private:
    std::string indent(unsigned int n) const;
    std::string namespace_path(std::string namespaze, const std::string& separator) const;
    std::string class_path(std::string class_name) const;

    il2cpp::Il2CppAssembly** assemblies_ = nullptr;
    size_t assembly_count_ = 0;
    std::string output_path_;

    std::vector<const il2cpp::Il2CppClass*> klasses_;
};
