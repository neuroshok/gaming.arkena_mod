#ifndef INCLUDE_ARK_CORE_HPP_ARKENA_MOD
#define INCLUDE_ARK_CORE_HPP_ARKENA_MOD

#include <ark/discord.hpp>
#include <ark/log.hpp>
#include <ark/mod.hpp>
#include <ark/ui/core.hpp>

#include <vector>
#include <variant>
#include <concepts>

namespace ark { class mod; }

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
        using hook_type = uintptr_t;

    public:
        explicit core(HMODULE);
        ~core();

        void run();

        template<Concept::mod Mod>
        void load()
        {
            mods_.emplace_back(std::make_unique<Mod>(*this));
            ark_trace("Mod {} loaded", mods_.back()->name());
            mods_.back()->enable();
        }

        void unload(const std::string& name)
        {
            mods_.erase(std::remove_if(mods_.begin(), mods_.end(), [&name](auto&& mod) { return mod->name() == name; }), mods_.end());
            ark_trace("Mod {} unloaded", name);
        }

        const std::vector<std::unique_ptr<ark::mod>>& mods();
        const std::string& version() const;

        template<auto Source, class Target>
        static void hook(Target&& target)
        {
            //ark::hook_method<Source>(target);
        }

    public:
        HMODULE hmodule_;
        FILE* console_;
        ui::core ui_;

        std::unordered_map<void*, void*> hooks_;

        //ark::discord discord_;
        std::string version_;
        std::vector<std::unique_ptr<ark::mod>> mods_;
    };
}// ark

#endif// INCLUDE_ARK_CORE_HPP_ARKENA_MOD
