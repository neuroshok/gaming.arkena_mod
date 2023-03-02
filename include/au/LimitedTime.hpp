#pragma once
#include <ark/class.hpp>


namespace 
{
    struct LimitedTime : ark::meta<LimitedTime>
    {
        int32_t limitedDay; // 0x8
        int32_t limitedMonth; // 0xc
        int32_t limitedYear; // 0x10
        int32_t limitedHour; // 0x14
        int32_t limitedMinute; // 0x18

        bool IsNowAfterThisTime(bool isEndOfDay) { return il2cpp::call<bool(*)(LimitedTime*, bool)>(0xab8e0)(this, isEndOfDay); } // 0xab8e0
        bool IsNowBeforeThisTime(bool isEndOfDay) { return il2cpp::call<bool(*)(LimitedTime*, bool)>(0xab8f0)(this, isEndOfDay); } // 0xab8f0
        cs::string* TimeUntilTime(bool isEndOfDay) { return il2cpp::call<cs::string*(*)(LimitedTime*, bool)>(0xab910)(this, isEndOfDay); } // 0xab910
        cs::string* TimeLeftShort(bool isEndOfDay) { return il2cpp::call<cs::string*(*)(LimitedTime*, bool)>(0xab900)(this, isEndOfDay); } // 0xab900
        System::DateTime GetDateTime(bool isEndOfDay) { return il2cpp::call<System::DateTime(*)(LimitedTime*, bool)>(0xab8d0)(this, isEndOfDay); } // 0xab8d0

    };

}
namespace ark {

        template<> struct meta_statics<::LimitedTime> {
        };

}

