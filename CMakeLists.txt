cmake_minimum_required(VERSION 3.17)

project(arkena_mod)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded")

# version
set(ARK_VERSION_MAJOR 0)
set(ARK_VERSION_MINOR 4)
set(ARK_VERSION_FIX 0)
set(ARK_VERSION_META "")

if (CMAKE_BUILD_TYPE STREQUAL "Release")
    if (ARK_VERSION_META)
        set(ARK_VERSION_META "-${ARK_VERSION_META}")
    endif ()
else()
    string(TIMESTAMP CURRENT_DATE "%s")
    string(SUBSTRING ${CURRENT_DATE} 4 -1 CURRENT_DATE)
    if (ARK_VERSION_META)
        set(ARK_VERSION_META "${ARK_VERSION_META}-${CURRENT_DATE}")
    endif ()
endif ()

# spdlog
add_subdirectory(third_party/spdlog)

# imgui
set(IMGUI_ROOT ${PROJECT_SOURCE_DIR}/third_party/imgui)
include(cmake/imgui.cmake)

# lib_discord_sdk
#add_library(lib_discord_sdk INTERFACE)

#file(GLOB_RECURSE DISCORD_SDK_SOURCES
#        ${PROJECT_SOURCE_DIR}/third_party/discord_sdk/source/*)

#target_sources(lib_discord_sdk INTERFACE ${DISCORD_SDK_SOURCES})

#target_include_directories(lib_discord_sdk INTERFACE
#        ${PROJECT_SOURCE_DIR}/third_party/discord_sdk/source/)

#target_link_libraries(lib_discord_sdk INTERFACE ${PROJECT_SOURCE_DIR}/third_party/discord_sdk/lib/discord_game_sdk.dll.lib)


# lib_restcpp
#find_package(restclient-cpp CONFIG REQUIRED)

# kiero
add_library(lib_kiero INTERFACE)
target_include_directories(lib_kiero INTERFACE ${PROJECT_SOURCE_DIR}/third_party/kiero)
target_sources(lib_kiero INTERFACE
        ${PROJECT_SOURCE_DIR}/third_party/kiero/kiero.cpp
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/hook.c
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/buffer.c
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/trampoline.c
        ${PROJECT_SOURCE_DIR}/third_party/kiero/minhook/src/hde/hde32.c)

# dobby
if (ARK_PLATFORM STREQUAL "android")
    add_library(lib_hook INTERFACE)
    target_include_directories(lib_hook INTERFACE ${PROJECT_SOURCE_DIR}/third_party/Dobby/include)

    option(DOBBY_GENERATE_SHARED "Build shared library" OFF)
    add_subdirectory(third_party/Dobby)
    target_link_libraries(lib_hook INTERFACE dobby_static)
endif ()


# nlohmann
set(JSON_BuildTests OFF CACHE INTERNAL "")
add_subdirectory(third_party/json)
add_library(lib_json INTERFACE)
target_include_directories(lib_json INTERFACE third_party/json/include)

