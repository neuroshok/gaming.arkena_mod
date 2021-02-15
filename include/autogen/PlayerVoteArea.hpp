#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>

#include <autogen/UnityEngine/MonoBehaviour.hpp>
#include <autogen/UnityEngine/Color.hpp>
#include <autogen/UnityEngine/TextRenderer.hpp>

class PlayerVoteArea : UnityEngine::MonoBehaviour, ark::meta<PlayerVoteArea> // TypeDefIndex: 8688
{
    static constexpr auto internal_name = "HDJGDMFCHDN";

	struct OOCJALPKPEP* k__BackingField; // 0xC
	std::int8_t k__BackingField; // 0x10
	struct GameObject* Buttons; // 0x14
	struct FOONEKDGJBL* PlayerIcon; // 0x18
	struct SpriteRenderer* Background; // 0x1C
	struct SpriteRenderer* Flag; // 0x20
	struct SpriteRenderer* Megaphone; // 0x24
	struct SpriteRenderer* Overlay; // 0x28
	TextRenderer* NameText; // 0x2C
}