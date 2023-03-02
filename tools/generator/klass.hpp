#ifndef TOOLS_GENERATOR_KLASS_HPP_ARKENA_MOD
#define TOOLS_GENERATOR_KLASS_HPP_ARKENA_MOD

#include <il2cpp/api.hpp>

class klass
{
public:
    klass(const il2cpp::Il2CppClass* k);

    std::string info();

    static std::string flags_info(int);

private:
    const il2cpp::Il2CppClass* klass_;
};

#endif // TOOLS_GENERATOR_KLASS_HPP_ARKENA_MOD