#pragma once

#include <ark/mod.hpp>

#include <autogen/GameData.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/KillButtonManager.hpp>

#include <chrono>

namespace ark { class core; }

namespace ark::mods
{
    class whisperer : public mod
    {
    public:
        explicit whisperer(ark::core& core);

        void do_kill();
        void on_kill(std::uint8_t source, std::uint8_t target);
        void do_whisper(KillButtonManager*);
        void on_whisper(std::uint8_t target);


    private:
        std::uint8_t whisperer_id_;
        bool is_marked_;
        std::uint8_t marked_id_;
        std::chrono::system_clock::time_point kill_time_;
        std::chrono::seconds kill_delay_;

        std::chrono::system_clock::time_point last_kill_time_;
        std::uint8_t whisper_timer_;
        float whisper_range_;
        float whisper_kill_range_;
    };
}// ark::mods