//au//PlayerTask
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/MonoBehaviour.hpp>
struct PlayerControl;
#include <au/MapArea.hpp>
#include <au/TaskType.hpp>
struct Minigame;
#include <au/UnityEngine/Vector2.hpp>
struct Console;
namespace System::Text{ struct StringBuilder; }
namespace System::Collections::Generic{ template <class> struct List; }
namespace System{ template <class...> struct Func; }

struct PlayerTask : ark::meta<PlayerTask, UnityEngine::MonoBehaviour>
{
ark_meta("", "PlayerTask", "");

    // Fields

    int _MEFBBNAKOLC_k__BackingField; // 0xC
    unsigned int _IJICLFLEGCN_k__BackingField; // 0x10
    PlayerControl* _GGMHOFENMPN_k__BackingField; // 0x14
    MapArea StartAt; // 0x18
    TaskType TaskType; // 0x1C
    Minigame* MinigamePrefab; // 0x20
    bool HasLocation; // 0x24
    bool LocationDirty; // 0x25

    // Methods

    int get_Index(); // 0x266110 // public 
    void AFGFBBPEGPP(int IKGGJMHPDGH); // 0x2664D0 // internal 
    unsigned int get_Id(); // 0x2664A0 // public 
    void GJAPPOMNAIO(unsigned int IKGGJMHPDGH); // 0x2664E0 // internal 
    PlayerControl* get_Owner(); // 0x266490 // public 
    void IAIHFLJJGNN(PlayerControl* IKGGJMHPDGH); // 0x2664C0 // internal 

    UnityEngine::Vector2 get_Location(); // 0x19B3C80 // public 

    void OnRemove(); // 0x267200 // public virtual 

    bool KHKMNLJDBIL(PlayerTask* OHNDOPBOBAG); // 0x19B3B30 // internal static 
    System::Collections::Generic::List<Console>* KHJLEBHOOHH(); // 0x19B3A40 // protected 
    // bool PlayerHasTaskOfType(PlayerControl* ELBJKBMNPFE); // 0x0 // public static 
    System::Collections::Generic::List<UnityEngine::Vector2>* BPFKOODAPOI(); // 0x19B3720 // protected 
    Console* GLKLIGEDACO(System::Func<Console, bool>* KBBFFPJHMBG); // 0x19B3990 // protected 
    Console* EPJJLILEGHJ(); // 0x19B3880 // protected 
    Minigame* GetMinigamePrefab(); // 0x28DD90 // public virtual 
    bool BAOPFGNPADO(PlayerControl* CJFDNCENCEM); // 0x19B3640 // protected static 
    void ctor(); // 0x19B3C60 // protected 

};


namespace ark
{
template<>
struct meta_statics<PlayerTask>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&PlayerTask::get_Index> () { return 0x266110; }
    template<> inline uintptr_t rva<&PlayerTask::AFGFBBPEGPP> () { return 0x2664D0; }
    template<> inline uintptr_t rva<&PlayerTask::get_Id> () { return 0x2664A0; }
    template<> inline uintptr_t rva<&PlayerTask::GJAPPOMNAIO> () { return 0x2664E0; }
    template<> inline uintptr_t rva<&PlayerTask::get_Owner> () { return 0x266490; }
    template<> inline uintptr_t rva<&PlayerTask::IAIHFLJJGNN> () { return 0x2664C0; }
    template<> inline uintptr_t rva<&PlayerTask::get_Location> () { return 0x19B3C80; }
    template<> inline uintptr_t rva<&PlayerTask::OnRemove> () { return 0x267200; }
    template<> inline uintptr_t rva<&PlayerTask::KHKMNLJDBIL> () { return 0x19B3B30; }
    template<> inline uintptr_t rva<&PlayerTask::KHJLEBHOOHH> () { return 0x19B3A40; }
    template<> inline uintptr_t rva<&PlayerTask::BPFKOODAPOI> () { return 0x19B3720; }
    template<> inline uintptr_t rva<&PlayerTask::GLKLIGEDACO> () { return 0x19B3990; }
    template<> inline uintptr_t rva<&PlayerTask::EPJJLILEGHJ> () { return 0x19B3880; }
    template<> inline uintptr_t rva<&PlayerTask::GetMinigamePrefab> () { return 0x28DD90; }
    template<> inline uintptr_t rva<&PlayerTask::BAOPFGNPADO> () { return 0x19B3640; }
    template<> inline uintptr_t rva<&PlayerTask::ctor> () { return 0x19B3C60; }
} // ark::method_info