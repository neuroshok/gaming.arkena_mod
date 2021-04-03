//au/UnityEngine/Transform
#pragma once
#include <ark/class.hpp>
#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/RotationOrder.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Matrix4x4.hpp>
#include <au/UnityEngine/Space.hpp>
#include <cs/string.hpp>
namespace System::Collections{ struct IEnumerator; }


namespace UnityEngine {
struct Transform : ark::meta<Transform, UnityEngine::Component>
{
ark_meta("UnityEngine", "Transform", "");

    // Methods

    void ctor(); // 0x678390 // protected 
    UnityEngine::Vector3 get_position(); // 0xAB72A0 // public 
    void set_position(UnityEngine::Vector3 value); // 0xAB78A0 // public 
    UnityEngine::Vector3 get_localPosition(); // 0xAB7070 // public 
    void set_localPosition(UnityEngine::Vector3 value); // 0xAB76D0 // public 
    UnityEngine::Vector3 GetLocalEulerAngles(UnityEngine::RotationOrder order); // 0xAB5260 // internal 
    void SetLocalEulerAngles(UnityEngine::Vector3 euler, UnityEngine::RotationOrder order); // 0xAB6330 // internal 
    void SetLocalEulerHint(UnityEngine::Vector3 euler); // 0xAB6390 // internal 
    UnityEngine::Vector3 get_eulerAngles(); // 0xAB6E20 // public 
    void set_eulerAngles(UnityEngine::Vector3 value); // 0xAB7550 // public 
    UnityEngine::Vector3 get_localEulerAngles(); // 0xAB6FD0 // public 
    void set_localEulerAngles(UnityEngine::Vector3 value); // 0xAB7640 // public 
    UnityEngine::Vector3 get_right(); // 0xAB72E0 // public 
    void set_right(UnityEngine::Vector3 value); // 0xAB78D0 // public 
    UnityEngine::Vector3 get_up(); // 0xAB7400 // public 
    void set_up(UnityEngine::Vector3 value); // 0xAB79D0 // public 
    UnityEngine::Vector3 get_forward(); // 0xAB6E90 // public 
    void set_forward(UnityEngine::Vector3 value); // 0xAB75B0 // public 
    UnityEngine::Quaternion get_rotation(); // 0xAB73C0 // public 
    void set_rotation(UnityEngine::Quaternion value); // 0xAB79A0 // public 
    UnityEngine::Quaternion get_localRotation(); // 0xAB70E0 // public 
    void set_localRotation(UnityEngine::Quaternion value); // 0xAB7730 // public 
    UnityEngine::RotationOrder get_rotationOrder(); // 0xAB5310 // internal 
    void set_rotationOrder(UnityEngine::RotationOrder value); // 0xAB6480 // internal 
    int GetRotationOrderInternal(); // 0xAB5310 // internal 
    void SetRotationOrderInternal(UnityEngine::RotationOrder rotationOrder); // 0xAB6480 // internal 
    UnityEngine::Vector3 get_localScale(); // 0xAB7150 // public 
    void set_localScale(UnityEngine::Vector3 value); // 0xAB7790 // public 
    UnityEngine::Transform* get_parent(); // 0xAB52B0 // public 
    void set_parent(UnityEngine::Transform* value); // 0xAB77C0 // public 
    UnityEngine::Transform* get_parentInternal(); // 0xAB52B0 // internal 
    void set_parentInternal(UnityEngine::Transform* value); // 0xAB63C0 // internal 
    UnityEngine::Transform* GetParent(); // 0xAB52B0 // private 
    void SetParent(UnityEngine::Transform* p); // 0xAB63C0 // public 
    void SetParent1(UnityEngine::Transform* parent, bool worldPositionStays); // 0xAB63F0 // public 
    UnityEngine::Matrix4x4 get_worldToLocalMatrix(); // 0xAB74E0 // public 
    UnityEngine::Matrix4x4 get_localToWorldMatrix(); // 0xAB71C0 // public 
    void SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation); // 0xAB6450 // public 
    void Translate(UnityEngine::Vector3 translation, UnityEngine::Space relativeTo); // 0xAB6C80 // public 
    void Translate1(UnityEngine::Vector3 translation); // 0xAB6850 // public 
    void Translate2(float x, float y, float z, UnityEngine::Space relativeTo); // 0xAB6810 // public 
    void Translate3(float x, float y, float z); // 0xAB6C40 // public 
    void Translate4(UnityEngine::Vector3 translation, UnityEngine::Transform* relativeTo); // 0xAB6880 // public 
    void Translate5(float x, float y, float z, UnityEngine::Transform* relativeTo); // 0xAB6A50 // public 
    void Rotate(UnityEngine::Vector3 eulers, UnityEngine::Space relativeTo); // 0xAB5FD0 // public 
    void Rotate1(UnityEngine::Vector3 eulers); // 0xAB5DA0 // public 
    void Rotate2(float xAngle, float yAngle, float zAngle, UnityEngine::Space relativeTo); // 0xAB6230 // public 
    void Rotate3(float xAngle, float yAngle, float zAngle); // 0xAB61F0 // public 
    void RotateAroundInternal(UnityEngine::Vector3 axis, float angle); // 0xAB5AB0 // internal 
    void Rotate4(UnityEngine::Vector3 axis, float angle, UnityEngine::Space relativeTo); // 0xAB5DD0 // public 
    void Rotate5(UnityEngine::Vector3 axis, float angle); // 0xAB5F00 // public 
    void RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, float angle); // 0xAB5BB0 // public 
    void LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp); // 0xAB5870 // public 
    void LookAt1(UnityEngine::Transform* target); // 0xAB5760 // public 
    void LookAt2(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp); // 0xAB5960 // public 
    void LookAt3(UnityEngine::Vector3 worldPosition); // 0xAB59C0 // public 
    void Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp); // 0xAB53A0 // private 
    UnityEngine::Vector3 TransformDirection(UnityEngine::Vector3 direction); // 0xAB65A0 // public 
    UnityEngine::Vector3 TransformDirection1(float x, float y, float z); // 0xAB6510 // public 
    UnityEngine::Vector3 InverseTransformDirection(UnityEngine::Vector3 direction); // 0xAB5490 // public 
    UnityEngine::Vector3 InverseTransformDirection1(float x, float y, float z); // 0xAB5400 // public 
    UnityEngine::Vector3 TransformVector(UnityEngine::Vector3 vector); // 0xAB6730 // public 
    UnityEngine::Vector3 TransformVector1(float x, float y, float z); // 0xAB6780 // public 
    UnityEngine::Vector3 InverseTransformVector(UnityEngine::Vector3 vector); // 0xAB56B0 // public 
    UnityEngine::Vector3 InverseTransformVector1(float x, float y, float z); // 0xAB5620 // public 
    UnityEngine::Vector3 TransformPoint(UnityEngine::Vector3 position); // 0xAB66B0 // public 
    UnityEngine::Vector3 TransformPoint1(float x, float y, float z); // 0xAB6620 // public 
    UnityEngine::Vector3 InverseTransformPoint(UnityEngine::Vector3 position); // 0xAB55A0 // public 
    UnityEngine::Vector3 InverseTransformPoint1(float x, float y, float z); // 0xAB5510 // public 
    UnityEngine::Transform* get_root(); // 0xAB52E0 // public 
    UnityEngine::Transform* GetRoot(); // 0xAB52E0 // private 
    int get_childCount(); // 0xAB6DF0 // public 
    void DetachChildren(); // 0xAB50A0 // public 
    void SetAsFirstSibling(); // 0xAB62A0 // public 
    void SetAsLastSibling(); // 0xAB62D0 // public 
    void SetSiblingIndex(int index); // 0xAB64B0 // public 
    void MoveAfterSibling(UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty); // 0xAB5A40 // internal 
    int GetSiblingIndex(); // 0xAB5340 // public 
    UnityEngine::Transform* FindRelativeTransformWithPath(UnityEngine::Transform* transform, cs::string* path, bool isActiveOnly); // 0xAB5150 // private static 
    UnityEngine::Transform* Find(cs::string* n); // 0xAB50D0 // public 
    void SendTransformChangedScale(); // 0xAB6270 // internal 
    UnityEngine::Vector3 get_lossyScale(); // 0xAB7230 // public 
    bool IsChildOf(UnityEngine::Transform* parent); // 0xAB5700 // public 
    bool get_hasChanged(); // 0xAB6F40 // public 
    void set_hasChanged(bool value); // 0xAB7610 // public 
    UnityEngine::Transform* FindChild(cs::string* n); // 0xAB50D0 // public 
    System::Collections::IEnumerator* GetEnumerator(); // 0xAB51E0 // public 
    void RotateAround1(UnityEngine::Vector3 axis, float angle); // 0xAB5D60 // public 
    void RotateAroundLocal(UnityEngine::Vector3 axis, float angle); // 0xAB5B30 // public 
    UnityEngine::Transform* GetChild(int index); // 0xAB51B0 // public 
    int GetChildCount(); // 0xAB5180 // public 
    int get_hierarchyCapacity(); // 0xAB6F70 // public 
    void set_hierarchyCapacity(int value); // 0xAB7520 // public 
    int internal_getHierarchyCapacity(); // 0xAB6F70 // private 
    void internal_setHierarchyCapacity(int value); // 0xAB7520 // private 
    int get_hierarchyCount(); // 0xAB6FA0 // public 
    int internal_getHierarchyCount(); // 0xAB6FA0 // private 
    bool IsNonUniformScaleTransform(); // 0xAB5730 // internal 
    void get_position_Injected(/*out*/ UnityEngine::Vector3 ret); // 0xAB7270 // private 
    void set_position_Injected(/*ref*/ UnityEngine::Vector3 value); // 0xAB7870 // private 
    void get_localPosition_Injected(/*out*/ UnityEngine::Vector3 ret); // 0xAB7040 // private 
    void set_localPosition_Injected(/*ref*/ UnityEngine::Vector3 value); // 0xAB76A0 // private 
    void GetLocalEulerAngles_Injected(UnityEngine::RotationOrder order, /*out*/ UnityEngine::Vector3 ret); // 0xAB5230 // private 
    void SetLocalEulerAngles_Injected(/*ref*/ UnityEngine::Vector3 euler, UnityEngine::RotationOrder order); // 0xAB6300 // private 
    void SetLocalEulerHint_Injected(/*ref*/ UnityEngine::Vector3 euler); // 0xAB6360 // private 
    void get_rotation_Injected(/*out*/ UnityEngine::Quaternion ret); // 0xAB7390 // private 
    void set_rotation_Injected(/*ref*/ UnityEngine::Quaternion value); // 0xAB7970 // private 
    void get_localRotation_Injected(/*out*/ UnityEngine::Quaternion ret); // 0xAB70B0 // private 
    void set_localRotation_Injected(/*ref*/ UnityEngine::Quaternion value); // 0xAB7700 // private 
    void get_localScale_Injected(/*out*/ UnityEngine::Vector3 ret); // 0xAB7120 // private 
    void set_localScale_Injected(/*ref*/ UnityEngine::Vector3 value); // 0xAB7760 // private 
    void get_worldToLocalMatrix_Injected(/*out*/ UnityEngine::Matrix4x4 ret); // 0xAB74B0 // private 
    void get_localToWorldMatrix_Injected(/*out*/ UnityEngine::Matrix4x4 ret); // 0xAB7190 // private 
    void SetPositionAndRotation_Injected(/*ref*/ UnityEngine::Vector3 position, /*ref*/ UnityEngine::Quaternion rotation); // 0xAB6420 // private 
    void RotateAroundInternal_Injected(/*ref*/ UnityEngine::Vector3 axis, float angle); // 0xAB5A70 // private 
    void Internal_LookAt_Injected(/*ref*/ UnityEngine::Vector3 worldPosition, /*ref*/ UnityEngine::Vector3 worldUp); // 0xAB5370 // private 
    void TransformDirection_Injected(/*ref*/ UnityEngine::Vector3 direction, /*out*/ UnityEngine::Vector3 ret); // 0xAB64E0 // private 
    void InverseTransformDirection_Injected(/*ref*/ UnityEngine::Vector3 direction, /*out*/ UnityEngine::Vector3 ret); // 0xAB53D0 // private 
    void TransformVector_Injected(/*ref*/ UnityEngine::Vector3 vector, /*out*/ UnityEngine::Vector3 ret); // 0xAB6700 // private 
    void InverseTransformVector_Injected(/*ref*/ UnityEngine::Vector3 vector, /*out*/ UnityEngine::Vector3 ret); // 0xAB55F0 // private 
    void TransformPoint_Injected(/*ref*/ UnityEngine::Vector3 position, /*out*/ UnityEngine::Vector3 ret); // 0xAB65F0 // private 
    void InverseTransformPoint_Injected(/*ref*/ UnityEngine::Vector3 position, /*out*/ UnityEngine::Vector3 ret); // 0xAB54E0 // private 
    void get_lossyScale_Injected(/*out*/ UnityEngine::Vector3 ret); // 0xAB7200 // private 
    void RotateAround_Injected(/*ref*/ UnityEngine::Vector3 axis, float angle); // 0xAB5B70 // private 
    void RotateAroundLocal_Injected(/*ref*/ UnityEngine::Vector3 axis, float angle); // 0xAB5AF0 // private 

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::Transform>
{
};
} // ark


