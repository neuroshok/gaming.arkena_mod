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
        mod(au::core& au_core, std::string name);

        void send_rpc(uintptr_t rid, void* object, std::vector<std::byte> data) override;

        void register_gamestate(std::function<std::unique_ptr<au::gamestate>()> make_gamestate);
        void register_player(std::function<std::unique_ptr<au::player>(au::PlayerControl*)> make_player);

        template<class T>
        void register_class()
        {
            if constexpr (std::is_base_of_v<au::gamestate, T>) register_gamestate([]{ return std::make_unique<T>(); });
            else if constexpr (std::is_base_of_v<au::player, T>) register_player([]{ return std::make_unique<T>(); });
        }

        au::core& core();

    private:
        au::core& au_core_;
    };
} // au

extern "C" ARK_EXPORT int mod_load(au::mod& mod);