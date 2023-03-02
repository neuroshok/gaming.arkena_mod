#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/RotationOrder.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/RotationOrder.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>

namespace UnityEngine
{
    struct Transform : ark::meta<Transform, UnityEngine::Component>
    {

        void ctor() { return il2cpp::call<void(*)(Transform*)>(0xee3f90)(this); } // 0xee3f90
        UnityEngine::Vector3 get_position() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4df0)(this); } // 0xef4df0
        void set_position(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef53f0)(this, value); } // 0xef53f0
        UnityEngine::Vector3 get_localPosition() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4bc0)(this); } // 0xef4bc0
        void set_localPosition(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef5220)(this, value); } // 0xef5220
        UnityEngine::Vector3 GetLocalEulerAngles(UnityEngine::RotationOrder order) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::RotationOrder)>(0xef2da0)(this, order); } // 0xef2da0
        void SetLocalEulerAngles(UnityEngine::Vector3 euler, UnityEngine::RotationOrder order) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::RotationOrder)>(0xef3e70)(this, euler, order); } // 0xef3e70
        void SetLocalEulerHint(UnityEngine::Vector3 euler) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef3ed0)(this, euler); } // 0xef3ed0
        UnityEngine::Vector3 get_eulerAngles() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4970)(this); } // 0xef4970
        void set_eulerAngles(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef50a0)(this, value); } // 0xef50a0
        UnityEngine::Vector3 get_localEulerAngles() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4b20)(this); } // 0xef4b20
        void set_localEulerAngles(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef5190)(this, value); } // 0xef5190
        UnityEngine::Vector3 get_right() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4e30)(this); } // 0xef4e30
        void set_right(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef5420)(this, value); } // 0xef5420
        UnityEngine::Vector3 get_up() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4f50)(this); } // 0xef4f50
        void set_up(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef5520)(this, value); } // 0xef5520
        UnityEngine::Vector3 get_forward() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef49e0)(this); } // 0xef49e0
        void set_forward(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef5100)(this, value); } // 0xef5100
        UnityEngine::Quaternion get_rotation() { return il2cpp::call<UnityEngine::Quaternion(*)(Transform*)>(0xef4f10)(this); } // 0xef4f10
        void set_rotation(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Quaternion)>(0xef54f0)(this, value); } // 0xef54f0
        UnityEngine::Quaternion get_localRotation() { return il2cpp::call<UnityEngine::Quaternion(*)(Transform*)>(0xef4c30)(this); } // 0xef4c30
        void set_localRotation(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Quaternion)>(0xef5280)(this, value); } // 0xef5280
        UnityEngine::RotationOrder get_rotationOrder() { return il2cpp::call<UnityEngine::RotationOrder(*)(Transform*)>(0xef2e50)(this); } // 0xef2e50
        void set_rotationOrder(UnityEngine::RotationOrder value) { return il2cpp::call<void(*)(Transform*, UnityEngine::RotationOrder)>(0xef3fc0)(this, value); } // 0xef3fc0
        int32_t GetRotationOrderInternal() { return il2cpp::call<int32_t(*)(Transform*)>(0xef2e50)(this); } // 0xef2e50
        void SetRotationOrderInternal(UnityEngine::RotationOrder rotationOrder) { return il2cpp::call<void(*)(Transform*, UnityEngine::RotationOrder)>(0xef3fc0)(this, rotationOrder); } // 0xef3fc0
        UnityEngine::Vector3 get_localScale() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4ca0)(this); } // 0xef4ca0
        void set_localScale(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef52e0)(this, value); } // 0xef52e0
        UnityEngine::Transform* get_parent() { return il2cpp::call<UnityEngine::Transform*(*)(Transform*)>(0xef2df0)(this); } // 0xef2df0
        void set_parent(UnityEngine::Transform* value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*)>(0xef5310)(this, value); } // 0xef5310
        UnityEngine::Transform* get_parentInternal() { return il2cpp::call<UnityEngine::Transform*(*)(Transform*)>(0xef2df0)(this); } // 0xef2df0
        void set_parentInternal(UnityEngine::Transform* value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*)>(0xef3f00)(this, value); } // 0xef3f00
        UnityEngine::Transform* GetParent() { return il2cpp::call<UnityEngine::Transform*(*)(Transform*)>(0xef2df0)(this); } // 0xef2df0
        void SetParent(UnityEngine::Transform* p) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*)>(0xef3f00)(this, p); } // 0xef3f00
        void SetParent(UnityEngine::Transform* parent, bool worldPositionStays) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*, bool)>(0xef3f30)(this, parent, worldPositionStays); } // 0xef3f30
        UnityEngine::Matrix4x4 get_worldToLocalMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Transform*)>(0xef5030)(this); } // 0xef5030
        UnityEngine::Matrix4x4 get_localToWorldMatrix() { return il2cpp::call<UnityEngine::Matrix4x4(*)(Transform*)>(0xef4d10)(this); } // 0xef4d10
        void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0xef3f90)(this, position, rotation); } // 0xef3f90
        void Translate(UnityEngine::Vector3 translation, UnityEngine::Space relativeTo) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Space)>(0xef47d0)(this, translation, relativeTo); } // 0xef47d0
        void Translate(UnityEngine::Vector3 translation) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef43a0)(this, translation); } // 0xef43a0
        void Translate(float x, float y, float z, UnityEngine::Space relativeTo) { return il2cpp::call<void(*)(Transform*, float, float, float, UnityEngine::Space)>(0xef4360)(this, x, y, z, relativeTo); } // 0xef4360
        void Translate(float x, float y, float z) { return il2cpp::call<void(*)(Transform*, float, float, float)>(0xef4790)(this, x, y, z); } // 0xef4790
        void Translate(UnityEngine::Vector3 translation, UnityEngine::Transform* relativeTo) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Transform*)>(0xef43d0)(this, translation, relativeTo); } // 0xef43d0
        void Translate(float x, float y, float z, UnityEngine::Transform* relativeTo) { return il2cpp::call<void(*)(Transform*, float, float, float, UnityEngine::Transform*)>(0xef45a0)(this, x, y, z, relativeTo); } // 0xef45a0
        void Rotate(UnityEngine::Vector3 eulers, UnityEngine::Space relativeTo) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Space)>(0xef3b10)(this, eulers, relativeTo); } // 0xef3b10
        void Rotate(UnityEngine::Vector3 eulers) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef38e0)(this, eulers); } // 0xef38e0
        void Rotate(float xAngle, float yAngle, float zAngle, UnityEngine::Space relativeTo) { return il2cpp::call<void(*)(Transform*, float, float, float, UnityEngine::Space)>(0xef3d70)(this, xAngle, yAngle, zAngle, relativeTo); } // 0xef3d70
        void Rotate(float xAngle, float yAngle, float zAngle) { return il2cpp::call<void(*)(Transform*, float, float, float)>(0xef3d30)(this, xAngle, yAngle, zAngle); } // 0xef3d30
        void RotateAroundInternal(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef35f0)(this, axis, angle); } // 0xef35f0
        void Rotate(UnityEngine::Vector3 axis, float angle, UnityEngine::Space relativeTo) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float, UnityEngine::Space)>(0xef3910)(this, axis, angle, relativeTo); } // 0xef3910
        void Rotate(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef3a40)(this, axis, angle); } // 0xef3a40
        void RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3, float)>(0xef36f0)(this, point, axis, angle); } // 0xef36f0
        void LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*, UnityEngine::Vector3)>(0xef33b0)(this, target, worldUp); } // 0xef33b0
        void LookAt(UnityEngine::Transform* target) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*)>(0xef32a0)(this, target); } // 0xef32a0
        void LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef34a0)(this, worldPosition, worldUp); } // 0xef34a0
        void LookAt(UnityEngine::Vector3 worldPosition) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef3500)(this, worldPosition); } // 0xef3500
        void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef2ee0)(this, worldPosition, worldUp); } // 0xef2ee0
        UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::Vector3)>(0xef40f0)(this, direction); } // 0xef40f0
        UnityEngine::Vector3 TransformDirection(float x, float y, float z) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, float, float, float)>(0xef4060)(this, x, y, z); } // 0xef4060
        UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::Vector3)>(0xef2fd0)(this, direction); } // 0xef2fd0
        UnityEngine::Vector3 InverseTransformDirection(float x, float y, float z) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, float, float, float)>(0xef2f40)(this, x, y, z); } // 0xef2f40
        UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::Vector3)>(0xef4280)(this, vector); } // 0xef4280
        UnityEngine::Vector3 TransformVector(float x, float y, float z) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, float, float, float)>(0xef42d0)(this, x, y, z); } // 0xef42d0
        UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::Vector3)>(0xef31f0)(this, vector); } // 0xef31f0
        UnityEngine::Vector3 InverseTransformVector(float x, float y, float z) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, float, float, float)>(0xef3160)(this, x, y, z); } // 0xef3160
        UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::Vector3)>(0xef4200)(this, position); } // 0xef4200
        UnityEngine::Vector3 TransformPoint(float x, float y, float z) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, float, float, float)>(0xef4170)(this, x, y, z); } // 0xef4170
        UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, UnityEngine::Vector3)>(0xef30e0)(this, position); } // 0xef30e0
        UnityEngine::Vector3 InverseTransformPoint(float x, float y, float z) { return il2cpp::call<UnityEngine::Vector3(*)(Transform*, float, float, float)>(0xef3050)(this, x, y, z); } // 0xef3050
        UnityEngine::Transform* get_root() { return il2cpp::call<UnityEngine::Transform*(*)(Transform*)>(0xef2e20)(this); } // 0xef2e20
        UnityEngine::Transform* GetRoot() { return il2cpp::call<UnityEngine::Transform*(*)(Transform*)>(0xef2e20)(this); } // 0xef2e20
        int32_t get_childCount() { return il2cpp::call<int32_t(*)(Transform*)>(0xef4940)(this); } // 0xef4940
        void DetachChildren() { return il2cpp::call<void(*)(Transform*)>(0xef2be0)(this); } // 0xef2be0
        void SetAsFirstSibling() { return il2cpp::call<void(*)(Transform*)>(0xef3de0)(this); } // 0xef3de0
        void SetAsLastSibling() { return il2cpp::call<void(*)(Transform*)>(0xef3e10)(this); } // 0xef3e10
        void SetSiblingIndex(int32_t index) { return il2cpp::call<void(*)(Transform*, int32_t)>(0xef4000)(this, index); } // 0xef4000
        void MoveAfterSibling(UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty) { return il2cpp::call<void(*)(Transform*, UnityEngine::Transform*, bool)>(0xef3580)(this, transform, notifyEditorAndMarkDirty); } // 0xef3580
        int32_t GetSiblingIndex() { return il2cpp::call<int32_t(*)(Transform*)>(0xef2e80)(this); } // 0xef2e80
        UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine::Transform* transform, cs::string* path, bool isActiveOnly) { return il2cpp::call<UnityEngine::Transform*(*)(Transform*, UnityEngine::Transform*, cs::string*, bool)>(0xef2c90)(this, transform, path, isActiveOnly); } // 0xef2c90
        UnityEngine::Transform* Find(cs::string* n) { return il2cpp::call<UnityEngine::Transform*(*)(Transform*, cs::string*)>(0xef2c10)(this, n); } // 0xef2c10
        void SendTransformChangedScale() { return il2cpp::call<void(*)(Transform*)>(0xef3db0)(this); } // 0xef3db0
        UnityEngine::Vector3 get_lossyScale() { return il2cpp::call<UnityEngine::Vector3(*)(Transform*)>(0xef4d80)(this); } // 0xef4d80
        bool IsChildOf(UnityEngine::Transform* parent) { return il2cpp::call<bool(*)(Transform*, UnityEngine::Transform*)>(0xef3240)(this, parent); } // 0xef3240
        bool get_hasChanged() { return il2cpp::call<bool(*)(Transform*)>(0xef4a90)(this); } // 0xef4a90
        void set_hasChanged(bool value) { return il2cpp::call<void(*)(Transform*, bool)>(0xef5160)(this, value); } // 0xef5160
        UnityEngine::Transform* FindChild(cs::string* n) { return il2cpp::call<UnityEngine::Transform*(*)(Transform*, cs::string*)>(0xef2c10)(this, n); } // 0xef2c10
        void RotateAround(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef38a0)(this, axis, angle); } // 0xef38a0
        void RotateAroundLocal(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef3670)(this, axis, angle); } // 0xef3670
        UnityEngine::Transform* GetChild(int32_t index) { return il2cpp::call<UnityEngine::Transform*(*)(Transform*, int32_t)>(0xef2cf0)(this, index); } // 0xef2cf0
        int32_t GetChildCount() { return il2cpp::call<int32_t(*)(Transform*)>(0xef2cc0)(this); } // 0xef2cc0
        int32_t get_hierarchyCapacity() { return il2cpp::call<int32_t(*)(Transform*)>(0xef4ac0)(this); } // 0xef4ac0
        void set_hierarchyCapacity(int32_t value) { return il2cpp::call<void(*)(Transform*, int32_t)>(0xef5070)(this, value); } // 0xef5070
        int32_t internal_getHierarchyCapacity() { return il2cpp::call<int32_t(*)(Transform*)>(0xef4ac0)(this); } // 0xef4ac0
        void internal_setHierarchyCapacity(int32_t value) { return il2cpp::call<void(*)(Transform*, int32_t)>(0xef5070)(this, value); } // 0xef5070
        int32_t get_hierarchyCount() { return il2cpp::call<int32_t(*)(Transform*)>(0xef4af0)(this); } // 0xef4af0
        int32_t internal_getHierarchyCount() { return il2cpp::call<int32_t(*)(Transform*)>(0xef4af0)(this); } // 0xef4af0
        bool IsNonUniformScaleTransform() { return il2cpp::call<bool(*)(Transform*)>(0xef3270)(this); } // 0xef3270
        void get_position_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef4dc0)(this, ret); } // 0xef4dc0
        void set_position_Injected(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef53c0)(this, value); } // 0xef53c0
        void get_localPosition_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef4b90)(this, ret); } // 0xef4b90
        void set_localPosition_Injected(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef51f0)(this, value); } // 0xef51f0
        void GetLocalEulerAngles_Injected(UnityEngine::RotationOrder order, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::RotationOrder, UnityEngine::Vector3)>(0xef2d70)(this, order, ret); } // 0xef2d70
        void SetLocalEulerAngles_Injected(UnityEngine::Vector3 euler, UnityEngine::RotationOrder order) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::RotationOrder)>(0xef3e40)(this, euler, order); } // 0xef3e40
        void SetLocalEulerHint_Injected(UnityEngine::Vector3 euler) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef3ea0)(this, euler); } // 0xef3ea0
        void get_rotation_Injected(UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Quaternion)>(0xef4ee0)(this, ret); } // 0xef4ee0
        void set_rotation_Injected(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Quaternion)>(0xef54c0)(this, value); } // 0xef54c0
        void get_localRotation_Injected(UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Quaternion)>(0xef4c00)(this, ret); } // 0xef4c00
        void set_localRotation_Injected(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Quaternion)>(0xef5250)(this, value); } // 0xef5250
        void get_localScale_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef4c70)(this, ret); } // 0xef4c70
        void set_localScale_Injected(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef52b0)(this, value); } // 0xef52b0
        void get_worldToLocalMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Matrix4x4)>(0xef5000)(this, ret); } // 0xef5000
        void get_localToWorldMatrix_Injected(UnityEngine::Matrix4x4 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Matrix4x4)>(0xef4ce0)(this, ret); } // 0xef4ce0
        void SetPositionAndRotation_Injected(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Quaternion)>(0xef3f60)(this, position, rotation); } // 0xef3f60
        void RotateAroundInternal_Injected(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef35b0)(this, axis, angle); } // 0xef35b0
        void Internal_LookAt_Injected(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef2eb0)(this, worldPosition, worldUp); } // 0xef2eb0
        void TransformDirection_Injected(UnityEngine::Vector3 direction, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef4030)(this, direction, ret); } // 0xef4030
        void InverseTransformDirection_Injected(UnityEngine::Vector3 direction, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef2f10)(this, direction, ret); } // 0xef2f10
        void TransformVector_Injected(UnityEngine::Vector3 vector, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef4250)(this, vector, ret); } // 0xef4250
        void InverseTransformVector_Injected(UnityEngine::Vector3 vector, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef3130)(this, vector, ret); } // 0xef3130
        void TransformPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef4140)(this, position, ret); } // 0xef4140
        void InverseTransformPoint_Injected(UnityEngine::Vector3 position, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, UnityEngine::Vector3)>(0xef3020)(this, position, ret); } // 0xef3020
        void get_lossyScale_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3)>(0xef4d50)(this, ret); } // 0xef4d50
        void RotateAround_Injected(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef36b0)(this, axis, angle); } // 0xef36b0
        void RotateAroundLocal_Injected(UnityEngine::Vector3 axis, float angle) { return il2cpp::call<void(*)(Transform*, UnityEngine::Vector3, float)>(0xef3630)(this, axis, angle); } // 0xef3630

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Transform> {
        };

}

