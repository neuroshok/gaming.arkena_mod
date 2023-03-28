#ifndef INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD
#define INCLUDE_ARKMOD_MOD_HPP_ARKENA_MOD

#include <ark/core.hpp>
#include <ark/module.hpp>
#include <ark/setting.hpp>
#include <ark/version.hpp>

#include <vector>
#include <functional>

namespace ark
{
    namespace ui { class core; }
    class core;

    struct mod_info
    {
        std::string name;
        ark::version version;
        std::string description;
    };

    class ARK_SHARED mod
    {
        friend class ark::ui::core;

    public:
        using settings_type = std::vector<ark::setting>;

    public:
        explicit mod(ark::core& core, std::string name, ark::version = {0, 0, 1}, bool synchronized = true);

        mod(const mod&) = delete;
        mod& operator=(const mod&) = delete;

        virtual void on_debug(std::function<void(int)>);

        virtual void on_enable() {}
        virtual void on_disable() {}
        virtual void on_settings_update() {}

        virtual void send_rpc(uintptr_t rid, void* object, std::vector<std::byte> data) {}

        void register_rpc(uintptr_t rid, void* object);

        auto rpc(uintptr_t rid)
        {
            return rpcs_[rid];
        }

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

        void debug(int index);

        void enable();
        void disable();

        void set_info(ark::mod_info info);

        ark::core& core();
        const std::string& name() const;
        const std::string& fullname() const;
        ark::version version() const;
        const std::string& description() const;
        bool synchronized() const;
        bool enabled() const;

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

        std::function<void(int)> on_debug_;
    public: std::unordered_map<uintptr_t, std::function<void(const std::vector<std::byte>&)>> rpcs_;
    };
}// ark

namespace ark
{
    template<class... Ts>
    void mod::add_setting(Ts&&... ts)
    {
        settings().emplace_back(std::move(ts)...);
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