#include <jni.h>
#include <string>
#include <dlfcn.h>

#include <dobby.h>

#include <android/log.h>
#include <thread>
#include <pthread.h>

#include "generator.hpp"
#include "klass.hpp"
#include "filter.hpp"

#include <il2cpp/api.hpp>
#include <spdlog/spdlog.h>



#include <EGL/egl.h> // need to make a common.h that contains all these headers cuz this is nasty
#include <GLES2/gl2.h>
#include <GLES2/gl2ext.h>
#include <GLES2/gl2platform.h>
#include "../third_party/imgui/imgui.h"
#include "../third_party/imgui/backends/imgui_impl_android.h"
#include "../third_party/imgui/backends/imgui_impl_opengl3.h"



void DrawImGui()
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
    std::string title = "arkena_mod 0.5.0";

    ImGui::SameLine();
    if (ImGui::Button(title.c_str(), ImVec2(width - menu_height, menu_height)))

    ImGui::End();
    ImGui::End();
}






void gen();

void (*original)(void* thiz, float);

void hook_func(void* thiz, float time)
{
    original(thiz, 0);
}



    static bool imgui_init = false;

int  glWidth, glHeight;
void SetupImGui()
{
    if (!imgui_init)
    {
        ark::error("imgui context");
        auto context = ImGui::CreateContext();
        if (!context)
        {
            ark::error("imgui fail");
            return;
        }
        ImGuiIO &io = ImGui::GetIO();

        io.DisplaySize = ImVec2((float)glWidth, (float)glHeight);

        ImGui::GetStyle().ScaleAllSizes(3.0f);

        ark::error("imgui init android & gl");

        ImGui_ImplAndroid_Init(nullptr);
        ImGui_ImplOpenGL3_Init();

        imgui_init = true;
    }
}


EGLBoolean (*original_imgui)(EGLDisplay _display, EGLSurface _surface);
EGLBoolean hook_imgui(EGLDisplay _display, EGLSurface _surface) {
    eglQuerySurface(_display, _surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(_display, _surface, EGL_HEIGHT, &glHeight);

    SetupImGui();

    if (imgui_init)
    {
        ImGuiIO& io = ImGui::GetIO();
        ark::error("ImGui_ImplOpenGL3_NewFrame");
        ImGui_ImplOpenGL3_NewFrame();

        ImGui::NewFrame();

        DrawImGui();

        ImGui::EndFrame();
        ImGui::Render();
        glViewport(0, 0, (int)io.DisplaySize.x, (int)io.DisplaySize.y);
        ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    }


    return original_imgui(_display, _surface);
}


void* main_thread(void*)
{
    ark::info("main_thread A");
    auto base = dlopen("libil2cpp.so", RTLD_LAZY);
    ark::info("base: " + std::to_string(uintptr_t(base)));
    il2cpp::api::initialize(base);

    std::this_thread::sleep_for(std::chrono::seconds{5});

    ark::info("vmthread: " + std::to_string(il2cpp::api::is_vm_thread(nullptr)));


    Dl_info dlInfo;
    uintptr_t il2cpp_base;
    if (dladdr((void *) il2cpp::api::domain_get_assemblies_ptr, &dlInfo)) {
        il2cpp_base = reinterpret_cast<uintptr_t>(dlInfo.dli_fbase);
        ark::info("il2cpp_base: " + std::to_string(uintptr_t(il2cpp_base)));
    }

    // imgui
        ark::info("imgui");

    auto eglhandle = dlopen("libEGL.so", RTLD_LAZY);
    const char *dlopen_error = dlerror();
    if (dlopen_error)
    {
        eglhandle = dlopen("libunity.so", RTLD_LAZY); // I have no idea if this works it was just to me that it would fix crashes so I did it really quickly
    }
    auto eglSwapBuffers = dlsym(eglhandle, "eglSwapBuffers");
    const char *dlsym_error = dlerror();
    if (dlsym_error)
    {
        ark::info("dlsym_error");
    } else
    {
        ark::info("hook");
        DobbyHook(eglSwapBuffers, (void *) hook_imgui, (void **) &original_imgui);
    }


    // 0x1243694
    DobbyHook((void*)(il2cpp_base + 0x1220C78), (void*)hook_func, (void**)&original);


    return nullptr;
}

extern "C" JNIEXPORT jint
JNI_OnLoad(JavaVM *vm, void *reserved) {

    std::string libmain = "liboriginalmain.so";
    std::string libgame = "libil2cpp.so";

    __android_log_print(ANDROID_LOG_ERROR, "ARK", "%s", "A ONLOAD_____________________");
    //shadowhook_init(SHADOWHOOK_MODE_SHARED, true);


    auto base = dlopen(libgame.c_str(), RTLD_LAZY);
    ark::info("base: " + std::to_string(uintptr_t(base)));

    if (base)
    {
        //auto* stub = shadowhook_hook_sym_addr((void*)base, (void*)&hook_func, &original);
        //if(stub == NULL)
        //{
        //    int err_num = shadowhook_get_errno();
        //    const char *err_msg = shadowhook_to_errmsg(err_num);
        //    __android_log_print(ANDROID_LOG_ERROR, "ARK", "hook error %d - %s", err_num, err_msg);
        //}


        //auto thread = il2cpp::api::thread_attach(dom);


        //gen();

        //break;
    }


    __android_log_print(ANDROID_LOG_ERROR, "ARK", "%s", "load libmain");

    void* handle = dlopen(libmain.c_str(), RTLD_LAZY);
    using load_function_type = jint(*)(JavaVM *vm, void *reserved);

    if (handle)
    {
        __android_log_print(ANDROID_LOG_ERROR, "ARK", "%s", libmain.c_str());

        auto* load_function = (load_function_type)dlsym(handle, "JNI_OnLoad");

        if (load_function)
        {
            pthread_t ptid;
            pthread_create(&ptid, NULL, main_thread, NULL);

            return load_function(vm, reserved);

        }
        else __android_log_print(ANDROID_LOG_ERROR, "ARK", "load_function ERROR %s", libmain.c_str());

        dlclose(handle);
        return JNI_VERSION_1_2;
    }
    else
        __android_log_print(ANDROID_LOG_ERROR, "ARK", "handle ERROR %s", libmain.c_str());


    return JNI_VERSION_1_2;
}


void gen()
{
    __android_log_print(ANDROID_LOG_ERROR, "ARK", "generate");
        try
    {
        using namespace il2cpp;

        meta::generator gen{ R"(/data/data/com.innersloth.spacemafia/files)" };
        //gen.filter_image("Assembly-CSharp.dll");
        gen.filter_klass("PlayerControl");
        //gen.filter_klass("ReInput");

        //std::cout << il2cpp_info(gen.klasses_[120]);

        gen.on_process([&gen](const meta::klass& klass) {

            //std::cout << klass.type().info();
            __android_log_print(ANDROID_LOG_ERROR, "ARK", "data: %s", klass.type().info().c_str());

            return;
        });

        gen.process();

    } catch (const std::exception& e)
    {
        __android_log_print(ANDROID_LOG_ERROR, "ARK", "error %s", e.what());
    }
}