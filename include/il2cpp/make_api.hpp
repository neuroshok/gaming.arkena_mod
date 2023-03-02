#ifdef ARK_MAKE_MEMBER
    #define make_api(Name, Return, Params, ...) \
    static Return Name Params \
    { return process<Return(*)Params>(Name##_ptr, __VA_ARGS__); }
#endif

#ifdef ARK_MAKE_STATIC
    #define make_api(Name, Return, Params, ...) \
    static inline FARPROC Name##_ptr = nullptr;
#endif

#ifdef ARK_MAKE_STATIC_INIT
    #define make_api(Name, Return, Params, ...) \
    Name##_ptr = GetProcAddress(GetModuleHandleA("GameAssembly.dll"), "il2cpp_" #Name); \
    if (!Name##_ptr) throw std::runtime_error(std::string(#Name) + " is null");
#endif


make_api(init, int, (const char* domain_name), domain_name)

make_api(domain_get, il2cpp::Il2CppDomain*, ())
make_api(domain_get_assemblies, const il2cpp::Il2CppAssembly**, (const il2cpp::Il2CppDomain* d, size_t* s), d, s)
make_api(assembly_get_image, const il2cpp::Il2CppImage*, (const il2cpp::Il2CppAssembly* as), as)

make_api(image_get_name, const char*,  (const Il2CppImage* image), image)
make_api(image_get_class_count, size_t, (const il2cpp::Il2CppImage* image), image)
make_api(image_get_class, const il2cpp::Il2CppClass*, (const il2cpp::Il2CppImage* image, std::size_t index), image, index)

make_api(thread_attach, il2cpp::Il2CppThread*, (const il2cpp::Il2CppDomain* d), d)

// class
make_api(class_from_name, il2cpp::Il2CppClass*, (const il2cpp::Il2CppImage* image, const char* namespaze, const char* name), image, namespaze, name)
make_api(class_get_fields, const il2cpp::FieldInfo*,  (const il2cpp::Il2CppClass* klass, void* *iter), klass, iter)
make_api(class_get_methods, const il2cpp::MethodInfo*,  (const il2cpp::Il2CppClass* klass, void* *iter), klass, iter)
make_api(class_get_declaring_type, il2cpp::Il2CppClass*, (const il2cpp::Il2CppClass* klass), klass)
make_api(class_get_flags, int, (const il2cpp::Il2CppClass* klass), klass)
make_api(class_get_name, const char*, (const il2cpp::Il2CppClass* klass), klass)
make_api(class_get_namespace, const char*, (const il2cpp::Il2CppClass* klass), klass)
make_api(class_get_nested_types, const il2cpp::Il2CppClass*, (const il2cpp::Il2CppClass* klass, void* *iter), klass, iter)
make_api(class_get_type, const il2cpp::Il2CppType*, (const il2cpp::Il2CppClass* k), k)
make_api(class_from_type, const il2cpp::Il2CppClass*, (const il2cpp::Il2CppType* type), type)
make_api(class_is_enum, bool, (const il2cpp::Il2CppClass* klass), klass)
make_api(class_is_generic, bool, (const il2cpp::Il2CppClass* klass), klass)
make_api(class_is_valuetype, bool, (const il2cpp::Il2CppClass* klass), klass)

// field
make_api(field_get_name, const char*, (il2cpp::FieldInfo* field), field)

// method
make_api(method_get_param, const il2cpp::Il2CppType*, (const il2cpp::MethodInfo* method, uint32_t index), method, index);
make_api(method_get_param_name, const char*, (const il2cpp::MethodInfo* method, uint32_t index), method, index);

// type
make_api(type_equals, bool, (const Il2CppType* type, const Il2CppType* otherType), type, otherType)

make_api(type_get_assembly_qualified_name, char*, (const il2cpp::Il2CppType* type), type)
make_api(type_get_name, char*, (const il2cpp::Il2CppType* type), type)
make_api(type_get_type, int, (const il2cpp::Il2CppType* type), type)
make_api(type_is_pointer_type, bool, (const il2cpp::Il2CppType* type), type)
make_api(type_is_byref, bool, (const il2cpp::Il2CppType* type), type)
make_api(type_is_static, bool, (const il2cpp::Il2CppType* type), type);
make_api(type_get_class_or_element_class, Il2CppClass*, (const il2cpp::Il2CppType* type), type)
make_api(type_get_attrs, uint32_t, (const il2cpp::Il2CppType* type), type)
make_api(type_get_object, il2cpp::Il2CppObject*, (const il2cpp::Il2CppType* type), type)
//DO_API(Il2CppObject*, type_get_object, (const Il2CppType * type));
//DO_API(il2cpp::Il2CppClass*, type_get_class_or_element_class, (const Il2CppType * type));


make_api(object_new, il2cpp::Il2CppObject*, (const il2cpp::Il2CppClass* k), k)

// array
make_api(array_new, il2cpp::Il2CppArray*, (il2cpp::Il2CppClass* k, uintptr_t l), k, l)
make_api(array_class_get, il2cpp::Il2CppClass*, (il2cpp::Il2CppClass* element_class, uint32_t rank), element_class, rank)

// string
make_api(string_new_utf16, il2cpp::string*, (const Il2CppChar* text, int32_t len), text, len)
make_api(string_new_len, il2cpp::string*, (const char* text, int32_t len), text, len)

// gc
make_api(gchandle_new, uint32_t, (const il2cpp::Il2CppObject* k, bool pinned), k, pinned)
make_api(gchandle_free, void, (uint32_t gchandle), gchandle)
make_api(gc_enable, void, ())
make_api(gc_disable, void, ())

#undef make_api








/*
 // Generated C++ file by Il2CppInspector - http://www.djkaty.com - https://github.com/djkaty
// Target Unity version: 2019.4.0 - 2019.4.99

#ifndef DO_API_NO_RETURN
#define DO_API_NO_RETURN(r, n, p) DO_API(r,n,p)
#endif

DO_API(int, init, (const char* domain_name));
DO_API(int, init_utf16, (const Il2CppChar * domain_name));
DO_API(void, shutdown, ());
DO_API(void, set_config_dir, (constchar *config_path));
DO_API(void, set_data_dir, (const char *data_path));
DO_API(void, set_temp_dir, (const char *temp_path));
DO_API(void, set_commandline_arguments, (int argc, const char* const argv[], const char* basedir));
DO_API(void, set_commandline_arguments_utf16, (int argc, const Il2CppChar * const argv[], const char* basedir));
DO_API(void, set_config_utf16, (const Il2CppChar * executablePath));
DO_API(void, set_config, (const char* executablePath));

DO_API(void, set_memory_callbacks, (Il2CppMemoryCallbacks * callbacks));
DO_API(const Il2CppImage*, get_corlib, ());
DO_API(void, add_internal_call, (const char* name, Il2CppMethodPointer method));
DO_API(Il2CppMethodPointer, resolve_icall, (const char* name));

DO_API(void*, alloc, (size_t size));
DO_API(void, free, (void* ptr));

// array
DO_API(il2cpp::Il2CppClass*, array_class_get, (il2cpp::Il2CppClass * element_class, uint32_t rank));
DO_API(uint32_t, array_length, (Il2CppArray * array));
DO_API(uint32_t, array_get_byte_length, (Il2CppArray * array));
DO_API(Il2CppArray*, array_new, (il2cpp::Il2CppClass * elementTypeInfo, array_size_t length));
DO_API(Il2CppArray*, array_new_specific, (il2cpp::Il2CppClass * arrayTypeInfo, array_size_t length));
DO_API(Il2CppArray*, array_new_full, (il2cpp::Il2CppClass * array_class, array_size_t * lengths, array_size_t * lower_bounds));
DO_API(il2cpp::Il2CppClass*, bounded_array_class_get, (il2cpp::Il2CppClass * element_class, uint32_t rank, bool bounded));
DO_API(int, array_element_size, (const il2cpp::Il2CppClass * array_class));

// assembly
DO_API(const Il2CppImage*, assembly_get_image, (const Il2CppAssembly * assembly));
contain
// class
DO_API(void, class_for_each, (void(*klassReportFunc)(il2cpp::Il2CppClass* klass, void* userData), void* userData));
DO_API(const Il2CppType*, class_enum_basetype, (il2cpp::Il2CppClass * klass));
DO_API(bool, class_is_generic, (const il2cpp::Il2CppClass * klass));
DO_API(bool, class_is_inflated, (const il2cpp::Il2CppClass * klass));
DO_API(bool, class_is_assignable_from, (il2cpp::Il2CppClass * klass, Il2CppClass * oklass));
DO_API(bool, class_is_subclass_of, (il2cpp::Il2CppClass * klass, Il2CppClass * klassc, bool check_interfaces));
DO_API(bool, class_has_parent, (il2cpp::Il2CppClass * klass, Il2CppClass * klassc));
DO_API(il2cpp::Il2CppClass*, class_from_type, (const Il2CppType * type));
DO_API(il2cpp::Il2CppClass*, class_from_name, (const Il2CppImage * image, const char* namespaze, const char *name));
DO_API(il2cpp::Il2CppClass*, class_from_system_type, (Il2CppReflectionType * type));
DO_API(il2cpp::Il2CppClass*, class_get_element_class, (il2cpp::Il2CppClass * klass));
DO_API(const EventInfo*, class_get_events, (il2cpp::Il2CppClass * klass, void* *iter));
DO_API(FieldInfo*, class_get_fields, (il2cpp::Il2CppClass * klass, void* *iter));
DO_API(il2cpp::Il2CppClass*, class_get_nested_types, (il2cpp::Il2CppClass * klass, void* *iter));
DO_API(il2cpp::Il2CppClass*, class_get_interfaces, (il2cpp::Il2CppClass * klass, void* *iter));
DO_API(const PropertyInfo*, class_get_properties, (il2cpp::Il2CppClass * klass, void* *iter));
DO_API(const PropertyInfo*, class_get_property_from_name, (il2cpp::Il2CppClass * klass, const char *name));
DO_API(FieldInfo*, class_get_field_from_name, (il2cpp::Il2CppClass * klass, const char *name));
DO_API(const MethodInfo*, class_get_methods, (il2cpp::Il2CppClass * klass, void* *iter));
DO_API(const MethodInfo*, class_get_method_from_name, (il2cpp::Il2CppClass * klass, const char* name, int argsCount));
DO_API(const char*, class_get_name, (il2cpp::Il2CppClass * klass));
DO_API(void, type_get_name_chunked, (const Il2CppType * type, void(*chunkReportFunc)(void* data, void* userData), void* userData));
DO_API(const char*, class_get_namespace, (il2cpp::Il2CppClass * klass));
DO_API(il2cpp::Il2CppClass*, class_get_parent, (il2cpp::Il2CppClass * klass));
DO_API(il2cpp::Il2CppClass*, class_get_declaring_type, (il2cpp::Il2CppClass * klass));
DO_API(int32_t, class_instance_size, (il2cpp::Il2CppClass * klass));
DO_API(size_t, class_num_fields, (const il2cpp::Il2CppClass * enumKlass));
DO_API(bool, class_is_valuetype, (const il2cpp::Il2CppClass * klass));
DO_API(int32_t, class_value_size, (il2cpp::Il2CppClass * klass, uint32_t * align));
DO_API(bool, class_is_blittable, (const il2cpp::Il2CppClass * klass));
DO_API(int, class_get_flags, (const il2cpp::Il2CppClass * klass));
DO_API(bool, class_is_abstract, (const il2cpp::Il2CppClass * klass));
DO_API(bool, class_is_interface, (const il2cpp::Il2CppClass * klass));
DO_API(int, class_array_element_size, (const il2cpp::Il2CppClass * klass));
DO_API(il2cpp::Il2CppClass*, class_from_type, (const Il2CppType * type));
DO_API(const Il2CppType*, class_get_type, (il2cpp::Il2CppClass * klass));
DO_API(uint32_t, class_get_type_token, (il2cpp::Il2CppClass * klass));
DO_API(bool, class_has_attribute, (il2cpp::Il2CppClass * klass, Il2CppClass * attr_class));
DO_API(bool, class_has_references, (il2cpp::Il2CppClass * klass));
DO_API(bool, class_is_enum, (const il2cpp::Il2CppClass * klass));
DO_API(const Il2CppImage*, class_get_image, (il2cpp::Il2CppClass * klass));
DO_API(const char*, class_get_assemblyname, (const il2cpp::Il2CppClass * klass));
DO_API(int, class_get_rank, (const il2cpp::Il2CppClass * klass));
DO_API(uint32_t, class_get_data_size, (const il2cpp::Il2CppClass * klass));
DO_API(void*, class_get_static_field_data, (const il2cpp::Il2CppClass * klass));

// testing only
DO_API(size_t, class_get_bitmap_size, (const il2cpp::Il2CppClass * klass));
DO_API(void, class_get_bitmap, (il2cpp::Il2CppClass * klass, size_t * bitmap));

// stats
DO_API(bool, stats_dump_to_file, (const char *path));
DO_API(uint64_t, stats_get_value, (Il2CppStat stat));

// domain
DO_API(Il2CppDomain*, domain_get, ());
DO_API(const Il2CppAssembly*, domain_assembly_open, (Il2CppDomain * domain, const char* name));
DO_API(const Il2CppAssembly**, domain_get_assemblies, (const Il2CppDomain * domain, size_t * size));

// exception
DO_API_NO_RETURN(void, raise_exception, (Il2CppException*));
DO_API(Il2CppException*, exception_from_name_msg, (const Il2CppImage * image, const char *name_space, const char *name, const char *msg));
DO_API(Il2CppException*, get_exception_argument_null, (const char *arg));
DO_API(void, format_exception, (const Il2CppException * ex, char* message, int message_size));
DO_API(void, format_stack_trace, (const Il2CppException * ex, char* output, int output_size));
DO_API(void, unhandled_exception, (Il2CppException*));

// field
DO_API(int, field_get_flags, (FieldInfo * field));
DO_API(const char*, field_get_name, (FieldInfo * field));
DO_API(il2cpp::Il2CppClass*, field_get_parent, (FieldInfo * field));
DO_API(size_t, field_get_offset, (FieldInfo * field));
DO_API(const Il2CppType*, field_get_type, (FieldInfo * field));
DO_API(void, field_get_value, (Il2CppObject * obj, FieldInfo * field, void *value));
DO_API(Il2CppObject*, field_get_value_object, (FieldInfo * field, Il2CppObject * obj));
DO_API(bool, field_has_attribute, (FieldInfo * field, Il2CppClass * attr_class));
DO_API(void, field_set_value, (Il2CppObject * obj, FieldInfo * field, void *value));
DO_API(void, field_static_get_value, (FieldInfo * field, void *value));
DO_API(void, field_static_set_value, (FieldInfo * field, void *value));
DO_API(void, field_set_value_object, (Il2CppObject * instance, FieldInfo * field, Il2CppObject * value));
DO_API(bool, field_is_literal, (FieldInfo * field));
// gc
DO_API(void, gc_collect, (int maxGenerations));
DO_API(int32_t, gc_collect_a_little, ());
DO_API(void, gc_disable, ());
DO_API(void, gc_enable, ());
DO_API(bool, gc_is_disabled, ());
DO_API(int64_t, gc_get_max_time_slice_ns, ());
DO_API(void, gc_set_max_time_slice_ns, (int64_t maxTimeSlice));
DO_API(bool, gc_is_incremental, ());
DO_API(int64_t, gc_get_used_size, ());
DO_API(int64_t, gc_get_heap_size, ());
DO_API(void, gc_wbarrier_set_field, (Il2CppObject * obj, void **targetAddress, void *object));
DO_API(bool, gc_has_strict_wbarriers, ());
DO_API(void, gc_set_external_allocation_tracker, (void(*func)(void*, size_t, int)));
DO_API(void, gc_set_external_wbarrier_tracker, (void(*func)(void**)));
DO_API(void, gc_foreach_heap, (void(*func)(void* data, void* userData), void* userData));
DO_API(void, stop_gc_world, ());
DO_API(void, start_gc_world, ());
// gchandle
DO_API(uint32_t, gchandle_new, (Il2CppObject * obj, bool pinned));
DO_API(uint32_t, gchandle_new_weakref, (Il2CppObject * obj, bool track_resurrection));
DO_API(Il2CppObject*, gchandle_get_target , (uint32_t gchandle));
DO_API(void, gchandle_free, (uint32_t gchandle));
DO_API(void , gchandle_foreach_get_target, (void(*func)(void* data, void* userData), void* userData));

// vm runtime info
DO_API(uint32_t, object_header_size, ());
DO_API(uint32_t, array_object_header_size, ());
DO_API(uint32_t, offset_of_array_length_in_array_object_header, ());
DO_API(uint32_t, offset_of_array_bounds_in_array_object_header, ());
DO_API(uint32_t, allocation_granularity, ());

// liveness
DO_API(void*, unity_liveness_calculation_begin, (il2cpp::Il2CppClass * filter, int max_object_count, register_object_callback callback, void* userdata, WorldChangedCallback onWorldStarted, WorldChangedCallback onWorldStopped));
DO_API(void, unity_liveness_calculation_end, (void* state));
DO_API(void, unity_liveness_calculation_from_root, (Il2CppObject * root, void* state));
DO_API(void, unity_liveness_calculation_from_statics, (void* state));

// method
DO_API(const Il2CppType*, method_get_return_type, (const MethodInfo * method));
DO_API(il2cpp::Il2CppClass*, method_get_declaring_type, (const MethodInfo * method));
DO_API(const char*, method_get_name, (const MethodInfo * method));
DO_API(const MethodInfo*, method_get_from_reflection, (const Il2CppReflectionMethod * method));
DO_API(Il2CppReflectionMethod*, method_get_object, (const MethodInfo * method, Il2CppClass * refclass));
DO_API(bool, method_is_generic, (const MethodInfo * method));
DO_API(bool, method_is_inflated, (const MethodInfo * method));
DO_API(bool, method_is_instance, (const MethodInfo * method));
DO_API(uint32_t, method_get_param_count, (const MethodInfo * method));
DO_API(const Il2CppType*, method_get_param, (const MethodInfo * method, uint32_t index));
DO_API(il2cpp::Il2CppClass*, method_get_class, (const MethodInfo * method));
DO_API(bool, method_has_attribute, (const MethodInfo * method, Il2CppClass * attr_class));
DO_API(uint32_t, method_get_flags, (const MethodInfo * method, uint32_t * iflags));
DO_API(uint32_t, method_get_token, (const MethodInfo * method));
DO_API(const char*, method_get_param_name, (const MethodInfo * method, uint32_t index));

// profiler
#if ENABLE_PROFILER


#endif

// property
DO_API(uint32_t, property_get_flags, (PropertyInfo * prop));
DO_API(const MethodInfo*, property_get_get_method, (PropertyInfo * prop));
DO_API(const MethodInfo*, property_get_set_method, (PropertyInfo * prop));
DO_API(const char*, property_get_name, (PropertyInfo * prop));
DO_API(il2cpp::Il2CppClass*, property_get_parent, (PropertyInfo * prop));

// object
DO_API(il2cpp::Il2CppClass*, object_get_class, (Il2CppObject * obj));
DO_API(uint32_t, object_get_size, (Il2CppObject * obj));
DO_API(const MethodInfo*, object_get_virtual_method, (Il2CppObject * obj, const MethodInfo * method));
DO_API(Il2CppObject*, object_new, (const il2cpp::Il2CppClass * klass));
DO_API(void*, object_unbox, (Il2CppObject * obj));

DO_API(Il2CppObject*, value_box, (il2cpp::Il2CppClass * klass, void* data));

// monitor
DO_API(void, monitor_enter, (Il2CppObject * obj));
DO_API(bool, monitor_try_enter, (Il2CppObject * obj, uint32_t timeout));
DO_API(void, monitor_exit, (Il2CppObject * obj));
DO_API(void, monitor_pulse, (Il2CppObject * obj));
DO_API(void, monitor_pulse_all, (Il2CppObject * obj));
DO_API(void, monitor_wait, (Il2CppObject * obj));
DO_API(bool, monitor_try_wait, (Il2CppObject * obj, uint32_t timeout));

// runtime
DO_API(Il2CppObject*, runtime_invoke, (const MethodInfo * method, void *obj, void **params, Il2CppException **exc));
DO_API(Il2CppObject*, runtime_invoke_convert_args, (const MethodInfo * method, void *obj, Il2CppObject **params, int paramCount, Il2CppException **exc));
DO_API(void, runtime_class_init, (il2cpp::Il2CppClass * klass));
DO_API(void, runtime_object_init, (Il2CppObject * obj));

DO_API(void, runtime_object_init_exception, (Il2CppObject * obj, Il2CppException** exc));

DO_API(void, runtime_unhandled_exception_policy_set, (Il2CppRuntimeUnhandledExceptionPolicy value));

// string
DO_API(int32_t, string_length, (Il2CppString * str));
DO_API(Il2CppChar*, string_chars, (Il2CppString * str));
DO_API(Il2CppString*, string_new, (const char* str));
DO_API(Il2CppString*, string_new_len, (const char* str, uint32_t length));
DO_API(Il2CppString*, string_new_utf16, (const Il2CppChar * text, int32_t len));
DO_API(Il2CppString*, string_new_wrapper, (const char* str));
DO_API(Il2CppString*, string_intern, (Il2CppString * str));
DO_API(Il2CppString*, string_is_interned, (Il2CppString * str));

// thread
DO_API(Il2CppThread*, thread_current, ());
DO_API(Il2CppThread*, thread_attach, (Il2CppDomain * domain));
DO_API(void, thread_detach, (Il2CppThread * thread));

DO_API(Il2CppThread**, thread_get_all_attached_threads, (size_t * size));
DO_API(bool, is_vm_thread, (Il2CppThread * thread));

// stacktrace
DO_API(void, current_thread_walk_frame_stack, (Il2CppFrameWalkFunc func, void* user_data));
DO_API(void, thread_walk_frame_stack, (Il2CppThread * thread, Il2CppFrameWalkFunc func, void* user_data));
DO_API(bool, current_thread_get_top_frame, (Il2CppStackFrameInfo * frame));
DO_API(bool, thread_get_top_frame, (Il2CppThread * thread, Il2CppStackFrameInfo * frame));
DO_API(bool, current_thread_get_frame_at, (int32_t offset, Il2CppStackFrameInfo * frame));
DO_API(bool, thread_get_frame_at, (Il2CppThread * thread, int32_t offset, Il2CppStackFrameInfo * frame));
DO_API(int32_t, current_thread_get_stack_depth, ());
DO_API(int32_t, thread_get_stack_depth, (Il2CppThread * thread));
DO_API(void, override_stack_backtrace, (Il2CppBacktraceFunc stackBacktraceFunc));

// type
DO_API(Il2CppObject*, type_get_object, (const Il2CppType * type));
DO_API(int, type_get_type, (const Il2CppType * type));
DO_API(il2cpp::Il2CppClass*, type_get_class_or_element_class, (const Il2CppType * type));
DO_API(char*, type_get_name, (const Il2CppType * type));
DO_API(bool, type_is_byref, (const Il2CppType * type));
DO_API(uint32_t, type_get_attrs, (const Il2CppType * type));
DO_API(bool, type_equals, (const Il2CppType * type, const Il2CppType * otherType));
DO_API(char*, type_get_assembly_qualified_name, (const Il2CppType * type));
DO_API(bool, type_is_static, (const Il2CppType * type));
DO_API(bool, type_is_pointer_type, (const Il2CppType * type));

// image
DO_API(const Il2CppAssembly*, image_get_assembly, (const Il2CppImage * image));
DO_API(const char*, image_get_name, (const Il2CppImage * image));
DO_API(const char*, image_get_filename, (const Il2CppImage * image));
DO_API(const MethodInfo*, image_get_entry_point, (const Il2CppImage * image));

DO_API(size_t, image_get_class_count, (const Il2CppImage * image));
DO_API(const il2cpp::Il2CppClass*, image_get_class, (const Il2CppImage * image, size_t index));

// Memory information
DO_API(Il2CppManagedMemorySnapshot*, capture_memory_snapshot, ());
DO_API(void, free_captured_memory_snapshot, (Il2CppManagedMemorySnapshot * snapshot));

DO_API(void, set_find_plugin_callback, (Il2CppSetFindPlugInCallback method));

// Logging
DO_API(void, register_log_callback, (Il2CppLogCallback method));

// Debugger
DO_API(void, debugger_set_agent_options, (const char* options));
DO_API(bool, is_debugger_attached, ());
DO_API(void, register_debugger_agent_transport, (Il2CppDebuggerTransport * debuggerTransport));

// Debug metadata
DO_API(bool, debug_get_method_info, (const MethodInfo*, Il2CppMethodDebugInfo * methodDebugInfo));

// TLS module
DO_API(void, unity_install_unitytls_interface, (const void* unitytlsInterfaceStruct));

// custom attributes
DO_API(Il2CppCustomAttrInfo*, custom_attrs_from_class, (il2cpp::Il2CppClass * klass));
DO_API(Il2CppCustomAttrInfo*, custom_attrs_from_method, (const MethodInfo * method));

DO_API(Il2CppObject*, custom_attrs_get_attr, (Il2CppCustomAttrInfo * ainfo, Il2CppClass * attr_klass));
DO_API(bool, custom_attrs_has_attr, (Il2CppCustomAttrInfo * ainfo, Il2CppClass * attr_klass));
DO_API(Il2CppArray*,  custom_attrs_construct, (Il2CppCustomAttrInfo * cinfo));

DO_API(void, custom_attrs_free, (Il2CppCustomAttrInfo * ainfo));

// Il2CppClass user data for GetComponent optimization
DO_API(void, class_set_userdata, (il2cpp::Il2CppClass * klass, void* userdata));
DO_API(int, class_get_userdata_offset, ());

DO_API(void, set_default_thread_affinity, (int64_t affinity_mask));


 */