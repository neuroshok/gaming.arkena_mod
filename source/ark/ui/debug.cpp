#include <ark/ui/core.hpp>

#include <ark/core.hpp>

#include <imgui.h>

namespace ark::ui
{
    void core::draw_debug()
    {
        ImGui::Begin("Debug");

        if (ImGui::Button("Debug0")) core_.debug(0);
        if (ImGui::Button("Debug1")) core_.debug(1);
        if (ImGui::Button("Debug2")) core_.debug(2);

        ImGui::End();
    }
}