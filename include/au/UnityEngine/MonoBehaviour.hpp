#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Behaviour.hpp>
#include <cs/string.hpp>
#include <au/System/Collections/IEnumerator.hpp>
#include <au/UnityEngine/Coroutine.hpp>
#include <il2cpp/core.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
#include <au/UnityEngine/Object.hpp>
#include <cs/string.hpp>
#include <au/System/Collections/IEnumerator.hpp>

namespace UnityEngine
{
    struct MonoBehaviour : ark::meta<MonoBehaviour, UnityEngine::Behaviour>
    {

        bool IsInvoking() { return il2cpp::call<bool(*)(MonoBehaviour*)>(0x139d2d0)(this); } // 0x139d2d0
        void CancelInvoke() { return il2cpp::call<void(*)(MonoBehaviour*)>(0x139d270)(this); } // 0x139d270
        void Invoke(cs::string* methodName, float time) { return il2cpp::call<void(*)(MonoBehaviour*, cs::string*, float)>(0x139d400)(this, methodName, time); } // 0x139d400
        void InvokeRepeating(cs::string* methodName, float time, float repeatRate) { return il2cpp::call<void(*)(MonoBehaviour*, cs::string*, float, float)>(0x139d350)(this, methodName, time, repeatRate); } // 0x139d350
        void CancelInvoke(cs::string* methodName) { return il2cpp::call<void(*)(MonoBehaviour*, cs::string*)>(0x139d240)(this, methodName); } // 0x139d240
        bool IsInvoking(cs::string* methodName) { return il2cpp::call<bool(*)(MonoBehaviour*, cs::string*)>(0x139d440)(this, methodName); } // 0x139d440
        UnityEngine::Coroutine* StartCoroutine(cs::string* methodName) { return il2cpp::call<UnityEngine::Coroutine*(*)(MonoBehaviour*, cs::string*)>(0x139d5e0)(this, methodName); } // 0x139d5e0
        UnityEngine::Coroutine* StartCoroutine(cs::string* methodName, il2cpp::Il2CppObject* value) { return il2cpp::call<UnityEngine::Coroutine*(*)(MonoBehaviour*, cs::string*, il2cpp::Il2CppObject*)>(0x139d6d0)(this, methodName, value); } // 0x139d6d0
        UnityEngine::Coroutine* StartCoroutine(System::Collections::IEnumerator* routine) { return il2cpp::call<UnityEngine::Coroutine*(*)(MonoBehaviour*, System::Collections::IEnumerator*)>(0x139d500)(this, routine); } // 0x139d500
        UnityEngine::Coroutine* StartCoroutine_Auto(System::Collections::IEnumerator* routine) { return il2cpp::call<UnityEngine::Coroutine*(*)(MonoBehaviour*, System::Collections::IEnumerator*)>(0x139d500)(this, routine); } // 0x139d500
        void StopCoroutine(System::Collections::IEnumerator* routine) { return il2cpp::call<void(*)(MonoBehaviour*, System::Collections::IEnumerator*)>(0x139d850)(this, routine); } // 0x139d850
        void StopCoroutine(UnityEngine::Coroutine* routine) { return il2cpp::call<void(*)(MonoBehaviour*, UnityEngine::Coroutine*)>(0x139d960)(this, routine); } // 0x139d960
        void StopCoroutine(cs::string* methodName) { return il2cpp::call<void(*)(MonoBehaviour*, cs::string*)>(0x139d930)(this, methodName); } // 0x139d930
        void StopAllCoroutines() { return il2cpp::call<void(*)(MonoBehaviour*)>(0x139d7c0)(this); } // 0x139d7c0
        bool get_useGUILayout() { return il2cpp::call<bool(*)(MonoBehaviour*)>(0x139da40)(this); } // 0x139da40
        void set_useGUILayout(bool value) { return il2cpp::call<void(*)(MonoBehaviour*, bool)>(0x139dac0)(this, value); } // 0x139dac0
        void print(il2cpp::Il2CppObject* message) { return il2cpp::call<void(*)(MonoBehaviour*, il2cpp::Il2CppObject*)>(0x139da70)(this, message); } // 0x139da70
        void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self) { return il2cpp::call<void(*)(MonoBehaviour*, UnityEngine::MonoBehaviour*)>(0x139d270)(this, self); } // 0x139d270
        bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self) { return il2cpp::call<bool(*)(MonoBehaviour*, UnityEngine::MonoBehaviour*)>(0x139d2d0)(this, self); } // 0x139d2d0
        void InvokeDelayed(UnityEngine::MonoBehaviour* self, cs::string* methodName, float time, float repeatRate) { return il2cpp::call<void(*)(MonoBehaviour*, UnityEngine::MonoBehaviour*, cs::string*, float, float)>(0x139d300)(this, self, methodName, time, repeatRate); } // 0x139d300
        void CancelInvoke(UnityEngine::MonoBehaviour* self, cs::string* methodName) { return il2cpp::call<void(*)(MonoBehaviour*, UnityEngine::MonoBehaviour*, cs::string*)>(0x139d240)(this, self, methodName); } // 0x139d240
        bool IsInvoking(UnityEngine::MonoBehaviour* self, cs::string* methodName) { return il2cpp::call<bool(*)(MonoBehaviour*, UnityEngine::MonoBehaviour*, cs::string*)>(0x139d440)(this, self, methodName); } // 0x139d440
        bool IsObjectMonoBehaviour(UnityEngine::Object* obj) { return il2cpp::call<bool(*)(MonoBehaviour*, UnityEngine::Object*)>(0x139d470)(this, obj); } // 0x139d470
        UnityEngine::Coroutine* StartCoroutineManaged(cs::string* methodName, il2cpp::Il2CppObject* value) { return il2cpp::call<UnityEngine::Coroutine*(*)(MonoBehaviour*, cs::string*, il2cpp::Il2CppObject*)>(0x139d4d0)(this, methodName, value); } // 0x139d4d0
        UnityEngine::Coroutine* StartCoroutineManaged2(System::Collections::IEnumerator* enumerator) { return il2cpp::call<UnityEngine::Coroutine*(*)(MonoBehaviour*, System::Collections::IEnumerator*)>(0x139d4a0)(this, enumerator); } // 0x139d4a0
        void StopCoroutineManaged(UnityEngine::Coroutine* routine) { return il2cpp::call<void(*)(MonoBehaviour*, UnityEngine::Coroutine*)>(0x139d820)(this, routine); } // 0x139d820
        void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine) { return il2cpp::call<void(*)(MonoBehaviour*, System::Collections::IEnumerator*)>(0x139d7f0)(this, routine); } // 0x139d7f0
        cs::string* GetScriptClassName() { return il2cpp::call<cs::string*(*)(MonoBehaviour*)>(0x139d2a0)(this); } // 0x139d2a0
        void ctor() { return il2cpp::call<void(*)(MonoBehaviour*)>(0xee3f90)(this); } // 0xee3f90

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::MonoBehaviour> {
        };

}

