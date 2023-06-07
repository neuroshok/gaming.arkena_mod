add_library(lib_imgui INTERFACE)

if (ARK_PLATFORM STREQUAL "android")
    set(IMGUI_PLATFORM_SOURCES
            ${IMGUI_ROOT}/backends/imgui_impl_android.cpp
            ${IMGUI_ROOT}/backends/imgui_impl_opengl3.cpp)
else()
    set(IMGUI_PLATFORM_SOURCES
        ${IMGUI_ROOT}/backends/imgui_impl_dx11.cpp
        ${IMGUI_ROOT}/backends/imgui_impl_win32.cpp)
endif()

target_sources(lib_imgui INTERFACE
    ${IMGUI_ROOT}/imgui.cpp
    ${IMGUI_ROOT}/imgui_draw.cpp
    ${IMGUI_ROOT}/imgui_widgets.cpp
    ${IMGUI_ROOT}/imgui_tables.cpp
    ${IMGUI_ROOT}/misc/cpp/imgui_stdlib.cpp
    ${IMGUI_PLATFORM_SOURCES}
    )

target_include_directories(lib_imgui INTERFACE
        ${IMGUI_ROOT})