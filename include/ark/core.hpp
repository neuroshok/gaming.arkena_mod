#ifndef INCLUDE_ARK_CORE_HPP_ARKENA_MOD
#define INCLUDE_ARK_CORE_HPP_ARKENA_MOD

#include <ark/discord.hpp>
#include <ark/log.hpp>
#include <ark/ui/core.hpp>
#include <ark/module.hpp>
#include <ark/version.hpp>
#include <ark/resource.hpp>

#include <deque>

#include <concepts>
#include <filesystem>
#include <functional>
#include <vector>

namespace ark { class mod; }
namespace au { class core; class mod; }

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
        void load(const std::string& mod_name)
        {
            std::string module_path = mods_root_+ mod_name + ".dll";

            if (!std::filesystem::exists(module_path))
            {
                error("core", "unable to find mod " + mod_name + " at " + module_path);
                return;
            }
            auto handle = ark_os_module_load(module_path.c_str());
            if (!handle)
            {
                error("core", "unable to load mod " + mod_name + " from " + module_path );
                return;
            }
            else
            {
                // get main pointer
                auto load_ptr = reinterpret_cast<Module_load_ptr>(ark_os_module_function(handle, "mod_load"));
                if (!load_ptr) error("core", "function mod_load missing");
                else
                {
                    mods_.emplace_back(std::make_unique<Mod>(*au_core_, mod_name));
                    bool error_code = load_ptr(*mods_.back());
                    if (error_code) ark_info("Mod loading error {}", mods_.back()->name());
                    ark_info("Mod {} version {} loaded", mods_.back()->name(), mods_.back()->version().str());
                    mods_.back()->enable();
                }
            }
        }
        void unload(const std::string& name);

        void init_settings();

        void debug(int index);
        void on_debug(std::function<void(int)>);
        void log(const std::string& mod_name, const std::string& message);
        void error(const std::string& mod_name, const std::string& message);

        const std::vector<std::unique_ptr<au::mod>>& mods() const;
        au::mod& mod(const std::string& name);
        const ark::version& version() const;
        const std::deque<std::string>& logs() const;
        ark::resources& resources();

        static std::string settings_path();
        const std::string& mods_root() const;

    public:
        HMODULE hmodule_;
        std::string mods_root_;
        ui::core ui_;
        ark::resources resources_;

        std::unique_ptr<au::core> au_core_;
        std::function<void(int)> on_debug_;

        //ark::discord discord_;
        ark::version version_;
        std::vector<std::unique_ptr<au::mod>> mods_;
        std::deque<std::string> logs_;
    };
}// ark

#endif// INCLUDE_ARK_CORE_HPP_ARKENA_MOD