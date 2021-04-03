//au//MapArea
#pragma once
#include <ark/class.hpp>
#include <au/MapArea.hpp>

enum class MapArea : uint8_t
{


    // Fields

    
    Hallway = 0,
    Storage = 1,
    Cafeteria = 2,
    Reactor = 3,
    UpperEngine = 4,
    Nav = 5,
    Admin = 6,
    Electrical = 7,
    LifeSupp = 8,
    Shields = 9,
    MedBay = 10,
    Security = 11,
    Weapons = 12,
    LowerEngine = 13,
    Comms = 14,
    ShipTasks = 15,
    Doors = 16,
    Sabotage = 17,
    Decontamination = 18,
    Launchpad = 19,
    LockerRoom = 20,
    Laboratory = 21,
    Balcony = 22,
    Office = 23,
    Greenhouse = 24,
    Dropship = 25,
    Decontamination2 = 26,
    Outside = 27,
    Specimens = 28,
    BoilerRoom = 29,
    VaultRoom = 30,
    Cockpit = 31,
    Armory = 32,
    Kitchen = 33,
    ViewingDeck = 34,
    HallOfPortraits = 35,
    CargoBay = 36,
    Ventilation = 37,
    Showers = 38,
    Engine = 39,
    Brig = 40,
    MeetingRoom = 41,
    Records = 42,
    Lounge = 43,
    GapRoom = 44,
    MainHall = 45,
    Medical = 46,

};


namespace ark
{
template<>
struct meta_statics<MapArea>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info