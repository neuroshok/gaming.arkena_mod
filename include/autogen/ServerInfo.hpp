#pragma once

#include <ark/class.hpp>
#include <cs/string.hpp>
#include <il2cpp/type.hpp>

struct ServerData : ark::meta<ServerData, il2cpp::Il2CppObject>
{
    ark_meta("", "PLFDMKKDEMI");

    cs::string* name; // 0x8
    cs::string* host; // 0xC
    std::uint16_t port; // 0x10
    int NEEDADIAIAB; // 0x14
    int KIPFCHEEIML; // 0x18
};

struct ServerInfo : ark::meta<ServerInfo, il2cpp::Il2CppObject> // TypeDefIndex: 8735
{
	ark_meta("", "OIBMKGDLGOG");

	cs::string* name; // 0x8
	cs::string* ip; // 0xC
	il2cpp::array<ServerData>* serverData; // 0x10

	void _ctor(cs::string* name, cs::string* ping, il2cpp::array<ServerData>* servers) { return method_call(_ctor, name, ping, servers); } // 0xF149C0

};

namespace ark::method_info
{
	method_rva(ServerInfo::_ctor, 0xF149C0)
}