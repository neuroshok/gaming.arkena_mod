#pragma once

#include <il2cpp/core.hpp>
#include <il2cpp/api.hpp>

#include <unordered_map>
#include <string>
#include <stdexcept>

namespace meta
{
    inline static std::unordered_map<std::string, std::string> obfus {
        { "PlayerControl", "PlayerControl" }
    };

    inline static std::unordered_map<int, std::string> type_names {
        { il2cpp::TYPE_VOID, "void" },
        { il2cpp::TYPE_BOOLEAN, "bool" },
        { il2cpp::TYPE_CHAR, "char" },
        { il2cpp::TYPE_U1, "uint8_t" },
        { il2cpp::TYPE_U2, "uint16_t" },
        { il2cpp::TYPE_U4, "uint32_t" },
        { il2cpp::TYPE_I, "int" },
        { il2cpp::TYPE_I1, "int8_t" },
        { il2cpp::TYPE_I2, "int16_t" },
        { il2cpp::TYPE_I4, "int32_t" },
        { il2cpp::TYPE_R4, "float" },
        { il2cpp::TYPE_I8, "int64_t" },
        { il2cpp::TYPE_U8, "uint64_t" },
        { il2cpp::TYPE_STRING, "cs::string*" },
        { il2cpp::TYPE_OBJECT, "il2cpp::object*" },
    };
} // filters