#pragma once

#include <ark/class.hpp>
#include <autogen/KillButtonManager.hpp>
#include <autogen/PassiveButton.hpp>
#include <autogen/Unity/Button.hpp>

#include <ark/mods/akn.hpp>
#include <upp/object.hpp>

#include <iostream>

namespace akn
{
    struct button : ark::meta<button, Unity::GameObject>
    {
        inline static std::unordered_map<uintptr_t, std::function<void()>> buttons_callback;

        KillButtonManager* button_;

        void _ctor(ark::resource::image& image, akn::mod& akn_mod)
        {
            button_ = upp::instantiate(akn_mod.hud()->KillButton, akn_mod.hud()->get_transform(), true);

            auto button_comp = akn_mod.hud()->KillButton->get_component<PassiveButton>();
            buttons_callback.emplace(uintptr_t(button_), [](){ ark_trace("ok"); });

            auto texture = ark::resource::load_texture(image);

            button_->get_gameObject()->SetActive(true);
            button_->set_enabled(true);
            button_->isActive = true;
            button_->SetCoolDown(0, 9);

            button_->get_transform()->Translate({-2.5, -0.5, 0});
            button_->get_transform()->set_localPosition({0, -2, 0});
            button_->get_transform()->set_localScale({0.8, 0.8, 0.8});

            auto s = Unity::Sprite::Create(texture, Unity::Rect{ 0, 0, (float)texture->GetDataWidth(), (float)texture->GetDataHeight() }, {1, 1});
            button_->renderer->set_sprite(s);

            button_->renderer->set_enabled(true);
        }
        
        void update()
        {
            button_->renderer->get_sharedMaterial()->SetFloat(cs::make_string("_Desat"), 0);
            button_->renderer->set_color({ 1, 1, 1, 1 });
        }
    };
} // akn