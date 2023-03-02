#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/Hazel/ObjectPool.hpp>
#include <cs/array.hpp>
#include <cs/array.hpp>
#include <au/Hazel/MessageReader.hpp>

namespace Hazel
{
    struct MessageReader : ark::meta<MessageReader, il2cpp::Il2CppObject>
    {
        static Hazel::ObjectPool<Hazel::MessageReader>* ReaderPool(); // 0x0
        cs::array<uint8_t>* Buffer; // 0x8
        uint8_t Tag; // 0xc
        int32_t Length; // 0x10
        int32_t Offset; // 0x14
        Hazel::MessageReader* Parent; // 0x18
        int32_t _position; // 0x1c
        int32_t readHead; // 0x20

        int32_t get_BytesRemaining() { return il2cpp::call<int32_t(*)(MessageReader*)>(0x2b6fd0)(this); } // 0x2b6fd0
        int32_t get_Position() { return il2cpp::call<int32_t(*)(MessageReader*)>(0x2c8c90)(this); } // 0x2c8c90
        void set_Position(int32_t value) { return il2cpp::call<void(*)(MessageReader*, int32_t)>(0x17d0000)(this, value); } // 0x17d0000
        Hazel::MessageReader* GetSized(int32_t minSize) { return il2cpp::call<Hazel::MessageReader*(*)(MessageReader*, int32_t)>(0x17cf010)(this, minSize); } // 0x17cf010
        Hazel::MessageReader* Get(cs::array<uint8_t>* buffer) { return il2cpp::call<Hazel::MessageReader*(*)(MessageReader*, cs::array<uint8_t>*)>(0x17cf0e0)(this, buffer); } // 0x17cf0e0
        Hazel::MessageReader* Get(Hazel::MessageReader* source) { return il2cpp::call<Hazel::MessageReader*(*)(MessageReader*, Hazel::MessageReader*)>(0x17cf180)(this, source); } // 0x17cf180
        Hazel::MessageReader* ReadMessage() { return il2cpp::call<Hazel::MessageReader*(*)(MessageReader*)>(0x17cf8a0)(this); } // 0x17cf8a0
        Hazel::MessageReader* ReadMessageAsNewBuffer() { return il2cpp::call<Hazel::MessageReader*(*)(MessageReader*)>(0x17cf670)(this); } // 0x17cf670
        bool ReadBoolean() { return il2cpp::call<bool(*)(MessageReader*)>(0x17cf230)(this); } // 0x17cf230
        int8_t ReadSByte() { return il2cpp::call<int8_t(*)(MessageReader*)>(0x17cefd0)(this); } // 0x17cefd0
        uint8_t ReadByte() { return il2cpp::call<uint8_t(*)(MessageReader*)>(0x17cefd0)(this); } // 0x17cefd0
        uint16_t ReadUInt16() { return il2cpp::call<uint16_t(*)(MessageReader*)>(0x17cf540)(this); } // 0x17cf540
        int16_t ReadInt16() { return il2cpp::call<int16_t(*)(MessageReader*)>(0x17cf540)(this); } // 0x17cf540
        uint32_t ReadUInt32() { return il2cpp::call<uint32_t(*)(MessageReader*)>(0x17cf5b0)(this); } // 0x17cf5b0
        int32_t ReadInt32() { return il2cpp::call<int32_t(*)(MessageReader*)>(0x17cf5b0)(this); } // 0x17cf5b0
        uint64_t ReadUInt64() { return il2cpp::call<uint64_t(*)(MessageReader*)>(0x17cfce0)(this); } // 0x17cfce0
        float ReadSingle() { return il2cpp::call<float(*)(MessageReader*)>(0x17cfb80)(this); } // 0x17cfb80
        cs::string* ReadString() { return il2cpp::call<cs::string*(*)(MessageReader*)>(0x17cfbe0)(this); } // 0x17cfbe0
        cs::array<uint8_t>* ReadBytesAndSize() { return il2cpp::call<cs::array<uint8_t>*(*)(MessageReader*)>(0x17cf270)(this); } // 0x17cf270
        cs::array<uint8_t>* ReadBytes(int32_t length) { return il2cpp::call<cs::array<uint8_t>*(*)(MessageReader*, int32_t)>(0x17cf430)(this, length); } // 0x17cf430
        int32_t ReadPackedInt32() { return il2cpp::call<int32_t(*)(MessageReader*)>(0x17cfae0)(this); } // 0x17cfae0
        uint32_t ReadPackedUInt32() { return il2cpp::call<uint32_t(*)(MessageReader*)>(0x17cfae0)(this); } // 0x17cfae0
        uint8_t FastByte() { return il2cpp::call<uint8_t(*)(MessageReader*)>(0x17cefd0)(this); } // 0x17cefd0
        void ctor() { return il2cpp::call<void(*)(MessageReader*)>(0x2c4c60)(this); } // 0x2c4c60
        void cctor() { return il2cpp::call<void(*)(MessageReader*)>(0x17cff30)(this); } // 0x17cff30

    };

}
namespace ark {

        template<> struct meta_statics<Hazel::MessageReader> {
        Hazel::ObjectPool<Hazel::MessageReader>* ReaderPool; // 0x0
        };

}



Hazel::ObjectPool<Hazel::MessageReader>* Hazel::MessageReader::ReaderPool() { return statics()->ReaderPool; }; // 0x0