#pragma once

#include <au/UnityEngine/GameObject.hpp>
#include <cs/type.hpp>
#include <il2cpp/api.hpp>

namespace upp
{
    struct game_object : UnityEngine::GameObject
    {
        static game_object* make()
        {
            auto obj = static_cast<game_object*>(il2cpp::new_object<UnityEngine::GameObject>());
            obj->ctor1();
            return obj;
        }

        template<class T>
        T* add()
        {
            return static_cast<T*>(AddComponent(cs::get_type<T>()));
        }

        template<class T>
        static T* get(UnityEngine::Component* object)
        {
            return static_cast<T*>(object->GetComponent(cs::get_type<T>()));
        }
    };
} // upp