#include <ark/mod.hpp>

#include <ark/core.hpp>

#include <nlohmann/json.hpp>
#include <fstream>

namespace ark
{
    // initialized by core::make()
    mod::mod(ark::mod_api& api)
        : core_{ api.ark_core() }
        , name_{ api.name() }
        , version_{ ark::version{} }
        , fullname_{ name_ + "-" + version_.str() }
        , root_{ core_.mods_root() + name_ + "/" }
        , synchronized_{ true }
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

    void mod::on_enable() {}
    void mod::on_disable() {}

    //! \param rid the impl function with the form of void _impl(void* object, const std::vector<std::byte>& data);
    void mod::register_rpc(uintptr_t rid, void* object)
    {
        auto fn = std::bind_front(reinterpret_cast<void(*)(void*, const std::vector<std::byte>&)>(rid), object);
        rpcs_.emplace(rid, std::move(fn));
    }

    void mod::log(const std::string& data)
    {
        core().log(name_, data);
    }

    // draw is called from the render thread
    void mod::on_draw()
    {
    }

    void mod::debug(int index)
    {
        if (on_debug_) on_debug_(index);
    }

    void mod::on_debug(std::function<void(int)> fn)
    {
        on_debug_ = std::move(fn);
    }

    ark::core& mod::core() { return core_; }
    const std::string& mod::name() const { return name_; }
    const std::string& mod::fullname() const { return fullname_; }
    const std::string& mod::description() const { return description_; }
    const ark::resource::image& mod::image() const { return image_; }
    const std::vector<ark::link>& mod::authors() const { return authors_; }
    const std::string& mod::root() const { return root_; }

    bool mod::enabled() const { return enabled_; }
    ark::version mod::version() const { return version_; }
    bool mod::synchronized() const { return synchronized_; }

    void mod::set_info(ark::mod_info info)
    {
        name_ = std::move(info.name);
        description_ = std::move(info.description);
        authors_ = std::move(info.authors);
        version_ = std::move(info.version);
        fullname_ = name_ + "-" + version_.str();
    }

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

    ImGuiContext* mod::ui_context()
    {
        ark_assert(ui::core::imgui_context, "ui_context is null");
        return ui::core::imgui_context;
    }
} // ark