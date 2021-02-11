#pragma once

#include <ark/log.hpp>
#include <discord.h>

struct DiscordState {
    ::discord::User currentUser;
    std::unique_ptr<::discord::Core> core;
};

namespace ark
{
    class discord
    {
    public:
        discord() : core_{}, state_{}
        {
            auto result = ::discord::Core::Create(807065370573668372, DiscordCreateFlags_Default, &core_);
            state_.core.reset(core_);
            if (!state_.core)
            {
                ark_trace("Failed to instantiate discord core!");
            }

            state_.core->SetLogHook(
              ::discord::LogLevel::Debug, [](::discord::LogLevel level, const char* message) {
                  ark_trace(message);
              });

/*
            ::discord::Activity activity{};
            activity.SetState("Arkmongus");
            activity.SetDetails("[sniper][bomberman]");
            activity.SetType(::discord::ActivityType::Playing);
            activity.SetName("zeta");
            activity.GetParty().SetId("123");
            activity.GetParty().GetSize().SetCurrentSize(1);
            activity.GetParty().GetSize().SetMaxSize(10);
            activity.GetAssets().SetSmallImage("large");
            activity.GetAssets().SetLargeImage("large");
            activity.GetAssets().SetLargeText("Come play Arkmongus with Arkena, mod1 / mod2 available");
            activity.GetAssets().SetSmallText("Go player Arkmongus noobs !");
            activity.GetSecrets().SetJoin("coucou");
            activity.GetSecrets().SetMatch("match ?");

            state_.core->ActivityManager().UpdateActivity(activity, [](::discord::Result result) {});

            state_.core->ActivityManager().RegisterCommand("steam://rungameid/945360");
            state_.core->ActivityManager().RegisterSteam(945360);*/
        }

        void run() { core_->RunCallbacks(); }

    private:
        DiscordState state_;
        ::discord::Core* core_;

    };
}// ark
