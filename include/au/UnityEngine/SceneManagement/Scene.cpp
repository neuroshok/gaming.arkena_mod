#include <au/UnityEngine/SceneManagement/Scene.hpp>

namespace UnityEngine::SceneManagement {

    // Methods

    cs::string* Scene::GetNameInternal(int sceneHandle) { return method_call(GetNameInternal, sceneHandle); }  // 0x68E440 // 
    bool Scene::GetIsLoadedInternal(int sceneHandle) { return method_call(GetIsLoadedInternal, sceneHandle); }  // 0x68E410 // 
    int Scene::get_handle() { return method_call(get_handle); }  // 0x266090 // 
    cs::string* Scene::get_name() { return method_call(get_name); }  // 0x68E4A0 // 
    bool Scene::get_isLoaded() { return method_call(get_isLoaded); }  // 0x68E470 // 
    bool Scene::op_Equality(UnityEngine::SceneManagement::Scene lhs, UnityEngine::SceneManagement::Scene rhs) { return method_call(op_Equality, lhs, rhs); }  // 0x2E5C10 // 
    int Scene::GetHashCode() { return method_call(GetHashCode); }  // 0x266090 // 
    bool Scene::Equals(Scene* other) { return method_call(Equals, other); }  // 0x68E3A0 // 

};

