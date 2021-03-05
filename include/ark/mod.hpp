#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

#include <ark/core.hpp>
#include <ark/mod_intro.hpp>
#include <ark/setting.hpp>
#include <ark/version.hpp>

#include <autogen/GameData.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/Unity/Color.hpp>
#include <autogen/Hazel/MessageWriter.hpp>

#include <spdlog/formatter.h>

struct HudManager;
struct MessageWriter;
struct PlayerControl;
struct ShipStatus;

namespace ark
{
    namespace ui { class core; }
    class core;

    class mod
    {
        friend class ark::ui::core;

    public:
        using settings_type = std::vector<ark::setting>;

    public:
        explicit mod(ark::core& core, std::string name, ark::version = {0, 0, 1}, bool synchronized = true);

        mod(const mod&) = delete;
        mod& operator=(const mod&) = delete;

        template<class... Ts>
        void log(const std::string& message, Ts&&... ts)
        {
            ark_trace("[{}] " + message, name_, ts...);
            core_.log(name_, fmt::format(message, ts...));
        }

        template<class... Ts>
        void error(const std::string& message, Ts&&... ts)
        {
            core_.error(name_, fmt::format(message, ts...));
        }

        virtual void on_enable() {}
        virtual void on_disable() {}
        virtual void on_settings_update() {}

        void enable();
        void disable();

        ark::core& core();
        const std::string& name() const;
        const std::string& fullname() const;
        ark::version version() const;
        const std::string& description() const;
        bool synchronized() const;
        bool enabled() const;

        //
        void set_description(const std::string&);

        // common hook
        void hook_intro();
        void hook_end_game();
        void hook_hud();

        void set_intro(ark::mod_intro intro);
        void end_game();
        HudManager* hud();

        // settings
        //void add_setting(ark::setting);
        template<class... Ts>
        void add_setting(Ts&&... ts);
        settings_type& settings();
        void save_settings();
        template<class T>
        T setting(const std::string& name) const;

        // network
        template<class... Ts>
        static void send_all(rpc_mod rpcid, const Ts&... ts);

        static MessageWriter* start_rpc(rpc_mod);
        static void finish_rpc(MessageWriter*);

        // player
        static System::Collections::Generic::List<GameData::PlayerInfo>& players();
        static bool player_hosting();

        static void set_player_name_color(PlayerControl*, Unity::Color color);

        static GameData::PlayerInfo* player();
        static PlayerControl* player_control();
        static PlayerControl* player_name();

        static GameData::PlayerInfo* player(int id);
        static GameData::PlayerInfo* player(PlayerControl* pc);
        static PlayerControl* player_control(int id);

        //
        static void local_kill(std::uint8_t source, std::uint8_t target);
        static void local_kill(PlayerControl* source, PlayerControl* target);
        static float player_distance(PlayerControl* source, PlayerControl* target);
        static PlayerControl* closest_player(PlayerControl* source = mod::player_control());

        std::vector<std::function<void()>> hooks_deleter_;

    private:
        ark::core& core_;
        std::string name_;
        ark::version version_;
        std::string fullname_;
        std::string description_;
        bool synchronized_;
        bool enabled_;
        std::vector<ark::setting> settings_;

        bool ui_enabled_;

        bool end_game_ = false;
        HudManager* hud_ = nullptr;
        ark::mod_intro intro_;
    };
}// ark

namespace ark
{
    template<class... Ts>
    void mod::add_setting(Ts&&... ts)
    {
        settings_.emplace_back(std::move(ts)...);
    }

    template<class T>
    T mod::setting(const std::string& name) const
    {
        auto setting_it = std::find_if(settings_.begin(), settings_.end(), [&name](auto&& setting){ return setting.name() == name; });
        if (setting_it != settings_.end()) return setting_it->template get<T>();
        ark_trace("setting {} not found", name);
        return T{};
    }

    template<class... Ts>
    void mod::send_all(rpc_mod rpcid, const Ts&... ts)
    {
        auto writer = mod::start_rpc(rpcid);
        (writer->Write(ts), ...);
        mod::finish_rpc(writer);
    }
} // ark

#endif// INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD