#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/UnityEngine/Color.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>

class EndGameManager : UnityEngine::MonoBehaviour, ark::meta<EndGameManager> // TypeDefIndex: 8688
{
    static constexpr auto internal_name = "ABNGEPFHMHP";

    UnityEngine::TextRenderer *WinText; // 0xC
    struct MeshRenderer *BackgroundBar; // 0x10
    struct MeshRenderer *Foreground;    // 0x14
    struct FloatRange *ForegroundRadius;// 0x18
    //SpriteRenderer FrontMost; // 0x1C
    //FOONEKDGJBL PlayerPrefab; // 0x20
    //Sprite GhostSprite; // 0x24
    //public SpriteRenderer PlayAgainButton; // 0x28
    //public SpriteRenderer ExitButton; // 0x2C
    //public AudioClip DisconnectStinger; // 0x30
    //public AudioClip CrewStinger; // 0x34
    //public AudioClip ImpostorStinger; // 0x38
    //public float BaseY; // 0x3C
    //private float ONPGFCPAKPE; // 0x40
};

