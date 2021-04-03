//au//Sprites
#pragma once
#include <ark/class.hpp>
#include <au/Sprites.hpp>

enum class Sprites : int
{


    // Fields

    
    LocalButton = 0,
    OnlineButton = 1,
    HowToPlayButton = 2,
    FreeplayButton = 3,
    HostHeader = 4,
    PublicHeader = 5,
    PrivateHeader = 6,
    KillButton = 7,
    ReportButton = 8,
    UseButton = 9,
    SabotageButton = 10,
    CamsButton = 11,
    AdminMapButton = 12,
    MIRAAdminButton = 13,
    PolusAdminButton = 14,
    DoorLogsButton = 15,
    VentButton = 16,
    VitalsButton = 17,
    StartButton = 18,
    PublicButton = 19,
    PrivateButton = 20,
    PlayAgainButton = 21,
    ExitRoomButton = 22,
    OptionsButton = 23,
    DiscussHeader = 24,
    ShhhHeader = 25,
    IVotedBadge = 26,
    SkipVoteButton = 27,
    MiraTaskBeginButton = 28,
    SkippedVoteTallyHeader = 29,
    ShopSkinsBanner = 30,
    ShopHatsBanner = 31,
    ShopPetsBanner = 32,
    EmergencyMeetingText = 33,
    AnnouncementsText = 34,
    DeadBodyReportedText = 35,
    ProceedButton = 36,
    BanButton = 37,
    KickButton = 38,

};


namespace ark
{
template<>
struct meta_statics<Sprites>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info