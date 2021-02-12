// type mapping
bool -> bool
int -> std::int32_t
uint -> std::uint32_t
float -> float
byte -> std::uint8_t

type[] -> void*
other types -> void*

// Namespace parsing
"Namespace: " -> ignore
start with "[" -> ignore

// Class parsing
"public" -> ignore
"class" -> struct
word starting with "I" -> ignore

public class FFGALNAPKCD : NJAHILONGKN

// Fields parsing

start with "[" -> ignore line
("public" | "private") -> ignore word
line contains "static" -> ignore line

// Properties parsing
ignore all

// Methods parsing


// Exemple

command: parse 332545
input:

```
// Namespace: 
public class FFGALNAPKCD : NJAHILONGKN // TypeDefIndex: 8921
{
	// Fields
	private int MKMDLEOKDIN; // 0x24
	public byte PlayerId; // 0x28
	public MNGKAKKOKPN[] KillAnimations; // 0x40
	public AELDHKGBIFD nameText; // 0x4C
	[SerializeField] // RVA: 0x33E0 Offset: 0x27E0 VA: 0x100033E0

	// Properties
	public bool GEBLLBHGHLD { get; }
	public EGLJNOMOGNP.DCJMABDDJCF JLGGIOLCDFC { get; }
	public bool KMKADPMJBBH { get; set; }

	// Methods

	// RVA: 0x8F06B0 Offset: 0x8EEEB0 VA: 0x108F06B0
	public void RpcSetScanner(bool HIJOHCLAKMG) { }
}
```
output: 

filename: PlayerControl.hpp
$original_name : variable of non deobfuscated name (FFGALNAPKCD)
$deobfuscated_name : variable of deobfuscated name (PlayerControl)
````
#pragma once

#include <ark/utility/function.hpp>
#include <ark/utility/meta.hpp>

#define method_call(Name, ...) get_method<ark::function_trait<decltype(&PlayerControl::Name)>::flat_method_type>(#Name)(this, __VA_ARGS__)
#define method_str(Name, Str_name) template<> inline const char* get_method_name<&PlayerControl::Name>() { return Str_name; }

struct PlayerControl : InnerNetObject, ark::meta<PlayerControl>
{
    static inline auto internal_name = "$original_name";

    std::int32_t MKMDLEOKDIN;
    std::uint8_t PlayerId;
    struct AELDHKGBIFD* nameText;
    void* KillAnimations // MNGKAKKOKPN or // $original_line
}

// for each method method_str($deobfuscated_name, "$original_name")
method_str(SetColor, "SetColor")
method_str(SetColor, "SetColor")
method_str(SetColor, "SetColor")
etc...
````
