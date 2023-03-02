#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/MonoBehaviour.hpp>

namespace 
{
    struct SpecialInputHandler : ark::meta<SpecialInputHandler, UnityEngine::MonoBehaviour>
    {
        static int32_t count(); // 0x0
        static int32_t disableVirtualCursorCount(); // 0x4
        static int32_t suppressInGamePlayerListCount(); // 0x8
        bool _disableVirtualCursor; // 0xc
        bool _suppressInGamePlayerList; // 0xd

        bool get_disableVirtualCursor() { return il2cpp::call<bool(*)(SpecialInputHandler*)>(0x33e0e0)(this); } // 0x33e0e0
        void set_disableVirtualCursor(bool value) { return il2cpp::call<void(*)(SpecialInputHandler*, bool)>(0x6c8ee0)(this, value); } // 0x6c8ee0
        bool get_suppressInGamePlayerList() { return il2cpp::call<bool(*)(SpecialInputHandler*)>(0x33e0d0)(this); } // 0x33e0d0
        void set_suppressInGamePlayerList(bool value) { return il2cpp::call<void(*)(SpecialInputHandler*, bool)>(0x6c8f80)(this, value); } // 0x6c8f80
        void OnEnable() { return il2cpp::call<void(*)(SpecialInputHandler*)>(0x6c8e30)(this); } // 0x6c8e30
        void OnDisable() { return il2cpp::call<void(*)(SpecialInputHandler*)>(0x6c8d80)(this); } // 0x6c8d80
        void ctor() { return il2cpp::call<void(*)(SpecialInputHandler*)>(0x310ec0)(this); } // 0x310ec0
        void cctor() { return il2cpp::call<void(*)(SpecialInputHandler*)>(0x2babf0)(this); } // 0x2babf0

    };

}
namespace ark {

        template<> struct meta_statics<::SpecialInputHandler> {
        int32_t count; // 0x0
        int32_t disableVirtualCursorCount; // 0x4
        int32_t suppressInGamePlayerListCount; // 0x8
        };

}



int32_t ::SpecialInputHandler::count() { return statics()->count; }; // 0x0

int32_t ::SpecialInputHandler::disableVirtualCursorCount() { return statics()->disableVirtualCursorCount; }; // 0x4

int32_t ::SpecialInputHandler::suppressInGamePlayerListCount() { return statics()->suppressInGamePlayerListCount; }; // 0x8