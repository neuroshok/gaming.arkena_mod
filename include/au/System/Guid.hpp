#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Security/Cryptography/RandomNumberGenerator.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/System/Guid.hpp>
#include <cs/string.hpp>

namespace System
{
    struct Guid : ark::meta<Guid>
    {
        static System::Guid Empty(); // 0x0
        static il2cpp::Il2CppObject* _rngAccess(); // 0x10
        static System::Security::Cryptography::RandomNumberGenerator* _rng(); // 0x14
        static System::Security::Cryptography::RandomNumberGenerator* _fastRng(); // 0x18
        int32_t _a; // 0x8
        int16_t _b; // 0xc
        int16_t _c; // 0xe
        uint8_t _d; // 0x10
        uint8_t _e; // 0x11
        uint8_t _f; // 0x12
        uint8_t _g; // 0x13
        uint8_t _h; // 0x14
        uint8_t _i; // 0x15
        uint8_t _j; // 0x16
        uint8_t _k; // 0x17

        void ctor(cs::array<uint8_t>* b) { return il2cpp::call<void(*)(Guid*, cs::array<uint8_t>*)>(0x1865f0)(this, b); } // 0x1865f0
        void ctor(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) { return il2cpp::call<void(*)(Guid*, uint32_t, uint16_t, uint16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(0x186490)(this, a, b, c, d, e, f, g, h, i, j, k); } // 0x186490
        void ctor(int32_t a, int16_t b, int16_t c, cs::array<uint8_t>* d) { return il2cpp::call<void(*)(Guid*, int32_t, int16_t, int16_t, cs::array<uint8_t>*)>(0x1864e0)(this, a, b, c, d); } // 0x1864e0
        void ctor(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k) { return il2cpp::call<void(*)(Guid*, int32_t, int16_t, int16_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t)>(0x186490)(this, a, b, c, d, e, f, g, h, i, j, k); } // 0x186490
        void ctor(cs::string* g) { return il2cpp::call<void(*)(Guid*, cs::string*)>(0x1864f0)(this, g); } // 0x1864f0
        System::Guid Parse(cs::string* input) { return il2cpp::call<System::Guid(*)(Guid*, cs::string*)>(0x156fe60)(this, input); } // 0x156fe60
        bool TryParse(cs::string* input, System::Guid result) { return il2cpp::call<bool(*)(Guid*, cs::string*, System::Guid)>(0x1571d60)(this, input, result); } // 0x1571d60
        bool TryParseExact(cs::string* input, cs::string* format, System::Guid result) { return il2cpp::call<bool(*)(Guid*, cs::string*, cs::string*, System::Guid)>(0x1570cd0)(this, input, format, result); } // 0x1570cd0
        bool TryParseGuid(cs::string* g, System::Guid+GuidStyles flags, System::Guid+GuidResult result) { return il2cpp::call<bool(*)(Guid*, cs::string*, System::Guid+GuidStyles, System::Guid+GuidResult)>(0x1571af0)(this, g, flags, result); } // 0x1571af0
        bool TryParseGuidWithHexPrefix(cs::string* guidString, System::Guid+GuidResult result) { return il2cpp::call<bool(*)(Guid*, cs::string*, System::Guid+GuidResult)>(0x1571160)(this, guidString, result); } // 0x1571160
        bool TryParseGuidWithNoStyle(cs::string* guidString, System::Guid+GuidResult result) { return il2cpp::call<bool(*)(Guid*, cs::string*, System::Guid+GuidResult)>(0x15717b0)(this, guidString, result); } // 0x15717b0
        bool TryParseGuidWithDashes(cs::string* guidString, System::Guid+GuidResult result) { return il2cpp::call<bool(*)(Guid*, cs::string*, System::Guid+GuidResult)>(0x1570e40)(this, guidString, result); } // 0x1570e40
        bool StringToShort(cs::string* str, int32_t requiredLength, int32_t flags, int16_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, int32_t, int32_t, int16_t, System::Guid+GuidResult)>(0x1570470)(this, str, requiredLength, flags, result, parseResult); } // 0x1570470
        bool StringToShort(cs::string* str, Typeid_15 parsePos, int32_t requiredLength, int32_t flags, int16_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, Typeid_15, int32_t, int32_t, int16_t, System::Guid+GuidResult)>(0x15703f0)(this, str, parsePos, requiredLength, flags, result, parseResult); } // 0x15703f0
        bool StringToInt(cs::string* str, int32_t requiredLength, int32_t flags, int32_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, int32_t, int32_t, int32_t, System::Guid+GuidResult)>(0x156ff50)(this, str, requiredLength, flags, result, parseResult); } // 0x156ff50
        bool StringToInt(cs::string* str, int32_t parsePos, int32_t requiredLength, int32_t flags, int32_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, int32_t, int32_t, int32_t, int32_t, System::Guid+GuidResult)>(0x156ffb0)(this, str, parsePos, requiredLength, flags, result, parseResult); } // 0x156ffb0
        bool StringToInt(cs::string* str, Typeid_15 parsePos, int32_t requiredLength, int32_t flags, int32_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, Typeid_15, int32_t, int32_t, int32_t, System::Guid+GuidResult)>(0x1570000)(this, str, parsePos, requiredLength, flags, result, parseResult); } // 0x1570000
        bool StringToLong(cs::string* str, int32_t parsePos, int32_t flags, int64_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, int32_t, int32_t, int64_t, System::Guid+GuidResult)>(0x15703a0)(this, str, parsePos, flags, result, parseResult); } // 0x15703a0
        bool StringToLong(cs::string* str, Typeid_15 parsePos, int32_t flags, int64_t result, System::Guid+GuidResult parseResult) { return il2cpp::call<bool(*)(Guid*, cs::string*, Typeid_15, int32_t, int64_t, System::Guid+GuidResult)>(0x1570200)(this, str, parsePos, flags, result, parseResult); } // 0x1570200
        cs::string* EatAllWhitespace(cs::string* str) { return il2cpp::call<cs::string*(*)(Guid*, cs::string*)>(0x156f700)(this, str); } // 0x156f700
        bool IsHexPrefix(cs::string* str, int32_t i) { return il2cpp::call<bool(*)(Guid*, cs::string*, int32_t)>(0x156fb80)(this, str, i); } // 0x156fb80
        cs::array<uint8_t>* ToByteArray() { return il2cpp::call<cs::array<uint8_t>*(*)(Guid*)>(0x186410)(this); } // 0x186410
        int32_t GetResult(uint32_t me, uint32_t them) { return il2cpp::call<int32_t(*)(Guid*, uint32_t, uint32_t)>(0x1863f0)(this, me, them); } // 0x1863f0
        bool op_Equality(System::Guid a, System::Guid b) { return il2cpp::call<bool(*)(Guid*, System::Guid, System::Guid)>(0x1572410)(this, a, b); } // 0x1572410
        bool op_Inequality(System::Guid a, System::Guid b) { return il2cpp::call<bool(*)(Guid*, System::Guid, System::Guid)>(0x15724a0)(this, a, b); } // 0x15724a0
        cs::string* ToString(cs::string* format) { return il2cpp::call<cs::string*(*)(Guid*, cs::string*)>(0x186460)(this, format); } // 0x186460
        char HexToChar(int32_t a) { return il2cpp::call<char(*)(Guid*, int32_t)>(0x156f9e0)(this, a); } // 0x156f9e0
        int32_t HexsToChars(Typeid_15 guidChars, int32_t offset, int32_t a, int32_t b) { return il2cpp::call<int32_t(*)(Guid*, Typeid_15, int32_t, int32_t, int32_t)>(0x156fa00)(this, guidChars, offset, a, b); } // 0x156fa00
        int32_t HexsToChars(Typeid_15 guidChars, int32_t offset, int32_t a, int32_t b, bool hex) { return il2cpp::call<int32_t(*)(Guid*, Typeid_15, int32_t, int32_t, int32_t, bool)>(0x156fa60)(this, guidChars, offset, a, b, hex); } // 0x156fa60
        System::Guid NewGuid() { return il2cpp::call<System::Guid(*)(Guid*)>(0x156fc60)(this); } // 0x156fc60
        void cctor() { return il2cpp::call<void(*)(Guid*)>(0x1571e20)(this); } // 0x1571e20

    };

}
namespace ark {

        template<> struct meta_statics<System::Guid> {
        System::Guid Empty; // 0x0
        il2cpp::Il2CppObject* _rngAccess; // 0x10
        System::Security::Cryptography::RandomNumberGenerator* _rng; // 0x14
        System::Security::Cryptography::RandomNumberGenerator* _fastRng; // 0x18
        };

}



System::Guid System::Guid::Empty() { return statics()->Empty; }; // 0x0

il2cpp::Il2CppObject* System::Guid::_rngAccess() { return statics()->_rngAccess; }; // 0x10

System::Security::Cryptography::RandomNumberGenerator* System::Guid::_rng() { return statics()->_rng; }; // 0x14

System::Security::Cryptography::RandomNumberGenerator* System::Guid::_fastRng() { return statics()->_fastRng; }; // 0x18