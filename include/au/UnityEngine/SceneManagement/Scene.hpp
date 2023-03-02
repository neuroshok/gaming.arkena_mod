#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/SceneManagement/Scene.hpp>

namespace UnityEngine::SceneManagement
{
    struct Scene : ark::meta<Scene>
    {
        int32_t m_Handle; // 0x8

        cs::string* GetNameInternal(int32_t sceneHandle) { return il2cpp::call<cs::string*(*)(Scene*, int32_t)>(0xee5ae0)(this, sceneHandle); } // 0xee5ae0
        bool GetIsLoadedInternal(int32_t sceneHandle) { return il2cpp::call<bool(*)(Scene*, int32_t)>(0xee5ab0)(this, sceneHandle); } // 0xee5ab0
        int32_t get_handle() { return il2cpp::call<int32_t(*)(Scene*)>(0x50e10)(this); } // 0x50e10
        cs::string* get_name() { return il2cpp::call<cs::string*(*)(Scene*)>(0x142580)(this); } // 0x142580
        bool get_isLoaded() { return il2cpp::call<bool(*)(Scene*)>(0x142550)(this); } // 0x142550
        bool op_Equality(UnityEngine::SceneManagement::Scene lhs, UnityEngine::SceneManagement::Scene rhs) { return il2cpp::call<bool(*)(Scene*, UnityEngine::SceneManagement::Scene, UnityEngine::SceneManagement::Scene)>(0x2d0710)(this, lhs, rhs); } // 0x2d0710

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::SceneManagement::Scene> {
        };

}

