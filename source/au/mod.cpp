#include <au/mod.hpp>

#include <au/core.hpp>


namespace au
{
    mod::mod(au::core& au_core, std::string name)
        : ark::mod(au_core.ark_core(), name)
        , au_core_{ au_core }
    {}

    void mod::register_player(std::function<std::unique_ptr<au::player>()> make_player)
    {
        log("Register player");
        au_core_.set_player_class(this, std::move(make_player));
    }

    void mod::register_gamestate(std::function<std::unique_ptr<au::gamestate>()> make_gamestate)
    {
        log("Register gamestate");
        au_core_.set_gamestate_class(this, std::move(make_gamestate));
    }

    au::core& mod::core() { return au_core_; }
} // au