#include <au/UnityEngine/Transform.hpp>

namespace UnityEngine {

    // Methods

    void Transform::ctor() { return method_call(ctor); }  // 0x678390 // 
    UnityEngine::Vector3 Transform::get_position() { return method_call(get_position); }  // 0xAB72A0 // 
    void Transform::set_position(UnityEngine::Vector3 value) { return method_call(set_position, value); }  // 0xAB78A0 // 
    UnityEngine::Vector3 Transform::get_localPosition() { return method_call(get_localPosition); }  // 0xAB7070 // 
    void Transform::set_localPosition(UnityEngine::Vector3 value) { return method_call(set_localPosition, value); }  // 0xAB76D0 // 
    UnityEngine::Vector3 Transform::GetLocalEulerAngles(UnityEngine::RotationOrder order) { return method_call(GetLocalEulerAngles, order); }  // 0xAB5260 // 
    void Transform::SetLocalEulerAngles(UnityEngine::Vector3 euler, UnityEngine::RotationOrder order) { return method_call(SetLocalEulerAngles, euler, order); }  // 0xAB6330 // 
    void Transform::SetLocalEulerHint(UnityEngine::Vector3 euler) { return method_call(SetLocalEulerHint, euler); }  // 0xAB6390 // 
    UnityEngine::Vector3 Transform::get_eulerAngles() { return method_call(get_eulerAngles); }  // 0xAB6E20 // 
    void Transform::set_eulerAngles(UnityEngine::Vector3 value) { return method_call(set_eulerAngles, value); }  // 0xAB7550 // 
    UnityEngine::Vector3 Transform::get_localEulerAngles() { return method_call(get_localEulerAngles); }  // 0xAB6FD0 // 
    void Transform::set_localEulerAngles(UnityEngine::Vector3 value) { return method_call(set_localEulerAngles, value); }  // 0xAB7640 // 
    UnityEngine::Vector3 Transform::get_right() { return method_call(get_right); }  // 0xAB72E0 // 
    void Transform::set_right(UnityEngine::Vector3 value) { return method_call(set_right, value); }  // 0xAB78D0 // 
    UnityEngine::Vector3 Transform::get_up() { return method_call(get_up); }  // 0xAB7400 // 
    void Transform::set_up(UnityEngine::Vector3 value) { return method_call(set_up, value); }  // 0xAB79D0 // 
    UnityEngine::Vector3 Transform::get_forward() { return method_call(get_forward); }  // 0xAB6E90 // 
    void Transform::set_forward(UnityEngine::Vector3 value) { return method_call(set_forward, value); }  // 0xAB75B0 // 
    UnityEngine::Quaternion Transform::get_rotation() { return method_call(get_rotation); }  // 0xAB73C0 // 
    void Transform::set_rotation(UnityEngine::Quaternion value) { return method_call(set_rotation, value); }  // 0xAB79A0 // 
    UnityEngine::Quaternion Transform::get_localRotation() { return method_call(get_localRotation); }  // 0xAB70E0 // 
    void Transform::set_localRotation(UnityEngine::Quaternion value) { return method_call(set_localRotation, value); }  // 0xAB7730 // 
    UnityEngine::RotationOrder Transform::get_rotationOrder() { return method_call(get_rotationOrder); }  // 0xAB5310 // 
    void Transform::set_rotationOrder(UnityEngine::RotationOrder value) { return method_call(set_rotationOrder, value); }  // 0xAB6480 // 
    int Transform::GetRotationOrderInternal() { return method_call(GetRotationOrderInternal); }  // 0xAB5310 // 
    void Transform::SetRotationOrderInternal(UnityEngine::RotationOrder rotationOrder) { return method_call(SetRotationOrderInternal, rotationOrder); }  // 0xAB6480 // 
    UnityEngine::Vector3 Transform::get_localScale() { return method_call(get_localScale); }  // 0xAB7150 // 
    void Transform::set_localScale(UnityEngine::Vector3 value) { return method_call(set_localScale, value); }  // 0xAB7790 // 
    UnityEngine::Transform* Transform::get_parent() { return method_call(get_parent); }  // 0xAB52B0 // 
    void Transform::set_parent(UnityEngine::Transform* value) { return method_call(set_parent, value); }  // 0xAB77C0 // 
    UnityEngine::Transform* Transform::get_parentInternal() { return method_call(get_parentInternal); }  // 0xAB52B0 // 
    void Transform::set_parentInternal(UnityEngine::Transform* value) { return method_call(set_parentInternal, value); }  // 0xAB63C0 // 
    UnityEngine::Transform* Transform::GetParent() { return method_call(GetParent); }  // 0xAB52B0 // 
    void Transform::SetParent(UnityEngine::Transform* p) { return method_call(SetParent, p); }  // 0xAB63C0 // 
    void Transform::SetParent1(UnityEngine::Transform* parent, bool worldPositionStays) { return method_call(SetParent1, parent, worldPositionStays); }  // 0xAB63F0 // 
    UnityEngine::Matrix4x4 Transform::get_worldToLocalMatrix() { return method_call(get_worldToLocalMatrix); }  // 0xAB74E0 // 
    UnityEngine::Matrix4x4 Transform::get_localToWorldMatrix() { return method_call(get_localToWorldMatrix); }  // 0xAB71C0 // 
    void Transform::SetPositionAndRotation(UnityEngine::Vector3 position, UnityEngine::Quaternion rotation) { return method_call(SetPositionAndRotation, position, rotation); }  // 0xAB6450 // 
    void Transform::Translate(UnityEngine::Vector3 translation, UnityEngine::Space relativeTo) { return method_call(Translate, translation, relativeTo); }  // 0xAB6C80 // 
    void Transform::Translate1(UnityEngine::Vector3 translation) { return method_call(Translate1, translation); }  // 0xAB6850 // 
    void Transform::Translate2(float x, float y, float z, UnityEngine::Space relativeTo) { return method_call(Translate2, x, y, z, relativeTo); }  // 0xAB6810 // 
    void Transform::Translate3(float x, float y, float z) { return method_call(Translate3, x, y, z); }  // 0xAB6C40 // 
    void Transform::Translate4(UnityEngine::Vector3 translation, UnityEngine::Transform* relativeTo) { return method_call(Translate4, translation, relativeTo); }  // 0xAB6880 // 
    void Transform::Translate5(float x, float y, float z, UnityEngine::Transform* relativeTo) { return method_call(Translate5, x, y, z, relativeTo); }  // 0xAB6A50 // 
    void Transform::Rotate(UnityEngine::Vector3 eulers, UnityEngine::Space relativeTo) { return method_call(Rotate, eulers, relativeTo); }  // 0xAB5FD0 // 
    void Transform::Rotate1(UnityEngine::Vector3 eulers) { return method_call(Rotate1, eulers); }  // 0xAB5DA0 // 
    void Transform::Rotate2(float xAngle, float yAngle, float zAngle, UnityEngine::Space relativeTo) { return method_call(Rotate2, xAngle, yAngle, zAngle, relativeTo); }  // 0xAB6230 // 
    void Transform::Rotate3(float xAngle, float yAngle, float zAngle) { return method_call(Rotate3, xAngle, yAngle, zAngle); }  // 0xAB61F0 // 
    void Transform::RotateAroundInternal(UnityEngine::Vector3 axis, float angle) { return method_call(RotateAroundInternal, axis, angle); }  // 0xAB5AB0 // 
    void Transform::Rotate4(UnityEngine::Vector3 axis, float angle, UnityEngine::Space relativeTo) { return method_call(Rotate4, axis, angle, relativeTo); }  // 0xAB5DD0 // 
    void Transform::Rotate5(UnityEngine::Vector3 axis, float angle) { return method_call(Rotate5, axis, angle); }  // 0xAB5F00 // 
    void Transform::RotateAround(UnityEngine::Vector3 point, UnityEngine::Vector3 axis, float angle) { return method_call(RotateAround, point, axis, angle); }  // 0xAB5BB0 // 
    void Transform::LookAt(UnityEngine::Transform* target, UnityEngine::Vector3 worldUp) { return method_call(LookAt, target, worldUp); }  // 0xAB5870 // 
    void Transform::LookAt1(UnityEngine::Transform* target) { return method_call(LookAt1, target); }  // 0xAB5760 // 
    void Transform::LookAt2(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) { return method_call(LookAt2, worldPosition, worldUp); }  // 0xAB5960 // 
    void Transform::LookAt3(UnityEngine::Vector3 worldPosition) { return method_call(LookAt3, worldPosition); }  // 0xAB59C0 // 
    void Transform::Internal_LookAt(UnityEngine::Vector3 worldPosition, UnityEngine::Vector3 worldUp) { return method_call(Internal_LookAt, worldPosition, worldUp); }  // 0xAB53A0 // 
    UnityEngine::Vector3 Transform::TransformDirection(UnityEngine::Vector3 direction) { return method_call(TransformDirection, direction); }  // 0xAB65A0 // 
    UnityEngine::Vector3 Transform::TransformDirection1(float x, float y, float z) { return method_call(TransformDirection1, x, y, z); }  // 0xAB6510 // 
    UnityEngine::Vector3 Transform::InverseTransformDirection(UnityEngine::Vector3 direction) { return method_call(InverseTransformDirection, direction); }  // 0xAB5490 // 
    UnityEngine::Vector3 Transform::InverseTransformDirection1(float x, float y, float z) { return method_call(InverseTransformDirection1, x, y, z); }  // 0xAB5400 // 
    UnityEngine::Vector3 Transform::TransformVector(UnityEngine::Vector3 vector) { return method_call(TransformVector, vector); }  // 0xAB6730 // 
    UnityEngine::Vector3 Transform::TransformVector1(float x, float y, float z) { return method_call(TransformVector1, x, y, z); }  // 0xAB6780 // 
    UnityEngine::Vector3 Transform::InverseTransformVector(UnityEngine::Vector3 vector) { return method_call(InverseTransformVector, vector); }  // 0xAB56B0 // 
    UnityEngine::Vector3 Transform::InverseTransformVector1(float x, float y, float z) { return method_call(InverseTransformVector1, x, y, z); }  // 0xAB5620 // 
    UnityEngine::Vector3 Transform::TransformPoint(UnityEngine::Vector3 position) { return method_call(TransformPoint, position); }  // 0xAB66B0 // 
    UnityEngine::Vector3 Transform::TransformPoint1(float x, float y, float z) { return method_call(TransformPoint1, x, y, z); }  // 0xAB6620 // 
    UnityEngine::Vector3 Transform::InverseTransformPoint(UnityEngine::Vector3 position) { return method_call(InverseTransformPoint, position); }  // 0xAB55A0 // 
    UnityEngine::Vector3 Transform::InverseTransformPoint1(float x, float y, float z) { return method_call(InverseTransformPoint1, x, y, z); }  // 0xAB5510 // 
    UnityEngine::Transform* Transform::get_root() { return method_call(get_root); }  // 0xAB52E0 // 
    UnityEngine::Transform* Transform::GetRoot() { return method_call(GetRoot); }  // 0xAB52E0 // 
    int Transform::get_childCount() { return method_call(get_childCount); }  // 0xAB6DF0 // 
    void Transform::DetachChildren() { return method_call(DetachChildren); }  // 0xAB50A0 // 
    void Transform::SetAsFirstSibling() { return method_call(SetAsFirstSibling); }  // 0xAB62A0 // 
    void Transform::SetAsLastSibling() { return method_call(SetAsLastSibling); }  // 0xAB62D0 // 
    void Transform::SetSiblingIndex(int index) { return method_call(SetSiblingIndex, index); }  // 0xAB64B0 // 
    void Transform::MoveAfterSibling(UnityEngine::Transform* transform, bool notifyEditorAndMarkDirty) { return method_call(MoveAfterSibling, transform, notifyEditorAndMarkDirty); }  // 0xAB5A40 // 
    int Transform::GetSiblingIndex() { return method_call(GetSiblingIndex); }  // 0xAB5340 // 
    UnityEngine::Transform* Transform::FindRelativeTransformWithPath(UnityEngine::Transform* transform, cs::string* path, bool isActiveOnly) { return method_call(FindRelativeTransformWithPath, transform, path, isActiveOnly); }  // 0xAB5150 // 
    UnityEngine::Transform* Transform::Find(cs::string* n) { return method_call(Find, n); }  // 0xAB50D0 // 
    void Transform::SendTransformChangedScale() { return method_call(SendTransformChangedScale); }  // 0xAB6270 // 
    UnityEngine::Vector3 Transform::get_lossyScale() { return method_call(get_lossyScale); }  // 0xAB7230 // 
    bool Transform::IsChildOf(UnityEngine::Transform* parent) { return method_call(IsChildOf, parent); }  // 0xAB5700 // 
    bool Transform::get_hasChanged() { return method_call(get_hasChanged); }  // 0xAB6F40 // 
    void Transform::set_hasChanged(bool value) { return method_call(set_hasChanged, value); }  // 0xAB7610 // 
    UnityEngine::Transform* Transform::FindChild(cs::string* n) { return method_call(FindChild, n); }  // 0xAB50D0 // 
    System::Collections::IEnumerator* Transform::GetEnumerator() { return method_call(GetEnumerator); }  // 0xAB51E0 // 
    void Transform::RotateAround1(UnityEngine::Vector3 axis, float angle) { return method_call(RotateAround1, axis, angle); }  // 0xAB5D60 // 
    void Transform::RotateAroundLocal(UnityEngine::Vector3 axis, float angle) { return method_call(RotateAroundLocal, axis, angle); }  // 0xAB5B30 // 
    UnityEngine::Transform* Transform::GetChild(int index) { return method_call(GetChild, index); }  // 0xAB51B0 // 
    int Transform::GetChildCount() { return method_call(GetChildCount); }  // 0xAB5180 // 
    int Transform::get_hierarchyCapacity() { return method_call(get_hierarchyCapacity); }  // 0xAB6F70 // 
    void Transform::set_hierarchyCapacity(int value) { return method_call(set_hierarchyCapacity, value); }  // 0xAB7520 // 
    int Transform::internal_getHierarchyCapacity() { return method_call(internal_getHierarchyCapacity); }  // 0xAB6F70 // 
    void Transform::internal_setHierarchyCapacity(int value) { return method_call(internal_setHierarchyCapacity, value); }  // 0xAB7520 // 
    int Transform::get_hierarchyCount() { return method_call(get_hierarchyCount); }  // 0xAB6FA0 // 
    int Transform::internal_getHierarchyCount() { return method_call(internal_getHierarchyCount); }  // 0xAB6FA0 // 
    bool Transform::IsNonUniformScaleTransform() { return method_call(IsNonUniformScaleTransform); }  // 0xAB5730 // 
    void Transform::get_position_Injected(/*out*/ UnityEngine::Vector3 ret) { return method_call(get_position_Injected, ret); }  // 0xAB7270 // 
    void Transform::set_position_Injected(/*ref*/ UnityEngine::Vector3 value) { return method_call(set_position_Injected, value); }  // 0xAB7870 // 
    void Transform::get_localPosition_Injected(/*out*/ UnityEngine::Vector3 ret) { return method_call(get_localPosition_Injected, ret); }  // 0xAB7040 // 
    void Transform::set_localPosition_Injected(/*ref*/ UnityEngine::Vector3 value) { return method_call(set_localPosition_Injected, value); }  // 0xAB76A0 // 
    void Transform::GetLocalEulerAngles_Injected(UnityEngine::RotationOrder order, /*out*/ UnityEngine::Vector3 ret) { return method_call(GetLocalEulerAngles_Injected, order, ret); }  // 0xAB5230 // 
    void Transform::SetLocalEulerAngles_Injected(/*ref*/ UnityEngine::Vector3 euler, UnityEngine::RotationOrder order) { return method_call(SetLocalEulerAngles_Injected, euler, order); }  // 0xAB6300 // 
    void Transform::SetLocalEulerHint_Injected(/*ref*/ UnityEngine::Vector3 euler) { return method_call(SetLocalEulerHint_Injected, euler); }  // 0xAB6360 // 
    void Transform::get_rotation_Injected(/*out*/ UnityEngine::Quaternion ret) { return method_call(get_rotation_Injected, ret); }  // 0xAB7390 // 
    void Transform::set_rotation_Injected(/*ref*/ UnityEngine::Quaternion value) { return method_call(set_rotation_Injected, value); }  // 0xAB7970 // 
    void Transform::get_localRotation_Injected(/*out*/ UnityEngine::Quaternion ret) { return method_call(get_localRotation_Injected, ret); }  // 0xAB70B0 // 
    void Transform::set_localRotation_Injected(/*ref*/ UnityEngine::Quaternion value) { return method_call(set_localRotation_Injected, value); }  // 0xAB7700 // 
    void Transform::get_localScale_Injected(/*out*/ UnityEngine::Vector3 ret) { return method_call(get_localScale_Injected, ret); }  // 0xAB7120 // 
    void Transform::set_localScale_Injected(/*ref*/ UnityEngine::Vector3 value) { return method_call(set_localScale_Injected, value); }  // 0xAB7760 // 
    void Transform::get_worldToLocalMatrix_Injected(/*out*/ UnityEngine::Matrix4x4 ret) { return method_call(get_worldToLocalMatrix_Injected, ret); }  // 0xAB74B0 // 
    void Transform::get_localToWorldMatrix_Injected(/*out*/ UnityEngine::Matrix4x4 ret) { return method_call(get_localToWorldMatrix_Injected, ret); }  // 0xAB7190 // 
    void Transform::SetPositionAndRotation_Injected(/*ref*/ UnityEngine::Vector3 position, /*ref*/ UnityEngine::Quaternion rotation) { return method_call(SetPositionAndRotation_Injected, position, rotation); }  // 0xAB6420 // 
    void Transform::RotateAroundInternal_Injected(/*ref*/ UnityEngine::Vector3 axis, float angle) { return method_call(RotateAroundInternal_Injected, axis, angle); }  // 0xAB5A70 // 
    void Transform::Internal_LookAt_Injected(/*ref*/ UnityEngine::Vector3 worldPosition, /*ref*/ UnityEngine::Vector3 worldUp) { return method_call(Internal_LookAt_Injected, worldPosition, worldUp); }  // 0xAB5370 // 
    void Transform::TransformDirection_Injected(/*ref*/ UnityEngine::Vector3 direction, /*out*/ UnityEngine::Vector3 ret) { return method_call(TransformDirection_Injected, direction, ret); }  // 0xAB64E0 // 
    void Transform::InverseTransformDirection_Injected(/*ref*/ UnityEngine::Vector3 direction, /*out*/ UnityEngine::Vector3 ret) { return method_call(InverseTransformDirection_Injected, direction, ret); }  // 0xAB53D0 // 
    void Transform::TransformVector_Injected(/*ref*/ UnityEngine::Vector3 vector, /*out*/ UnityEngine::Vector3 ret) { return method_call(TransformVector_Injected, vector, ret); }  // 0xAB6700 // 
    void Transform::InverseTransformVector_Injected(/*ref*/ UnityEngine::Vector3 vector, /*out*/ UnityEngine::Vector3 ret) { return method_call(InverseTransformVector_Injected, vector, ret); }  // 0xAB55F0 // 
    void Transform::TransformPoint_Injected(/*ref*/ UnityEngine::Vector3 position, /*out*/ UnityEngine::Vector3 ret) { return method_call(TransformPoint_Injected, position, ret); }  // 0xAB65F0 // 
    void Transform::InverseTransformPoint_Injected(/*ref*/ UnityEngine::Vector3 position, /*out*/ UnityEngine::Vector3 ret) { return method_call(InverseTransformPoint_Injected, position, ret); }  // 0xAB54E0 // 
    void Transform::get_lossyScale_Injected(/*out*/ UnityEngine::Vector3 ret) { return method_call(get_lossyScale_Injected, ret); }  // 0xAB7200 // 
    void Transform::RotateAround_Injected(/*ref*/ UnityEngine::Vector3 axis, float angle) { return method_call(RotateAround_Injected, axis, angle); }  // 0xAB5B70 // 
    void Transform::RotateAroundLocal_Injected(/*ref*/ UnityEngine::Vector3 axis, float angle) { return method_call(RotateAroundLocal_Injected, axis, angle); }  // 0xAB5AF0 // 

};

