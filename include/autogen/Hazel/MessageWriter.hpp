#pragma once

#include <ark/class.hpp>
#include <ark/version.hpp>
#include <cstdint>

struct alignas(4) MessageWriter : ark::meta<MessageWriter, il2cpp::Il2CppObject>
{
    ark_meta("Hazel", "MessageWriter", "");

    std::uint8_t* Buffer; // 0x8
    std::int32_t Length; // 0xC
    std::int32_t Position; // 0x10

    void Write(bool v) { Write((std::uint8_t)v); }
    void Write(char v) { il2cpp::call<void(*)(MessageWriter*, char)>(0x1613AE0)(this, v); } // 0x1613AE0
    void Write(std::int8_t v) { il2cpp::call<void(*)(MessageWriter*, std::int8_t)>(0x1613AE0)(this, v); } // 0x1613AE0
    void Write(std::uint8_t v) { il2cpp::call<void(*)(MessageWriter*, std::uint8_t)>(0x1613AE0)(this, v); } // 0x1613AE0
    void Write(std::int32_t v) { il2cpp::call<void(*)(MessageWriter*, std::int32_t)>(0x1613B30)(this, v); } // 0x1613B30
    void Write(std::uint32_t v) { il2cpp::call<void(*)(MessageWriter*, std::uint32_t)>(0x1613B30)(this, v); } // 0x1613B30
    void Write(float v) { il2cpp::call<void(*)(MessageWriter*, float)>(0x1613A80)(this, v); } // 0x1613A80

    void Write(const std::string& data)
    {
        Write(std::uint32_t(data.size()));
        for (char i : data) Write(i);
    }

    template<class T>
    void Write(const std::vector<T>& data)
    {
        Write(std::uint32_t(data.size()));
        for (T i : data) Write(i);
    }

    void Write(const ark::version& data)
    {
        Write(data.major);
        Write(data.minor);
        Write(data.fix);
    }
};


namespace ark::method_info
{
	//method_rva(MessageWriter::Write, 0x1613AE0)
}