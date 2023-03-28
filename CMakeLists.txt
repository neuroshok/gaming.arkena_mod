cmake_minimum_required(VERSION 3.17)
project(arkena_mod)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

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

# lib_discord_sdk
#add_library(lib_discord_sdk INTERFACE)

#file(GLOB_RECURSE DISCORD_SDK_SOURCES
#        ${PROJECT_SOURCE_DIR}/third_party/discord_sdk/source/*)

#target_sources(lib_discord_sdk INTERFACE ${DISCORD_SDK_SOURCES})

#target_include_directories(lib_discord_sdk INTERFACE
#        ${PROJECT_SOURCE_DIR}/third_party/discord_sdk/source/)

#target_link_libraries(lib_discord_sdk INTERFACE ${PROJECT_SOURCE_DIR}/third_party/discord_sdk/lib/discord_game_sdk.dll.lib)


# lib_restcpp
# if (CURL_ROOT)
#     set(CURL_DIR ${CURL_ROOT})
#     set(CURL_INCLUDE_DIR ${CURL_DIR}/include)
#     set(CURL_LIBRARY ${CURL_DIR}/lib)
# endif()
#
# set(BUILD_SHARED_LIBS NO)
# add_subdirectory(third_party/restclient-cpp)
# target_compile_definitions(restclient-cpp PUBLIC CURL_STATICLIB=1)

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

# nlohmann
set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(third_party/json)
add_library(lib_json INTERFACE)
target_include_directories(lib_json INTERFACE third_party/json/include)

# arkena_mod
file(GLOB_RECURSE ARK_SOURCES
        ${PROJECT_SOURCE_DIR}/include/ark/*
        ${PROJECT_SOURCE_DIR}/source/ark/*
        )

file(GLOB_RECURSE AU_SOURCES
        ${PROJECT_SOURCE_DIR}/source/au/*.cpp
        )
file(GLOB_RECURSE AU_GEN_SOURCES
        ${PROJECT_SOURCE_DIR}/include/gen/au/AmongUsClient.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/PlayerControl.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/FollowerCamera.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/GameManager.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/GameData_PlayerInfo.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/GameData_PlayerOutfit.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/InnerNet/InnerNetClient.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/Hazel/MessageReader.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/Hazel/MessageWriter.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/TMPro/TMP_Text.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Application.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Behaviour.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Transform.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Component.cpp
        )

add_library(arkena_mod SHARED ${ARK_SOURCES} ${AU_SOURCES} ${AU_GEN_SOURCES})

target_compile_features(arkena_mod PRIVATE cxx_std_20)

if (NO_UI)
    target_compile_definitions(arkena_mod PUBLIC ARK_NO_UI=1)
endif()
if (TESTING)
    target_compile_definitions(arkena_mod PUBLIC ARK_TESTING=1)
endif()
if (NO_CONSOLE)
    target_compile_definitions(arkena_mod PUBLIC ARK_NO_CONSOLE=1)
endif()

target_compile_options(arkena_mod PRIVATE /wd4674)
target_compile_definitions(arkena_mod PRIVATE WIN32_LEAN_AND_MEAN NOMINMAX)
target_link_libraries(arkena_mod PRIVATE lib_imgui lib_kiero spdlog lib_json ${CURL_ROOT}/build/libcurl32.lib ws2_32.lib crypt32.lib Wldap32.lib Normaliz.lib)
target_include_directories(arkena_mod PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/gen)

set_target_properties(arkena_mod PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
    ARCHIVE_OUTPUT_DIRECTORY  "${PROJECT_SOURCE_DIR}/lib/"
    OUTPUT_NAME "arkena_mod")

# launcher
set(ARK_ICON "${PROJECT_SOURCE_DIR}/resource/icon.rc" "${PROJECT_SOURCE_DIR}/resource/icon.ico")

add_executable(launcher ${PROJECT_SOURCE_DIR}/source/launcher.cpp ${ARK_ICON})
add_dependencies(launcher arkena_mod)
target_include_directories(launcher PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(launcher PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "Arkmongus"
)

# proxy loader
add_library(proxy_loader SHARED ${ARK_SOURCES} ${AU_SOURCES} ${AU_GEN_SOURCES} source/ark/loader/version.def)
target_compile_definitions(proxy_loader PUBLIC LOADER_PROXY)
target_link_libraries(proxy_loader PRIVATE lib_imgui lib_kiero spdlog lib_json ${CURL_ROOT}/build/libcurl32.lib ws2_32.lib crypt32.lib Wldap32.lib Normaliz.lib)
target_include_directories(proxy_loader PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/gen)

set_target_properties(proxy_loader PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
    ARCHIVE_OUTPUT_DIRECTORY  "${PROJECT_SOURCE_DIR}/lib/"
    OUTPUT_NAME "version"
    ARCHIVE_OUTPUT_NAME "arkena_mod"
    LIBRARY_OUTPUT_NAME "arkena_mod"
)
# copy files to the game directory
add_custom_command(TARGET proxy_loader POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:proxy_loader> ${GAME_ROOT}
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

# bin2cpp
add_executable(bin2cpp ${PROJECT_SOURCE_DIR}/source/bin2cpp.cpp)

set_target_properties(bin2cpp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "bin2cpp"
)

# generator
file(GLOB_RECURSE GENERATOR_SOURCES ${PROJECT_SOURCE_DIR}/tools/generator/*)

add_executable(generator ${GENERATOR_SOURCES})
target_include_directories(generator PRIVATE ${PROJECT_SOURCE_DIR}/include)
target_link_libraries(generator PRIVATE spdlog)

set_target_properties(generator PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
    OUTPUT_NAME "generator"
)