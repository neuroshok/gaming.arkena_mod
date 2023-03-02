#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/Logger/Category.hpp>
#include <cs/string.hpp>
#include <au/Logger/Level.hpp>
#include <il2cpp/core.hpp>
#include <au/System/Exception.hpp>

namespace 
{
    struct Logger : ark::meta<Logger, il2cpp::Il2CppObject>
    {
        static System::Collections::Generic::Dictionary<Logger+Category, cs::string*>* ColorDict(); // 0x0
        static au::Logger* globalInstance(); // 0x4
        Logger+Category category; // 0x8
        cs::string* tag; // 0xc
        Logger+Level level; // 0x10

        void ctor(cs::string* tag, Logger+Level level, Logger+Category category) { return il2cpp::call<void(*)(Logger*, cs::string*, Logger+Level, Logger+Category)>(0x615150)(this, tag, level, category); } // 0x615150
        au::Logger* get_GlobalInstance() { return il2cpp::call<au::Logger*(*)(Logger*)>(0x615470)(this); } // 0x615470
        void OverrideLevel(cs::string* tag, Logger+Level level) { return il2cpp::call<void(*)(Logger*, cs::string*, Logger+Level)>(0x614b60)(this, tag, level); } // 0x614b60
        void SetLogLevel(Logger+Level level) { return il2cpp::call<void(*)(Logger*, Logger+Level)>(0x2c4370)(this, level); } // 0x2c4370
        void Debug(il2cpp::Il2CppObject* message, UnityEngine::Object* context) { return il2cpp::call<void(*)(Logger*, il2cpp::Il2CppObject*, UnityEngine::Object*)>(0x6144d0)(this, message, context); } // 0x6144d0
        void Info(il2cpp::Il2CppObject* message, UnityEngine::Object* context) { return il2cpp::call<void(*)(Logger*, il2cpp::Il2CppObject*, UnityEngine::Object*)>(0x614a50)(this, message, context); } // 0x614a50
        void Warning(il2cpp::Il2CppObject* message, UnityEngine::Object* context) { return il2cpp::call<void(*)(Logger*, il2cpp::Il2CppObject*, UnityEngine::Object*)>(0x614f10)(this, message, context); } // 0x614f10
        void Error(il2cpp::Il2CppObject* message, UnityEngine::Object* context) { return il2cpp::call<void(*)(Logger*, il2cpp::Il2CppObject*, UnityEngine::Object*)>(0x6145e0)(this, message, context); } // 0x6145e0
        void Exception(System::Exception* e) { return il2cpp::call<void(*)(Logger*, System::Exception*)>(0x6146f0)(this, e); } // 0x6146f0
        cs::string* FormatMessageForConsole(il2cpp::Il2CppObject* message) { return il2cpp::call<cs::string*(*)(Logger*, il2cpp::Il2CppObject*)>(0x614800)(this, message); } // 0x614800
        cs::string* FormatMessageForBugReport(il2cpp::Il2CppObject* message) { return il2cpp::call<cs::string*(*)(Logger*, il2cpp::Il2CppObject*)>(0x614750)(this, message); } // 0x614750
        void cctor() { return il2cpp::call<void(*)(Logger*)>(0x615020)(this); } // 0x615020

    };

}
namespace ark {

        template<> struct meta_statics<::Logger> {
        System::Collections::Generic::Dictionary<Logger+Category, cs::string*>* ColorDict; // 0x0
        au::Logger* globalInstance; // 0x4
        };

}



System::Collections::Generic::Dictionary<Logger+Category, cs::string*>* ::Logger::ColorDict() { return statics()->ColorDict; }; // 0x0

au::Logger* ::Logger::globalInstance() { return statics()->globalInstance; }; // 0x4