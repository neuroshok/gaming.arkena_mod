#pragma once

#include <autogen/Unity/Component.hpp>

namespace Unity
{

    struct Behaviour : ark::meta<Unity::Behaviour, Unity::Component>
    {
        ark_meta("", "Unity::Behaviour", "");

        bool get_enabled() { return method_call(get_enabled); }                       // 0xC000D0
        void set_enabled(bool value) { return method_call(set_enabled, value); }        // 0xC00130
        bool get_isActiveAndEnabled() { return method_call(get_isActiveAndEnabled); } // 0xC00100
        void _ctor() { return method_call(_ctor); }                                   // 0xC00080
    };
}

namespace ark::method_info
{

	method_rva(Unity::Behaviour::get_enabled, 0xC000D0)
	method_rva(Unity::Behaviour::set_enabled, 0xC00130)
	method_rva(Unity::Behaviour::get_isActiveAndEnabled, 0xC00100)
	method_rva(Unity::Behaviour::_ctor, 0xC00080)
}