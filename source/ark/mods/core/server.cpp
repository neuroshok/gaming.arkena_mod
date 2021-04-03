#include <ark/mods/core/server.hpp>

#include <ark/hook.hpp>

#include <au/InnerNet/InnerNetClient.hpp>
//#include <au/ServerInfo.hpp>
////////////////////
struct ServerData : ark::meta<ServerData, il2cpp::Il2CppObject>
{
    ark_meta("", "PLFDMKKDEMI", "");

    cs::string* name; // 0x8
    cs::string* host; // 0xC
    std::uint16_t port; // 0x10
    int NEEDADIAIAB; // 0x14
    int KIPFCHEEIML; // 0x18

    void ctor(){}
};

struct ServerInfo : ark::meta<ServerInfo, il2cpp::Il2CppObject> // TypeDefIndex: 8735
{
	ark_meta("", "OIBMKGDLGOG", "");

	cs::string* name; // 0x8
	cs::string* ip; // 0xC
	il2cpp::array<ServerData>* serverData; // 0x10

	void ctor(cs::string* name, cs::string* ip, il2cpp::array<ServerData>* servers) { } // 0xF149C0

};
/////////////////////

#include <au/ServerManager.hpp>

#include <winsock.h>
#include <nlohmann/json.hpp>

namespace ark::mods
{

    core_server::core_server(ark::mod& c)
        : mod_core_{ c }
    {
        /*
        std::ifstream ifs("file.json");
        nlohmann::json settings;
        ifs >> settings;

        mod_core_.add_setting();*/
    }

    void core_server::enable()
    {
        /*
        ark::hook<&ServerManager::ctor>::before(&mod_core_, [](auto&& self) -> void
        {
            auto server_custom_count = 1;

            std::vector<ServerInfo*> server_infos;

            for (auto server_info : *self->statics()->DefaultRegions)
            {
                server_infos.emplace_back(server_info);
            }

            auto array_ServerInfo = il2cpp::make_array<ServerInfo>(4);
            auto array_ServerData = il2cpp::make_array<ServerData>(1);

            auto o_ServerData = il2cpp::make<ServerData>();
            o_ServerData->name = cs::make_string("Hoax-Master-1");
            o_ServerData->host = cs::make_string("au.hoax.ml");
            o_ServerData->port = 22023;
            array_ServerData->get(0) = o_ServerData;

            int server_it = 0;
            for (; server_it < server_infos.size(); ++server_it)
            {
                (*array_ServerInfo)[server_it] = server_infos[server_it];
            }

            auto o_ServerInfo = il2cpp::make<ServerInfo>(cs::make_string("Tournament"), cs::make_string("au.hoax.ml"), array_ServerData);
            array_ServerInfo->get(server_it) = o_ServerInfo;

            //self->DefaultRegions() = array_ServerInfo;
        });*/

        ark::hook<&InnerNet::InnerNetClient::SetEndpoint>::overwrite(
        &mod_core_, [](auto&& original, auto&& self, cs::string* host, std::uint16_t JGJNMHAIKMB) -> void {

            auto resolve = [](const std::string& h)
            {

                if (std::isdigit(h[0])) return h;

                WSADATA wsaData;
                WSAStartup(MAKEWORD(2, 2), &wsaData);
                struct hostent* he = gethostbyname(h.c_str());
                char* ip = inet_ntoa(*(struct in_addr*)he->h_addr_list[0]);
                return std::string{ ip };
            };

            auto ip = cs::make_string(resolve(host->str()));
            ark_trace("Connect to : {}", ip->str());
            original(self, ip, JGJNMHAIKMB);
        });
    }
}// ark::mods