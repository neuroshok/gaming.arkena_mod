#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/string.hpp>
#include <au/AmongUs/GameOptions/RoleTypes.hpp>
#include <au/System/Nullable.hpp>
#include <au/System/Collections/Generic/Dictionary.hpp>
#include <au/RoleBehaviour.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/PlayerControl.hpp>
#include <cs/string.hpp>
#include <au/PlayerControl.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/PlayerOutfitType.hpp>

namespace 
{
    struct GameData_PlayerInfo : ark::meta<GameData_PlayerInfo, il2cpp::Il2CppObject>
    {
        uint8_t PlayerId; // 0x8
        cs::string* FriendCode; // 0xc
        cs::string* Puid; // 0x10
        AmongUs::GameOptions::RoleTypes RoleType; // 0x14
        System::Nullable<AmongUs::GameOptions::RoleTypes>* RoleWhenAlive; // 0x16
        System::Collections::Generic::Dictionary<au::PlayerOutfitType, GameData+PlayerOutfitNESTEDTYPE>* Outfits; // 0x1c
        uint32_t PlayerLevel; // 0x20
        bool Disconnected; // 0x24
        au::RoleBehaviour* Role; // 0x28
        System::Collections::Generic::List<GameData+TaskInfoNESTEDTYPE>* Tasks; // 0x2c
        bool IsDead; // 0x30
        au::PlayerControl* _object; // 0x34

        bool get_IsIncomplete() { return il2cpp::call<bool(*)(GameData_PlayerInfo*)>(0x5335b0)(this); } // 0x5335b0
        au::PlayerControl* get_Object() { return il2cpp::call<au::PlayerControl*(*)(GameData_PlayerInfo*)>(0x533700)(this); } // 0x533700
        GameData+PlayerOutfit*NESTEDTYPE get_DefaultOutfit() { return il2cpp::call<GameData+PlayerOutfit*NESTEDTYPE(*)(GameData_PlayerInfo*)>(0x533560)(this); } // 0x533560
        cs::string* get_PlayerName() { return il2cpp::call<cs::string*(*)(GameData_PlayerInfo*)>(0x5337f0)(this); } // 0x5337f0
        void set_PlayerName(cs::string* value) { return il2cpp::call<void(*)(GameData_PlayerInfo*, cs::string*)>(0x533810)(this, value); } // 0x533810
        cs::string* get_ColorName() { return il2cpp::call<cs::string*(*)(GameData_PlayerInfo*)>(0x533540)(this); } // 0x533540
        void ctor(uint8_t playerId) { return il2cpp::call<void(*)(GameData_PlayerInfo*, uint8_t)>(0x5332f0)(this, playerId); } // 0x5332f0
        void ctor(uint8_t playerId, cs::string* friendCode, cs::string* puid) { return il2cpp::call<void(*)(GameData_PlayerInfo*, uint8_t, cs::string*, cs::string*)>(0x533480)(this, playerId, friendCode, puid); } // 0x533480
        void ctor(au::PlayerControl* pc) { return il2cpp::call<void(*)(GameData_PlayerInfo*, au::PlayerControl*)>(0x5333a0)(this, pc); } // 0x5333a0
        void Serialize(Hazel::MessageWriter* writer) { return il2cpp::call<void(*)(GameData_PlayerInfo*, Hazel::MessageWriter*)>(0x532ef0)(this, writer); } // 0x532ef0
        void Deserialize(Hazel::MessageReader* reader) { return il2cpp::call<void(*)(GameData_PlayerInfo*, Hazel::MessageReader*)>(0x532860)(this, reader); } // 0x532860
        cs::string* GetPlayerName(au::PlayerOutfitType outfitType) { return il2cpp::call<cs::string*(*)(GameData_PlayerInfo*, au::PlayerOutfitType)>(0x532e00)(this, outfitType); } // 0x532e00
        cs::string* GetPlayerColorString(au::PlayerOutfitType outfitType) { return il2cpp::call<cs::string*(*)(GameData_PlayerInfo*, au::PlayerOutfitType)>(0x532c20)(this, outfitType); } // 0x532c20
        GameData+TaskInfo*NESTEDTYPE FindTaskById(uint32_t taskId) { return il2cpp::call<GameData+TaskInfo*NESTEDTYPE(*)(GameData_PlayerInfo*, uint32_t)>(0x532b70)(this, taskId); } // 0x532b70
        void SetOutfit(au::PlayerOutfitType outfitType, GameData+PlayerOutfit*NESTEDTYPE outfit) { return il2cpp::call<void(*)(GameData_PlayerInfo*, au::PlayerOutfitType, GameData+PlayerOutfit*NESTEDTYPE)>(0x533280)(this, outfitType, outfit); } // 0x533280
        void OnGameStart() { return il2cpp::call<void(*)(GameData_PlayerInfo*)>(0x532ec0)(this); } // 0x532ec0
        void OnGameEnd() { return il2cpp::call<void(*)(GameData_PlayerInfo*)>(0x532e90)(this); } // 0x532e90
        bool _get_Object_b__15_0(au::PlayerControl* p) { return il2cpp::call<bool(*)(GameData_PlayerInfo*, au::PlayerControl*)>(0x5332d0)(this, p); } // 0x5332d0

    };

}
namespace ark {

        template<> struct meta_statics<::GameData_PlayerInfo> {
        };

}

