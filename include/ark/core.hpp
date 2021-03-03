#ifndef INCLUDE_ARK_CORE_HPP_ARKENA_MOD
#define INCLUDE_ARK_CORE_HPP_ARKENA_MOD

#include <ark/discord.hpp>
#include <ark/log.hpp>
#include <ark/resource.hpp>
#include <ark/ui/core.hpp>
#include <ark/version.hpp>

#include <vector>
#include <deque>
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
    public:
        explicit core(HMODULE);
        ~core();

        void run();

        template<Concept::mod Mod>
        void load()
        {
            mods_.emplace_back(std::make_unique<Mod>(*this));
            ark_info("Mod {} {} loaded", mods_.back()->version().str(), mods_.back()->name());
            mods_.back()->enable();
        }
        void unload(const std::string& name);

        void init_settings();

        void log(const std::string& mod_name, const std::string& message);
        void error(const std::string& mod_name, const std::string& message);

        const std::vector<std::unique_ptr<ark::mod>>& mods();
        ark::mod& mod(const std::string& name);
        const ark::version& version() const;
        const std::deque<std::string>& logs() const;
        ark::resources& resources();

        static std::string settings_path();

    public:
        HMODULE hmodule_;
        FILE* console_;
        ui::core ui_;
        ark::resources resources_;

        //ark::discord discord_;
        ark::version version_;
        std::vector<std::unique_ptr<ark::mod>> mods_;
        std::deque<std::string> logs_;
    };
}// ark

#endif// INCLUDE_ARK_CORE_HPP_ARKENA_MOD
