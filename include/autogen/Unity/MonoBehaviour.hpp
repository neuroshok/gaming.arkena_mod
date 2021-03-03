#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/Behaviour.hpp>

namespace Unity
{
    struct MonoBehaviour : ark::meta<MonoBehaviour, Behaviour>
    {
        ark_meta("", "MonoBehaviour", "");

        bool get_useGUILayout() { return method_call(get_useGUILayout); }                  // 0xC0C9F0
        void set_useGUILayout(bool value) { return method_call(set_useGUILayout, value); } // 0xC0CB10
        struct string* GetScriptClassName() { return method_call(GetScriptClassName); }    // 0xC0C2A0
    };

} // namespace Unity

namespace ark::method_info
{

	method_rva(Unity::MonoBehaviour::get_useGUILayout, 0xC0C9F0)
	method_rva(Unity::MonoBehaviour::set_useGUILayout, 0xC0CB10)

	method_rva(Unity::MonoBehaviour::GetScriptClassName, 0xC0C2A0)
}