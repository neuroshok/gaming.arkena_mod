//au//IntroCutscene_Status
#pragma once
#include <ark/class.hpp>
struct object;
struct IntroCutscene;
namespace System::Collections::Generic{ template <class> struct List; }
#include <au/UnityEngine/Color.hpp>
#include <au/UnityEngine/Vector3.hpp>
struct PlayerControl;
struct IntroCutscene_Status : ark::meta<IntroCutscene_Status>
{
ark_meta("", "IntroCutscene_Status", "");

    // Fields

    int __1__state; // 0x8
    IntroCutscene_Status* __2__current; // 0xC
    IntroCutscene* _this; // 0x10
    bool isImpostor; // 0x14
    System::Collections::Generic::List<PlayerControl>* yourTeam; // 0x18
    UnityEngine::Color title_color; // 0x1C
    UnityEngine::Color fade; // 0x2C
    UnityEngine::Color subtitle_color; // 0x3C
    UnityEngine::Vector3 _titlePos_5__5; // 0x4C
    float _timer_5__6; // 0x58

    // Methods

    void ctor(int __1__state); // 0x492620 // public
    void SystemIDisposableDispose(); // 0x46C7A0 // private 
    bool MoveNext(); // 0x17503B0 // private 
    object* SystemCollectionsGenericIEnumerator_SystemObject_get_Current(); // 0x46F3A0 // private
    void SystemCollectionsIEnumeratorReset(); // 0x1750960 // private 
    object* SystemCollectionsIEnumeratorget_Current(); // 0x46F3A0 // private

};


namespace ark
{
template<>
struct meta_statics<IntroCutscene_Status>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&IntroCutscene_Status::ctor> () { return 0x492620; }
    template<> inline uintptr_t rva<&IntroCutscene_Status::SystemIDisposableDispose> () { return 0x46C7A0; }
    template<> inline uintptr_t rva<&IntroCutscene_Status::MoveNext> () { return 0x17503B0; }
    template<> inline uintptr_t rva<&IntroCutscene_Status::SystemCollectionsGenericIEnumerator_SystemObject_get_Current> () { return 0x46F3A0; }
    template<> inline uintptr_t rva<&IntroCutscene_Status::SystemCollectionsIEnumeratorReset> () { return 0x1750960; }
    template<> inline uintptr_t rva<&IntroCutscene_Status::SystemCollectionsIEnumeratorget_Current> () { return 0x46F3A0; }
} // ark::method_info