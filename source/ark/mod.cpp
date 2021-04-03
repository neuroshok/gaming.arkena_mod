#include <ark/mod.hpp>

#include <ark/core.hpp>
#include <ark/hook.hpp>

#include <cs/list.hpp>

#include <au/AmongUsClient.hpp>
#include <au/HudManager.hpp>
#include <au/IntroCutscene.hpp>
#include <au/IntroCutscene_Status.hpp>
#include <au/PlayerControl.hpp>
#include <au/ShipStatus.hpp>
#include <au/TextRenderer.hpp>

#include <nlohmann/json.hpp>
#include <cmath>
#include <fstream>

namespace ark
{
    mod::mod(ark::core& core, std::string name, ark::version version, bool synchronized)
        : core_{ core }
        , name_{ std::move(name) }
        , version_{ version }
        , fullname_{ name_ + "-" + version.str() }
        , synchronized_{ synchronized }
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
        on_settings_update();
    }

    void mod::disable()
    {
        if (name_ == "core") return;

        enabled_ = false;
        ui_enabled_ = false;
        on_disable();
        log("Disable mod {}", name_);
        for (const auto& hook_deleter : hooks_deleter_) hook_deleter();
    }

    ark::core& mod::core() { return core_; }
    const std::string& mod::name() const { return name_; }
    const std::string& mod::fullname() const { return fullname_; }
    const std::string& mod::description() const { return description_; }
    bool mod::enabled() const { return enabled_; }
    ark::version mod::version() const { return version_; }
    bool mod::synchronized() const { return synchronized_; }

    void mod::set_description(const std::string& desc) { description_ = desc; }

    void mod::set_player_name_color(PlayerControl* pc, upp::color color)
    {
        pc->nameText->Color = color;
    }

    //
    void mod::set_intro(ark::mod_intro intro)
    {
        intro_ = std::move(intro);
    }

    void mod::hook_intro()
    {
        ark::hook<&IntroCutscene_Status::MoveNext>::before(this, [this](auto&& self) -> bool
        {
            self->subtitle_color.r = intro_.subtitle_color.r;
            self->subtitle_color.g = intro_.subtitle_color.g;
            self->subtitle_color.b = intro_.subtitle_color.b;
            self->fade.g = 0;
            self->fade.r = 0;
            self->fade.b = 0;
            self->title_color.r = intro_.title_color.r;
            self->title_color.g = intro_.title_color.g;
            self->title_color.b = intro_.title_color.b;

            self->_this->Title->Text = cs::make_string(intro_.title);
            self->_this->ImpostorText->Text = cs::make_string(intro_.subtitle);

            self->isImpostor = false;

            return false;
        });
    }

    void mod::hook_end_game()
    {/*
        ark::hook<&ShipStatus::EndGame>::overwrite(this, [this](auto original, auto self, int reason, bool EMAKAHIFLDE) -> void {
            ark_trace("end game");
            if (end_game_) original(self, 3, EMAKAHIFLDE);
        });*/
    }

    void mod::hook_hud()
    {
        ark::hook<&HudManager::Start>::after(this, [this](auto&& self) -> void {
            hud_ = self;
        });
    }

    void mod::end_game() { end_game_ = true; }
    HudManager* mod::hud() { if (hud_ == nullptr) error("hud not found"); return hud_; }

    //
    /*
    void mod::add_setting(ark::setting s)
    {
        settings_.emplace_back(std::make_unique<ark::setting>(std::move(s)));
    }*/

    mod::settings_type& mod::settings() { return settings_; }

    // todo perf
    void mod::save_settings()
    {
        std::ifstream ifs(core::settings_path());
        if (!ifs.is_open())
            return ark_trace("unable to open settings: {}", core::settings_path());
        nlohmann::json j;
        try { ifs >> j; ifs.close(); }
        catch (const std::exception& e)
        {
            ark_trace("parsing error");
            ifs.close();
            return;
        }

        for (const auto& setting : settings_)
        {
            std::visit([this, &j, &setting](const auto& arg)
            {
                using T = std::decay_t<decltype(arg)>;
                j[name_][setting.name()] = std::get<T>(setting.value());
            }, setting.value());
        }

        std::ofstream ofs(core::settings_path());
        ofs << j << std::endl;
        ofs.close();

        on_settings_update();
    }

    void mod::local_kill(PlayerControl* source, PlayerControl* target)
    {
        auto original_value = source->playerInfo->IsImpostor;
        source->playerInfo->IsImpostor = true;
        source->MurderPlayer(target);
        source->playerInfo->IsImpostor = original_value;
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

        for (auto* player : cs::as_list(GameData::Instance()->AllPlayers))
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

    Hazel::MessageWriter* mod::start_rpc(rpc_mod rpcid)
    {
        return AmongUsClient::Instance()->StartRpcImmediately(mod::player_control()->NetId, (std::uint8_t)rpcid, Hazel::SendOption::None);
    }

    void mod::finish_rpc(Hazel::MessageWriter* writer)
    {
        AmongUsClient::Instance()->FinishRpcImmediately(writer);
    }

    cs::list<GameData_PlayerInfo>& mod::players() { return cs::as_list(GameData::Instance()->AllPlayers); }
    bool mod::player_hosting() { return AmongUsClient::Instance()->get_AmHost(); }

    GameData_PlayerInfo* mod::player() { return player(player_control()); }
    PlayerControl* mod::player_control() { return PlayerControl::LocalPlayer(); }

    GameData_PlayerInfo* mod::player(int id) { return GameData::Instance()->GetPlayerById(id); }
    GameData_PlayerInfo* mod::player(PlayerControl* pc) { return player(pc->PlayerId); }
    PlayerControl* mod::player_control(int id) { return player(id)->playerControl; }
} // ark