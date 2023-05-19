#ifndef INCLUDE_ARK_CORE_HPP_ARKENA_MOD
#define INCLUDE_ARK_CORE_HPP_ARKENA_MOD

#include <ark/discord.hpp>
#include <ark/log.hpp>
#include <ark/ui/core.hpp>
#include <ark/module.hpp>
#include <ark/mod_api.hpp>
#include <ark/version.hpp>
#include <ark/resource.hpp>
#include <ark/updater.hpp>

#include <deque>

#include <concepts>
#include <filesystem>
#include <functional>

#include <vector>

namespace ark { class mod; }
namespace au { class core; }

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
        enum class state_type { idle, playing };


        explicit core(HMODULE);
        ~core();

        void run();

        void load(const std::string& mod_name);
        void unload(const std::string& name);

        void set_state(state_type);
        state_type state() const;

        void init_settings();
        void on_ui_initialized();

        void debug(int index);
        void on_debug(std::function<void(int)>);
        void log(const std::string& mod_name, const std::string& message);
        void error(const std::string& mod_name, const std::string& message);

        au::core& au_core();
        const std::vector<std::unique_ptr<ark::mod>>& mods() const;
        ark::mod& mod(const std::string& name);
        const ark::version& version() const;
        const std::deque<std::string>& logs() const;
        ark::resources& resources();

        static std::string settings_path();
        const std::string& mods_root() const;

    private:
        HMODULE hmodule_;
        std::string mods_root_;
        ark::ui::core ui_;
        ark::resources resources_;
        ark::updater updater_;
        state_type state_;

        std::unique_ptr<au::core> au_core_;
        std::function<void(int)> on_debug_;

        //ark::discord discord_;
        ark::version version_;
        std::vector<std::unique_ptr<ark::mod>> mods_;
        std::deque<std::string> logs_;
    };
}// ark

#endif// INCLUDE_ARK_CORE_HPP_ARKENA_MOD