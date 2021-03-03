#pragma once

#include <cs/type.hpp>
#include <il2cpp/api.hpp>

namespace upp
{
    template<class T, class... Ts>
    T* make(Ts&&... ts)
    {
        return il2cpp::make<T>(std::forward<Ts>(ts)...);
    }
} // upp