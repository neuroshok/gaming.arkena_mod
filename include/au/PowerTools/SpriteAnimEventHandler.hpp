#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>
#include <cs/string.hpp>
#include <il2cpp/core.hpp>
#include <au/UnityEngine/Object.hpp>

namespace PowerTools
{
    struct SpriteAnimEventHandler : ark::meta<SpriteAnimEventHandler, UnityEngine::MonoBehaviour>
    {
        cs::string* m_eventWithObjectMessage; // 0xc
        il2cpp::Il2CppObject* m_eventWithObjectData; // 0x10

        void _Anim(cs::string* function) { return il2cpp::call<void(*)(SpriteAnimEventHandler*, cs::string*)>(0x6ca9b0)(this, function); } // 0x6ca9b0
        void _AnimInt(cs::string* messageString) { return il2cpp::call<void(*)(SpriteAnimEventHandler*, cs::string*)>(0x6ca790)(this, messageString); } // 0x6ca790
        void _AnimFloat(cs::string* messageString) { return il2cpp::call<void(*)(SpriteAnimEventHandler*, cs::string*)>(0x6ca700)(this, messageString); } // 0x6ca700
        void _AnimString(cs::string* messageString) { return il2cpp::call<void(*)(SpriteAnimEventHandler*, cs::string*)>(0x6ca950)(this, messageString); } // 0x6ca950
        void _AnimObjectFunc(cs::string* funcName) { return il2cpp::call<void(*)(SpriteAnimEventHandler*, cs::string*)>(0x6ca8b0)(this, funcName); } // 0x6ca8b0
        void _AnimObjectData(UnityEngine::Object* data) { return il2cpp::call<void(*)(SpriteAnimEventHandler*, UnityEngine::Object*)>(0x6ca810)(this, data); } // 0x6ca810
        void ctor() { return il2cpp::call<void(*)(SpriteAnimEventHandler*)>(0x310ec0)(this); } // 0x310ec0

    };

}
namespace ark {

        template<> struct meta_statics<PowerTools::SpriteAnimEventHandler> {
        };

}

