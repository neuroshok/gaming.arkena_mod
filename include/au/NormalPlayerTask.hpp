#pragma once
#include <ark/class.hpp>

#include <au/PlayerTask.hpp>
#include <au/NormalPlayerTask/TaskLength.hpp>
#include <au/NormalPlayerTask/TimerState.hpp>
#include <cs/array.hpp>
#include <au/ArrowBehaviour.hpp>
#include <au/TaskTypes.hpp>
#include <au/Console.hpp>
#include <au/TaskSet.hpp>
#include <au/TaskTypes.hpp>

namespace 
{
    struct NormalPlayerTask : ark::meta<NormalPlayerTask, au::PlayerTask>
    {
        NormalPlayerTask+TaskLength Length; // 0x28
        int32_t taskStep; // 0x2c
        int32_t MaxStep; // 0x30
        bool ShowTaskStep; // 0x34
        bool ShowTaskTimer; // 0x35
        NormalPlayerTask+TimerState TimerStarted; // 0x38
        float TaskTimer; // 0x3c
        cs::array<uint8_t>* Data; // 0x40
        au::ArrowBehaviour* Arrow; // 0x44
        bool arrowSuspended; // 0x48

        void NextStep() { return il2cpp::call<void(*)(NormalPlayerTask*)>(0x82d3a0)(this); } // 0x82d3a0
        bool ShouldYellowText() { return il2cpp::call<bool(*)(NormalPlayerTask*)>(0x82d860)(this); } // 0x82d860
        System::Collections::Generic::List<au::Console>* PickRandomConsoles(au::TaskTypes taskType, cs::array<uint8_t>* consoleIds) { return il2cpp::call<System::Collections::Generic::List<au::Console>*(*)(NormalPlayerTask*, au::TaskTypes, cs::array<uint8_t>*)>(0x82d670)(this, taskType, consoleIds); } // 0x82d670
        void ctor() { return il2cpp::call<void(*)(NormalPlayerTask*)>(0x82e330)(this); } // 0x82e330
        bool _Initialize_b__16_0(au::Console* v) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::Console*)>(0x82d8b0)(this, v); } // 0x82d8b0
        bool _UpdateArrow_b__18_2(au::Console* c) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::Console*)>(0x82d8f0)(this, c); } // 0x82d8f0
        bool _UpdateArrow_b__18_3(au::Console* c) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::Console*)>(0x82d970)(this, c); } // 0x82d970
        bool _ValidConsole_b__20_0(au::TaskSet* set) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::TaskSet*)>(0x640810)(this, set); } // 0x640810
        bool _ValidConsole_b__20_1(au::TaskSet* set) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::TaskSet*)>(0x82d9b0)(this, set); } // 0x82d9b0
        bool _ValidConsole_b__20_2(au::TaskTypes tt) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::TaskTypes)>(0x82da10)(this, tt); } // 0x82da10
        bool _ValidConsole_b__20_3(au::TaskTypes tt) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::TaskTypes)>(0x82da10)(this, tt); } // 0x82da10
        bool _ValidConsole_b__20_4(au::TaskSet* set) { return il2cpp::call<bool(*)(NormalPlayerTask*, au::TaskSet*)>(0x640810)(this, set); } // 0x640810

    };

}
namespace ark {

        template<> struct meta_statics<::NormalPlayerTask> {
        };

}

