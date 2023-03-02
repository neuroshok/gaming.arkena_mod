#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/UnityEngine/Object.hpp>
#include <cs/string.hpp>
#include <cs/string.hpp>

namespace UnityEngine::Events
{
    struct ArgumentCache : ark::meta<ArgumentCache, il2cpp::Il2CppObject>
    {
        UnityEngine::Object* m_ObjectArgument; // 0x8
        cs::string* m_ObjectArgumentAssemblyTypeName; // 0xc
        int32_t m_IntArgument; // 0x10
        float m_FloatArgument; // 0x14
        cs::string* m_StringArgument; // 0x18
        bool m_BoolArgument; // 0x1c

        UnityEngine::Object* get_unityObjectArgument() { return il2cpp::call<UnityEngine::Object*(*)(ArgumentCache*)>(0x2c5110)(this); } // 0x2c5110
        cs::string* get_unityObjectArgumentAssemblyTypeName() { return il2cpp::call<cs::string*(*)(ArgumentCache*)>(0x2c50f0)(this); } // 0x2c50f0
        int32_t get_intArgument() { return il2cpp::call<int32_t(*)(ArgumentCache*)>(0x2b40b0)(this); } // 0x2b40b0
        float get_floatArgument() { return il2cpp::call<float(*)(ArgumentCache*)>(0x2c4c80)(this); } // 0x2c4c80
        cs::string* get_stringArgument() { return il2cpp::call<cs::string*(*)(ArgumentCache*)>(0x2c8c80)(this); } // 0x2c8c80
        bool get_boolArgument() { return il2cpp::call<bool(*)(ArgumentCache*)>(0x2cb230)(this); } // 0x2cb230
        void ctor() { return il2cpp::call<void(*)(ArgumentCache*)>(0x2c4c60)(this); } // 0x2c4c60

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::ArgumentCache> {
        };

}

