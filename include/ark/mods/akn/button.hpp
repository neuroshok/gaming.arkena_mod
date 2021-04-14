#pragma once

#include <ark/class.hpp>
#include <au/KillButtonManager.hpp>
#include <au/UnityEngine/GameObject.hpp>
#include <au/UnityEngine/Material.hpp>
#include <au/UnityEngine/Sprite.hpp>
#include <au/UnityEngine/SpriteRenderer.hpp>
#include <au/UnityEngine/Texture2D.hpp>
//#include <au/PassiveButton.hpp>
//#include <au/UnityEngine/Button.hpp>

#include <ark/mods/akn.hpp>
#include <upp/object.hpp>
#include <upp/rect.hpp>
#include <upp/vector2.hpp>
#include <upp/vector3.hpp>

namespace akn
{
    struct button : ark::meta<button, UnityEngine::GameObject>
    {
        inline static std::unordered_map<uintptr_t, std::function<void()>> buttons_callback;

        KillButtonManager* button_;

        void ctor(ark::resource::image& image, akn::mod& akn_mod)
        {
            button_ = upp::instantiate(akn_mod.hud()->KillButton, akn_mod.hud()->get_transform(), true);

            //auto button_comp = akn_mod.hud()->KillButton->get_component<PassiveButton>();
            buttons_callback.emplace(uintptr_t(button_), [v = buttons_callback.size()](){ ark_trace("ok {}", v); });

            auto texture = ark::resource::load_texture(image);

            button_->get_gameObject()->SetActive(true);
            button_->set_enabled(true);
            button_->isActive = true;
            button_->SetCoolDown(0, 9);

            button_->get_transform()->Translate1(upp::vector3{-2.5, -0.5, 0});
            button_->get_transform()->set_localPosition(upp::vector3{0, -2, 0});
            button_->get_transform()->set_localScale(upp::vector3{0.8, 0.8, 0.8});

            auto s = UnityEngine::Sprite::Create7(texture, upp::rect{ 0.f, 0.f, (float)texture->GetDataWidth(), (float)texture->GetDataHeight() }, upp::vector2{0.5, 0.5});
            button_->renderer->set_sprite(s);

            button_->renderer->set_enabled(true);
        }
        
        void update()
        {
            button_->renderer->get_sharedMaterial()->SetFloat(cs::make_string("_Desat"), 0);
            button_->renderer->set_color(upp::color{ 1, 1, 1, 1 });
        }
    };
} // akn