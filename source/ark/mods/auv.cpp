#include <ark/mods/auv.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>
#include <ark/version.hpp>

#include <au/AmongUsClient.hpp>
#include <au/EndGameManager.hpp>
#include <au/GameData.hpp>
#include <au/GameStartManager.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/PlayerControl.hpp>
#include <au/TextRenderer.hpp>
#include <au/MeetingHud.hpp>

#include <nlohmann/json.hpp>
#include <restclient-cpp/restclient.h>

namespace ark::mods
{
    auv::auv(ark::core& pcore)
        : mod(pcore, "auv", ark::version{0, 0, 1}, false)
        , game_id_{ -1 }
        , host_{ "http://hoax.ml/test.php" }
    {}

    void auv::on_enable()
    {
        ark::hook<&EndGameManager::Start>::after(this, [this](auto&& self) -> void {
            send(event::game_end, serialize_players());
        });

        ark::hook<&PlayerControl::RpcSetInfected>::after(this, [this](auto&& self, auto players) -> void {
            std::vector<int> infecteds;
            for (const auto& player : *players) infecteds.emplace_back(player->PlayerId);
            set_infected(std::move(infecteds));
        });

        ark::hook<&MeetingHud::HandleRpc>::after(this,
            [this](MeetingHud* self, auto event, Hazel::MessageReader* data)
            {
                if ((int)event != (int)Rpc::VotingComplete) return;
                nlohmann::json players = serialize_players();
                send(event::meeting_end, std::move(players));
            });

        ark::hook<&PlayerControl::HandleRpc>::after(this,
            [this](PlayerControl* self, auto event, Hazel::MessageReader* data)
            {
                ark_trace("RPC {}", event);
                data->set_Position(2);

                switch (static_cast<Rpc>(event))
                {
                    case Rpc::SetInfected : {
                        int infected_count = data->ReadByte();
                        std::vector<int> infecteds;
                        infecteds.reserve(infected_count);
                        for (int i = 0; i < infected_count; ++i)
                        {
                            auto infected_id = data->ReadByte();
                            infecteds.emplace_back(infected_id);
                        }
                        set_infected(std::move(infecteds));
                        break;
                    }
                    case Rpc::StartMeeting : {
                            nlohmann::json players = serialize_players();
                            send(event::meeting_start, std::move(players));
                        break;
                    }
                    case Rpc::CloseMeeting : {
                            nlohmann::json players = serialize_players();
                            //send(event::meeting_end, std::move(players));
                        break;
                    }
                        /*
                    case Rpc::CloseMeeting : {
                            send(Rpc::CloseMeeting);
                        break;
                    }*/
                }
            }
        );
    }

    void auv::on_disable()
    {

    }

    RestClient::Response auv::send(const std::string& data)
    {
        auto response = RestClient::post(host_, "application/json", data);
        return response;
    }

    RestClient::Response auv::send(auv::event event, nlohmann::json json_data)
    {
        nlohmann::json output;
        output["eventID"] = event;
        output["ownerID"] = mod::player()->PlayerId;
        output["gameID"] = game_id_;
        output["data"] = json_data;
        return send(output.dump());
    }

    void auv::set_infected(std::vector<int> infecteds)
    {
        game_id_ = -1;
        nlohmann::json players = serialize_players();

        auto response = send(event::game_start, players);
        if (response.code == 200)
        {
            game_id_ = std::stoi(response.headers["Game-Id"]);
        }
        else mod::error("wrong server response {}", response.code);
    }

    nlohmann::json auv::serialize_players()
    {
        nlohmann::json output;
        nlohmann::json players = nlohmann::json::array();

        for (const auto& player : mod::players())
        {
            nlohmann::json json_player = {};
            json_player["playerId"] = player->PlayerId;
            json_player["playerName"] = player->PlayerName->str();
            json_player["colorId"] = player->ColorId;
            json_player["hatId"] = player->HatId;
            json_player["petId"] = player->PetId;
            json_player["skinId"] = player->SkinId;
            json_player["isImpostor"] = player->IsImpostor;
            json_player["isDead"] = player->IsDead;
            json_player["isDisconnected"] = player->Disconnected;
            players.emplace_back(json_player);
        }
        output["players"] = players;
        return output;
    }
} // ark