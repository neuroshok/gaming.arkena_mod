#include <ark/ui/core.hpp>

#include <ark/core.hpp>

#include <imgui.h>

namespace ark::ui
{
    void core::draw_debug()
    {
        ImGui::Begin("Debug");

        if (ImGui::Button("Test"))
        {
            core_.debug();
        }

        ImGui::End();
    }
}