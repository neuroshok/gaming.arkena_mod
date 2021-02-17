#pragma once

#include <ark/class.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/UnityEngine/Color.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>
#include <autogen/UnityEngine/Vector3.hpp>
#include <autogen/System/Collections/Generic/List.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

struct IntroCutScene : UnityEngine::MonoBehaviour// TypeDefIndex: 8688
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

    struct CKACLKCOJFO : il2cpp::Il2CppObject
    {
        // Fields
        int __state; // 0x8
        struct object* __current; // 0xC
        IntroCutScene* __this; // 0x10
        bool isImpostor; // 0x14
        List<PlayerControl>* yourTeam; // 0x18
        UnityEngine::Color title; // 0x1C
        UnityEngine::Color fade_out_color; // 0x2C
        UnityEngine::Color subtitle; // 0x3C
        UnityEngine::Vector3 titlePos5__5; // 0x4C
        float timer5__6; // 0x58

        void _ctor(std::int32_t __state) { method_call(_ctor, __state); } // 0x2236C0
        bool MoveNext() { return method_call(MoveNext); }
    };
};


namespace ark::method_info
{
    method_rva(IntroCutScene::CKACLKCOJFO::_ctor, 0x2236C0)
    method_rva(IntroCutScene::CKACLKCOJFO::MoveNext, 0xFB07B0)
}
