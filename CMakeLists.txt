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

# lib arkena_mod
file(GLOB_RECURSE ARK_SOURCES
        ${PROJECT_SOURCE_DIR}/include/ark/*.hpp
        ${PROJECT_SOURCE_DIR}/source/ark/*.cpp
        )
file(GLOB_RECURSE AU_SOURCES
        ${PROJECT_SOURCE_DIR}/source/au/*.cpp
        )
file(GLOB_RECURSE AU_GEN_SOURCES
        ${PROJECT_SOURCE_DIR}/include/gen/au/AmongUsClient.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/Console.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/PlayerControl.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/PlayerTask.cpp
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
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Object.cpp
        )

add_library(lib_arkena_mod OBJECT ${ARK_SOURCES} ${AU_SOURCES} ${AU_GEN_SOURCES})

if (NO_UI)
    target_compile_definitions(lib_arkena_mod PUBLIC ARK_NO_UI=1)
endif()
if (TESTING)
    target_compile_definitions(lib_arkena_mod PUBLIC ARK_TESTING=1)
endif()
if (NO_CONSOLE)
    target_compile_definitions(lib_arkena_mod PUBLIC ARK_NO_CONSOLE=1)
endif()

target_compile_options(lib_arkena_mod PUBLIC /wd4674)
target_compile_definitions(lib_arkena_mod PUBLIC WIN32_LEAN_AND_MEAN NOMINMAX)
target_link_libraries(lib_arkena_mod PUBLIC lib_imgui lib_kiero spdlog lib_json ${CURLLIB_PATH} ws2_32.lib crypt32.lib Wldap32.lib Normaliz.lib)
target_include_directories(lib_arkena_mod PUBLIC ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/include/gen)


# set_target_properties(arkena_mod PROPERTIES
#     RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
#     LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
#     ARCHIVE_OUTPUT_DIRECTORY  "${PROJECT_SOURCE_DIR}/lib/"
#     OUTPUT_NAME "arkena_mod")

# launcher
set(ARK_ICON "${PROJECT_SOURCE_DIR}/resource/icon.rc" "${PROJECT_SOURCE_DIR}/resource/icon.ico")
add_executable(launcher ${PROJECT_SOURCE_DIR}/source/launcher.cpp ${ARK_ICON})
target_include_directories(launcher PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(launcher PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "Arkmongus"
)

# arkena_mod
add_library(arkena_mod SHARED $<TARGET_OBJECTS:lib_arkena_mod>)
target_link_libraries(arkena_mod PUBLIC spdlog)
set_target_properties(arkena_mod PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
    ARCHIVE_OUTPUT_DIRECTORY  "${PROJECT_SOURCE_DIR}/lib/"
    OUTPUT_NAME "arkena_mod"
)

# proxy loader
add_library(proxy_loader SHARED $<TARGET_OBJECTS:lib_arkena_mod>)
add_dependencies(proxy_loader arkena_mod)
target_link_libraries(proxy_loader PUBLIC spdlog)

# copy version file to the game directory
if (GAME_ROOT)
    add_custom_command(TARGET proxy_loader POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:proxy_loader> ${GAME_ROOT}
        COMMENT "Copy version.dll to ${GAME_ROOT}"
    )
endif()

# injector
# add_executable(injector ${PROJECT_SOURCE_DIR}/source/injector.cpp)
# add_dependencies(injector arkena_mod)
# target_include_directories(injector PRIVATE ${PROJECT_SOURCE_DIR}/include)
#
# set_target_properties(injector PROPERTIES
#     RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
#     OUTPUT_NAME "injector"
# )

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