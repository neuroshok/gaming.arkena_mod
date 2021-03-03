#include <ark/mods/akn/player.hpp>

#include <ark/mods/akn/button.hpp>
#include <upp/core.hpp>

namespace akn
{
    void peon::init_ui()
    {
        button_ = upp::make<akn::button>(ark::resources::ability2, mod_);
    }

    void peon::update_ui()
    {
        button_->update();
    }
} // akn