cmake_minimum_required(VERSION 3.17)
project(arkena_mod)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

add_subdirectory(third_party/rcmp)
add_subdirectory(third_party/spdlog)

# imgui
add_library(lib_imgui INTERFACE)

target_sources(lib_imgui INTERFACE
    ${PROJECT_SOURCE_DIR}/third_party/imgui/imgui.cpp
    ${PROJECT_SOURCE_DIR}/third_party/imgui/imgui_draw.cpp
    ${PROJECT_SOURCE_DIR}/third_party/imgui/imgui_widgets.cpp
    ${PROJECT_SOURCE_DIR}/third_party/imgui/imgui_tables.cpp
    ${PROJECT_SOURCE_DIR}/third_party/imgui/backends/imgui_impl_dx11.cpp
    #${PROJECT_SOURCE_DIR}/third_party/imgui/backends/imgui_impl_opengl3.cpp
    ${PROJECT_SOURCE_DIR}/third_party/imgui/backends/imgui_impl_win32.cpp)

target_include_directories(lib_imgui INTERFACE
        ${PROJECT_SOURCE_DIR}/third_party/imgui)

# kiero
add_library(lib_kiero INTERFACE)
target_include_directories(lib_kiero INTERFACE ${PROJECT_SOURCE_DIR}/third_party/kiero)
target_sources(lib_kiero INTERFACE
        ${PROJECT_SOURCE_DIR}/third_party/kiero/kiero.cpp
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/hook.c
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/buffer.c
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/trampoline.c
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/hde/hde32.c)

target_include_directories(lib_kiero INTERFACE
        ${PROJECT_SOURCE_DIR}/third_party/kiero/backends/
        ${PROJECT_SOURCE_DIR}/third_party/imgui)

# arkena_mod
file(GLOB_RECURSE ARK_SOURCES
        ${PROJECT_SOURCE_DIR}/include/ark/*
        ${PROJECT_SOURCE_DIR}/source/ark/*)

add_library(arkena_mod SHARED ${ARK_SOURCES})
target_compile_features(arkena_mod PRIVATE cxx_std_20)

target_compile_definitions(arkena_mod PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
target_link_libraries(arkena_mod PRIVATE lib_imgui lib_kiero rcmp spdlog)
target_include_directories(arkena_mod PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(arkena_mod PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "arkena_mod"
)

# launcher
add_executable(launcher ${PROJECT_SOURCE_DIR}/source/launcher.cpp)
add_dependencies(launcher arkena_mod)
target_include_directories(launcher PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(launcher PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "arkmongus"
)

# injector
add_executable(injector ${PROJECT_SOURCE_DIR}/source/injector.cpp)
add_dependencies(injector arkena_mod)
target_include_directories(injector PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_custom_command(TARGET arkena_mod POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/bin/arkena_mod.dll ${PROJECT_SOURCE_DIR}/bin/arkena_mod0.dll
        COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/bin/arkena_mod.dll ${PROJECT_SOURCE_DIR}/bin/arkena_mod1.dll
        COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/bin/arkena_mod.dll ${PROJECT_SOURCE_DIR}/bin/arkena_mod2.dll
        COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_SOURCE_DIR}/bin/arkena_mod.dll ${PROJECT_SOURCE_DIR}/bin/arkena_mod3.dll
)

set_target_properties(injector PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "injector"
)

#
add_executable(generator ${PROJECT_SOURCE_DIR}/source/generator.cpp)

set_target_properties(generator PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "generator"
)