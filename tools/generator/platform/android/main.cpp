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

/*
void il2cpp_api_init(void *handle) {
    LOGI("il2cpp_handle: %p", handle);
    init_il2cpp_api(handle);
    if (il2cpp_domain_get_assemblies) {
        Dl_info dlInfo;
        if (dladdr((void *) il2cpp_domain_get_assemblies, &dlInfo)) {
            il2cpp_base = reinterpret_cast<uint64_t>(dlInfo.dli_fbase);
        }
        LOGI("il2cpp_base: %" PRIx64"", il2cpp_base);
    } else {
        LOGE("Failed to initialize il2cpp api.");
        return;
    }
    while (!il2cpp_is_vm_thread(nullptr)) {
        LOGI("Waiting for il2cpp_init...");
        sleep(1);
    }
    auto domain = il2cpp_domain_get();
    il2cpp_thread_attach(domain);
}*/


void gen();

void (*original)(void* thiz);

void hook_func(void* thiz)
{
    ark::info("hook_func");
    original(thiz);
}

void* main_thread(void*)
{
    ark::info("main_thread A");
    auto base = dlopen("libil2cpp.so", RTLD_LAZY);
    ark::info("base: " + std::to_string(uintptr_t(base)));
    il2cpp::api::initialize(base);

    std::this_thread::sleep_for(std::chrono::seconds{5});

    ark::info("vmthread: " + std::to_string(il2cpp::api::is_vm_thread(nullptr)));

    il2cpp::Il2CppDomain* domain = api::domain_get();
    ark::info("domain: " + std::to_string(uintptr_t(domain)));

    auto thread = il2cpp::api::thread_attach(domain);
    ark::info("thread: " + std::to_string(uintptr_t(thread)) + " " + std::to_string(uintptr_t(thread)));


    Dl_info dlInfo;
    uintptr_t il2cpp_base;
    if (dladdr((void *) il2cpp::api::domain_get_assemblies_ptr, &dlInfo)) {
        il2cpp_base = reinterpret_cast<uintptr_t>(dlInfo.dli_fbase);
        ark::info("il2cpp_base: " + std::to_string(uintptr_t(il2cpp_base)));
    }

    // 0x1243694
    DobbyHook((void*)(il2cpp_base + 0x1243694), (void*)hook_func, (void**)&original);

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