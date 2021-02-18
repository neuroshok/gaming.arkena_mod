#include <ark/mod.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>

#include <autogen/PlayerControl.hpp>
#include <autogen/ShipStatus.hpp>
#include <autogen/IntroCutscene.hpp>
#include <autogen/AmongUsClient.hpp>

#include <cmath>

namespace ark
{
    mod::mod(ark::core& core, std::string name, ark::version version, bool network)
        : core_{ core }
        , name_{ std::move(name) }
        , version_{ version }
        , fullname_{ name_ + "-" + version_.str() }
        , network_{ network }
        , enabled_{ false }
        , ui_enabled_{ false }
    {
    }

    void mod::enable()
    {
        log("Enable mod {}", name_);
        enabled_ = true;
        ui_enabled_ = true;
        on_enable();
    }

    void mod::disable()
    {
        enabled_ = false;
        ui_enabled_ = false;
        on_disable();
        log("Disable mod {}", name_);
        for (const auto& hook_deleter : hooks_deleter_) hook_deleter();
    }

    ark::core& mod::core() { return core_; }
    const std::string& mod::name() const { return name_; }
    const std::string& mod::fullname() const { return fullname_; }
    bool mod::enabled() const { return enabled_; }
    ark::version mod::version() const { return version_; }
    bool mod::is_network() const { return network_; }

    void mod::set_player_name_color(PlayerControl* pc, float r, float g, float b, float a)
    {
        pc->nameText->color.r = r;
        pc->nameText->color.g = g;
        pc->nameText->color.b = b;
        pc->nameText->color.a = a;
    }
    void mod::set_intro(mod::intro intro)
    {
        intro_ = std::move(intro);
    }

    void mod::hook_intro()
    {
        ark::hook<&IntroCutScene::CKACLKCOJFO::MoveNext>::before(this, [this](auto&& self) -> bool
        {
            self->subtitle.r = intro_.subtitle_color.r;
            self->subtitle.g = intro_.subtitle_color.g;
            self->subtitle.b = intro_.subtitle_color.b;
            self->fade_out_color.g = 0;
            self->fade_out_color.r = 0;
            self->fade_out_color.b = 0;
            self->title.r = intro_.title_color.r;
            self->title.g = intro_.title_color.g;
            self->title.b = intro_.title_color.b;

            self->__this->Title->Text = System::String::make(intro_.title);
            self->__this->ImpostorText->Text = System::String::make(intro_.subtitle);

            self->isImpostor = false;

            return false;
        });
    }

    void mod::local_kill(PlayerControl* source, PlayerControl* target)
    {
        source->MurderPlayer(target);
    }

    void mod::local_kill(std::uint8_t source, std::uint8_t target)
    {
        mod::local_kill(mod::player_control(source), mod::player_control(target));
    }

    float mod::player_distance(PlayerControl* source, PlayerControl* target)
    {
        auto source_pos = source->GetTruePosition();
        auto target_pos = target->GetTruePosition();

        return std::sqrt((source_pos.x - target_pos.x) * (source_pos.x - target_pos.x) + (source_pos.y - target_pos.y) * (source_pos.y - target_pos.y));
    }

    PlayerControl* mod::closest_player(PlayerControl* source)
    {
        auto min = std::numeric_limits<float>::max();
        PlayerControl* closest = nullptr;

        for (auto* player : *GameData::statics()->instance->AllPlayers)
        {
            if (player->PlayerId != source->PlayerId && !player->IsDead)
            {
                auto distance = player_distance(mod::player_control(player->PlayerId), source);
                if (distance < min)
                {
                    min = distance;
                    closest = mod::player_control(player->PlayerId);
                }
            }
        }
        ark_assert(closest, "closest exist");

        return closest;
    }

    MessageWriter* mod::start_rpc(rpc_mod rpcid)
    {
        return AmongUsClient::statics()->instance->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpcid);
    }

    void mod::finish_rpc(MessageWriter* writer)
    {
        AmongUsClient::statics()->instance->FinishRpcImmediately(writer);
    }

    GameData::PlayerInfo* mod::player() { return player(player_control()); }
    PlayerControl* mod::player_control() { return PlayerControl::statics()->local; }

    GameData::PlayerInfo* mod::player(int id) { return GameData::statics()->instance->GetPlayerById(id); }
    GameData::PlayerInfo* mod::player(PlayerControl* pc) { return player(pc->PlayerId); }
    PlayerControl* mod::player_control(int id) { return player(id)->_object; }
} // ark