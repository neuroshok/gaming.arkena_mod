#pragma once

#include <ark/utility/encoding.hpp>
#include <il2cpp/api.hpp>
#include <il2cpp/core.hpp>

namespace System {

struct String : il2cpp::Il2CppObject {
    std::int32_t m_stringLength;
    char16_t m_firstChar;

    static String* make(std::string data)
    {
        return reinterpret_cast<String*>(il2cpp::api::string_new_len(data.data(), data.size()));
    }

    std::u16string_view to_view() const {
        return { &m_firstChar, static_cast<std::size_t>(m_stringLength) };
    }

    std::string to_utf8() const {
        return ::to_utf8(to_view());
    }
};

} // namespace System