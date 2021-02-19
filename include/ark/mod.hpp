#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

#include <ark/version.hpp>
#include <ark/core.hpp>

#include <autogen/GameData.hpp>
#include <autogen/RpcCalls.hpp>
#include <autogen/UnityEngine/Color.hpp>
#include <autogen/Hazel/MessageWriter.hpp>

#include <spdlog/formatter.h>

class PlayerControl;
class ShipStatus;
class MessageWriter;

namespace ark
{
    namespace ui { class core; }
    class core;

    class mod
    {
        friend class ark::ui::core;

    public:
        explicit mod(ark::core& core, std::string name, ark::version = {0, 0, 1}, bool synchronized = true);

        struct intro
        {
            std::string title;
            std::string subtitle;
            UnityEngine::Color title_color = {};
            UnityEngine::Color subtitle_color = {};
        };

        template<class... Ts>
        void log(const std::string& message, Ts&&... ts)
        {
            ark_trace("[{}] " + message, name_, ts...);
            core_.log(name_, fmt::format(message, ts...));
        }

        virtual void on_enable() {}
        virtual void on_disable() {}

        void enable();
        void disable();

        ark::core& core();
        const std::string& name() const;
        const std::string& fullname() const;
        ark::version version() const;
        bool synchronized() const;
        bool enabled() const;

        void hook_intro();
        void set_intro(mod::intro intro);

        // network
        template<class... Ts>
        static void send_all(rpc_mod rpcid, const Ts&... ts)
        {
            auto writer = mod::start_rpc(rpcid);
            (writer->Write(ts), ...);
            mod::finish_rpc(writer);
        }
        static MessageWriter* start_rpc(rpc_mod);
        static void finish_rpc(MessageWriter*);

        //
        static void set_player_name_color(PlayerControl*, float r, float g, float b, float a = 1);

        static GameData::PlayerInfo* player();
        static PlayerControl* player_control();
        static PlayerControl* player_name();

        static GameData::PlayerInfo* player(int id);
        static GameData::PlayerInfo* player(PlayerControl* pc);
        static PlayerControl* player_control(int id);

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
        bool synchronized_;
        bool enabled_;

        bool ui_enabled_;

        mod::intro intro_;
    };
}// ark

#endif// INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD