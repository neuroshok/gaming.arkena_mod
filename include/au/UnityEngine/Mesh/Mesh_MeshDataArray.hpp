#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Mesh.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Mesh.hpp>

namespace 
{
    struct Mesh_MeshDataArray : ark::meta<Mesh_MeshDataArray>
    {
        Typeid_15 m_Ptrs; // 0x8
        int32_t m_Length; // 0xc

        void AcquireReadOnlyMeshData(UnityEngine::Mesh* mesh, Typeid_15 datas) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, UnityEngine::Mesh*, Typeid_15)>(0x1ab1b30)(this, mesh, datas); } // 0x1ab1b30
        void AcquireReadOnlyMeshDatas(cs::array<UnityEngine::Mesh>* meshes, Typeid_15 datas, int32_t count) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, cs::array<UnityEngine::Mesh>*, Typeid_15, int32_t)>(0x1ab1b60)(this, meshes, datas, count); } // 0x1ab1b60
        void ReleaseMeshDatas(Typeid_15 datas, int32_t count) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, Typeid_15, int32_t)>(0x1ab1fc0)(this, datas, count); } // 0x1ab1fc0
        void CreateNewMeshDatas(Typeid_15 datas, int32_t count) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, Typeid_15, int32_t)>(0x1ab1f30)(this, datas, count); } // 0x1ab1f30
        void ApplyToMeshesImpl(cs::array<UnityEngine::Mesh>* meshes, Typeid_15 datas, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, cs::array<UnityEngine::Mesh>*, Typeid_15, int32_t, UnityEngine::Rendering::MeshUpdateFlags)>(0x1ab1ef0)(this, meshes, datas, count, flags); } // 0x1ab1ef0
        void ApplyToMeshImpl(UnityEngine::Mesh* mesh, int data, UnityEngine::Rendering::MeshUpdateFlags flags) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, UnityEngine::Mesh*, int, UnityEngine::Rendering::MeshUpdateFlags)>(0x1ab1ca0)(this, mesh, data, flags); } // 0x1ab1ca0
        int32_t get_Length() { return il2cpp::call<int32_t(*)(Mesh_MeshDataArray*)>(0x50de0)(this); } // 0x50de0
        void ApplyToMeshAndDispose(UnityEngine::Mesh* mesh, UnityEngine::Rendering::MeshUpdateFlags flags) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, UnityEngine::Mesh*, UnityEngine::Rendering::MeshUpdateFlags)>(0x1b9ad0)(this, mesh, flags); } // 0x1b9ad0
        void ApplyToMeshesAndDispose(cs::array<UnityEngine::Mesh>* meshes, UnityEngine::Rendering::MeshUpdateFlags flags) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, cs::array<UnityEngine::Mesh>*, UnityEngine::Rendering::MeshUpdateFlags)>(0x1b9be0)(this, meshes, flags); } // 0x1b9be0
        void ctor(UnityEngine::Mesh* mesh, bool checkReadWrite) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, UnityEngine::Mesh*, bool)>(0x1b9d60)(this, mesh, checkReadWrite); } // 0x1b9d60
        void ctor(cs::array<UnityEngine::Mesh>* meshes, int32_t meshesCount, bool checkReadWrite) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, cs::array<UnityEngine::Mesh>*, int32_t, bool)>(0x1b9c50)(this, meshes, meshesCount, checkReadWrite); } // 0x1b9c50
        void ctor(int32_t meshesCount) { return il2cpp::call<void(*)(Mesh_MeshDataArray*, int32_t)>(0x1b9c60)(this, meshesCount); } // 0x1b9c60

    };

}
namespace ark {

        template<> struct meta_statics<::Mesh_MeshDataArray> {
        };

}

