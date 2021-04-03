#include <ark/mods/pranker.hpp>

#include <ark/hook.hpp>

#include <au/PlayerControl.hpp>
#include <au/ShipStatus.hpp>
#include <au/AmongUsClient.hpp>
#include <au/Hazel/MessageReader.hpp>
#include <au/Hazel/MessageWriter.hpp>
#include <au/UnityEngine/Transform.hpp>

#include <random>

enum class role_type { impostor, crewmate, spy };

namespace ark::mods
{
    pranker::pranker(ark::core& c)
        : mod(c, "pranker", {0, 1, 0})
    {
    }



    void pranker::on_enable()
    {
        mod::hook_intro();
        static bool alive_ = true;
        //static DDPGLPLGFOI* ptr = nullptr;
/*
        ark::hook<&UseButton::DoClick>::overwrite(this, [this](auto&& o, auto&& self) {
            if (alive_) {
                //PlayerControl::instance()->Die(1);
                alive_ = false;
                auto death_anim = PlayerControl::instance()->KillAnimations->get(0);

                ptr = static_cast<DDPGLPLGFOI*>(UnityEngine::Object::Instantiate(death_anim->bodyPrefab));
                ptr->get_transform()->set_position(PlayerControl::instance()->get_transform()->get_position());
                PlayerControl::instance()->renderer->get_gameObject()->SetActive(false);
            }
            else {
                PlayerControl::instance()->renderer->get_gameObject()->SetActive(true);
                PlayerControl::instance()->moveable = true;
                PlayerControl::instance()->Revive();
                alive_ = true;
                if (ptr) ptr->get_gameObject()->Destroy(self);
            }
        });*/
    }
} // ark::mods
