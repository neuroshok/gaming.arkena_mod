#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Vector2Int.hpp>

namespace UnityEngine
{
    struct Vector2Int : ark::meta<Vector2Int>
    {
        static UnityEngine::Vector2Int s_Zero(); // 0x0
        static UnityEngine::Vector2Int s_One(); // 0x8
        static UnityEngine::Vector2Int s_Up(); // 0x10
        static UnityEngine::Vector2Int s_Down(); // 0x18
        static UnityEngine::Vector2Int s_Left(); // 0x20
        static UnityEngine::Vector2Int s_Right(); // 0x28
        int32_t m_X; // 0x8
        int32_t m_Y; // 0xc

        int32_t get_x() { return il2cpp::call<int32_t(*)(Vector2Int*)>(0x50e10)(this); } // 0x50e10
        void set_x(int32_t value) { return il2cpp::call<void(*)(Vector2Int*, int32_t)>(0x54760)(this, value); } // 0x54760
        int32_t get_y() { return il2cpp::call<int32_t(*)(Vector2Int*)>(0x50de0)(this); } // 0x50de0
        void set_y(int32_t value) { return il2cpp::call<void(*)(Vector2Int*, int32_t)>(0x50a50)(this, value); } // 0x50a50
        void ctor(int32_t x, int32_t y) { return il2cpp::call<void(*)(Vector2Int*, int32_t, int32_t)>(0x6f430)(this, x, y); } // 0x6f430
        UnityEngine::Vector2 op_Implicit(UnityEngine::Vector2Int v) { return il2cpp::call<UnityEngine::Vector2(*)(Vector2Int*, UnityEngine::Vector2Int)>(0xef7900)(this, v); } // 0xef7900
        void cctor() { return il2cpp::call<void(*)(Vector2Int*)>(0xef7850)(this); } // 0xef7850

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Vector2Int> {
        UnityEngine::Vector2Int s_Zero; // 0x0
        UnityEngine::Vector2Int s_One; // 0x8
        UnityEngine::Vector2Int s_Up; // 0x10
        UnityEngine::Vector2Int s_Down; // 0x18
        UnityEngine::Vector2Int s_Left; // 0x20
        UnityEngine::Vector2Int s_Right; // 0x28
        };

}



UnityEngine::Vector2Int UnityEngine::Vector2Int::s_Zero() { return statics()->s_Zero; }; // 0x0

UnityEngine::Vector2Int UnityEngine::Vector2Int::s_One() { return statics()->s_One; }; // 0x8

UnityEngine::Vector2Int UnityEngine::Vector2Int::s_Up() { return statics()->s_Up; }; // 0x10

UnityEngine::Vector2Int UnityEngine::Vector2Int::s_Down() { return statics()->s_Down; }; // 0x18

UnityEngine::Vector2Int UnityEngine::Vector2Int::s_Left() { return statics()->s_Left; }; // 0x20

UnityEngine::Vector2Int UnityEngine::Vector2Int::s_Right() { return statics()->s_Right; }; // 0x28