#pragma once

#include <ark/log.hpp>

#include <il2cpp/core.hpp>

#include <cstddef>
#include <cstdint>
#include <type_traits>

namespace il2cpp
{
    template <class T>
    struct array {
        il2cpp::Il2CppObject obj;
        il2cpp::Il2CppArrayBounds *bounds;
        il2cpp::il2cpp_array_size_t max_length;
        T* m_Items[65535];
    };

    struct string {
        il2cpp::Il2CppObject obj;
        int32_t length;
        uint16_t* chars;
    };
}