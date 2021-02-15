#pragma once

#include <autogen/Object.hpp>
#include <autogen/System/String.hpp>

#include <string>

namespace UnityEngine
{
    struct Application : ::Object
    {
        static Class<Application> *get_class()
        {
            return Class<Application>::find("UnityEngine", "Application");
        }

        System::String* zeta();

        static std::string get_version()
        {
            static const auto m = get_class()->get_method<System::String *(*) ()>("get_version");
            return m()->to_utf8();
        }
        static std::string set_version()
        {
            static const auto m = get_class()->get_method<System::String *(*) ()>("set_version");
            return m()->to_utf8();
        }
    };
}// namespace UnityEngine

template <>
inline const char* get_method_name<&UnityEngine::Application::zeta>()
{
    return "get_version";
}
