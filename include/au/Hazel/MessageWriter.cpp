#include <au/Hazel/MessageWriter.hpp>

namespace Hazel {

    // Methods

    Hazel::SendOption MessageWriter::get_SendOption() { return method_call(get_SendOption); }  // 0x26DAF0 // 
    void MessageWriter::set_SendOption(Hazel::SendOption value) { return method_call(set_SendOption, value); }  // 0x26DB10 // 
    void MessageWriter::ctor(int bufferSize) { return method_call(ctor, bufferSize); }  // 0xEE9EA0 // 
    cs::array<uint8_t>* MessageWriter::ToByteArray(bool includeHeader) { return method_call(ToByteArray, includeHeader); }  // 0xEE9870 // 
    Hazel::MessageWriter* MessageWriter::Get(Hazel::SendOption sendOption) { return method_call(Get, sendOption); }  // 0xEE95F0 // 
    bool MessageWriter::HasBytes(int expected) { return method_call(HasBytes, expected); }  // 0xEE96F0 // 
    void MessageWriter::StartMessage(uint8_t typeFlag) { return method_call(StartMessage, typeFlag); }  // 0xEE97B0 // 
    void MessageWriter::EndMessage() { return method_call(EndMessage); }  // 0xEE9560 // 
    void MessageWriter::CancelMessage() { return method_call(CancelMessage); }  // 0xEE9400 // 
    void MessageWriter::Clear(Hazel::SendOption sendOption) { return method_call(Clear, sendOption); }  // 0xEE9450 // 
    void MessageWriter::Recycle() { return method_call(Recycle); }  // 0xEE9720 // 
    void MessageWriter::CopyFrom(Hazel::MessageReader* target) { return method_call(CopyFrom, target); }  // 0xEE9500 // 
    void MessageWriter::Write(bool value) { return method_call(Write, value); }  // 0xEE9A40 // 
    void MessageWriter::Write1(int8_t value) { return method_call(Write1, value); }  // 0xEE9A40 // 
    void MessageWriter::Write2(uint8_t value) { return method_call(Write2, value); }  // 0xEE9A40 // 
    void MessageWriter::Write3(uint16_t value) { return method_call(Write3, value); }  // 0xEE9C30 // 
    void MessageWriter::Write4(unsigned int value) { return method_call(Write4, value); }  // 0xEE9B60 // 
    void MessageWriter::Write5(int value) { return method_call(Write5, value); }  // 0xEE9A90 // 
    void MessageWriter::Write6(float value) { return method_call(Write6, value); }  // 0xEE9CE0 // 
    void MessageWriter::Write7(cs::string* value) { return method_call(Write7, value); }  // 0xEE9D40 // 
    void MessageWriter::WriteBytesAndSize(cs::array<uint8_t>* bytes) { return method_call(WriteBytesAndSize, bytes); }  // 0xEE9970 // 
    void MessageWriter::Write8(cs::array<uint8_t>* bytes) { return method_call(Write8, bytes); }  // 0xEE9CA0 // 
    void MessageWriter::WritePacked(int value) { return method_call(WritePacked, value); }  // 0xEE9A30 // 
    void MessageWriter::WritePacked1(unsigned int value) { return method_call(WritePacked1, value); }  // 0xEE99C0 // 
    void MessageWriter::cctor() { return method_call(cctor); }  // 0xEE9DC0 // 

};


int Hazel::MessageWriter::BufferSize() { return statics()->BufferSize; }
Hazel::ObjectPool<Hazel::MessageWriter>* Hazel::MessageWriter::WriterPool() { return statics()->WriterPool; }