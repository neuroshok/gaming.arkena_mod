#pragma once

#include <ark/class.hpp>
#include <autogen/System/String.hpp>
#include <il2cpp/type.hpp>

struct ServerData : ark::meta<ServerData, il2cpp::Il2CppObject>
{
    ark_meta("", "PLFDMKKDEMI");

    System::String IEILCAGONGI; // 0x8
    System::String FANKCPCCIKC; // 0xC
    std::uint16_t BFEECGEJGDG; // 0x10
    int NEEDADIAIAB; // 0x14
    int KIPFCHEEIML; // 0x18
};

struct ServerInfo : ark::meta<ServerInfo, il2cpp::Il2CppObject> // TypeDefIndex: 8735
{
	ark_meta("", "OIBMKGDLGOG");

	System::String* IEILCAGONGI; // 0x8
	System::String* CBMOEHMADOC; // 0xC
	il2cpp::array<ServerData>* JEDEEHFPAAH; // 0x10

	void _ctor(System::String* name, System::String* ping, il2cpp::array<ServerData>* servers) { return method_call(_ctor, name, ping, servers); } // 0xF149C0

};

namespace ark::method_info
{
	method_rva(ServerInfo::_ctor, 0xF149C0)
}