#pragma once

#include <ark/class.hpp>

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/System/Collections/Generic/List.hpp>
#include <cs/string.hpp>

struct PlayerControl;

// GameData in 2020.12.9s
struct GameData : ark::meta<GameData, InnerNet::InnerNetObject>
{
    ark_meta("", "EGLJNOMOGNP", "");

    struct internal_statics
    {
        GameData* instance;
    };

    // GameData.CAAACHLJJNE in 2020.12.9s
    struct TaskInfo : il2cpp::Il2CppObject {
        // [marker] is PlayerInfo.Tasks
        std::uint32_t Id;
        std::uint8_t TypeId;
        bool Complete;
    };


    // GameData::DCJMABDDJCF in 2020.12.9s
    struct PlayerInfo : il2cpp::Il2CppObject {
        // [marker] is GameData.AllPlayers
        std::uint8_t PlayerId;
        cs::string* PlayerName;
        std::uint8_t ColorId;
        std::uint32_t HatId;
        std::uint32_t PetId;
        std::uint32_t SkinId;
        bool Disconnected;
        System::Collections::Generic::List<TaskInfo>* Tasks;
        bool IsImpostor;
        bool IsDead;
        PlayerControl *_object;
    };

    System::Collections::Generic::List<PlayerInfo>* AllPlayers; // [marker]
    std::int32_t TotalTasks;
    std::int32_t CompletedTasks;
    std::int8_t InvalidPlayerId;
    std::int8_t DisconnectedPlayerId;

