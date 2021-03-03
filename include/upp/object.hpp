#pragma once

#include <autogen/Unity/GameObject.hpp>
#include <autogen/Unity/Transform.hpp>
#include <cs/type.hpp>
#include <il2cpp/api.hpp>

namespace upp
{
    struct object : Unity::Object
    {

    };

    template<class T>
    T* instantiate(T* v)
    {
        return static_cast<T*>(Unity::Object::Instantiate(v));
    }

    template<class T>
    T* instantiate(T* v, Unity::Transform* transform, bool world_space = true)
    {
        return static_cast<T*>(Unity::Object::Instantiate_1(v, transform, world_space));
    }

} // upp