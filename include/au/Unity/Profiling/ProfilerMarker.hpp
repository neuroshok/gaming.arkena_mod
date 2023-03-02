#pragma once
#include <ark/class.hpp>

#include <cs/string.hpp>

namespace Unity::Profiling
{
    struct ProfilerMarker : ark::meta<ProfilerMarker>
    {
        int m_Ptr; // 0x8

        void ctor(cs::string* name) { return il2cpp::call<void(*)(ProfilerMarker*, cs::string*)>(0x17d970)(this, name); } // 0x17d970

    };

}
namespace ark {

        template<> struct meta_statics<Unity::Profiling::ProfilerMarker> {
        };

}

