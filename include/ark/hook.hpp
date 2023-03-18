#pragma once

#include <ark/log.hpp>
#include <ark/mod.hpp>
#include <ark/module.hpp>
#include <ark/utility/function.hpp>
#include <ark/meta.hpp>

#include <minhook/include/MinHook.h>

#include <functional>
#include <optional>
#include <vector>

namespace ark
{
    void init_hook();

    template<auto T, class Callback, class F>
    struct hooking;

    template<auto T, class Callback, class Return, class... Args>
    struct hooking<T, Callback, Return(Args...)>
    {
        using class_type = typename ark::function_trait<decltype(T)>::class_type;
        using flat_method_type = typename ark::function_trait<decltype(T)>::flat_method_type;

        static Return hook_function(class_type* k, Args... args)
        {
            return (*callback)(original, k, args...);
        }

        static void make(Callback&& f)
        {
            original = reinterpret_cast<flat_method_type>(address);

            if (MH_CreateHook((void*)address, reinterpret_cast<void*>(&hook_function), reinterpret_cast<void**>(&original)) != MH_OK)
            {
                ark_trace("MH_CreateHook failed {}", (uintptr_t)address);
            }
            if (MH_EnableHook((void*)address) != MH_OK)
            {
                ark_trace("MH_EnableHook failed {}", (uintptr_t)address);
            }

            callback = std::move(f);
        }

        static inline uintptr_t address = ark::base_address() + ark::method_info::rva<T>();
        static inline flat_method_type original = nullptr;
        static inline std::optional<Callback> callback = std::nullopt;
    };

    template<auto Method>
    class hook
    {
        using method_type = typename ark::function_trait<decltype(Method)>::method_type;
        using class_type = typename ark::function_trait<decltype(Method)>::class_type;
        using overwrite_type = typename ark::function_trait<decltype(Method)>::overwrite_method_type;

    public:
        template<class F>
        static void process(F&& f)
        {
            using functional_type = typename ark::function_trait<decltype(Method)>::functional_type;
            hooking<Method, F, functional_type>::make(std::forward<F>(f));
        }

        template<class Return_type = void>
        static void init()
        {
            process([](auto&& original, auto&& self, auto&&... args) -> Return_type
            {
                if constexpr (!std::is_same_v<Return_type, void>)
                {
                    Return_type v;
                    if (overwrite_hooks.size() > 0)
                    {
                        for (const auto& [_, hk] : overwrite_hooks) v = hk(original, self, args...);
                        return v;
                    }
                    else
                    {
                        for (const auto &[_, hk] : before_hooks) hk(self, args...);
                        v = original(self, args...);
                        for (const auto &[_, hk] : after_hooks) hk(self, args...);
                    }

                    return v;
                }
                else
                {
                    if (overwrite_hooks.size() > 0) for (const auto& [_, hk] : overwrite_hooks) hk(original, self, args...);
                    else
                    {
                        for (const auto &[_, hk] : before_hooks) hk(self, args...);
                        original(self, args...);
                        for (const auto &[_, hk] : after_hooks) hk(self, args...);
                    }
                }
            });
        }

        static void before(method_type method)
        {
            before_hooks.emplace("__ark_global__", std::move(method));
        }

        static void before(ark::mod* mod, method_type method)
        {
            assert(mod);

            before_hooks.emplace(mod->name(), std::move(method));

            // deleter
            // mod->hooks_deleter_.emplace_back([mod] { before_hooks.erase(mod->name()); });
        }

        static void after(method_type method)
        {
            after_hooks.emplace("__ark_global__", std::move(method));
        }

        static void after(ark::mod* mod, method_type method)
        {
            assert(mod);

            after_hooks.emplace(mod->name(), std::move(method));
            ark_trace("{}", (uintptr_t)after_hooks);

            // deleter
            //mod->hooks_deleter_.emplace_back([mod] { after_hooks.erase(mod->name()); });
        }

        static void overwrite(ark::mod* mod, overwrite_type method)
        {
            assert(mod);
            assert(before_hooks.size() == 0 && after_hooks.size() == 0);

            overwrite_hooks.emplace(mod->name(), std::move(method));

            // deleter
            //mod->hooks_deleter_.emplace_back([mod] { overwrite_hooks.erase(mod->name()); });
        }

    private:
        inline static std::unordered_map<std::string, method_type> before_hooks;
        inline static std::unordered_map<std::string, method_type> after_hooks;
        inline static std::unordered_map<std::string, overwrite_type> overwrite_hooks;
    };
}// ark