# arkena_mod
file(GLOB_RECURSE ARK_SOURCES
        ${PROJECT_SOURCE_DIR}/include/ark/*.hpp
        ${PROJECT_SOURCE_DIR}/source/ark/*.cpp
        ${PROJECT_SOURCE_DIR}/source/il2cpp/*.cpp
        )
file(GLOB_RECURSE AU_SOURCES
        ${PROJECT_SOURCE_DIR}/source/au/*.cpp
        )
file(GLOB_RECURSE AU_GEN_SOURCES
        ${PROJECT_SOURCE_DIR}/include/gen/au/AbilityButton.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/AmongUsClient.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/Console.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/PlayerControl.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/PlayerTask.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/FollowerCamera.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/GameManager.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/GameData_PlayerInfo.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/GameData_PlayerOutfit.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/au/ActionButton.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/InnerNet/InnerNetClient.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/Hazel/MessageReader.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/Hazel/MessageWriter.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/TMPro/TMP_Text.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Application.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Behaviour.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Transform.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Component.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/Object.cpp
        ${PROJECT_SOURCE_DIR}/include/gen/UnityEngine/SpriteRenderer.cpp
        )

add_library(arkena_mod SHARED ${ARK_SOURCES} ${AU_SOURCES} ${AU_GEN_SOURCES})

if (NO_UI)
    target_compile_definitions(arkena_mod PUBLIC ARK_NO_UI=1)
endif()
if (ARK_DEBUG)
    target_compile_definitions(arkena_mod PUBLIC ARK_DEBUG=1)
endif()

target_compile_definitions(arkena_mod PUBLIC
        ARK_VERSION_MAJOR=${ARK_VERSION_MAJOR}
        ARK_VERSION_MINOR=${ARK_VERSION_MINOR}
        ARK_VERSION_FIX=${ARK_VERSION_FIX}
        ARK_VERSION_META="${ARK_VERSION_META}"
        )

target_compile_options(arkena_mod PUBLIC /wd4674)
target_compile_definitions(arkena_mod PUBLIC ARK_SHARED_EXPORT WIN32_LEAN_AND_MEAN NOMINMAX)
target_link_libraries(arkena_mod PUBLIC lib_imgui lib_kiero spdlog lib_json ${CURLLIB_PATH} ws2_32.lib crypt32.lib Wldap32.lib Normaliz.lib)
target_include_directories(arkena_mod PUBLIC
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/include/gen
        #${PROJECT_SOURCE_DIR}/third_party/restclient-cpp/include
        )

# arkena_mod
target_link_libraries(arkena_mod PUBLIC spdlog)
set_target_properties(arkena_mod PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/lib/"
    ARCHIVE_OUTPUT_DIRECTORY  "${PROJECT_SOURCE_DIR}/lib/"
    OUTPUT_NAME "arkena_mod")
# copy arkena_mod file to the game directory
if (GAME_ROOT)
    add_custom_command(TARGET arkena_mod POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:arkena_mod> ${GAME_ROOT}
        COMMENT "Copy arkena_mod to ${GAME_ROOT}"
    )
endif()

# launcher
set(ARK_ICON "${PROJECT_SOURCE_DIR}/resource/icon.rc" "${PROJECT_SOURCE_DIR}/resource/icon.ico")
add_executable(launcher ${PROJECT_SOURCE_DIR}/source/launcher.cpp ${ARK_ICON})
target_include_directories(launcher PRIVATE ${PROJECT_SOURCE_DIR}/include)

set_target_properties(launcher PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "Arkmongus"
)

# proxy loader
add_library(proxy_loader SHARED
        tools/loader/main.cpp
        tools/loader/version.cpp
        tools/loader/version.def
        )
# copy version file to the game directory
if (GAME_ROOT)
    add_custom_command(TARGET proxy_loader POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:proxy_loader> ${GAME_ROOT}/version.dll
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
add_executable(bin2cpp ${PROJECT_SOURCE_DIR}/tools/bin2cpp/main.cpp)
set_target_properties(bin2cpp PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "bin2cpp"
)

# bin2cpp_compressed
add_executable(bin2cpp_compressed ${PROJECT_SOURCE_DIR}/tools/bin2cpp_compressed/main.cpp)
set_target_properties(bin2cpp_compressed PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin/"
    OUTPUT_NAME "bin2cpp_compressed"
)

# generator
file(GLOB GENERATOR_SOURCES
        ${PROJECT_SOURCE_DIR}/tools/generator/*.cpp
        ${PROJECT_SOURCE_DIR}/tools/generator/platform/android/main.cpp
        ${PROJECT_SOURCE_DIR}/source/ark/meta.cpp
        ${PROJECT_SOURCE_DIR}/source/ark/log.cpp
        )

if (ARK_PLATFORM STREQUAL "android")
    add_library(generator SHARED ${GENERATOR_SOURCES})
    find_library(log-lib log)
    target_link_libraries(generator PUBLIC lib_hook)
else ()
    add_executable(generator ${GENERATOR_SOURCES})
endif ()

target_include_directories(generator PRIVATE ${PROJECT_SOURCE_DIR}/include ${PROJECT_SOURCE_DIR}/tools/generator)
target_link_libraries(generator PRIVATE spdlog ${log-lib})

set_target_properties(generator PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
    LIBRARY_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/bin"
    OUTPUT_NAME "generator"
)

if (GAME_ROOT)
    add_custom_command(TARGET generator POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:generator> ${GAME_ROOT}/lib/arm64-v8a/libmain.so
            COMMAND apktool b ${GAME_ROOT}
            COMMAND java -jar ${PROJECT_SOURCE_DIR}/tools/android/uber-apk-signer.jar -a ${GAME_ROOT}/dist/au.apk
            COMMENT "Deploy to ${GAME_ROOT}"
            DEPENDS
            VERBATIM
    )
endif()