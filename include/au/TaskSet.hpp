#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/TaskTypes.hpp>
#include <au/IntRange.hpp>
#include <au/PlayerTask.hpp>

namespace 
{
    struct TaskSet : ark::meta<TaskSet, il2cpp::Il2CppObject>
    {
        au::TaskTypes taskType; // 0x8
        au::IntRange* taskStep; // 0xc

        bool Contains(au::PlayerTask* t) { return il2cpp::call<bool(*)(TaskSet*, au::PlayerTask*)>(0x726cf0)(this, t); } // 0x726cf0
        void ctor() { return il2cpp::call<void(*)(TaskSet*)>(0x726d40)(this); } // 0x726d40

    };

}
namespace ark {

        template<> struct meta_statics<::TaskSet> {
        };

}

