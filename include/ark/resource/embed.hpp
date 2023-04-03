#ifdef ARK_RESOURCE_MEMBER
    #define NATIVE_TEXTURE(Name) \
        resource::native_texture ntx_##Name{ Name }; \
        static resource::image Name;
    /*#define MAKE(Name) \
        UnityEngine::Texture2D* tx_##Name = nullptr; \
        static resource::image Name;*/
#endif

#ifdef ARK_RESOURCE_LOADER
    #define NATIVE_TEXTURE(Name) \
        //ntx_##Name = load_texture(ark::resources::Name);
#endif

NATIVE_TEXTURE(icon)
NATIVE_TEXTURE(mod)

#undef NATIVE_TEXTURE