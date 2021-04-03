//au/UnityEngine/SceneManagement/Scene
#pragma once
#include <ark/class.hpp>
#include <cs/string.hpp>
struct object;


namespace UnityEngine::SceneManagement {
struct Scene : ark::meta<Scene>
{
ark_meta("UnityEngine::SceneManagement", "Scene", "");

    // Fields

    int m_Handle; // 0x0

    // Methods

    cs::string* GetNameInternal(int sceneHandle); // 0x68E440 // private static 
    bool GetIsLoadedInternal(int sceneHandle); // 0x68E410 // private static 
    int get_handle(); // 0x266090 // public 
    cs::string* get_name(); // 0x68E4A0 // public 
    bool get_isLoaded(); // 0x68E470 // public 
    bool op_Equality(UnityEngine::SceneManagement::Scene lhs, UnityEngine::SceneManagement::Scene rhs); // 0x2E5C10 // public static 
    int GetHashCode(); // 0x266090 // public override 
    bool Equals(Scene* other); // 0x68E3A0 // public override 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::SceneManagement::Scene>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::GetNameInternal> () { return 0x68E440; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::GetIsLoadedInternal> () { return 0x68E410; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::get_handle> () { return 0x266090; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::get_name> () { return 0x68E4A0; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::get_isLoaded> () { return 0x68E470; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::op_Equality> () { return 0x2E5C10; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::GetHashCode> () { return 0x266090; }
    template<> inline uintptr_t rva<&UnityEngine::SceneManagement::Scene::Equals> () { return 0x68E3A0; }
} // ark::method_info