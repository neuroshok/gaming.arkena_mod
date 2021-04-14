#pragma once

#include <au/UnityEngine/GameObject.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <cs/type.hpp>
#include <il2cpp/api.hpp>

namespace upp
{
    struct object : UnityEngine::Object
    {

    };

    template<class T>
    T* instantiate(T* v)
    {
        return static_cast<T*>(UnityEngine::Object::Instantiate(v));
    }

    template<class T>
    T* instantiate(T* v, UnityEngine::Transform* transform, bool world_space = true)
    {
        return static_cast<T*>(UnityEngine::Object::Instantiate3(v, transform, world_space));
    }

} // upp