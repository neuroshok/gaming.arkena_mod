#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/UnityEngine/Color.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>
#include <autogen/UnityEngine/Vector3.hpp>
#include <autogen/System/Collections/Generic/List.hpp>

struct IntroCutScene : UnityEngine::MonoBehaviour, ark::meta<IntroCutScene> // TypeDefIndex: 8688
{
    static constexpr auto internal_name = "PENEIDJGGAF";

	UnityEngine::TextRenderer* Title; // 0xC
	UnityEngine::TextRenderer* ImpostorText; // 0x10
	struct FOONEKDGJBL* PlayerPrefab; // 0x14
	struct MeshRenderer* BackgroundBar; // 0x18
	struct MeshRenderer* Foreground; // 0x1C
	struct FloatRange* ForegroundRadius; // 0x20
	struct SpriteRenderer* FrontMost; // 0x24
	struct AudioClip* IntroStinger; // 0x28
	float BaseY; // 0x2C

    struct CKACLKCOJFO : ::Object
    {
        // Fields
        int __state; // 0x8
        struct object* __current; // 0xC
        IntroCutScene* __this; // 0x10
        bool isImpostor; // 0x14
        void* v;//List<FFGALNAPKCD> yourTeam; // 0x18
        UnityEngine::Color c5__2; // 0x1C
        UnityEngine::Color fade5__3; // 0x2C
        UnityEngine::Color impColor5__4; // 0x3C
        UnityEngine::Vector3 titlePos5__5; // 0x4C
        float timer5__6; // 0x58

        bool MoveNext() { return method_call(MoveNext); }
    };
};


namespace ark::method_info
{
    //method_address(PlayerControl::SetColor, 0x8F0AE0);
    inline uintptr_t rva<&IntroCutScene::CKACLKCOJFO::MoveNext>() { return 0xFB07B0; }
}
