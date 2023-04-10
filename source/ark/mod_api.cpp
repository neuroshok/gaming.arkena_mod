#include <ark/mod_api.hpp>

#include <ark/log.hpp>
#include <ark/mod.hpp>

namespace ark
{
    mod_api::mod_api(ark::core& core, std::string name)
        : core_{ core }
        , name_{ std::move(name) }
    {}

    void mod_api::register_mod(mod_api::make_mod_type make_mod)
    {
        make_mod_ = std::move(make_mod);
    }

    std::unique_ptr<ark::mod> mod_api::make(ark::core* core, const std::string& name)
    {
        ark_assert(make_mod_, "make_mod not set");
        auto mod = make_mod_();
        mod->core_ = core;
        mod->name_ = name;
        return mod;
    }

} // ark