#include <au/UnityEngine/MonoBehaviour.hpp>

namespace UnityEngine {

    // Methods

    bool MonoBehaviour::IsInvoking() { return method_call(IsInvoking); }  // 0x67F260 // 
    void MonoBehaviour::CancelInvoke() { return method_call(CancelInvoke); }  // 0x67F200 // 
    void MonoBehaviour::Invoke(cs::string* methodName, float time) { return method_call(Invoke, methodName, time); }  // 0x67F390 // 
    void MonoBehaviour::InvokeRepeating(cs::string* methodName, float time, float repeatRate) { return method_call(InvokeRepeating, methodName, time, repeatRate); }  // 0x67F2E0 // 
    void MonoBehaviour::CancelInvoke1(cs::string* methodName) { return method_call(CancelInvoke1, methodName); }  // 0x67F1D0 // 
    bool MonoBehaviour::IsInvoking1(cs::string* methodName) { return method_call(IsInvoking1, methodName); }  // 0x67F3D0 // 
    UnityEngine::Coroutine* MonoBehaviour::StartCoroutine(cs::string* methodName) { return method_call(StartCoroutine, methodName); }  // 0x67F570 // 
    UnityEngine::Coroutine* MonoBehaviour::StartCoroutine1(cs::string* methodName, MonoBehaviour* value) { return method_call(StartCoroutine1, methodName, value); }  // 0x67F660 // 
    UnityEngine::Coroutine* MonoBehaviour::StartCoroutine2(System::Collections::IEnumerator* routine) { return method_call(StartCoroutine2, routine); }  // 0x67F490 // 
    UnityEngine::Coroutine* MonoBehaviour::StartCoroutine_Auto(System::Collections::IEnumerator* routine) { return method_call(StartCoroutine_Auto, routine); }  // 0x67F490 // 
    void MonoBehaviour::StopCoroutine(System::Collections::IEnumerator* routine) { return method_call(StopCoroutine, routine); }  // 0x67F7E0 // 
    void MonoBehaviour::StopCoroutine1(UnityEngine::Coroutine* routine) { return method_call(StopCoroutine1, routine); }  // 0x67F8F0 // 
    void MonoBehaviour::StopCoroutine2(cs::string* methodName) { return method_call(StopCoroutine2, methodName); }  // 0x67F8C0 // 
    void MonoBehaviour::StopAllCoroutines() { return method_call(StopAllCoroutines); }  // 0x67F750 // 
    bool MonoBehaviour::get_useGUILayout() { return method_call(get_useGUILayout); }  // 0x67F9D0 // 
    void MonoBehaviour::set_useGUILayout(bool value) { return method_call(set_useGUILayout, value); }  // 0x67FA50 // 
    void MonoBehaviour::print(MonoBehaviour* message) { return method_call(print, message); }  // 0x67FA00 // 
    void MonoBehaviour::Internal_CancelInvokeAll(UnityEngine::MonoBehaviour* self) { return method_call(Internal_CancelInvokeAll, self); }  // 0x67F200 // 
    bool MonoBehaviour::Internal_IsInvokingAll(UnityEngine::MonoBehaviour* self) { return method_call(Internal_IsInvokingAll, self); }  // 0x67F260 // 
    void MonoBehaviour::InvokeDelayed(UnityEngine::MonoBehaviour* self, cs::string* methodName, float time, float repeatRate) { return method_call(InvokeDelayed, self, methodName, time, repeatRate); }  // 0x67F290 // 
    void MonoBehaviour::CancelInvoke2(UnityEngine::MonoBehaviour* self, cs::string* methodName) { return method_call(CancelInvoke2, self, methodName); }  // 0x67F1D0 // 
    bool MonoBehaviour::IsInvoking2(UnityEngine::MonoBehaviour* self, cs::string* methodName) { return method_call(IsInvoking2, self, methodName); }  // 0x67F3D0 // 
    bool MonoBehaviour::IsObjectMonoBehaviour(UnityEngine::Object* obj) { return method_call(IsObjectMonoBehaviour, obj); }  // 0x67F400 // 
    UnityEngine::Coroutine* MonoBehaviour::StartCoroutineManaged(cs::string* methodName, MonoBehaviour* value) { return method_call(StartCoroutineManaged, methodName, value); }  // 0x67F460 // 
    UnityEngine::Coroutine* MonoBehaviour::StartCoroutineManaged2(System::Collections::IEnumerator* enumerator) { return method_call(StartCoroutineManaged2, enumerator); }  // 0x67F430 // 
    void MonoBehaviour::StopCoroutineManaged(UnityEngine::Coroutine* routine) { return method_call(StopCoroutineManaged, routine); }  // 0x67F7B0 // 
    void MonoBehaviour::StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator* routine) { return method_call(StopCoroutineFromEnumeratorManaged, routine); }  // 0x67F780 // 
    cs::string* MonoBehaviour::GetScriptClassName() { return method_call(GetScriptClassName); }  // 0x67F230 // 
    void MonoBehaviour::ctor() { return method_call(ctor); }  // 0x678390 // 

};

