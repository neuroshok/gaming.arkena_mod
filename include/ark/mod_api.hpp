#pragma once

#include <ark/module.hpp>

#include <functional>
#include <memory>
#include <string>

namespace au
{
    class mod;
} // au

namespace ark
{
    class core;
    class mod;

    class ARK_EXPORT mod_api
    {
        using make_mod_type = std::function<std::unique_ptr<ark::mod>()>;
    public:
        mod_api(ark::core& core, std::string name);

        void register_mod(make_mod_type make_mod);

        template<class T>
        void register_class()
        {
            if constexpr (std::is_base_of_v<ark::mod, T>) register_mod([]{ return std::unique_ptr<ark::mod>(new T); });
        }

        ark::core& ark_core() { return core_; }
        const std::string& name() const { return name_; }

    private:
        std::unique_ptr<ark::mod> make(ark::core*, const std::string& name);

        ark::core& core_;
        std::string name_;
        make_mod_type make_mod_;

        friend class ark::core;
    };

} // ark