namespace ark::method_info 
{
    template<> inline uintptr_t rva<&UnityEngine::Transform::ctor> () { return 0x678390; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_position> () { return 0xAB72A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_position> () { return 0xAB78A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localPosition> () { return 0xAB7070; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localPosition> () { return 0xAB76D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetLocalEulerAngles> () { return 0xAB5260; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetLocalEulerAngles> () { return 0xAB6330; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetLocalEulerHint> () { return 0xAB6390; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_eulerAngles> () { return 0xAB6E20; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_eulerAngles> () { return 0xAB7550; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localEulerAngles> () { return 0xAB6FD0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localEulerAngles> () { return 0xAB7640; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_right> () { return 0xAB72E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_right> () { return 0xAB78D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_up> () { return 0xAB7400; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_up> () { return 0xAB79D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_forward> () { return 0xAB6E90; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_forward> () { return 0xAB75B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_rotation> () { return 0xAB73C0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_rotation> () { return 0xAB79A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localRotation> () { return 0xAB70E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localRotation> () { return 0xAB7730; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_rotationOrder> () { return 0xAB5310; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_rotationOrder> () { return 0xAB6480; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetRotationOrderInternal> () { return 0xAB5310; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetRotationOrderInternal> () { return 0xAB6480; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localScale> () { return 0xAB7150; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localScale> () { return 0xAB7790; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_parent> () { return 0xAB52B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_parent> () { return 0xAB77C0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_parentInternal> () { return 0xAB52B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_parentInternal> () { return 0xAB63C0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetParent> () { return 0xAB52B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetParent> () { return 0xAB63C0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetParent1> () { return 0xAB63F0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_worldToLocalMatrix> () { return 0xAB74E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localToWorldMatrix> () { return 0xAB71C0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetPositionAndRotation> () { return 0xAB6450; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Translate> () { return 0xAB6C80; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Translate1> () { return 0xAB6850; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Translate2> () { return 0xAB6810; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Translate3> () { return 0xAB6C40; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Translate4> () { return 0xAB6880; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Translate5> () { return 0xAB6A50; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Rotate> () { return 0xAB5FD0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Rotate1> () { return 0xAB5DA0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Rotate2> () { return 0xAB6230; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Rotate3> () { return 0xAB61F0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAroundInternal> () { return 0xAB5AB0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Rotate4> () { return 0xAB5DD0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Rotate5> () { return 0xAB5F00; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAround> () { return 0xAB5BB0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::LookAt> () { return 0xAB5870; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::LookAt1> () { return 0xAB5760; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::LookAt2> () { return 0xAB5960; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::LookAt3> () { return 0xAB59C0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Internal_LookAt> () { return 0xAB53A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformDirection> () { return 0xAB65A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformDirection1> () { return 0xAB6510; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformDirection> () { return 0xAB5490; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformDirection1> () { return 0xAB5400; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformVector> () { return 0xAB6730; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformVector1> () { return 0xAB6780; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformVector> () { return 0xAB56B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformVector1> () { return 0xAB5620; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformPoint> () { return 0xAB66B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformPoint1> () { return 0xAB6620; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformPoint> () { return 0xAB55A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformPoint1> () { return 0xAB5510; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_root> () { return 0xAB52E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetRoot> () { return 0xAB52E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_childCount> () { return 0xAB6DF0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::DetachChildren> () { return 0xAB50A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetAsFirstSibling> () { return 0xAB62A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetAsLastSibling> () { return 0xAB62D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetSiblingIndex> () { return 0xAB64B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::MoveAfterSibling> () { return 0xAB5A40; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetSiblingIndex> () { return 0xAB5340; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::FindRelativeTransformWithPath> () { return 0xAB5150; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Find> () { return 0xAB50D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SendTransformChangedScale> () { return 0xAB6270; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_lossyScale> () { return 0xAB7230; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::IsChildOf> () { return 0xAB5700; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_hasChanged> () { return 0xAB6F40; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_hasChanged> () { return 0xAB7610; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::FindChild> () { return 0xAB50D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetEnumerator> () { return 0xAB51E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAround1> () { return 0xAB5D60; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAroundLocal> () { return 0xAB5B30; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetChild> () { return 0xAB51B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetChildCount> () { return 0xAB5180; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_hierarchyCapacity> () { return 0xAB6F70; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_hierarchyCapacity> () { return 0xAB7520; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::internal_getHierarchyCapacity> () { return 0xAB6F70; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::internal_setHierarchyCapacity> () { return 0xAB7520; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_hierarchyCount> () { return 0xAB6FA0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::internal_getHierarchyCount> () { return 0xAB6FA0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::IsNonUniformScaleTransform> () { return 0xAB5730; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_position_Injected> () { return 0xAB7270; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_position_Injected> () { return 0xAB7870; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localPosition_Injected> () { return 0xAB7040; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localPosition_Injected> () { return 0xAB76A0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::GetLocalEulerAngles_Injected> () { return 0xAB5230; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetLocalEulerAngles_Injected> () { return 0xAB6300; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetLocalEulerHint_Injected> () { return 0xAB6360; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_rotation_Injected> () { return 0xAB7390; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_rotation_Injected> () { return 0xAB7970; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localRotation_Injected> () { return 0xAB70B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localRotation_Injected> () { return 0xAB7700; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localScale_Injected> () { return 0xAB7120; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::set_localScale_Injected> () { return 0xAB7760; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_worldToLocalMatrix_Injected> () { return 0xAB74B0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_localToWorldMatrix_Injected> () { return 0xAB7190; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::SetPositionAndRotation_Injected> () { return 0xAB6420; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAroundInternal_Injected> () { return 0xAB5A70; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::Internal_LookAt_Injected> () { return 0xAB5370; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformDirection_Injected> () { return 0xAB64E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformDirection_Injected> () { return 0xAB53D0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformVector_Injected> () { return 0xAB6700; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformVector_Injected> () { return 0xAB55F0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::TransformPoint_Injected> () { return 0xAB65F0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::InverseTransformPoint_Injected> () { return 0xAB54E0; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::get_lossyScale_Injected> () { return 0xAB7200; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAround_Injected> () { return 0xAB5B70; }
    template<> inline uintptr_t rva<&UnityEngine::Transform::RotateAroundLocal_Injected> () { return 0xAB5AF0; }
} // ark::method_info