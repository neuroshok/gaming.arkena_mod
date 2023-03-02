#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/Hazel/ObjectPool.hpp>
#include <cs/array.hpp>
#include <au/Hazel/SendOption.hpp>
#include <au/System/Collections/Generic/Stack.hpp>
#include <au/Hazel/SendOption.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <cs/string.hpp>
#include <cs/array.hpp>
#include <au/Hazel/MessageWriter.hpp>

namespace Hazel
{
    struct MessageWriter : ark::meta<MessageWriter, il2cpp::Il2CppObject>
    {
        static int32_t BufferSize(); // 0x0
        static Hazel::ObjectPool<Hazel::MessageWriter>* WriterPool(); // 0x4
        cs::array<uint8_t>* Buffer; // 0x8
        int32_t Length; // 0xc
        int32_t Position; // 0x10
        Hazel::SendOption _SendOption_k__BackingField; // 0x14
        System::Collections::Generic::Stack<int32_t>* messageStarts; // 0x18

        Hazel::SendOption get_SendOption() { return il2cpp::call<Hazel::SendOption(*)(MessageWriter*)>(0x2d0630)(this); } // 0x2d0630
        void set_SendOption(Hazel::SendOption value) { return il2cpp::call<void(*)(MessageWriter*, Hazel::SendOption)>(0x2d0640)(this, value); } // 0x2d0640
        void ctor(int32_t bufferSize) { return il2cpp::call<void(*)(MessageWriter*, int32_t)>(0x17d0d20)(this, bufferSize); } // 0x17d0d20
        cs::array<uint8_t>* ToByteArray(bool includeHeader) { return il2cpp::call<cs::array<uint8_t>*(*)(MessageWriter*, bool)>(0x17d0490)(this, includeHeader); } // 0x17d0490
        Hazel::MessageWriter* Get(Hazel::SendOption sendOption) { return il2cpp::call<Hazel::MessageWriter*(*)(MessageWriter*, Hazel::SendOption)>(0x17d0210)(this, sendOption); } // 0x17d0210
        bool HasBytes(int32_t expected) { return il2cpp::call<bool(*)(MessageWriter*, int32_t)>(0x17d0310)(this, expected); } // 0x17d0310
        void StartMessage(uint8_t typeFlag) { return il2cpp::call<void(*)(MessageWriter*, uint8_t)>(0x17d03d0)(this, typeFlag); } // 0x17d03d0
        void EndMessage() { return il2cpp::call<void(*)(MessageWriter*)>(0x17d0180)(this); } // 0x17d0180
        void CancelMessage() { return il2cpp::call<void(*)(MessageWriter*)>(0x17d0020)(this); } // 0x17d0020
        void Clear(Hazel::SendOption sendOption) { return il2cpp::call<void(*)(MessageWriter*, Hazel::SendOption)>(0x17d0070)(this, sendOption); } // 0x17d0070
        void CopyFrom(Hazel::MessageReader* target) { return il2cpp::call<void(*)(MessageWriter*, Hazel::MessageReader*)>(0x17d0120)(this, target); } // 0x17d0120
        void Write(bool value) { return il2cpp::call<void(*)(MessageWriter*, bool)>(0x17d0890)(this, value); } // 0x17d0890
        void Write(int8_t value) { return il2cpp::call<void(*)(MessageWriter*, int8_t)>(0x17d0890)(this, value); } // 0x17d0890
        void Write(uint8_t value) { return il2cpp::call<void(*)(MessageWriter*, uint8_t)>(0x17d0890)(this, value); } // 0x17d0890
        void Write(uint16_t value) { return il2cpp::call<void(*)(MessageWriter*, uint16_t)>(0x17d0940)(this, value); } // 0x17d0940
        void Write(uint32_t value) { return il2cpp::call<void(*)(MessageWriter*, uint32_t)>(0x17d0b70)(this, value); } // 0x17d0b70
        void Write(int32_t value) { return il2cpp::call<void(*)(MessageWriter*, int32_t)>(0x17d09b0)(this, value); } // 0x17d09b0
        void Write(uint64_t value) { return il2cpp::call<void(*)(MessageWriter*, uint64_t)>(0x17d06a0)(this, value); } // 0x17d06a0
        void Write(float value) { return il2cpp::call<void(*)(MessageWriter*, float)>(0x17d08e0)(this, value); } // 0x17d08e0
        void Write(cs::string* value) { return il2cpp::call<void(*)(MessageWriter*, cs::string*)>(0x17d0a80)(this, value); } // 0x17d0a80
        void WriteBytesAndSize(cs::array<uint8_t>* bytes) { return il2cpp::call<void(*)(MessageWriter*, cs::array<uint8_t>*)>(0x17d0590)(this, bytes); } // 0x17d0590
        void Write(cs::array<uint8_t>* bytes) { return il2cpp::call<void(*)(MessageWriter*, cs::array<uint8_t>*)>(0x17d0850)(this, bytes); } // 0x17d0850
        void Write(cs::array<uint8_t>* bytes, int32_t offset, int32_t length) { return il2cpp::call<void(*)(MessageWriter*, cs::array<uint8_t>*, int32_t, int32_t)>(0x17d0660)(this, bytes, offset, length); } // 0x17d0660
        void WritePacked(int32_t value) { return il2cpp::call<void(*)(MessageWriter*, int32_t)>(0x17d0650)(this, value); } // 0x17d0650
        void WritePacked(uint32_t value) { return il2cpp::call<void(*)(MessageWriter*, uint32_t)>(0x17d05e0)(this, value); } // 0x17d05e0
        void Write(Hazel::MessageWriter* msg, bool includeHeader) { return il2cpp::call<void(*)(MessageWriter*, Hazel::MessageWriter*, bool)>(0x17d0b00)(this, msg, includeHeader); } // 0x17d0b00
        void cctor() { return il2cpp::call<void(*)(MessageWriter*)>(0x17d0c40)(this); } // 0x17d0c40

    };

}
namespace ark {

        template<> struct meta_statics<Hazel::MessageWriter> {
        int32_t BufferSize; // 0x0
        Hazel::ObjectPool<Hazel::MessageWriter>* WriterPool; // 0x4
        };

}



int32_t Hazel::MessageWriter::BufferSize() { return statics()->BufferSize; }; // 0x0

Hazel::ObjectPool<Hazel::MessageWriter>* Hazel::MessageWriter::WriterPool() { return statics()->WriterPool; }; // 0x4