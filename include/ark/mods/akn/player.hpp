#pragma once

#include <au/HudManager.hpp>
#include <upp/color.hpp>
#include <au/UnityEngine/Transform.hpp>

#include <ark/resource.hpp>
#include <ark/mod_intro.hpp>

namespace akn
{
    class button;
    class mod;

    class player
    {
    public:
        explicit player(akn::mod& mod, std::uint8_t id) : mod_{ mod },  id_{ id } {}

        std::uint8_t id() const { return id_; }
        virtual ark::mod_intro intro() const { return { .title = "Player", .title_color = { 1, 1, 1 } }; }
        virtual upp::color color() const { return { 1, 1, 1 }; }
        virtual void init_ui() { ark_trace("unimplemented"); }
        virtual void update_ui() { ark_trace("unimplemented"); }
        // do_ability()
        // win_condition()

    protected:
        akn::mod& mod_;

    private:
        std::uint8_t id_;
    };

    class peon : public player
    {
    public:
        explicit peon(akn::mod& mod, std::uint8_t id) : player(mod, id) {}

        upp::color color() const override { return { 0.7, 1, 0.2 }; }
        ark::mod_intro intro() const override { return { .title = "Peon", .title_color = color() }; }

        void init_ui() override;
        void update_ui() override;

    private:
        akn::button* button_ = nullptr;
    };

    class pranker : public player
    {
    public:
        explicit pranker(akn::mod& mod, std::uint8_t id) : player(mod, id) {}

        upp::color color() const override { return { 0.2, 1, 0.2}; }
        ark::mod_intro intro() const override { return { .title = "Pranker", .title_color = color() }; }
    };

    class voyager : public player
    {
    public:
        explicit voyager(akn::mod& mod, std::uint8_t id) : player(mod, id) {}

        //upp::color color() const override { return { 1, 0.2, 0.2 }; }
        //ark::mod_intro intro() const override { return { .title = "Voyager", .title_color = color() }; }
    };
}// akn