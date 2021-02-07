#pragma once

#include <cstdint>
#include <autogen/Object.hpp>

struct alignas(4) MessageReader : ::Object
{
    ::Array<std::byte>* buffer;//struct Byte__Array *Buffer;

    uint8_t Tag;
    int32_t Length;
    int32_t Offset;
    struct MessageReader *Parent;
    int32_t _position;
    int32_t readHead;

    struct StaticFields {
        MessageReader* instance;
    };

    static MessageReader* instance() {
        return Class<MessageReader>::find("Hazel", "MessageReader")->statics()->instance;
    }

    std::uint8_t ReadByte()
    {
        return get_method<std::uint8_t(*)(MessageReader*)>("ReadByte")(this);
    }

    std::uint32_t get_BytesRemaining()
    {
        return get_method<std::uint32_t(*)(MessageReader*)>("get_BytesRemaining")(this);
    }

    int get_Position(){ return get_method<int(*)(MessageReader*)>("get_Position")(this); }
    void set_Position(int v){get_method<void(*)(MessageReader*, int)>("set_Position")(this, v);}

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