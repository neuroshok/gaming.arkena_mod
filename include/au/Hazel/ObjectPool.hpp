#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/System/Collections/Concurrent/ConcurrentDictionary.hpp>
#include <au/System/Func.hpp>
#include <au/Hazel/MessageWriter.hpp>

namespace Hazel
{
    template<class... Ts>
struct ObjectPool : ark::meta<ObjectPool<Ts...>, il2cpp::Il2CppObject>
    {
        int32_t numberCreated; // 0x8
        System::Collections::Generic::List<Hazel::MessageWriter>* pool; // 0xc
        System::Collections::Concurrent::ConcurrentDictionary<Hazel::MessageWriter, bool>* inuse; // 0x10
        System::Func<Hazel::MessageWriter>* objectFactory; // 0x14

        void ctor(System::Func<Hazel::MessageWriter>* objectFactory) { return il2cpp::call<void(*)(ObjectPool*, System::Func<Hazel::MessageWriter>*)>(0x123ac60)(this, objectFactory); } // 0x123ac60
        Hazel::MessageWriter* GetObject() { return il2cpp::call<Hazel::MessageWriter*(*)(ObjectPool*)>(0x123a390)(this); } // 0x123a390
        void PutObject(Hazel::MessageWriter* item) { return il2cpp::call<void(*)(ObjectPool*, Hazel::MessageWriter*)>(0x123a810)(this, item); } // 0x123a810

    };

}
namespace ark {

        template<class... Ts>
 struct meta_statics<Hazel::ObjectPool<Ts...>> {
        };

}

