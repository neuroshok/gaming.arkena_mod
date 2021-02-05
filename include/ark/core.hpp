#ifndef INCLUDE_ARK_CORE_HPP_ARKENA_MOD
#define INCLUDE_ARK_CORE_HPP_ARKENA_MOD

#include <autogen/UnityEngine/Application.hpp>

#include <ark/mod.hpp>
#include <ark/utility/hook.hpp>
#include <ark/utility/logger.hpp>
#include <ark/utility/console.hpp>

#include <autogen/GameData.hpp>
#include <autogen/PlayerControl.hpp>

#include <vector>
#include <variant>
#include <concepts>


namespace Concept
{
    template<class Mod>
    concept mod = requires
    {
        Mod::name;
        std::derived_from<Mod, ark::mod>;
    };
} // Concept

namespace ark
{
    class core
    {
    public:
        static std::string version;

        explicit core(HMODULE);
        ~core();

        void run();

        template<Concept::mod Mod>
        void load()
        {
            ark_trace("Loading mod {}", Mod::name);
            mods_.emplace_back(std::make_unique<Mod>(*this));
        }

        template<auto Source, class Target>
        void hook(Target&& target)
        {
            ::hook_method<Source>(std::forward<Target>(target));
        }

        GameData::PlayerInfo* player(int id) { return GameData::instance()->GetPlayerById(id); }
        GameData::PlayerInfo* player(PlayerControl* pc) { return player(pc->PlayerId); }
        PlayerControl* player_control(int id) { return player(id)->_object; }

    private:
        HMODULE hmodule_;
        std::string version_;
        std::vector<std::unique_ptr<ark::mod>> mods_;
    };
}// ark

#endif// INCLUDE_ARK_CORE_HPP_ARKENA_MOD
