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
    ${PROJECT_SOURCE_DIR}/third_party/imgui/backends/imgui_impl_win32.cpp)

target_include_directories(lib_imgui INTERFACE
        ${PROJECT_SOURCE_DIR}/third_party/imgui/backends/
        ${PROJECT_SOURCE_DIR}/third_party/imgui)

file(GLOB_RECURSE ARK_SOURCES
        ${PROJECT_SOURCE_DIR}/include/ark/*
        ${PROJECT_SOURCE_DIR}/source/ark/*)

# arkena_mod
add_library(arkena_mod SHARED ${ARK_SOURCES})
target_compile_features(arkena_mod PRIVATE cxx_std_20)

target_compile_definitions(arkena_mod PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
target_link_libraries(arkena_mod PRIVATE lib_imgui rcmp spdlog)
target_include_directories(arkena_mod PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(arkena_mod PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "arkena_mod"
)

add_executable(launcher ${PROJECT_SOURCE_DIR}/source/launcher.cpp)
target_include_directories(launcher PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(launcher PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "arkmongus"
)

add_executable(injector ${PROJECT_SOURCE_DIR}/source/injector.cpp)
target_include_directories(injector PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(injector PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "injector"
)