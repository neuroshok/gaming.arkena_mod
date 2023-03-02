#pragma once
#include <ark/class.hpp>

#include <au/LimitedTime.hpp>

namespace 
{
    struct LimitedTimeStartEnd : ark::meta<LimitedTimeStartEnd>
    {
        au::LimitedTime timeStart; // 0x8
        au::LimitedTime timeEnd; // 0x1c

        bool IsAvailable() { return il2cpp::call<bool(*)(LimitedTimeStartEnd*)>(0xab7c0)(this); } // 0xab7c0
        bool IsLimitedTime() { return il2cpp::call<bool(*)(LimitedTimeStartEnd*)>(0xab880)(this); } // 0xab880
        bool IsLimitedAndAvailable() { return il2cpp::call<bool(*)(LimitedTimeStartEnd*)>(0xab800)(this); } // 0xab800

    };

}
namespace ark {

        template<> struct meta_statics<::LimitedTimeStartEnd> {
        };

}

