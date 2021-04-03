//au//MessageStatus
#pragma once
#include <ark/class.hpp>
#include <au/MessageStatus.hpp>

enum class MessageStatus : int
{


    // Fields

    
    ExitGame = 0,
    GameFull = 1,
    GameStarted = 2,
    GameNotFound = 3,
    IncorrectVersion = 5,
    Banned = 6,
    Kicked = 7,
    Custom = 8,
    InvalidName = 9,
    Hacking = 10,
    NotAuthorized = 11,
    Destroy = 16,
    Error = 17,
    IncorrectGame = 18,
    ServerRequest = 19,
    ServerFull = 20,
    IntentionalLeaving = 208,
    FocusLostBackground = 207,
    FocusLost = 209,
    NewConnection = 210,

};


namespace ark
{
template<>
struct meta_statics<MessageStatus>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info