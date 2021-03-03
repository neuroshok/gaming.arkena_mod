#ifdef ARK_MAKE_MEMBER
    #define make_api(Name, Return, Params, ...) \
    static Return Name Params \
    { return process<Return(*)Params>(Name##_ptr, __VA_ARGS__); }
#endif

#ifdef ARK_MAKE_STATIC
    #define make_api(Name, Return, Params, ...) \
    static inline FARPROC Name##_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_" #Name);
#endif


make_api(domain_get, il2cpp::Il2CppDomain*, ())
make_api(domain_get_assemblies, const il2cpp::Il2CppAssembly**, (const il2cpp::Il2CppDomain* d, size_t* s), d, s)
make_api(assembly_get_image, const il2cpp::Il2CppImage*, (const il2cpp::Il2CppAssembly* as), as)
make_api(image_get_class_count, size_t, (const il2cpp::Il2CppImage* image), image)
make_api(image_get_class, const il2cpp::Il2CppClass*, (const il2cpp::Il2CppImage* image, std::size_t index), image, index)
make_api(thread_attach, il2cpp::Il2CppThread*, (const il2cpp::Il2CppDomain* d), d)

make_api(class_from_name, il2cpp::Il2CppClass*, (const il2cpp::Il2CppImage* image, const char* namespaze, const char* name), image, namespaze, name)
make_api(class_get_type, const il2cpp::Il2CppType*, (const il2cpp::Il2CppClass* k), k)
make_api(type_get_assembly_qualified_name, char*, (const il2cpp::Il2CppType* type), type)
make_api(type_get_name, char*, (const il2cpp::Il2CppType* type), type)

make_api(object_new, il2cpp::Il2CppObject*, (const il2cpp::Il2CppClass* k), k)
make_api(array_new, il2cpp::Il2CppArray*, (il2cpp::Il2CppClass* k, uintptr_t l), k, l)
make_api(string_new_utf16, il2cpp::string*, (const Il2CppChar* text, int32_t len), text, len)
make_api(string_new_len, il2cpp::string*, (const char* text, int32_t len), text, len)

// gc
make_api(gchandle_new, uint32_t, (const il2cpp::Il2CppObject* k, bool pinned), k, pinned)
make_api(gchandle_free, void, (uint32_t gchandle), gchandle)
make_api(gc_enable, void, ())
make_api(gc_disable, void, ())

#undef make_api