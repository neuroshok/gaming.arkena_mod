#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Events/InvokableCallList.hpp>

namespace UnityEngine::Events
{
    struct PersistentCallGroup : ark::meta<PersistentCallGroup, il2cpp::Il2CppObject>
    {
        System::Collections::Generic::List<UnityEngine::Events::PersistentCall>* m_Calls; // 0x8

        void ctor() { return il2cpp::call<void(*)(PersistentCallGroup*)>(0x139fcc0)(this); } // 0x139fcc0
        int32_t get_Count() { return il2cpp::call<int32_t(*)(PersistentCallGroup*)>(0x139fd20)(this); } // 0x139fd20
        UnityEngine::Events::PersistentCall* GetListener(int32_t index) { return il2cpp::call<UnityEngine::Events::PersistentCall*(*)(PersistentCallGroup*, int32_t)>(0x139fb30)(this, index); } // 0x139fb30
        void Initialize(UnityEngine::Events::InvokableCallList* invokableList, UnityEngine::Events::UnityEventBase* unityEventBase) { return il2cpp::call<void(*)(PersistentCallGroup*, UnityEngine::Events::InvokableCallList*, UnityEngine::Events::UnityEventBase*)>(0x139fb80)(this, invokableList, unityEventBase); } // 0x139fb80

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Events::PersistentCallGroup> {
        };

}

