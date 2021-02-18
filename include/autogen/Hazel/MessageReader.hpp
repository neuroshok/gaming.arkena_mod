#pragma once

#include <ark/class.hpp>
#include <cstdint>

struct alignas(4) MessageReader : ark::meta<MessageReader, il2cpp::Il2CppObject>
{
    ark_meta("Hazel", "MessageReader");
    il2cpp::array<std::byte>* buffer;//struct Byte__Array *Buffer;

    uint8_t Tag;
    int32_t Length;
    int32_t Offset;
    struct MessageReader *Parent;
    int32_t _position;
    int32_t readHead;
    

    int get_BytesRemaining() { return method_call(get_BytesRemaining); } // 0xB03210
	int get_Position() { return method_call(get_Position); } // 0x242CA0
	void set_Position(std::int32_t value) { method_call(set_Position, value); } // 0x1613440
	std::uint8_t ReadByte() { return method_call(ReadByte); } // 0x1612970

    std::string read_string(int size)
    {
        std::string output;
        output.reserve(size);

        for (int i = 0; i < size; ++i)
        {
            output += ReadByte();
        }
        return output;
    }
};

namespace ark::method_info
{

	method_rva(MessageReader::get_BytesRemaining, 0xB03210)
	method_rva(MessageReader::get_Position, 0x242CA0)
	method_rva(MessageReader::set_Position, 0x1613440)
	method_rva(MessageReader::ReadByte, 0x1612970)
}