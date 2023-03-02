#pragma once
#include <ark/class.hpp>

#include <au/System/ValueType.hpp>
#include <au/AmongUs/GameOptions/RoleTypes.hpp>
#include <au/System/Nullable.hpp>
#include <il2cpp/core.hpp>

namespace System
{
    template<class... Ts>
struct Nullable : ark::meta<Nullable<Ts...>, System::ValueType>
    {
        AmongUs::GameOptions::RoleTypes value; // 0x8
        bool has_value; // 0xa

        void ctor(AmongUs::GameOptions::RoleTypes value) { return il2cpp::call<void(*)(Nullable*, AmongUs::GameOptions::RoleTypes)>(0x7cdb0)(this, value); } // 0x7cdb0
        bool get_HasValue() { return il2cpp::call<bool(*)(Nullable*)>(0xd8b00)(this); } // 0xd8b00
        AmongUs::GameOptions::RoleTypes get_Value() { return il2cpp::call<AmongUs::GameOptions::RoleTypes(*)(Nullable*)>(0xfb920)(this); } // 0xfb920
        bool Equals(System::Nullable<AmongUs::GameOptions::RoleTypes>* other) { return il2cpp::call<bool(*)(Nullable*, System::Nullable<AmongUs::GameOptions::RoleTypes>*)>(0xd0a10)(this, other); } // 0xd0a10
        AmongUs::GameOptions::RoleTypes GetValueOrDefault() { return il2cpp::call<AmongUs::GameOptions::RoleTypes(*)(Nullable*)>(0xd3440)(this); } // 0xd3440
        AmongUs::GameOptions::RoleTypes GetValueOrDefault(AmongUs::GameOptions::RoleTypes defaultValue) { return il2cpp::call<AmongUs::GameOptions::RoleTypes(*)(Nullable*, AmongUs::GameOptions::RoleTypes)>(0xd3340)(this, defaultValue); } // 0xd3340
        il2cpp::Il2CppObject* Box(System::Nullable<AmongUs::GameOptions::RoleTypes>* o) { return il2cpp::call<il2cpp::Il2CppObject*(*)(Nullable*, System::Nullable<AmongUs::GameOptions::RoleTypes>*)>(0x6dd0a0)(this, o); } // 0x6dd0a0
        System::Nullable<AmongUs::GameOptions::RoleTypes>* Unbox(il2cpp::Il2CppObject* o) { return il2cpp::call<System::Nullable<AmongUs::GameOptions::RoleTypes>*(*)(Nullable*, il2cpp::Il2CppObject*)>(0x6e84f0)(this, o); } // 0x6e84f0

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<System::Nullable<Ts...>> {
        };

}

