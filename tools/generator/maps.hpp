#pragma once

#include <il2cpp/core.hpp>
#include <il2cpp/api.hpp>

#include <unordered_map>
#include <string>
#include <stdexcept>

namespace maps
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
        { il2cpp::TYPE_STRING, "cs::string*" },
        { il2cpp::TYPE_OBJECT, "il2cpp::object*" },
    };


    std::string type_name(const il2cpp::Il2CppType* type, bool pointer = true, bool generic = false)
    {
        auto type_id = il2cpp::api::type_get_type(type);
        std::string str_pointer;
        if (pointer) str_pointer = "*";

        switch (type_id)
        {
        case il2cpp::TYPE_CLASS:
            return il2cpp::api::type_get_name(type) + str_pointer;
            break;

        case il2cpp::TYPE_OBJECT:
            return "il2cpp::Il2CppObject" + str_pointer;
            break;

        case il2cpp::TYPE_SZARRAY:
            if (generic) return "cs::array<T>*";
            return std::string("cs::array<") + type_name(static_cast<il2cpp::Il2CppType*>(type->data), false) + ">*";
            break;

        case il2cpp::TYPE_VALUETYPE:
            return il2cpp::api::type_get_name(type);
            break;

        case il2cpp::TYPE_GENERICINST:
        {
            auto type_data = static_cast<il2cpp::Il2CppGenericClass*>(type->data);
            std::string base_type = il2cpp::api::type_get_name(type);
            auto s = base_type.find('<');
            std::string res = base_type.substr(0, s);
            std::string subtypes;
            res += "<";

            for (int i = 0; i < type_data->context.class_inst->type_argc; ++i)
            {
                const il2cpp::Il2CppType** idx = type_data->context.class_inst->type_argv + i;
                subtypes += ", " + type_name(reinterpret_cast<const il2cpp::Il2CppType*>(*idx), false);
            }
            res += subtypes.substr(2);
            res += ">";
            res += str_pointer;
            return res;
            break;
        }

        default:
            if (type_names.find(type_id) == type_names.end()) return "Typeid_" + std::to_string(type_id);
            else return type_names[type_id];
        }

    }
} // filters



