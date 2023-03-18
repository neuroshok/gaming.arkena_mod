#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

#include <ark/core.hpp>
#include <ark/module.hpp>
#include <ark/setting.hpp>
#include <ark/version.hpp>

namespace ark
{
    namespace ui { class core; }
    class core;

    class ARK_SHARED mod
    {
        friend class ark::ui::core;

    public:
        using settings_type = std::vector<ark::setting>;

    public:
        explicit mod(ark::core& core, std::string name, ark::version = {0, 0, 1}, bool synchronized = true);

        mod(const mod&) = delete;
        mod& operator=(const mod&) = delete;

        void log(const std::string& data);

        template<class... Ts>
        void log(const std::string& message, Ts&&... ts)
        {
            ark_trace("[{}] " + message, name(), ts...);
            core_.log(name_, fmt::format(message, ts...));
        }

        template<class... Ts>
        void error(const std::string& message, Ts&&... ts)
        {
            core_.error(name_, std::format(message, ts...));
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

        // settings
        //void add_setting(ark::setting);
        template<class... Ts>
        void add_setting(Ts&&... ts);
        settings_type& settings();
        void save_settings();
        template<class T>
        T setting(const std::string& name) const;

    private:
        ark::core& core_;
        std::string name_;
        ark::version version_;
        std::string fullname_;
        std::string description_;
        bool synchronized_;
        bool enabled_;
        std::vector<ark::setting> settings_;
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
} // ark

#endif// INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD