#include <ark/mods/zombie.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>

#include <cs/string.hpp>

#include <au/AmongUsClient.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/HudManager.hpp>
#include <au/KillButtonManager.hpp>
#include <au/PlayerControl.hpp>
#include <au/Rpc.hpp>
#include <au/ShipStatus.hpp>
#include <au/EndGameManager.hpp>
#include <au/InnerNet/InnerNetClient.hpp>

static constexpr upp::color zombie_color = { 0.2, 1, 0.2 };

namespace ark::mods
{
    zombie::zombie(ark::core& pcore)
        : mod(pcore, "zombie", {0, 1, 0}, true)
    {
    }


    void zombie::add_zombie(PlayerControl* target)
    {
        target->SetColor(11);
        target->nameText->Text = cs::make_string("GNAAAAAAHH");
        target->nameText->color = zombie_color;

        target->playerInfo->IsImpostor = true;
        if (hud_)
        {
            target->SetKillTimer(8);
            hud_->KillButton->Start();
            hud_->KillButton->isActive = true;
            hud_->KillButton->renderer->set_enabled(true);
            hud_->SetHudActive(false);
            hud_->SetHudActive(true);
            hud_->SetHudActive(true);
            hud_->SetHudActive(true);
        }

        ++infected_;
        ark_trace("add_zombie {} {}", target->PlayerId, infected_);
    }

    void zombie::on_kill(std::uint8_t pid)
    {
        auto target = mod::player_control(pid);
        add_zombie(target);

        ark_trace("count {} {}", infected_, mod::players().size());
        if (mod::player_hosting() && (infected_ + 1) >= mod::players().size())
        {
            end_game_ = true;
            auto writer = AmongUsClient::statics()->instance->StartEndGame();
            writer->Write(std::uint32_t(0));
            writer->Write(std::uint8_t(0));
            AmongUsClient::statics()->instance->FinishEndGame(writer);
        }
    }

    void zombie::on_enable()
    {
        mod::hook_intro();

        ark::hook<&EndGameManager::Start>::after(this, [this](auto&& self)
        {
            ark_trace("EndGameManager::Start");
            self->WinText->Text = cs::make_string("ZOMBIE GNAAAAHHHH");
        });

        ark::hook<&ShipStatus::Begin>::after(this, [this](ShipStatus* self)
        {
            ark_trace("ShipStatus::Start");
            ship_ = self;
            infected_ = 0;
            end_game_ = false;

            for (const auto& player : mod::players())
            {
                if (player->IsImpostor) ark_trace("player {}", player->PlayerId);
            }
        });

        ark::hook<&HudManager::Start>::overwrite(this, [this](auto original, auto&& self) -> void {
            hud_ = self;
            original(self);
        });

       ark::hook<&PlayerControl::RpcSetInfected>::overwrite(this, [this](auto original, auto&& self, GameData_PlayerInfo* player) -> void {
            original(self, player);

            for (const auto& player : mod::players())
            {
                if (player->IsImpostor)
                {
                    add_zombie(mod::player_control(player->PlayerId));
                    mod::set_intro({ .title = "GNAAAAHHHH", .subtitle = "GNGNEUH GNGEUEUH", .title_color = zombie_color, .subtitle_color = zombie_color });
                }
            }


        }); // 0x8F0430

        ark::hook<&ShipStatus::EndGame>::overwrite(this, [this](auto original, auto&& self, std::int32_t reason, bool EMAKAHIFLDE) -> void {
            ark_trace("ShipStatus::EndGame(void), reason: {},infected_: {}", reason, infected_);
            if (end_game_)
            {
                // reset all players
                for (auto player : mod::players())
                {
                    player->IsImpostor = true;
                }

                original(self, 3, EMAKAHIFLDE);
            }
        });

        ark::hook<&KillButtonManager::PerformKill>::overwrite(this, [this](auto&& o, KillButtonManager* self) {
            auto target = self->CurrentTarget;
          if (target && !self->isCoolingDown)
            {
                ark_trace("PerformKill {}", target->PlayerId);
                mod::send_all(rpc_mod::generic_ability, target->PlayerId);
                on_kill(target->PlayerId);
                mod::player_control()->SetKillTimer(8);
            }
        });

        ark::hook<&PlayerControl::HandleRpc>::overwrite(this, [this](auto o, PlayerControl* self, auto event, MessageReader* data)
            {
                ark_trace("HandleRpc {}", event);
                auto original_position = data->get_Position();
                ark_trace("original_position {}", original_position);
                //data->set_Position(2);

                switch (static_cast<rpc>(event))
                {
                    case (rpc)rpc_mod::generic_ability: {
                        auto killed_id = data->ReadByte();
                        on_kill(killed_id);
                        break;
                    }

                    case rpc::SetInfected:
                    {
                        auto killers_count = data->ReadByte();
                        for (int i = 0; i < killers_count; ++i)
                        {
                            auto killer_id = data->ReadByte();
                            add_zombie(mod::player_control(killer_id));
                        }
                    }
                }

                data->set_Position(original_position);
                o(self, event, data);
            }
        );
    }
} // ark::mods
