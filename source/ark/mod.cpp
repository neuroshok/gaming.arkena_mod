#include <ark/mod.hpp>

#include <ark/core.hpp>

#include <nlohmann/json.hpp>
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
    {
    }

    void mod::enable()
    {
        log("Enable mod {}", name_);
        enabled_ = true;
        on_enable();
        on_settings_update();
    }

    void mod::disable()
    {
        if (name_ == "core") return;

        enabled_ = false;
        on_disable();
        log("Disable mod {}", name_);
    }

    void mod::log(const std::string& data)
    {
        ark_trace(data);
        core_.log(name_, data);
    }

    ark::core& mod::core() { return core_; }
    const std::string& mod::name() const { return name_; }
    const std::string& mod::fullname() const { return fullname_; }
    const std::string& mod::description() const { return description_; }
    bool mod::enabled() const { return enabled_; }
    ark::version mod::version() const { return version_; }
    bool mod::synchronized() const { return synchronized_; }

    void mod::set_description(const std::string& desc) { description_ = desc; }

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
} // ark