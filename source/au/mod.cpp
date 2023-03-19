#include <au/mod.hpp>

#include <au/core.hpp>


namespace au
{
    mod::mod(au::core& au_core, std::string name)
        : ark::mod(au_core.ark_core(), name)
        , au_core_{ au_core }
    {}

    void mod::register_player(std::unique_ptr<au::player> player)
    {
        log("Register player");
        au_core_.set_player_class(this, std::move(player));
    }

    void mod::register_gamestate(std::unique_ptr<au::gamestate> gamestate)
    {
        log("Register gamestate");
        au_core_.set_gamestate_class(this, std::move(gamestate));
    }

    au::core& mod::core() { return au_core_; }
} // au