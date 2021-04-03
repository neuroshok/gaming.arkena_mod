//au//NormalPlayerTask
#pragma once
#include <ark/class.hpp>
#include <au/PlayerTask.hpp>
#include <au/NormalPlayerTask_State.hpp>
#include <cs/array.hpp>
struct ArrowBehaviour;
struct Console;
#include <au/TaskType.hpp>
struct TaskSet;
namespace System::Text{ struct StringBuilder; }

struct NormalPlayerTask : ark::meta<NormalPlayerTask, PlayerTask>
{
ark_meta("", "NormalPlayerTask", "");

    // Fields

    int taskStep; // 0x28
    int MaxStep; // 0x2C
    bool ShowTaskStep; // 0x30
    bool ShowTaskTimer; // 0x31
    NormalPlayerTask_State TimerStarted; // 0x34
    float TaskTimer; // 0x38
    cs::array<uint8_t>* Data; // 0x3C
    ArrowBehaviour* Arrow; // 0x40
    bool IPHIJAIAEEP; // 0x44

    // Methods

    bool IJBPDHLNAIE(Console* EJIJOPLOGDN); // 0x1EA8580 // private 
    void Complete(); // 0x1EA4B70 // public override 
    bool AMMLIMEBKNG(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private
    void DJOCIMBOFMJ(); // 0x1EA4E80 // protected virtual 
    void UpdateArrow(); // 0x1EACCB0 // public virtual 
    void IBMPIEEKDGM(); // 0x1EA7480 // public 
    bool DBPELOGLCAO(); // 0x1EA4B80 // private 
    bool IAFFOICIOOE(Console* EJIJOPLOGDN); // 0x1EA7440 // private 
    bool PAMPHCDNMCE(); // 0x1EAC2F0 // private 
    void MMIDADMHELA(); // 0x1EAAE90 // public virtual 
    void HPLILKKAINK(); // 0x1EA6FE0 // public virtual 
    void GMKEENMMAKB(); // 0x1EA6000 // protected virtual 
    bool FALAELFHEHB(Console* LNCGDHJHIIK); // 0x1EA5020 // private 
    void MAIJFGDOCLM(); // 0x1EA4B70 // public override 
    bool NEJLOLJLFBI(); // 0x1EAB470 // private 
    void HBGIBGPPDCP(); // 0x1EA61D0 // public virtual 
    bool AFNKJOHFPFA(Console* PCIJAAHKMKP); // 0x1EA3E50 // public override 
    bool HMPLIPPJAOF(Console* LNCGDHJHIIK); // 0x1EA6F40 // private 
    bool KHPJDFAKFHF(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    void FixedUpdate(); // 0x1EA5E60 // protected virtual 
    bool MAFFPNOPOAK(Console* LNCGDHJHIIK); // 0x1EA7B90 // private 
    int IFHJLBDJOOH(); // 0x28E1B0 // public override 
    int JCAGGKOOMDK(); // 0x28E1B0 // public override 
    void KBDJIIDGPCD(); // 0x1EA4B70 // public override 
    void PHFGFDLKMHD(); // 0x1EAC340 // public override 
    bool HPGFEALEMBD(); // 0x1EA6FC0 // public override 
    bool LLBNKKLLADL(TaskSet* OPODIHGNFGD); // 0x164A2F0 // private 
    bool EOJLICGNGLM(TaskSet* OPODIHGNFGD); // 0x1649580 // private 
    void ctor(); // 0x1EAD590 // public 
    bool NHFGEEBHLBP(Console* LNCGDHJHIIK); // 0x1EAB4C0 // private 
    void EMCBGJPJHAB(); // 0x1EA4B70 // public override 
    void IIJIJOOHNEH(); // 0x1EA7BD0 // public override 
    bool NNIJNOEPIEJ(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    bool get_IsComplete(); // 0x1EA6FC0 // public override 
    void MGAEDGHDFGM(); // 0x1EAAA30 // public 
    bool DEMEPIKCEHJ(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    int BBBDODAPELF(); // 0x28E1B0 // public override 
    bool JCKCHJGJKNG(Console* LNCGDHJHIIK); // 0x1EA9B60 // private 
    void DMLPJICEGFJ(); // 0x1EA4B70 // public override 
    void COKHOINNJDH(); // 0x1EA4B70 // public override 
    void AEMLOBEHNBJ(); // 0x1EA3B40 // public 
    bool BOPOJFOOKIJ(); // 0x1EA4B20 // private 
    bool BJGAGJHHMII(); // 0x1EA4650 // private 
    void IPHHBGCCHIB(); // 0x1EA85C0 // public override 
    bool AAALLKJLEKI(TaskSet* OPODIHGNFGD); // 0x1649580 // private 
    bool BLOOHABPGPF(Console* PCIJAAHKMKP); // 0x1EA46A0 // public override 
    int KELENFHOPFN(); // 0x28E1B0 // public override 
    bool HJKEMJBFAOM(Console* PCIJAAHKMKP); // 0x1EA6AC0 // public override 
    int KMBLNLMLKOB(); // 0x28E1B0 // public override 
    bool ValidConsole(Console* PCIJAAHKMKP); // 0x1EAD110 // public override 
    int get_TaskStep(); // 0x28E1B0 // public override 
    bool FEDGBGDDHKB(Console* PCIJAAHKMKP); // 0x1EA59E0 // public override 
    void ODONLCIFKON(); // 0x1EAB870 // protected virtual 
    void NextStep(); // 0x1EAB5C0 // public 
    bool IGLNDILGKFP(Console* LNCGDHJHIIK); // 0x1EA7B90 // private 
    bool NGBNOIKIIHK(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    void MJDDCANIILN(); // 0x1EAACE0 // protected virtual 
    void IECOHBMMEKB(); // 0x1EA7730 // public virtual 
    void Initialize(); // 0x1EA8EB0 // public override 
    void IKKJOOGLPIB(); // 0x1EA4B70 // public override 
    bool BHKKBDBDLOI(Console* LNCGDHJHIIK); // 0x1EA45D0 // private 
    bool PKOHLGDIAMC(Console* LNCGDHJHIIK); // 0x1EACC70 // private 
    void MOOOMKBFALI(); // 0x1EAB2F0 // protected virtual 
    void LKBPODAGBHC(); // 0x1EAA0A0 // public override 
    bool HIKMIFNKFBF(Console* PCIJAAHKMKP); // 0x1EA6660 // public override 
    bool BIBDLBEMMCJ(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    bool IIKAGNJIHAC(); // 0x1EA8530 // private 
    void FCAKHHBEIPE(); // 0x1EA5060 // public override 
    bool FJHEENFOGDD(TaskSet* OPODIHGNFGD); // 0x1649580 // private 
    void AppendTaskText(System::Text::StringBuilder* ONDCGCHKHAM); // 0x1EA42F0 // public override 
    bool KIJJGEONHLF(Console* EJIJOPLOGDN); // 0x1EA8580 // private 
    bool NOJEAKOELIH(Console* LNCGDHJHIIK); // 0x1EAB540 // private 
    bool IFJOEKLOEGD(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    void DCBHJLKGJLL(); // 0x1EA4BD0 // public 
    bool MLDNPANCCJE(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    bool AFNCIANEJIA(TaskSet* OPODIHGNFGD); // 0x1EA3DF0 // private 
    bool LJEELHJPAKB(Console* LNCGDHJHIIK); // 0x1EAA020 // private 
    void JBEGNHJHHAC(System::Text::StringBuilder* ONDCGCHKHAM); // 0x1EA9880 // public override 
    bool LFGAGPAPCMM(TaskSet* OPODIHGNFGD); // 0x1648EA0 // private 
    bool LAOGAHFLMAG(Console* PCIJAAHKMKP); // 0x1EA9BA0 // public override 
    bool MBJADFNFMBE(TaskSet* OPODIHGNFGD); // 0x16495C0 // private 
    bool GHMIBCFNNMK(::TaskType HIACPBBKOGE); // 0x1EA42D0 // private 
    void ONNPOPCMPMN(); // 0x1EAB9F0 // public override 
    bool FEHLBPMCCJK(Console* LNCGDHJHIIK); // 0x1EA5020 // private 
    bool GODBDHHJGDD(); // 0x1EA6180 // private 

};


namespace ark
{
template<>
struct meta_statics<NormalPlayerTask>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&NormalPlayerTask::IJBPDHLNAIE> () { return 0x1EA8580; }
    template<> inline uintptr_t rva<&NormalPlayerTask::Complete> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::AMMLIMEBKNG> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::DJOCIMBOFMJ> () { return 0x1EA4E80; }
    template<> inline uintptr_t rva<&NormalPlayerTask::UpdateArrow> () { return 0x1EACCB0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IBMPIEEKDGM> () { return 0x1EA7480; }
    template<> inline uintptr_t rva<&NormalPlayerTask::DBPELOGLCAO> () { return 0x1EA4B80; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IAFFOICIOOE> () { return 0x1EA7440; }
    template<> inline uintptr_t rva<&NormalPlayerTask::PAMPHCDNMCE> () { return 0x1EAC2F0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MMIDADMHELA> () { return 0x1EAAE90; }
    template<> inline uintptr_t rva<&NormalPlayerTask::HPLILKKAINK> () { return 0x1EA6FE0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::GMKEENMMAKB> () { return 0x1EA6000; }
    template<> inline uintptr_t rva<&NormalPlayerTask::FALAELFHEHB> () { return 0x1EA5020; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MAIJFGDOCLM> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::NEJLOLJLFBI> () { return 0x1EAB470; }
    template<> inline uintptr_t rva<&NormalPlayerTask::HBGIBGPPDCP> () { return 0x1EA61D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::AFNKJOHFPFA> () { return 0x1EA3E50; }
    template<> inline uintptr_t rva<&NormalPlayerTask::HMPLIPPJAOF> () { return 0x1EA6F40; }
    template<> inline uintptr_t rva<&NormalPlayerTask::KHPJDFAKFHF> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::FixedUpdate> () { return 0x1EA5E60; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MAFFPNOPOAK> () { return 0x1EA7B90; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IFHJLBDJOOH> () { return 0x28E1B0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::JCAGGKOOMDK> () { return 0x28E1B0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::KBDJIIDGPCD> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::PHFGFDLKMHD> () { return 0x1EAC340; }
    template<> inline uintptr_t rva<&NormalPlayerTask::HPGFEALEMBD> () { return 0x1EA6FC0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::LLBNKKLLADL> () { return 0x164A2F0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::EOJLICGNGLM> () { return 0x1649580; }
    template<> inline uintptr_t rva<&NormalPlayerTask::ctor> () { return 0x1EAD590; }
    template<> inline uintptr_t rva<&NormalPlayerTask::NHFGEEBHLBP> () { return 0x1EAB4C0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::EMCBGJPJHAB> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IIJIJOOHNEH> () { return 0x1EA7BD0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::NNIJNOEPIEJ> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::get_IsComplete> () { return 0x1EA6FC0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MGAEDGHDFGM> () { return 0x1EAAA30; }
    template<> inline uintptr_t rva<&NormalPlayerTask::DEMEPIKCEHJ> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::BBBDODAPELF> () { return 0x28E1B0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::JCKCHJGJKNG> () { return 0x1EA9B60; }
    template<> inline uintptr_t rva<&NormalPlayerTask::DMLPJICEGFJ> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::COKHOINNJDH> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::AEMLOBEHNBJ> () { return 0x1EA3B40; }
    template<> inline uintptr_t rva<&NormalPlayerTask::BOPOJFOOKIJ> () { return 0x1EA4B20; }
    template<> inline uintptr_t rva<&NormalPlayerTask::BJGAGJHHMII> () { return 0x1EA4650; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IPHHBGCCHIB> () { return 0x1EA85C0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::AAALLKJLEKI> () { return 0x1649580; }
    template<> inline uintptr_t rva<&NormalPlayerTask::BLOOHABPGPF> () { return 0x1EA46A0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::KELENFHOPFN> () { return 0x28E1B0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::HJKEMJBFAOM> () { return 0x1EA6AC0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::KMBLNLMLKOB> () { return 0x28E1B0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::ValidConsole> () { return 0x1EAD110; }
    template<> inline uintptr_t rva<&NormalPlayerTask::get_TaskStep> () { return 0x28E1B0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::FEDGBGDDHKB> () { return 0x1EA59E0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::ODONLCIFKON> () { return 0x1EAB870; }
    template<> inline uintptr_t rva<&NormalPlayerTask::NextStep> () { return 0x1EAB5C0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IGLNDILGKFP> () { return 0x1EA7B90; }
    template<> inline uintptr_t rva<&NormalPlayerTask::NGBNOIKIIHK> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MJDDCANIILN> () { return 0x1EAACE0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IECOHBMMEKB> () { return 0x1EA7730; }
    template<> inline uintptr_t rva<&NormalPlayerTask::Initialize> () { return 0x1EA8EB0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IKKJOOGLPIB> () { return 0x1EA4B70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::BHKKBDBDLOI> () { return 0x1EA45D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::PKOHLGDIAMC> () { return 0x1EACC70; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MOOOMKBFALI> () { return 0x1EAB2F0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::LKBPODAGBHC> () { return 0x1EAA0A0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::HIKMIFNKFBF> () { return 0x1EA6660; }
    template<> inline uintptr_t rva<&NormalPlayerTask::BIBDLBEMMCJ> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IIKAGNJIHAC> () { return 0x1EA8530; }
    template<> inline uintptr_t rva<&NormalPlayerTask::FCAKHHBEIPE> () { return 0x1EA5060; }
    template<> inline uintptr_t rva<&NormalPlayerTask::FJHEENFOGDD> () { return 0x1649580; }
    template<> inline uintptr_t rva<&NormalPlayerTask::AppendTaskText> () { return 0x1EA42F0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::KIJJGEONHLF> () { return 0x1EA8580; }
    template<> inline uintptr_t rva<&NormalPlayerTask::NOJEAKOELIH> () { return 0x1EAB540; }
    template<> inline uintptr_t rva<&NormalPlayerTask::IFJOEKLOEGD> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::DCBHJLKGJLL> () { return 0x1EA4BD0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MLDNPANCCJE> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::AFNCIANEJIA> () { return 0x1EA3DF0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::LJEELHJPAKB> () { return 0x1EAA020; }
    template<> inline uintptr_t rva<&NormalPlayerTask::JBEGNHJHHAC> () { return 0x1EA9880; }
    template<> inline uintptr_t rva<&NormalPlayerTask::LFGAGPAPCMM> () { return 0x1648EA0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::LAOGAHFLMAG> () { return 0x1EA9BA0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::MBJADFNFMBE> () { return 0x16495C0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::GHMIBCFNNMK> () { return 0x1EA42D0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::ONNPOPCMPMN> () { return 0x1EAB9F0; }
    template<> inline uintptr_t rva<&NormalPlayerTask::FEHLBPMCCJK> () { return 0x1EA5020; }
    template<> inline uintptr_t rva<&NormalPlayerTask::GODBDHHJGDD> () { return 0x1EA6180; }
} // ark::method_info