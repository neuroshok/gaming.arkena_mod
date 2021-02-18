#pragma once

#include <ark/class.hpp>
#include <cstdint>

struct alignas(4) MessageWriter : ark::meta<MessageWriter, il2cpp::Il2CppObject>
{
    ark_meta("Hazel", "MessageWriter");

    void Write(std::uint8_t v) { method_call(Write, v); } // 0x1613AE0
};


namespace ark::method_info
{
	method_rva(MessageWriter::Write, 0x1613AE0)
}