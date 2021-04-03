#include <au/Hazel/MessageReader.hpp>

namespace Hazel {

    // Methods

    int MessageReader::get_BytesRemaining() { return method_call(get_BytesRemaining); }  // 0xEE93D0 // 
    int MessageReader::get_Position() { return method_call(get_Position); }  // 0x26D6C0 // 
    void MessageReader::set_Position(int value) { return method_call(set_Position, value); }  // 0xEE93E0 // 
    Hazel::MessageReader* MessageReader::GetSized(int minSize) { return method_call(GetSized, minSize); }  // 0xEE8650 // 
    Hazel::MessageReader* MessageReader::Get(Hazel::MessageReader* source) { return method_call(Get, source); }  // 0xEE8720 // 
    Hazel::MessageReader* MessageReader::ReadMessage() { return method_call(ReadMessage); }  // 0xEE8DD0 // 
    Hazel::MessageReader* MessageReader::ReadMessageAsNewBuffer() { return method_call(ReadMessageAsNewBuffer); }  // 0xEE8BA0 // 
    void MessageReader::Recycle() { return method_call(Recycle); }  // 0xEE9280 // 
    bool MessageReader::ReadBoolean() { return method_call(ReadBoolean); }  // 0xEE87D0 // 
    int8_t MessageReader::ReadSByte() { return method_call(ReadSByte); }  // 0xEE8610 // 
    uint8_t MessageReader::ReadByte() { return method_call(ReadByte); }  // 0xEE8610 // 
    uint16_t MessageReader::ReadUInt16() { return method_call(ReadUInt16); }  // 0xEE9210 // 
    unsigned int MessageReader::ReadUInt32() { return method_call(ReadUInt32); }  // 0xEE8AE0 // 
    int MessageReader::ReadInt32() { return method_call(ReadInt32); }  // 0xEE8AE0 // 
    float MessageReader::ReadSingle() { return method_call(ReadSingle); }  // 0xEE90B0 // 
    cs::string* MessageReader::ReadString() { return method_call(ReadString); }  // 0xEE9110 // 
    cs::array<uint8_t>* MessageReader::ReadBytesAndSize() { return method_call(ReadBytesAndSize); }  // 0xEE8810 // 
    cs::array<uint8_t>* MessageReader::ReadBytes(int length) { return method_call(ReadBytes, length); }  // 0xEE89D0 // 
    int MessageReader::ReadPackedInt32() { return method_call(ReadPackedInt32); }  // 0xEE9010 // 
    unsigned int MessageReader::ReadPackedUInt32() { return method_call(ReadPackedUInt32); }  // 0xEE9010 // 
    uint8_t MessageReader::FastByte() { return method_call(FastByte); }  // 0xEE8610 // 
    void MessageReader::ctor() { return method_call(ctor); }  // 0x266470 // 
    void MessageReader::cctor() { return method_call(cctor); }  // 0xEE9300 // 

};


Hazel::ObjectPool<Hazel::MessageReader>* Hazel::MessageReader::ReaderPool() { return statics()->ReaderPool; }