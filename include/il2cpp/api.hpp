#pragma once

#include <ark/module.hpp>
#include <ark/log.hpp>

#include <il2cpp/core.hpp>
#include <il2cpp/type.hpp>

#include <stdexcept> // for make_api.hpp

namespace il2cpp
{
    class api;

    template<class T>
    auto build()
    {
        return il2cpp::api::template object_new<T>(api::template get_class<T>());
    }

    template<class T, class... Ts>
    T* make(Ts&&... ts)
    {
        auto obj = static_cast<T*>(il2cpp::api::object_new(api::template get_class<T>()));
        obj->ctor(std::forward<Ts>(ts)...);
        return obj;
    }

    template<class T, class... Ts>
    T* new_object(Ts&&... ts)
    {
        return static_cast<T*>(il2cpp::api::object_new(api::template get_class<T>()));
    }


    /*
    template<class T, class Fn, class... Ts>
    T* make_ctor(Fn fn, Ts&&... ts)
    {
        auto obj = static_cast<T*>(il2cpp::api::object_new(api::template get_class<T>()));
        std::invoke(fn, obj, std::forward<Ts>(ts)...);
        return obj;
    }*/

    template<class T>
    auto make_array(int size) { return reinterpret_cast<il2cpp::array<T>*>(il2cpp::api::array_new(api::template get_class<T>(), size)); }

    class api
    {
    public:
        #define ARK_MAKE_MEMBER
        #include <il2cpp/make_api.hpp>
        #undef ARK_MAKE_MEMBER

        static ARK_SHARED il2cpp::Il2CppClass* get_class(const std::string& ns, const std::string& klass);

        template<class T>
        static inline il2cpp::Il2CppClass* get_class()
        {
            auto namespace_ = T::internal_ns;
            auto class_ = T::internal_name;

            return get_class(namespace_, class_);
        }

        static void initialize()
        {
            #define ARK_MAKE_STATIC_INIT
            #include <il2cpp/make_api.hpp>
            #undef ARK_MAKE_STATIC_INIT
        }

    public:
        template<class T, class... Args>
        static decltype(auto) process(FARPROC function_address, Args&&... args)
        {
            return reinterpret_cast<T>(function_address)(std::forward<Args>(args)...);
        }

        #define ARK_MAKE_STATIC
        #include <il2cpp/make_api.hpp>
        #undef ARK_MAKE_STATIC
    };
} // il2cpp