#pragma once

#include <ark/mod.hpp>

#include <au/Rpc.hpp>
#include <nlohmann/json_fwd.hpp>
#include <restclient-cpp/restclient.h>

namespace ark { class core; }

namespace ark::mods
{
    class auv : public mod
    {
    public:
        enum class event { game_start = 0, game_end, meeting_start, meeting_end };

        explicit auv(ark::core& core);

        RestClient::Response send(const std::string& data);
        RestClient::Response send(event, nlohmann::json);

        void set_infected(std::vector<int>);

        nlohmann::json serialize_players();

        void on_enable() override;
        void on_disable() override;

    private:
        int game_id_;
        std::string host_;
    };
}// ark::mods