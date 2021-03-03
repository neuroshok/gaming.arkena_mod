#ifdef ARK_RESOURCE_MEMBER
    #define MAKE(Name) \
        Unity::Texture2D* tx_##Name = nullptr; \
        static resource::image Name;
#endif

#ifdef ARK_RESOURCE_LOADER
    #define MAKE(Name) \
        tx_##Name = load_texture(ark::resources::Name);
#endif

MAKE(icon)
MAKE(button)
MAKE(ability)
MAKE(ability2)
MAKE(ability3)

#undef MAKE
