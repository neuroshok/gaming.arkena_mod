#pragma once

#include <il2cpp/core.hpp>
#include <functional>
#include <string>

using namespace il2cpp;

class generator
{
public:
    generator();

    void process(const std::function<void(const il2cpp::Il2CppClass*)>& fn);

    bool make_cpp(const il2cpp::Il2CppClass* klass);
    void make_sources();

private:
    il2cpp::Il2CppAssembly** assemblies_ = nullptr;
    size_t assembly_count_ = 0;
    std::string output_path_;

    std::vector<const il2cpp::Il2CppClass*> klasses_;
};
