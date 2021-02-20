#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/Unity/Color.hpp>
#include <autogen/InnerNet/InnerNetObject.hpp>

namespace Unity
{
    struct TextRenderer : ark::meta<TextRenderer, InnerNet::InnerNetObject>
    {
        static constexpr auto internal_name = "OOCJALPKPEP";
        
        struct Transform* ButtonParent; // 0x24
        struct AELDHKGBIFD* TitleText; // 0x28
        struct Vector3* VoteOrigin; // 0x2C
        struct Vector3* VoteButtonOffsets; // 0x38
        struct Vector3* FGJMDFDIKEK; // 0x44
        struct Vector3* IOHLPLMJHIB; // 0x50
        struct HDJGDMFCHDN* SkipVoteButton; // 0x5C
        il2cpp::array<PlayerVoteArea>[] HBDFFAHBIGI; // 0x60
    };
}