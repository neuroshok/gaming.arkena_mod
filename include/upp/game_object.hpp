#pragma once

#include <autogen/Unity/GameObject.hpp>
#include <cs/type.hpp>
#include <il2cpp/api.hpp>

namespace upp
{
    struct game_object : Unity::GameObject
    {
        static game_object* make() { return static_cast<game_object*>(il2cpp::make<Unity::GameObject>()); }

        template<class T>
        T* add()
        {
            return static_cast<T*>(AddComponent(cs::get_type<T>()));
        }
    };
} // upp