    void AKAINHJEDCH(std::int8_t NHOCGFDHKKK, std::uint32_t ADLNPGGEOHF) { return method_call(AKAINHJEDCH, NHOCGFDHKKK, ADLNPGGEOHF); } // 0x5E89E0
    void AddPlayer(PlayerControl* NMEAPOJFNKA) { return method_call(AddPlayer, NMEAPOJFNKA); } // 0x5E8B50
    // virtual // void NMGJBHEMFHL() { return method_call(NMGJBHEMFHL, ); } // 0x5EC840 // Slot: 12
    void GOOAIDODNIC() { return method_call(GOOAIDODNIC, ); } // 0x5EAFA0
    void AKKGEHHEJML(std::int8_t NHOCGFDHKKK, std::uint32_t FHPHKIBKMHO) { return method_call(AKKGEHHEJML, NHOCGFDHKKK, FHPHKIBKMHO); } // 0x5E8A20
    void KOIGKJLJKNI(std::int8_t NHOCGFDHKKK, std::uint32_t DEFPLPHJLBN) { return method_call(KOIGKJLJKNI, NHOCGFDHKKK, DEFPLPHJLBN); } // 0x5EC430
    void UpdatePet(std::int8_t NHOCGFDHKKK, std::uint32_t FHPHKIBKMHO) { return method_call(UpdatePet, NHOCGFDHKKK, FHPHKIBKMHO); } // 0x5EE270
    std::uint8_t JDFPOKGPPOG() { return method_call(JDFPOKGPPOG, ); } // 0x5EBE90
    void JFDPFAOFHKP() { return method_call(JFDPFAOFHKP, ); } // 0x5EBF30
    void KPJKMJOCFEG() { return method_call(KPJKMJOCFEG, ); } // 0x5EC370
    std::int32_t NEFCEMIKKAH() { return method_call(NEFCEMIKKAH, ); } // 0x5ED0D0
    void ADCKJBGPDON() { return method_call(ADCKJBGPDON, ); } // 0x5E8580
    // virtual // bool JHMCPLNHDOD(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(JHMCPLNHDOD, AGLJMGAODDG, BILBBBFMCOB); } // 0x5EC0C0 // Slot: 13
    std::uint8_t KINFDHNKLFJ() { return method_call(KINFDHNKLFJ, ); } // 0x5EC390
    void CALJLOJKDJL(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(CALJLOJKDJL, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5E91B0
    void MPKKDPPJJEG() { return method_call(MPKKDPPJJEG, ); } // 0x5ECE10
    // virtual // void HandleDisconnect() { return method_call(HandleDisconnect, ); } // 0x5EB830 // Slot: 11
    void Awake() { return method_call(Awake, ); } // 0x5E8C10
    GameData::PlayerInfo* GetHost() { return method_call(GetHost, ); } // 0x5EB280
    // virtual // void JJGAHJMAHNI() { return method_call(JJGAHJMAHNI, ); } // 0x5EC290 // Slot: 14
    void FNJBCPAFEEB(PlayerControl* NMEAPOJFNKA, std::uint32_t DEFPLPHJLBN) { return method_call(FNJBCPAFEEB, NMEAPOJFNKA, DEFPLPHJLBN); } // 0x5EAD30
    // virtual // void Deserialize(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(Deserialize, ALMCIJKELCP, BILBBBFMCOB); } // 0x5EA620 // Slot: 9
    void CGBFKHGNGPD(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(CGBFKHGNGPD, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5E9260
    void GHIFOCEDAIJ(struct MessageReader* ALMCIJKELCP) { return method_call(GHIFOCEDAIJ, ALMCIJKELCP); } // 0x5EAE10
    void TutOnlyRemoveTask(std::int8_t NHOCGFDHKKK, std::uint32_t DEFPLPHJLBN) { return method_call(TutOnlyRemoveTask, NHOCGFDHKKK, DEFPLPHJLBN); } // 0x5EE050
    void DGJKOJEOLOP(PlayerControl* NMEAPOJFNKA) { return method_call(DGJKOJEOLOP, NMEAPOJFNKA); } // 0x5EA060
    void CAJNOCGPNEM() { return method_call(CAJNOCGPNEM, ); } // 0x5E9020
    GameData::PlayerInfo* GILHJJNOLBC(std::int8_t HKOIECMDOKL) { return method_call(GILHJJNOLBC, HKOIECMDOKL); } // 0x5EAF00
    // virtual // void LPFCLMKBOKM() { return method_call(LPFCLMKBOKM, ); } // 0x5EC840 // Slot: 15
    void ENCAPDMKCFF(PlayerControl* NMEAPOJFNKA, std::uint32_t DEFPLPHJLBN) { return method_call(ENCAPDMKCFF, NMEAPOJFNKA, DEFPLPHJLBN); } // 0x5EAA20
    std::uint8_t IFEJALCOEMI() { return method_call(IFEJALCOEMI, ); } // 0x5EBAF0
    void EANPAAHKLAG(PlayerControl* NMEAPOJFNKA) { return method_call(EANPAAHKLAG, NMEAPOJFNKA); } // 0x5EA710
    void LIEICKEPEPE() { return method_call(LIEICKEPEPE, ); } // 0x5EC670
    // virtual // void PreSerialize() { return method_call(PreSerialize, ); } // 0x5EDA00 // Slot: 6
    void DGFHNHDOAPE(std::int8_t NHOCGFDHKKK, std::uint32_t ADLNPGGEOHF) { return method_call(DGFHNHDOAPE, NHOCGFDHKKK, ADLNPGGEOHF); } // 0x5EA030
    // virtual // bool Serialize(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(Serialize, AGLJMGAODDG, BILBBBFMCOB); } // 0x5EDE40 // Slot: 8
    void CHLALDMHCNH(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(CHLALDMHCNH, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5E9900
    void CompleteTask(PlayerControl* NMEAPOJFNKA, std::uint32_t DEFPLPHJLBN) { return method_call(CompleteTask, NMEAPOJFNKA, DEFPLPHJLBN); } // 0x5E9C90
    void DOFNAOAGPJG(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(DOFNAOAGPJG, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5EA200
    std::int32_t get_PlayerCount() { return method_call(get_PlayerCount, ); } // 0x5EE350
    bool ALBCGJOMJAF(std::int8_t NHOCGFDHKKK) { return method_call(ALBCGJOMJAF, NHOCGFDHKKK); } // 0x5E8A60
    void OCMLJBMLHHJ(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(OCMLJBMLHHJ, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5ED3A0
    void RpcSetTasks(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(RpcSetTasks, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5EDC40
    // virtual // void LEBIOEAGEIM() { return method_call(LEBIOEAGEIM, ); } // 0x5EC550 // Slot: 16
    // virtual // void NFCBKNBLHJF(PlayerControl* IIEKJBMPELC, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(NFCBKNBLHJF, IIEKJBMPELC, OECOPGMHMKC); } // 0x5ED110 // Slot: 17
    void DMBPIKGNEAG(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(DMBPIKGNEAG, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5EA150
    void LLHDPBJBOKK(std::int8_t NHOCGFDHKKK, std::int8_t HHJCOBKGBFF) { return method_call(LLHDPBJBOKK, NHOCGFDHKKK, HHJCOBKGBFF); } // 0x5EC800
    bool OBEEJIIKHKF(std::int8_t NHOCGFDHKKK) { return method_call(OBEEJIIKHKF, NHOCGFDHKKK); } // 0x5ED2E0
    // virtual // void GPNIBEIKGHB(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(GPNIBEIKGHB, ALMCIJKELCP, BILBBBFMCOB); } // 0x5EB100 // Slot: 18
    void MKCHLPIFBPH() { return method_call(MKCHLPIFBPH, ); } // 0x5ECB10
    // virtual // void OEHBNBAEINB() { return method_call(OEHBNBAEINB, ); } // 0x5EBBD0 // Slot: 19
    void HGJCPAEMPAI(std::int8_t NHOCGFDHKKK, std::uint32_t DEFPLPHJLBN) { return method_call(HGJCPAEMPAI, NHOCGFDHKKK, DEFPLPHJLBN); } // 0x5EB540
    GameData::PlayerInfo* OKOHCOLBIFD(std::int8_t HKOIECMDOKL) { return method_call(OKOHCOLBIFD, HKOIECMDOKL); } // 0x5ED790
    void BGGDAEECGKM() { return method_call(BGGDAEECGKM, ); } // 0x5E8DE0
    // virtual // void AJIJOOJLLHJ() { return method_call(AJIJOOJLLHJ, ); } // 0x5E8900 // Slot: 20
    // virtual // void HandleDisconnect(PlayerControl* IIEKJBMPELC, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(HandleDisconnect, IIEKJBMPELC, OECOPGMHMKC); } // 0x5EB930 // Slot: 10
    void COLGBJBJMOL(std::int8_t NHOCGFDHKKK, std::uint32_t FHPHKIBKMHO) { return method_call(COLGBJBJMOL, NHOCGFDHKKK, FHPHKIBKMHO); } // 0x5E9C50
    void IAONGEMILGN(std::int8_t NHOCGFDHKKK, struct string* MLBHDDBAPLO) { return method_call(IAONGEMILGN, NHOCGFDHKKK, MLBHDDBAPLO); } // 0x5EBAB0
    void MPBAIEBILLM() { return method_call(MPBAIEBILLM, ); } // 0x5ECC80
    void PEOPEFPLPJD(PlayerControl* NMEAPOJFNKA, std::uint32_t DEFPLPHJLBN) { return method_call(PEOPEFPLPJD, NMEAPOJFNKA, DEFPLPHJLBN); } // 0x5ED880
    void UpdateSkin(std::int8_t NHOCGFDHKKK, std::uint32_t ADLNPGGEOHF) { return method_call(UpdateSkin, NHOCGFDHKKK, ADLNPGGEOHF); } // 0x5EE2B0
    void DIFNEIAJOCJ(std::int8_t NHOCGFDHKKK, std::uint32_t FHPHKIBKMHO) { return method_call(DIFNEIAJOCJ, NHOCGFDHKKK, FHPHKIBKMHO); } // 0x5EA110
    void AFGJBCAOKJB(std::int8_t NHOCGFDHKKK, std::int8_t HHJCOBKGBFF) { return method_call(AFGJBCAOKJB, NHOCGFDHKKK, HHJCOBKGBFF); } // 0x5E8710
    // virtual // void AJCJEHNFLFH(PlayerControl* IIEKJBMPELC, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(AJCJEHNFLFH, IIEKJBMPELC, OECOPGMHMKC); } // 0x5E87E0 // Slot: 21
    GameData::PlayerInfo* GetPlayerById(std::int8_t HKOIECMDOKL) { return method_call(GetPlayerById, HKOIECMDOKL); } // 0x5EB310
    void UpdateColor(std::int8_t NHOCGFDHKKK, std::int8_t HHJCOBKGBFF) { return method_call(UpdateColor, NHOCGFDHKKK, HHJCOBKGBFF); } // 0x5EE0C0
    std::uint8_t GetAvailableId() { return method_call(GetAvailableId, ); } // 0x5EB1E0
    // virtual // bool DPJOIMHAONF(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(DPJOIMHAONF, AGLJMGAODDG, BILBBBFMCOB); } // 0x5EA550 // Slot: 22
    void LPNDNKNIABK(std::int8_t NHOCGFDHKKK, std::uint32_t ADLNPGGEOHF) { return method_call(LPNDNKNIABK, NHOCGFDHKKK, ADLNPGGEOHF); } // 0x5EC900
    std::uint32_t NDEOIKFLGNK(std::int8_t NHOCGFDHKKK) { return method_call(NDEOIKFLGNK, NHOCGFDHKKK); } // 0x5ECFA0
    // virtual // void NGOOGNFEAOJ() { return method_call(NGOOGNFEAOJ, ); } // 0x5EC840 // Slot: 23
    void UpdateGameData(struct MessageReader* ALMCIJKELCP) { return method_call(UpdateGameData, ALMCIJKELCP); } // 0x5EE100
    void EDIMICEGLAB(std::int8_t NHOCGFDHKKK, std::uint32_t BCDGGGHFLCC) { return method_call(EDIMICEGLAB, NHOCGFDHKKK, BCDGGGHFLCC); } // 0x5EA7D0
    bool ContainsBadChars(struct string* MLBHDDBAPLO, bool GEPPDHDDCJC) { return method_call(ContainsBadChars, MLBHDDBAPLO, GEPPDHDDCJC); } // 0x5E9D70
    void AMHGKOOBPOD(std::int8_t NHOCGFDHKKK, struct string* MLBHDDBAPLO) { return method_call(AMHGKOOBPOD, NHOCGFDHKKK, MLBHDDBAPLO); } // 0x5E8B10
    bool RemovePlayer(std::int8_t NHOCGFDHKKK) { return method_call(RemovePlayer, NHOCGFDHKKK); } // 0x5EDB90
    void JLHNIHKPKBC() { return method_call(JLHNIHKPKBC, ); } // 0x5EC370
    // virtual // void JDAAJCLNNEM(PlayerControl* IIEKJBMPELC, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(JDAAJCLNNEM, IIEKJBMPELC, OECOPGMHMKC); } // 0x5EBD70 // Slot: 24
    // virtual // void HandleRpc(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(HandleRpc, HKHMBLJFLMC, ALMCIJKELCP); } // 0x5EBA50 // Slot: 7
    std::int32_t PCBIKOHNAPN() { return method_call(PCBIKOHNAPN, ); } // 0x5ED840
    void BFIMIDNOPPF(std::int8_t NHOCGFDHKKK, struct string* MLBHDDBAPLO) { return method_call(BFIMIDNOPPF, NHOCGFDHKKK, MLBHDDBAPLO); } // 0x5E8DA0
    std::int32_t IIHPGNPCLHD() { return method_call(IIHPGNPCLHD, ); } // 0x5EBB90
    void EKLGKGCKDAK(std::int8_t NHOCGFDHKKK, std::uint32_t DEFPLPHJLBN) { return method_call(EKLGKGCKDAK, NHOCGFDHKKK, DEFPLPHJLBN); } // 0x5EA9B0
    // virtual // void BPBFIKLNOEI() { return method_call(BPBFIKLNOEI, ); } // 0x5E8F40 // Slot: 25
    void IKBEGBOMDHE() { return method_call(IKBEGBOMDHE, ); } // 0x5EBBD0
    // virtual // bool MJHFLKOEJCD(struct MessageWriter* AGLJMGAODDG, bool BILBBBFMCOB) { return method_call(MJHFLKOEJCD, AGLJMGAODDG, BILBBBFMCOB); } // 0x5ECA50 // Slot: 26
    std::uint8_t OJEPKDBCOIL() { return method_call(OJEPKDBCOIL, ); } // 0x5ED6F0
    void UpdateHat(std::int8_t NHOCGFDHKKK, std::uint32_t BCDGGGHFLCC) { return method_call(UpdateHat, NHOCGFDHKKK, BCDGGGHFLCC); } // 0x5EE1F0
    void RecomputeTaskCounts() { return method_call(RecomputeTaskCounts, ); } // 0x5EDA10
    GameData::PlayerInfo* AGANJCLMICF(std::int8_t HKOIECMDOKL) { return method_call(AGANJCLMICF, HKOIECMDOKL); } // 0x5E8740
    // virtual // void DPLGHPAHMAM(std::int8_t HKHMBLJFLMC, struct MessageReader* ALMCIJKELCP) { return method_call(DPLGHPAHMAM, HKHMBLJFLMC, ALMCIJKELCP); } // 0x1D44E0 // Slot: 27
    void MBFEKPNDLHC(std::int8_t NHOCGFDHKKK, std::uint32_t FHPHKIBKMHO) { return method_call(MBFEKPNDLHC, NHOCGFDHKKK, FHPHKIBKMHO); } // 0x5EC930
    void LGICHEIFLIJ(std::int8_t NHOCGFDHKKK, std::uint32_t FHPHKIBKMHO) { return method_call(LGICHEIFLIJ, NHOCGFDHKKK, FHPHKIBKMHO); } // 0x5EC630
    void RpcUpdateGameData() { return method_call(RpcUpdateGameData, ); } // 0x5EDCF0
    void CGBICEBJNHJ(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(CGBICEBJNHJ, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5E95B0
    GameData::PlayerInfo* EFIGDJJGPDO(std::int8_t HKOIECMDOKL) { return method_call(EFIGDJJGPDO, HKOIECMDOKL); } // 0x5EA800
    std::uint8_t HLIKLEMLOND() { return method_call(HLIKLEMLOND, ); } // 0x5EB790
    // virtual // void EJGFCBCBGHN(PlayerControl* IIEKJBMPELC, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(EJGFCBCBGHN, IIEKJBMPELC, OECOPGMHMKC); } // 0x5EA890 // Slot: 28
    void _ctor() { return method_call(_ctor, ); } // 0x5EE2F0
    void FNIABOKADLP(struct string* EFLLLKGLOKH, struct GHMBCKNECJF* OECOPGMHMKC) { return method_call(FNIABOKADLP, EFLLLKGLOKH, OECOPGMHMKC); } // 0x5EAB00
    std::uint32_t TutOnlyAddTask(std::int8_t NHOCGFDHKKK) { return method_call(TutOnlyAddTask, NHOCGFDHKKK); } // 0x5EDF10
    // virtual // void PIBNIEOFGJH() { return method_call(PIBNIEOFGJH, ); } // 0x5EDA00 // Slot: 29
    void UpdateName(std::int8_t NHOCGFDHKKK, struct string* MLBHDDBAPLO) { return method_call(UpdateName, NHOCGFDHKKK, MLBHDDBAPLO); } // 0x5EE230
    void ADEFNBIIPKI(std::int8_t NHOCGFDHKKK, std::uint32_t BCDGGGHFLCC) { return method_call(ADEFNBIIPKI, NHOCGFDHKKK, BCDGGGHFLCC); } // 0x5E86D0
    void DCJBCPPNBLJ(struct MessageReader* ALMCIJKELCP) { return method_call(DCJBCPPNBLJ, ALMCIJKELCP); } // 0x5E9DF0
    // virtual // void MDJBMJOKOGP(struct MessageReader* ALMCIJKELCP, bool BILBBBFMCOB) { return method_call(MDJBMJOKOGP, ALMCIJKELCP, BILBBBFMCOB); } // 0x5EC970 // Slot: 30
    void LPLLIDDOBAE(std::int8_t NHOCGFDHKKK, std::int8_t* NHAFLOEMFKF) { return method_call(LPLLIDDOBAE, NHOCGFDHKKK, NHAFLOEMFKF); } // 0x5EC850
    void LBGMFBJPKGE(PlayerControl* NMEAPOJFNKA) { return method_call(LBGMFBJPKGE, NMEAPOJFNKA); } // 0x5EC4A0
    std::int32_t IPDCMJGBIHJ() { return method_call(IPDCMJGBIHJ, ); } // 0x5EBD30
    void HAMGOKOHAKE(PlayerControl* NMEAPOJFNKA, std::uint32_t DEFPLPHJLBN) { return method_call(HAMGOKOHAKE, NMEAPOJFNKA, DEFPLPHJLBN); } // 0x5EB3C0
};
namespace ark::method_info
{

	method_rva(GameData::AKAINHJEDCH, 0x5E89E0)
	method_rva(GameData::AddPlayer, 0x5E8B50)
	method_rva(GameData::GOOAIDODNIC, 0x5EAFA0)
	method_rva(GameData::AKKGEHHEJML, 0x5E8A20)
	method_rva(GameData::KOIGKJLJKNI, 0x5EC430)
	method_rva(GameData::UpdatePet, 0x5EE270)
	method_rva(GameData::JDFPOKGPPOG, 0x5EBE90)
	method_rva(GameData::JFDPFAOFHKP, 0x5EBF30)
	method_rva(GameData::KPJKMJOCFEG, 0x5EC370)
	method_rva(GameData::NEFCEMIKKAH, 0x5ED0D0)
	method_rva(GameData::ADCKJBGPDON, 0x5E8580)
	method_rva(GameData::KINFDHNKLFJ, 0x5EC390)
	method_rva(GameData::CALJLOJKDJL, 0x5E91B0)
	method_rva(GameData::MPKKDPPJJEG, 0x5ECE10)
	method_rva(GameData::Awake, 0x5E8C10)
	method_rva(GameData::GetHost, 0x5EB280)
	method_rva(GameData::FNJBCPAFEEB, 0x5EAD30)
	method_rva(GameData::CGBFKHGNGPD, 0x5E9260)
	method_rva(GameData::GHIFOCEDAIJ, 0x5EAE10)
	method_rva(GameData::TutOnlyRemoveTask, 0x5EE050)
	method_rva(GameData::DGJKOJEOLOP, 0x5EA060)
	method_rva(GameData::CAJNOCGPNEM, 0x5E9020)
	method_rva(GameData::GILHJJNOLBC, 0x5EAF00)
	method_rva(GameData::ENCAPDMKCFF, 0x5EAA20)
	method_rva(GameData::IFEJALCOEMI, 0x5EBAF0)
	method_rva(GameData::EANPAAHKLAG, 0x5EA710)
	method_rva(GameData::LIEICKEPEPE, 0x5EC670)
	method_rva(GameData::DGFHNHDOAPE, 0x5EA030)
	method_rva(GameData::CHLALDMHCNH, 0x5E9900)
	method_rva(GameData::CompleteTask, 0x5E9C90)
	method_rva(GameData::DOFNAOAGPJG, 0x5EA200)
	method_rva(GameData::get_PlayerCount, 0x5EE350)
	method_rva(GameData::ALBCGJOMJAF, 0x5E8A60)
	method_rva(GameData::OCMLJBMLHHJ, 0x5ED3A0)
	method_rva(GameData::RpcSetTasks, 0x5EDC40)
	method_rva(GameData::DMBPIKGNEAG, 0x5EA150)
	method_rva(GameData::LLHDPBJBOKK, 0x5EC800)
	method_rva(GameData::OBEEJIIKHKF, 0x5ED2E0)
	method_rva(GameData::MKCHLPIFBPH, 0x5ECB10)
	method_rva(GameData::HGJCPAEMPAI, 0x5EB540)
	method_rva(GameData::OKOHCOLBIFD, 0x5ED790)
	method_rva(GameData::BGGDAEECGKM, 0x5E8DE0)
	method_rva(GameData::COLGBJBJMOL, 0x5E9C50)
	method_rva(GameData::IAONGEMILGN, 0x5EBAB0)
	method_rva(GameData::MPBAIEBILLM, 0x5ECC80)
	method_rva(GameData::PEOPEFPLPJD, 0x5ED880)
	method_rva(GameData::UpdateSkin, 0x5EE2B0)
	method_rva(GameData::DIFNEIAJOCJ, 0x5EA110)
	method_rva(GameData::AFGJBCAOKJB, 0x5E8710)
	method_rva(GameData::GetPlayerById, 0x5EB310)
	method_rva(GameData::UpdateColor, 0x5EE0C0)
	method_rva(GameData::GetAvailableId, 0x5EB1E0)
	method_rva(GameData::LPNDNKNIABK, 0x5EC900)
	method_rva(GameData::NDEOIKFLGNK, 0x5ECFA0)
	method_rva(GameData::UpdateGameData, 0x5EE100)
	method_rva(GameData::EDIMICEGLAB, 0x5EA7D0)
	method_rva(GameData::ContainsBadChars, 0x5E9D70)
	method_rva(GameData::AMHGKOOBPOD, 0x5E8B10)
	method_rva(GameData::RemovePlayer, 0x5EDB90)
	method_rva(GameData::JLHNIHKPKBC, 0x5EC370)
	method_rva(GameData::PCBIKOHNAPN, 0x5ED840)
	method_rva(GameData::BFIMIDNOPPF, 0x5E8DA0)
	method_rva(GameData::IIHPGNPCLHD, 0x5EBB90)
	method_rva(GameData::EKLGKGCKDAK, 0x5EA9B0)
	method_rva(GameData::IKBEGBOMDHE, 0x5EBBD0)
	method_rva(GameData::OJEPKDBCOIL, 0x5ED6F0)
	method_rva(GameData::UpdateHat, 0x5EE1F0)
	method_rva(GameData::RecomputeTaskCounts, 0x5EDA10)
	method_rva(GameData::AGANJCLMICF, 0x5E8740)
	method_rva(GameData::MBFEKPNDLHC, 0x5EC930)
	method_rva(GameData::LGICHEIFLIJ, 0x5EC630)
	method_rva(GameData::RpcUpdateGameData, 0x5EDCF0)
	method_rva(GameData::CGBICEBJNHJ, 0x5E95B0)
	method_rva(GameData::EFIGDJJGPDO, 0x5EA800)
	method_rva(GameData::HLIKLEMLOND, 0x5EB790)
	method_rva(GameData::_ctor, 0x5EE2F0)
	method_rva(GameData::FNIABOKADLP, 0x5EAB00)
	method_rva(GameData::TutOnlyAddTask, 0x5EDF10)
	method_rva(GameData::UpdateName, 0x5EE230)
	method_rva(GameData::ADEFNBIIPKI, 0x5E86D0)
	method_rva(GameData::DCJBCPPNBLJ, 0x5E9DF0)
	method_rva(GameData::LPLLIDDOBAE, 0x5EC850)
	method_rva(GameData::LBGMFBJPKGE, 0x5EC4A0)
	method_rva(GameData::IPDCMJGBIHJ, 0x5EBD30)
	method_rva(GameData::HAMGOKOHAKE, 0x5EB3C0)
}