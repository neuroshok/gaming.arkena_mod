#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Mesh.hpp>

namespace UnityEngine
{
    struct MeshFilter : ark::meta<MeshFilter, UnityEngine::Component>
    {

        void DontStripMeshFilter() { return il2cpp::call<void(*)(MeshFilter*)>(0x2babf0)(this); } // 0x2babf0
        UnityEngine::Mesh* get_sharedMesh() { return il2cpp::call<UnityEngine::Mesh*(*)(MeshFilter*)>(0x1396460)(this); } // 0x1396460
        void set_sharedMesh(UnityEngine::Mesh* value) { return il2cpp::call<void(*)(MeshFilter*, UnityEngine::Mesh*)>(0x13964c0)(this, value); } // 0x13964c0
        UnityEngine::Mesh* get_mesh() { return il2cpp::call<UnityEngine::Mesh*(*)(MeshFilter*)>(0x1396430)(this); } // 0x1396430
        void set_mesh(UnityEngine::Mesh* value) { return il2cpp::call<void(*)(MeshFilter*, UnityEngine::Mesh*)>(0x1396490)(this, value); } // 0x1396490
        void ctor() { return il2cpp::call<void(*)(MeshFilter*)>(0xee3f90)(this); } // 0xee3f90

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::MeshFilter> {
        };

}

