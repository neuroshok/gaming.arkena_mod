#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/System/Runtime/Serialization/SerializationInfo.hpp>
#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <au/System/IFormatProvider.hpp>
#include <cs/array.hpp>
#include <au/System/Text/StringBuilder.hpp>
#include <au/System/Text/StringBuilder.hpp>
#include <cs/array.hpp>

namespace System::Text
{
    struct StringBuilder : ark::meta<StringBuilder, il2cpp::Il2CppObject>
    {
        cs::array<char>* m_ChunkChars; // 0x8
        System::Text::StringBuilder* m_ChunkPrevious; // 0xc
        int32_t m_ChunkLength; // 0x10
        int32_t m_ChunkOffset; // 0x14
        int32_t m_MaxCapacity; // 0x18

        void ctor() { return il2cpp::call<void(*)(StringBuilder*)>(0x1176800)(this); } // 0x1176800
        void ctor(int32_t capacity) { return il2cpp::call<void(*)(StringBuilder*, int32_t)>(0x1176e60)(this, capacity); } // 0x1176e60
        void ctor(cs::string* value) { return il2cpp::call<void(*)(StringBuilder*, cs::string*)>(0x11768c0)(this, value); } // 0x11768c0
        void ctor(cs::string* value, int32_t capacity) { return il2cpp::call<void(*)(StringBuilder*, cs::string*, int32_t)>(0x1176bc0)(this, value, capacity); } // 0x1176bc0
        void ctor(cs::string* value, int32_t startIndex, int32_t length, int32_t capacity) { return il2cpp::call<void(*)(StringBuilder*, cs::string*, int32_t, int32_t, int32_t)>(0x11768f0)(this, value, startIndex, length, capacity); } // 0x11768f0
        void ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) { return il2cpp::call<void(*)(StringBuilder*, System::Runtime::Serialization::SerializationInfo*, System::Runtime::Serialization::StreamingContext)>(0x1176c00)(this, info, context); } // 0x1176c00
        int32_t get_Capacity() { return il2cpp::call<int32_t(*)(StringBuilder*)>(0x1176ec0)(this); } // 0x1176ec0
        void set_Capacity(int32_t value) { return il2cpp::call<void(*)(StringBuilder*, int32_t)>(0x1176f80)(this, value); } // 0x1176f80
        int32_t get_MaxCapacity() { return il2cpp::call<int32_t(*)(StringBuilder*)>(0x2c8c80)(this); } // 0x2c8c80
        cs::string* ToString(int32_t startIndex, int32_t length) { return il2cpp::call<cs::string*(*)(StringBuilder*, int32_t, int32_t)>(0x11765c0)(this, startIndex, length); } // 0x11765c0
        System::Text::StringBuilder* Clear() { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*)>(0x1174b90)(this); } // 0x1174b90
        int32_t get_Length() { return il2cpp::call<int32_t(*)(StringBuilder*)>(0x1176f60)(this); } // 0x1176f60
        void set_Length(int32_t value) { return il2cpp::call<void(*)(StringBuilder*, int32_t)>(0x1177120)(this, value); } // 0x1177120
        char get_Chars(int32_t index) { return il2cpp::call<char(*)(StringBuilder*, int32_t)>(0x1176ee0)(this, index); } // 0x1176ee0
        void set_Chars(int32_t index, char value) { return il2cpp::call<void(*)(StringBuilder*, int32_t, char)>(0x1177070)(this, index, value); } // 0x1177070
        System::Text::StringBuilder* Append(char value, int32_t repeatCount) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, char, int32_t)>(0x11749d0)(this, value, repeatCount); } // 0x11749d0
        System::Text::StringBuilder* Append(cs::array<char>* value, int32_t startIndex, int32_t charCount) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::array<char>*, int32_t, int32_t)>(0x1174480)(this, value, startIndex, charCount); } // 0x1174480
        System::Text::StringBuilder* Append(cs::string* value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*)>(0x1174a90)(this, value); } // 0x1174a90
        void AppendHelper(cs::string* value) { return il2cpp::call<void(*)(StringBuilder*, cs::string*)>(0x1174310)(this, value); } // 0x1174310
        System::Text::StringBuilder* Append(cs::string* value, int32_t startIndex, int32_t count) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, int32_t, int32_t)>(0x1174850)(this, value, startIndex, count); } // 0x1174850
        System::Text::StringBuilder* AppendLine() { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*)>(0x1174370)(this); } // 0x1174370
        System::Text::StringBuilder* AppendLine(cs::string* value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*)>(0x1174340)(this, value); } // 0x1174340
        System::Text::StringBuilder* Insert(int32_t index, cs::string* value, int32_t count) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int32_t, cs::string*, int32_t)>(0x1175090)(this, index, value, count); } // 0x1175090
        System::Text::StringBuilder* Remove(int32_t startIndex, int32_t length) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int32_t, int32_t)>(0x1175910)(this, startIndex, length); } // 0x1175910
        System::Text::StringBuilder* Append(bool value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, bool)>(0x1174830)(this, value); } // 0x1174830
        System::Text::StringBuilder* Append(uint8_t value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, uint8_t)>(0x11743f0)(this, value); } // 0x11743f0
        System::Text::StringBuilder* Append(char value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, char)>(0x1174390)(this, value); } // 0x1174390
        System::Text::StringBuilder* Append(int32_t value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int32_t)>(0x1174680)(this, value); } // 0x1174680
        System::Text::StringBuilder* Append(int64_t value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int64_t)>(0x11747d0)(this, value); } // 0x11747d0
        System::Text::StringBuilder* Append(float value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, float)>(0x1174620)(this, value); } // 0x1174620
        System::Text::StringBuilder* Append(il2cpp::Il2CppObject* value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, il2cpp::Il2CppObject*)>(0x11745e0)(this, value); } // 0x11745e0
        System::Text::StringBuilder* Append(cs::array<char>* value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::array<char>*)>(0x1174450)(this, value); } // 0x1174450
        System::Text::StringBuilder* Insert(int32_t index, cs::string* value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int32_t, cs::string*)>(0x1174dc0)(this, index, value); } // 0x1174dc0
        System::Text::StringBuilder* Insert(int32_t index, char value) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int32_t, char)>(0x1175070)(this, index, value); } // 0x1175070
        System::Text::StringBuilder* AppendFormat(cs::string* format, il2cpp::Il2CppObject* arg0) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, il2cpp::Il2CppObject*)>(0x1174230)(this, format, arg0); } // 0x1174230
        System::Text::StringBuilder* AppendFormat(cs::string* format, il2cpp::Il2CppObject* arg0, il2cpp::Il2CppObject* arg1) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x1174050)(this, format, arg0, arg1); } // 0x1174050
        System::Text::StringBuilder* AppendFormat(cs::string* format, il2cpp::Il2CppObject* arg0, il2cpp::Il2CppObject* arg1, il2cpp::Il2CppObject* arg2) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x1174000)(this, format, arg0, arg1, arg2); } // 0x1174000
        System::Text::StringBuilder* AppendFormat(cs::string* format, cs::array<il2cpp::Il2CppObject>* args) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, cs::array<il2cpp::Il2CppObject>*)>(0x1174140)(this, format, args); } // 0x1174140
        System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, cs::string* format, il2cpp::Il2CppObject* arg0) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, System::IFormatProvider*, cs::string*, il2cpp::Il2CppObject*)>(0x11740f0)(this, provider, format, arg0); } // 0x11740f0
        System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, cs::string* format, il2cpp::Il2CppObject* arg0, il2cpp::Il2CppObject* arg1) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, System::IFormatProvider*, cs::string*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x11741e0)(this, provider, format, arg0, arg1); } // 0x11741e0
        System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, cs::string* format, il2cpp::Il2CppObject* arg0, il2cpp::Il2CppObject* arg1, il2cpp::Il2CppObject* arg2) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, System::IFormatProvider*, cs::string*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*, il2cpp::Il2CppObject*)>(0x11740a0)(this, provider, format, arg0, arg1, arg2); } // 0x11740a0
        System::Text::StringBuilder* AppendFormat(System::IFormatProvider* provider, cs::string* format, cs::array<il2cpp::Il2CppObject>* args) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, System::IFormatProvider*, cs::string*, cs::array<il2cpp::Il2CppObject>*)>(0x1174270)(this, provider, format, args); } // 0x1174270
        void FormatError() { return il2cpp::call<void(*)(StringBuilder*)>(0x1174d70)(this); } // 0x1174d70
        System::Text::StringBuilder* AppendFormatHelper(System::IFormatProvider* provider, cs::string* format, System::ParamsArray args) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, System::IFormatProvider*, cs::string*, System::ParamsArray)>(0x1173a00)(this, provider, format, args); } // 0x1173a00
        System::Text::StringBuilder* Replace(cs::string* oldValue, cs::string* newValue) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, cs::string*)>(0x1176140)(this, oldValue, newValue); } // 0x1176140
        System::Text::StringBuilder* Replace(cs::string* oldValue, cs::string* newValue, int32_t startIndex, int32_t count) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, cs::string*, cs::string*, int32_t, int32_t)>(0x1175d80)(this, oldValue, newValue, startIndex, count); } // 0x1175d80
        System::Text::StringBuilder* Append(Typeid_15 value, int32_t valueCount) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, Typeid_15, int32_t)>(0x11746e0)(this, value, valueCount); } // 0x11746e0
        void Insert(int32_t index, Typeid_15 value, int32_t valueCount) { return il2cpp::call<void(*)(StringBuilder*, int32_t, Typeid_15, int32_t)>(0x1174e70)(this, index, value, valueCount); } // 0x1174e70
        void ReplaceAllInChunk(cs::array<int32_t>* replacements, int32_t replacementsCount, System::Text::StringBuilder* sourceChunk, int32_t removeCount, cs::string* value) { return il2cpp::call<void(*)(StringBuilder*, cs::array<int32_t>*, int32_t, System::Text::StringBuilder*, int32_t, cs::string*)>(0x1175a90)(this, replacements, replacementsCount, sourceChunk, removeCount, value); } // 0x1175a90
        bool StartsWith(System::Text::StringBuilder* chunk, int32_t indexInChunk, int32_t count, cs::string* value) { return il2cpp::call<bool(*)(StringBuilder*, System::Text::StringBuilder*, int32_t, int32_t, cs::string*)>(0x1176170)(this, chunk, indexInChunk, count, value); } // 0x1176170
        void ReplaceInPlaceAtChunk(System::Text::StringBuilder* chunk, int32_t indexInChunk, Typeid_15 value, int32_t count) { return il2cpp::call<void(*)(StringBuilder*, System::Text::StringBuilder*, int32_t, Typeid_15, int32_t)>(0x1175bf0)(this, chunk, indexInChunk, value, count); } // 0x1175bf0
        void ThreadSafeCopy(Typeid_15 sourcePtr, cs::array<char>* destination, int32_t destinationIndex, int32_t count) { return il2cpp::call<void(*)(StringBuilder*, Typeid_15, cs::array<char>*, int32_t, int32_t)>(0x11763d0)(this, sourcePtr, destination, destinationIndex, count); } // 0x11763d0
        void ThreadSafeCopy(cs::array<char>* source, int32_t sourceIndex, cs::array<char>* destination, int32_t destinationIndex, int32_t count) { return il2cpp::call<void(*)(StringBuilder*, cs::array<char>*, int32_t, cs::array<char>*, int32_t, int32_t)>(0x1176320)(this, source, sourceIndex, destination, destinationIndex, count); } // 0x1176320
        System::Text::StringBuilder* FindChunkForIndex(int32_t index) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, int32_t)>(0x1174d40)(this, index); } // 0x1174d40
        System::Text::StringBuilder* Next(System::Text::StringBuilder* chunk) { return il2cpp::call<System::Text::StringBuilder*(*)(StringBuilder*, System::Text::StringBuilder*)>(0x1175740)(this, chunk); } // 0x1175740
        void ExpandByABlock(int32_t minBlockCharCount) { return il2cpp::call<void(*)(StringBuilder*, int32_t)>(0x1174bb0)(this, minBlockCharCount); } // 0x1174bb0
        void ctor(System::Text::StringBuilder* from) { return il2cpp::call<void(*)(StringBuilder*, System::Text::StringBuilder*)>(0x11767c0)(this, from); } // 0x11767c0
        void MakeRoom(int32_t index, int32_t count, System::Text::StringBuilder* chunk, int32_t indexInChunk, bool doneMoveFollowingChars) { return il2cpp::call<void(*)(StringBuilder*, int32_t, int32_t, System::Text::StringBuilder*, int32_t, bool)>(0x11753a0)(this, index, count, chunk, indexInChunk, doneMoveFollowingChars); } // 0x11753a0
        void ctor(int32_t size, int32_t maxCapacity, System::Text::StringBuilder* previousBlock) { return il2cpp::call<void(*)(StringBuilder*, int32_t, int32_t, System::Text::StringBuilder*)>(0x1176860)(this, size, maxCapacity, previousBlock); } // 0x1176860
        void Remove(int32_t startIndex, int32_t count, System::Text::StringBuilder* chunk, int32_t indexInChunk) { return il2cpp::call<void(*)(StringBuilder*, int32_t, int32_t, System::Text::StringBuilder*, int32_t)>(0x1175780)(this, startIndex, count, chunk, indexInChunk); } // 0x1175780

    };

}
namespace ark {

        template<> struct meta_statics<System::Text::StringBuilder> {
        };

}

