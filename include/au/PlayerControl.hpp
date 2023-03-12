/* 
Assembly: PlayerControl, Assembly-CSharp, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null
Type: 0B807E78
Declaring: 
DeclaringNS: 
Name: PlayerControl
Namespace: 
Filepath: /PlayerControl
IsEnum: 0
IsGeneric: 0
IsValueType: 0
IsNested: 0
Nested: 17
	- ColliderComparer
	- UsableComparer
	- <Start>d__94
	- <ClientInitialize>d__95
	- <>c__DisplayClass101_0
	- <CoSetTasks>d__113
	- <>c__DisplayClass122_0
	- <>c
	- <>c__DisplayClass128_0
	- <>c__DisplayClass130_0
	- <>c__DisplayClass142_0
	- <SetPetImage>d__142
	- <>c__DisplayClass144_0
	- <SetSkinImage>d__144
	- <>c__DisplayClass156_0
	- <ScalePlayer>d__157
	- <EnableRightJoystick>d__175 */

#pragma once
#include <cstdint>
#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>
#include <ark/utility/preprocessor.hpp>
namespace 
{
struct alignas(4)  PlayerControl
{

        void RpcSetColor(uint8_t bodyColor); // 0x6cfe90

};
} // 

namespace ark::method_info
{


    template<> inline uintptr_t rva<&PlayerControl::RpcSetColor>() { return 0x6cff30; }

} // ark::method_info