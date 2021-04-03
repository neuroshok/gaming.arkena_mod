//au/Hazel/MessageWriter
#pragma once
#include <ark/class.hpp>
namespace Hazel{ template <class...> struct ObjectPool; }
#include <cs/array.hpp>
#include <au/Hazel/SendOption.hpp>
namespace System::Collections::Generic{ template <class...> struct Stack; }
namespace Hazel{ struct MessageReader; }
#include <cs/string.hpp>


namespace Hazel {
struct MessageWriter : ark::meta<MessageWriter>
{
ark_meta("Hazel", "MessageWriter", "");

    // Fields

    static int BufferSize(); // 0x0
    static Hazel::ObjectPool<Hazel::MessageWriter>* WriterPool(); // 0x4
    cs::array<uint8_t>* Buffer; // 0x8
    int Length; // 0xC
    int Position; // 0x10
    Hazel::SendOption _SendOption_k__BackingField; // 0x14
    System::Collections::Generic::Stack<int>* messageStarts; // 0x18

    // Methods

    Hazel::SendOption get_SendOption(); // 0x26DAF0 // public 
    void set_SendOption(Hazel::SendOption value); // 0x26DB10 // private 
    void ctor(int bufferSize); // 0xEE9EA0 // public 
    cs::array<uint8_t>* ToByteArray(bool includeHeader); // 0xEE9870 // public 
    Hazel::MessageWriter* Get(Hazel::SendOption sendOption = Hazel::SendOption(0)); // 0xEE95F0 // public static 
    bool HasBytes(int expected); // 0xEE96F0 // public 
    void StartMessage(uint8_t typeFlag); // 0xEE97B0 // public 
    void EndMessage(); // 0xEE9560 // public 
    void CancelMessage(); // 0xEE9400 // public 
    void Clear(Hazel::SendOption sendOption); // 0xEE9450 // public 
    void Recycle(); // 0xEE9720 // public 
    void CopyFrom(Hazel::MessageReader* target); // 0xEE9500 // public 
    void Write(bool value); // 0xEE9A40 // public 
    void Write1(int8_t value); // 0xEE9A40 // public 
    void Write2(uint8_t value); // 0xEE9A40 // public 
    void Write3(uint16_t value); // 0xEE9C30 // public 
    void Write4(unsigned int value); // 0xEE9B60 // public 
    void Write5(int value); // 0xEE9A90 // public 
    void Write6(float value); // 0xEE9CE0 // public 
    void Write7(cs::string* value); // 0xEE9D40 // public 
    void WriteBytesAndSize(cs::array<uint8_t>* bytes); // 0xEE9970 // public 
    void Write8(cs::array<uint8_t>* bytes); // 0xEE9CA0 // public 
    void WritePacked(int value); // 0xEE9A30 // public 
    void WritePacked1(unsigned int value); // 0xEE99C0 // public 
    void cctor(); // 0xEE9DC0 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<Hazel::MessageWriter>
{
    int BufferSize;
    Hazel::ObjectPool<Hazel::MessageWriter>* WriterPool;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&Hazel::MessageWriter::get_SendOption> () { return 0x26DAF0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::set_SendOption> () { return 0x26DB10; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::ctor> () { return 0xEE9EA0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::ToByteArray> () { return 0xEE9870; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Get> () { return 0xEE95F0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::HasBytes> () { return 0xEE96F0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::StartMessage> () { return 0xEE97B0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::EndMessage> () { return 0xEE9560; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::CancelMessage> () { return 0xEE9400; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Clear> () { return 0xEE9450; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Recycle> () { return 0xEE9720; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::CopyFrom> () { return 0xEE9500; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write> () { return 0xEE9A40; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write1> () { return 0xEE9A40; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write2> () { return 0xEE9A40; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write3> () { return 0xEE9C30; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write4> () { return 0xEE9B60; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write5> () { return 0xEE9A90; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write6> () { return 0xEE9CE0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write7> () { return 0xEE9D40; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::WriteBytesAndSize> () { return 0xEE9970; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::Write8> () { return 0xEE9CA0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::WritePacked> () { return 0xEE9A30; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::WritePacked1> () { return 0xEE99C0; }
    template<> inline uintptr_t rva<&Hazel::MessageWriter::cctor> () { return 0xEE9DC0; }
} // ark::method_info