#pragma once

#include <ark/mod.hpp>

#include <memory>

namespace au
{
    class core;
    class gamestate;
    class player;
    struct PlayerControl;

    class ARK_SHARED mod : public ark::mod
    {
    public:
        mod(ark::mod_api&);

        void send_rpc(uintptr_t rid, void* object, std::vector<std::byte> data) override;

        void register_gamestate(std::function<std::unique_ptr<au::gamestate>()> make_gamestate);
        void register_player(std::function<std::unique_ptr<au::player>(au::PlayerControl*)> make_player);

        au::core& core();

    private:
    };
} // au