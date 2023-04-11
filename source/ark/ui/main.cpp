#include <ark/ui/core.hpp>

#include <ark/core.hpp>
#include <ark/resource.hpp>
#include <au/mod.hpp>

#include <imgui.h>
#include <shellapi.h>

namespace ark::ui
{
    void core::draw_main()
    {
        ImGui::StyleColorsDark();
        ImGuiStyle& style = ImGui::GetStyle();
        style.WindowBorderSize = 0;

        ImGuiIO& io = ImGui::GetIO();

        float menu_height = 24;
        float width = 300;
        float main_height = io.DisplaySize.y - menu_height;

        ImGui::PushStyleVar(ImGuiStyleVar_WindowPadding, { 0, 0 });
        ImGui::SetNextWindowPos({ 0, 0 });
        ImGui::SetNextWindowSize({ width, menu_height });

        ImGui::Begin("arkena_mod", nullptr, ImGuiWindowFlags_NoDecoration | ImGuiWindowFlags_NoBackground);
        auto title = "arkena_mod " + core_.version().str();
        //ImGui::Image((void*)core_.resources().ntx_mod.handle, ImVec2(menu_height, menu_height));

        //ImGui::Image((void*)core_.resources().ntx_icon.handle, ImVec2(menu_height, menu_height));

        ImGui::SameLine();
        if (ImGui::Button(title.c_str(), ImVec2(width - menu_height, menu_height)))
            main_state_ = !main_state_;
        ImGui::End();

        ImGui::PopStyleVar();

        if (main_state_)
        {
            ImGui::SetNextWindowPos({ 0, menu_height });
            ImGui::SetNextWindowSize({ width, main_height });

            ImGui::Begin("main", nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

            if (ImGui::BeginTabBar("menu"))
            {
                if (ImGui::BeginTabItem("Mods"))
                {
                    for (const auto& mod : core_.mods())
                    {
                        draw_mod_preview(*mod);
                    }
                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("Control"))
                {
                    for (const auto& log : core_.logs())
                    {
                        ImGui::TextColored({ 0.8, 0.8, 0.8, 1 }, "%s", log.c_str());
                    }
                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("Settings"))
                {
                    static const char* current_item = "";

                    if (!core_.mods().empty())
                    {
                        auto& mod = *core_.mods()[0];
                        //if (!mod.enabled()) current_item = "core";

                        if (ImGui::BeginCombo("##Mod", current_item))
                        {
                            for (const auto& mod : core_.mods())
                            {
                                if (mod->enabled())
                                {
                                    bool is_selected = (current_item == mod->name().c_str());
                                    if (ImGui::Selectable(mod->name().c_str(), is_selected))
                                        current_item = mod->name().c_str();
                                    if (is_selected)
                                        ImGui::SetItemDefaultFocus();
                                }
                            }
                            ImGui::EndCombo();
                        }

                        if (mod.enabled())
                        {
                            for (auto& setting : mod.settings())
                            {
                                ImGui::TextUnformatted(setting.name().c_str());
                                if (ImGui::IsItemHovered())
                                {
                                    if (!setting.description().empty())
                                    {
                                        ImGui::BeginTooltip();
                                        ImGui::PushTextWrapPos(ImGui::GetFontSize() * 20.0f);
                                        ImGui::TextUnformatted(setting.description().c_str());
                                        ImGui::PopTextWrapPos();
                                        ImGui::EndTooltip();
                                    }
                                }

                                std::string id = "##" + setting.name();
                                std::visit(
                                [&id, &setting, &mod](auto&& arg) {
                                    using T = std::decay_t<decltype(arg)>;
                                    if constexpr (std::is_same_v<T, bool>)
                                    {
                                        if (ImGui::Checkbox(id.c_str(), &std::get<bool>(setting.value())))
                                        {
                                            mod.save_settings();
                                        }
                                    }
                                    else if constexpr (std::is_same_v<T, int>)
                                    {
                                        if (ImGui::InputInt(id.c_str(), &std::get<int>(setting.value()), 1, 1, ImGuiInputTextFlags_EnterReturnsTrue))
                                        {
                                            mod.save_settings();
                                        }
                                    }
                                    else if constexpr (std::is_same_v<T, float>)
                                    {
                                        if (ImGui::InputFloat(id.c_str(), &std::get<float>(setting.value()), 1, 1, "%.2f",
                                                              ImGuiInputTextFlags_EnterReturnsTrue))
                                        {
                                            mod.save_settings();
                                        }
                                    }
                                    else if constexpr (std::is_same_v<T, std::string>)
                                    {
                                        // todo handle string with imgui stl
                                        auto& str = std::get<std::string>(setting.value());
                                        if (ImGui::InputText(id.c_str(), str.data(), str.capacity(), ImGuiInputTextFlags_EnterReturnsTrue))
                                        {
                                            str.resize(1 + std::strlen(str.c_str()));
                                            mod.save_settings();
                                        }
                                    }
                                    else
                                        ImGui::TextUnformatted("Unsupported setting type");
                                },
                                setting.value());
                            }
                        }
                    }
                    ImGui::EndTabItem();
                }

                if (ImGui::BeginTabItem("About"))
                {
                    ImGui::Text("Dev by Arkena");
                    ImGui::Text("github:neuroshok/gaming.arkena_mod");
                }
                ImGui::EndTabBar();
            }
        }
        ImGui::End();
    }

    void draw_mod_preview(mod& mod)
    {
        ImGui::Image((void*)mod.image().native_handle, ImVec2(mod.image().width, mod.image().height));
        ImGui::SameLine();

        if (mod.name() == "core")
        {
            ImGui::TextColored({ 0.2, 0.8, 0.8, 1 }, "%s", mod.fullname().c_str());
        }
        else
        {
            ImGui::TextColored({ 0.22, 0.76, 1, 1 }, "%s", mod.fullname().c_str());

            /*
                if (mod.enabled()) mod.disable();
                else mod.enable();
            }*/
        }

        if (mod.description().size() > 0)
        {
            ImGui::SameLine();
            ImGui::TextUnformatted("?");
            if (ImGui::IsItemHovered())
            {
                if (!mod.description().empty())
                {
                    ImGui::BeginTooltip();
                    ImGui::PushTextWrapPos(ImGui::GetFontSize() * 20.0f);
                    ImGui::TextUnformatted(mod.description().c_str());
                    ImGui::PopTextWrapPos();
                    ImGui::EndTooltip();
                }
            }
        }

        ImGui::PushStyleColor(ImGuiCol_Button, IM_COL32(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonHovered, IM_COL32(0, 0, 0, 0));
        ImGui::PushStyleColor(ImGuiCol_ButtonActive, IM_COL32(0, 0, 0, 0));

        ImGui::Button("Authors:");

        ImGui::PushStyleColor(ImGuiCol_Text, IM_COL32(255, 120 ,0 ,255));

        for (const auto& author : mod.authors())
        {
            ImGui::SameLine();

            if (ImGui::Button(author.name.c_str()))
            {
                if (!author.url.empty()) ShellExecuteA( nullptr, "open", author.url.c_str(), nullptr, nullptr, SW_SHOWNORMAL );
            }
            if (!author.url.empty() && ImGui::IsItemHovered()) ImGui::SetMouseCursor(ImGuiMouseCursor_Hand);
        }
        ImGui::PopStyleColor();
        ImGui::PopStyleColor();
        ImGui::PopStyleColor();
        ImGui::PopStyleColor();
    }
} // ark::ui