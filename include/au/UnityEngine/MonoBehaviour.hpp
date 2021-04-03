//au/UnityEngine/MonoBehaviour
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Behaviour.hpp>
#include <cs/string.hpp>
namespace UnityEngine{ struct Coroutine; }
struct object;
namespace System::Collections{ struct IEnumerator; }
namespace UnityEngine{ struct Object; }


namespace UnityEngine {
struct MonoBehaviour : ark::meta<MonoBehaviour, UnityEngine::Behaviour>
{
ark_meta("UnityEngine", "MonoBehaviour", "");

    // Methods

    bool IsInvoking(); // 0x67F260 // public 
    void CancelInvoke(); // 0x67F200 // public 
    void Invoke(cs::string* methodName, float time); // 0x67F390 // public 
    void InvokeRepeating(cs::string* methodName, float time, float repeatRate); // 0x67F2E0 // public 
    void CancelInvoke1(cs::string* methodName); // 0x67F1D0 // public 
    bool IsInvoking1(cs::string* methodName); // 0x67F3D0 // public 
    UnityEngine::Coroutine* StartCoroutine(cs::string* methodName); // 0x67F570 // public 
    UnityEngine::Coroutine* StartCoroutine1(cs::string* methodName, MonoBehaviour* value); // 0x67F660 // public 
    UnityEngine::Coroutine* StartCoroutine2(System::Collections::IEnumerator* routine); // 0x67F490 // public 
    UnityEngine::Coroutine* StartCoroutine_Auto(System::Collections::IEnumerator* routine); // 0x67F490 // public 
    void StopCoroutine(System::Collections::IEnumerator* routine); // 0x67F7E0 // public 
    void StopCoroutine1(UnityEngine::Coroutine* routine); // 0x67F8F0 // public 
    void StopCoroutine2(cs::string* methodName); // 0x67F8C0 // public 
    void StopAllCoroutines(); // 0x67F750 // public 
    bool get_useGUILayout(); // 0x67F9D0 // public 
    void set_useGUILayout(bool value); // 0x67FA50 // public 
    void print(MonoBehaviour* message); // 0x67FA00 // public static 
    void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self); // 0x67F200 // private static 
    bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self); // 0x67F260 // private static 
    void InvokeDelayed(UnityEngine::MonoBehaviour* self, cs::string* methodName, float time, float repeatRate); // 0x67F290 // private static 
    void CancelInvoke2(UnityEngine::MonoBehaviour* self, cs::string* methodName); // 0x67F1D0 // private static 
    bool IsInvoking2(UnityEngine::MonoBehaviour* self, cs::string* methodName); // 0x67F3D0 // private static 
    bool IsObjectMonoBehaviour(UnityEngine::Object* obj); // 0x67F400 // private static 
    UnityEngine::Coroutine* StartCoroutineManaged(cs::string* methodName, MonoBehaviour* value); // 0x67F460 // private 
    UnityEngine::Coroutine* StartCoroutineManaged2(System::Collections::IEnumerator* enumerator); // 0x67F430 // private 
    void StopCoroutineManaged(UnityEngine::Coroutine* routine); // 0x67F7B0 // private 
    void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine); // 0x67F780 // private 
    cs::string* GetScriptClassName(); // 0x67F230 // internal 
    void ctor(); // 0x678390 // public 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::MonoBehaviour>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::IsInvoking> () { return 0x67F260; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::CancelInvoke> () { return 0x67F200; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::Invoke> () { return 0x67F390; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::InvokeRepeating> () { return 0x67F2E0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::CancelInvoke1> () { return 0x67F1D0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::IsInvoking1> () { return 0x67F3D0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StartCoroutine> () { return 0x67F570; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StartCoroutine1> () { return 0x67F660; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StartCoroutine2> () { return 0x67F490; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StartCoroutine_Auto> () { return 0x67F490; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StopCoroutine> () { return 0x67F7E0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StopCoroutine1> () { return 0x67F8F0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StopCoroutine2> () { return 0x67F8C0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StopAllCoroutines> () { return 0x67F750; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::get_useGUILayout> () { return 0x67F9D0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::set_useGUILayout> () { return 0x67FA50; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::print> () { return 0x67FA00; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::Internal_CancelInvokeAll> () { return 0x67F200; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::Internal_IsInvokingAll> () { return 0x67F260; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::InvokeDelayed> () { return 0x67F290; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::CancelInvoke2> () { return 0x67F1D0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::IsInvoking2> () { return 0x67F3D0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::IsObjectMonoBehaviour> () { return 0x67F400; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StartCoroutineManaged> () { return 0x67F460; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StartCoroutineManaged2> () { return 0x67F430; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StopCoroutineManaged> () { return 0x67F7B0; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::StopCoroutineFromEnumeratorManaged> () { return 0x67F780; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::GetScriptClassName> () { return 0x67F230; }
    template<> inline uintptr_t rva<&UnityEngine::MonoBehaviour::ctor> () { return 0x678390; }
} // ark::method_info