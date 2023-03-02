#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/System/Type.hpp>
#include <au/UnityEngine/ScriptableObject.hpp>

namespace UnityEngine
{
    struct ScriptableObject : ark::meta<ScriptableObject, UnityEngine::Object>
    {

        void ctor() { return il2cpp::call<void(*)(ScriptableObject*)>(0xee6720)(this); } // 0xee6720
        UnityEngine::ScriptableObject* CreateInstance(System::Type* type) { return il2cpp::call<UnityEngine::ScriptableObject*(*)(ScriptableObject*, System::Type*)>(0xee6690)(this, type); } // 0xee6690
        Typeid_30 CreateInstance() { return il2cpp::call<Typeid_30(*)(ScriptableObject*)>(0xa4ae0000)(this); } // 0xa4ae0000
        void CreateScriptableObject(UnityEngine::ScriptableObject* self) { return il2cpp::call<void(*)(ScriptableObject*, UnityEngine::ScriptableObject*)>(0xee66f0)(this, self); } // 0xee66f0
        UnityEngine::ScriptableObject* CreateScriptableObjectInstanceFromType(System::Type* type, bool applyDefaultsAndReset) { return il2cpp::call<UnityEngine::ScriptableObject*(*)(ScriptableObject*, System::Type*, bool)>(0xee66c0)(this, type, applyDefaultsAndReset); } // 0xee66c0

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::ScriptableObject> {
        };

}

