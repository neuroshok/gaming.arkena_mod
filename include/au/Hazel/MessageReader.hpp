//au/Hazel/MessageReader
#pragma once
#include <ark/class.hpp>
namespace Hazel{ template <class...> struct ObjectPool; }
#include <cs/array.hpp>
#include <cs/string.hpp>


namespace Hazel {
struct MessageReader : ark::meta<MessageReader>
{
ark_meta("Hazel", "MessageReader", "");

    // Fields

    static Hazel::ObjectPool<Hazel::MessageReader>* ReaderPool(); // 0x0
    cs::array<uint8_t>* Buffer; // 0x8
    uint8_t Tag; // 0xC
    int Length; // 0x10
    int Offset; // 0x14
    Hazel::MessageReader* Parent; // 0x18
    int _position; // 0x1C
    int readHead; // 0x20

    // Methods

    int get_BytesRemaining(); // 0xEE93D0 // public 
    int get_Position(); // 0x26D6C0 // public 
    void set_Position(int value); // 0xEE93E0 // public 
    Hazel::MessageReader* GetSized(int minSize); // 0xEE8650 // public static 
    Hazel::MessageReader* Get(Hazel::MessageReader* source); // 0xEE8720 // public static 
    Hazel::MessageReader* ReadMessage(); // 0xEE8DD0 // public 
    Hazel::MessageReader* ReadMessageAsNewBuffer(); // 0xEE8BA0 // public 
    void Recycle(); // 0xEE9280 // public 
    bool ReadBoolean(); // 0xEE87D0 // public 
    int8_t ReadSByte(); // 0xEE8610 // public 
    uint8_t ReadByte(); // 0xEE8610 // public 
    uint16_t ReadUInt16(); // 0xEE9210 // public 
    unsigned int ReadUInt32(); // 0xEE8AE0 // public 
    int ReadInt32(); // 0xEE8AE0 // public 
    float ReadSingle(); // 0xEE90B0 // public 
    cs::string* ReadString(); // 0xEE9110 // public 
    cs::array<uint8_t>* ReadBytesAndSize(); // 0xEE8810 // public 
    cs::array<uint8_t>* ReadBytes(int length); // 0xEE89D0 // public 
    int ReadPackedInt32(); // 0xEE9010 // public 
    unsigned int ReadPackedUInt32(); // 0xEE9010 // public 
    uint8_t FastByte(); // 0xEE8610 // private 
    void ctor(); // 0x266470 // public 
    void cctor(); // 0xEE9300 // private static 

};

} // ns

namespace ark
{
template<>
struct meta_statics<Hazel::MessageReader>
{
    Hazel::ObjectPool<Hazel::MessageReader>* ReaderPool;
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&Hazel::MessageReader::get_BytesRemaining> () { return 0xEE93D0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::get_Position> () { return 0x26D6C0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::set_Position> () { return 0xEE93E0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::GetSized> () { return 0xEE8650; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::Get> () { return 0xEE8720; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadMessage> () { return 0xEE8DD0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadMessageAsNewBuffer> () { return 0xEE8BA0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::Recycle> () { return 0xEE9280; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadBoolean> () { return 0xEE87D0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadSByte> () { return 0xEE8610; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadByte> () { return 0xEE8610; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadUInt16> () { return 0xEE9210; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadUInt32> () { return 0xEE8AE0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadInt32> () { return 0xEE8AE0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadSingle> () { return 0xEE90B0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadString> () { return 0xEE9110; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadBytesAndSize> () { return 0xEE8810; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadBytes> () { return 0xEE89D0; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadPackedInt32> () { return 0xEE9010; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ReadPackedUInt32> () { return 0xEE9010; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::FastByte> () { return 0xEE8610; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::ctor> () { return 0x266470; }
    template<> inline uintptr_t rva<&Hazel::MessageReader::cctor> () { return 0xEE9300; }
} // ark::method_info