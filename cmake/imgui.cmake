add_library(lib_imgui INTERFACE)

target_sources(lib_imgui INTERFACE
    ${IMGUI_ROOT}/imgui.cpp
    ${IMGUI_ROOT}/imgui_draw.cpp
    ${IMGUI_ROOT}/imgui_widgets.cpp
    ${IMGUI_ROOT}/imgui_tables.cpp
    ${IMGUI_ROOT}/backends/imgui_impl_dx11.cpp
    #${IMGUI_ROOT}/backends/imgui_impl_opengl3.cpp
    ${IMGUI_ROOT}/backends/imgui_impl_win32.cpp
    ${IMGUI_ROOT}/misc/cpp/imgui_stdlib.cpp
    )

target_include_directories(lib_imgui INTERFACE
        ${IMGUI_ROOT})