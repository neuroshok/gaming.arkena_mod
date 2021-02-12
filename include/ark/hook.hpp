#pragma once

#include <ark/mod.hpp>
#include <ark/utility/function.hpp>

#include <functional>
#include <vector>

namespace ark
{
    void init_hook();

    template<auto T>
    class hook
    {
        using method_type = typename ark::function_trait<decltype(T)>::method_type;
        using class_type = typename ark::function_trait<decltype(T)>::class_type;

    public:
        static void load()
        {
            ::hook_method<T>([&](auto&& original, auto&& self, auto&&... args)
            {
                if (overwrite_hooks.size() > 0)
                {
                    for (const auto& [_, hk] : overwrite_hooks) hk(self, args...);
                }
                else
                {
                    for (const auto &[_, hk] : before_hooks) hk(self, args...);
                    original(self, args...);
                    for (const auto &[_, hk] : after_hooks) hk(self, args...);
                }
            });
        }

        static void before(ark::mod* mod, method_type method)
        {
            assert(mod);

            before_hooks.emplace(mod->name(), std::move(method));

            // deleter
            mod->hooks_.emplace_back([mod] { before_hooks.erase(mod->name()); });
        }

        static void after(ark::mod* mod, method_type method)
        {
            assert(mod);

            after_hooks.emplace(mod->name(), std::move(method));

            // deleter
            mod->hooks_.emplace_back([mod] { after_hooks.erase(mod->name()); });
        }

        static void overwrite(ark::mod* mod, method_type method)
        {
            assert(mod);
            assert(before_hooks.size() == 0 && after_hooks.size() == 0);

            overwrite_hooks.emplace(mod->name(), std::move(method));

            // deleter
            mod->hooks_.emplace_back([mod] { overwrite_hooks.erase(mod->name()); });
        }

    private:
        inline static std::unordered_map<std::string, method_type> before_hooks;
        inline static std::unordered_map<std::string, method_type> after_hooks;
        inline static std::unordered_map<std::string, method_type> overwrite_hooks;
    };
}// ark