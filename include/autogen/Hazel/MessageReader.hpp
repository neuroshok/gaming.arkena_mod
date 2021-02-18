#pragma once

#include <ark/class.hpp>
#include <cstdint>
#include <iostream>

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
    std::uint16_t ReadUInt16() { return method_call(ReadUInt16); } // 0x16132C0
	std::uint32_t ReadUInt32() { return method_call(ReadUInt32); } // 0x1612DE0
	std::int32_t ReadInt32() { return method_call(ReadInt32); } // 0x1612DE0
	float ReadSingle() { return method_call(ReadSingle); } // 0x1613170

    template<class T>
    T read();
};

template<>
inline std::string MessageReader::read<std::string>()
{
    std::uint32_t size = ReadUInt32();
    std::string output;
    output.reserve(size);
    for (int i = 0; i < size; ++i) output += (char)ReadByte();
    return output;
}

template<>
inline ark::version MessageReader::read<ark::version>()
{
    ark::version version;
    version.major = ReadUInt32();
    version.minor = ReadUInt32();
    version.fix = ReadUInt32();
    return version;
}

namespace ark::method_info
{

	method_rva(MessageReader::get_BytesRemaining, 0xB03210)
	method_rva(MessageReader::get_Position, 0x242CA0)
	method_rva(MessageReader::set_Position, 0x1613440)
	method_rva(MessageReader::ReadByte, 0x1612970)
    method_rva(MessageReader::ReadUInt16, 0x16132C0)
	method_rva(MessageReader::ReadUInt32, 0x1612DE0)
	method_rva(MessageReader::ReadInt32, 0x1612DE0)
	method_rva(MessageReader::ReadSingle, 0x1613170)
}