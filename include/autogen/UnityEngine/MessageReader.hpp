#pragma once

#include <cstdint>

struct alignas(4) MessageReader : il2cpp::Il2CppObject
{
    il2cpp::array<std::byte>* buffer;//struct Byte__Array *Buffer;

    uint8_t Tag;
    int32_t Length;
    int32_t Offset;
    struct MessageReader *Parent;
    int32_t _position;
    int32_t readHead;

    struct StaticFields {
        MessageReader* instance;
    };


    std::uint8_t ReadByte()
    {
        return 0;
    }

    std::uint32_t get_BytesRemaining()
    {
        return 0;
    }

    int get_Position(){ return 0; }
    void set_Position(int v){}

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