#pragma once

#include <ark/class.hpp>

#include <autogen/Unity/Component.hpp>
#include <autogen/Unity/Vector3.hpp>

namespace Unity{
    struct Transform : ark::meta<Transform, Component>
    {
        ark_meta("UnityEngine", "Transform");

        void _ctor() { return method_call(_ctor, ); } // 0x38A130
        Vector3 get_position() { return method_call(get_position, ); } // 0xB915C0
        void set_position(Vector3 value) { return method_call(set_position, value); } // 0xB91A10
        Vector3 get_localPosition() { return method_call(get_localPosition, ); } // 0xB91390
        void set_localPosition(Vector3 value) { return method_call(set_localPosition, value); } // 0xB91850
        Vector3 get_eulerAngles() { return method_call(get_eulerAngles, ); } // 0xB91050
        void set_eulerAngles(Vector3 value) { return method_call(set_eulerAngles, value); } // 0xB916E0
        Vector3 get_localEulerAngles() { return method_call(get_localEulerAngles, ); } // 0xB912F0
        void set_localEulerAngles(Vector3 value) { return method_call(set_localEulerAngles, value); } // 0xB91780
        Vector3 get_forward() { return method_call(get_forward, ); } // 0xB910C0
        struct Quaternion* get_rotation() { return method_call(get_rotation, ); } // 0xB91630
        void set_rotation(struct Quaternion* value) { return method_call(set_rotation, value); } // 0xB91A70
        struct Quaternion* get_localRotation() { return method_call(get_localRotation, ); } // 0xB91400
        void set_localRotation(struct Quaternion* value) { return method_call(set_localRotation, value); } // 0xB918B0
        Vector3 get_localScale() { return method_call(get_localScale, ); } // 0xB91470
        void set_localScale(Vector3 value) { return method_call(set_localScale, value); } // 0xB91910
        struct Transform* get_parent() { return method_call(get_parent, ); } // 0xB90450
        void set_parent(struct Transform* value) { return method_call(set_parent, value); } // 0xB91940
        struct Transform* get_parentInternal() { return method_call(get_parentInternal, ); } // 0xB90450
        void set_parentInternal(struct Transform* value) { return method_call(set_parentInternal, value); } // 0xB90CC0
        struct Transform* GetParent() { return method_call(GetParent, ); } // 0xB90450
        void SetParent(struct Transform* p) { return method_call(SetParent, p); } // 0xB90CC0
        //void SetParent(struct Transform* parent, bool worldPositionStays) { return method_call(SetParent, parent, worldPositionStays); } // 0xB90C90
        struct Matrix4x4* get_worldToLocalMatrix() { return method_call(get_worldToLocalMatrix, ); } // 0xB916A0
        struct Matrix4x4* get_localToWorldMatrix() { return method_call(get_localToWorldMatrix, ); } // 0xB914E0
        void Translate(Vector3 translation, struct Space* relativeTo) { return method_call(Translate, translation, relativeTo); } // 0xB90E90
        //void Translate(Vector3 translation) { return method_call(Translate, translation); } // 0xB90DF0
        //void Translate(float x, float y, float z) { return method_call(Translate, x, y, z); } // 0xB90E20
        void Rotate(Vector3 eulers, struct Space* relativeTo) { return method_call(Rotate, eulers, relativeTo); } // 0xB90530
        //void Rotate(Vector3 eulers) { return method_call(Rotate, eulers); } // 0xB90BC0
        //void Rotate(float xAngle, float yAngle, float zAngle) { return method_call(Rotate, xAngle, yAngle, zAngle); } // 0xB90BF0
        Vector3 TransformDirection(Vector3 direction) { return method_call(TransformDirection, direction); } // 0xB90D20
        Vector3 TransformPoint(Vector3 position) { return method_call(TransformPoint, position); } // 0xB90DA0
        Vector3 InverseTransformPoint(Vector3 position) { return method_call(InverseTransformPoint, position); } // 0xB904B0
        std::int32_t get_childCount() { return method_call(get_childCount, ); } // 0xB91020
        void SetAsFirstSibling() { return method_call(SetAsFirstSibling, ); } // 0xB90C60
        Vector3 get_lossyScale() { return method_call(get_lossyScale, ); } // 0xB91550
        bool IsChildOf(struct Transform* parent) { return method_call(IsChildOf, parent); } // 0xB90500
        // virtual // struct IEnumerator* GetEnumerator() { return method_call(GetEnumerator, ); } // 0xB90400 // Slot: 4
        struct Transform* GetChild(std::int32_t index) { return method_call(GetChild, index); } // 0xB903D0
        void get_position_Injected(Vector3 ret) { return method_call(get_position_Injected, ret); } // 0xB91590
        void set_position_Injected(Vector3 value) { return method_call(set_position_Injected, value); } // 0xB919E0
        void get_localPosition_Injected(Vector3 ret) { return method_call(get_localPosition_Injected, ret); } // 0xB91360
        void set_localPosition_Injected(Vector3 value) { return method_call(set_localPosition_Injected, value); } // 0xB91820
        void get_rotation_Injected(struct Quaternion* ret) { return method_call(get_rotation_Injected, ret); } // 0xB91600
        void set_rotation_Injected(struct Quaternion* value) { return method_call(set_rotation_Injected, value); } // 0xB91A40
        void get_localRotation_Injected(struct Quaternion* ret) { return method_call(get_localRotation_Injected, ret); } // 0xB913D0
        void set_localRotation_Injected(struct Quaternion* value) { return method_call(set_localRotation_Injected, value); } // 0xB91880
        void get_localScale_Injected(Vector3 ret) { return method_call(get_localScale_Injected, ret); } // 0xB91440
        void set_localScale_Injected(Vector3 value) { return method_call(set_localScale_Injected, value); } // 0xB918E0
        void get_worldToLocalMatrix_Injected(struct Matrix4x4* ret) { return method_call(get_worldToLocalMatrix_Injected, ret); } // 0xB91670
        void get_localToWorldMatrix_Injected(struct Matrix4x4* ret) { return method_call(get_localToWorldMatrix_Injected, ret); } // 0xB914B0
        void TransformDirection_Injected(Vector3 direction, Vector3 ret) { return method_call(TransformDirection_Injected, direction, ret); } // 0xB90CF0
        void TransformPoint_Injected(Vector3 position, Vector3 ret) { return method_call(TransformPoint_Injected, position, ret); } // 0xB90D70
        void InverseTransformPoint_Injected(Vector3 position, Vector3 ret) { return method_call(InverseTransformPoint_Injected, position, ret); } // 0xB90480
        void get_lossyScale_Injected(Vector3 ret) { return method_call(get_lossyScale_Injected, ret); } // 0xB91520
    };
}

namespace ark::method_info
{

    method_rva(Unity::Transform::_ctor, 0x38A130)
    method_rva(Unity::Transform::get_position, 0xB915C0)
	method_rva(Unity::Transform::set_position, 0xB91A10)
	method_rva(Unity::Transform::get_localPosition, 0xB91390)
	method_rva(Unity::Transform::set_localPosition, 0xB91850)
	method_rva(Unity::Transform::get_eulerAngles, 0xB91050)
	method_rva(Unity::Transform::set_eulerAngles, 0xB916E0)
	method_rva(Unity::Transform::get_localEulerAngles, 0xB912F0)
	method_rva(Unity::Transform::set_localEulerAngles, 0xB91780)
	method_rva(Unity::Transform::get_forward, 0xB910C0)
	method_rva(Unity::Transform::get_rotation, 0xB91630)
	method_rva(Unity::Transform::set_rotation, 0xB91A70)
	method_rva(Unity::Transform::get_localRotation, 0xB91400)
	method_rva(Unity::Transform::set_localRotation, 0xB918B0)
	method_rva(Unity::Transform::get_localScale, 0xB91470)
	method_rva(Unity::Transform::set_localScale, 0xB91910)
	method_rva(Unity::Transform::get_parent, 0xB90450)
	method_rva(Unity::Transform::set_parent, 0xB91940)
	method_rva(Unity::Transform::get_parentInternal, 0xB90450)
	method_rva(Unity::Transform::set_parentInternal, 0xB90CC0)
	method_rva(Unity::Transform::GetParent, 0xB90450)
	method_rva(Unity::Transform::SetParent, 0xB90CC0)
	//method_rva(Unity::Transform::SetParent, 0xB90C90)
	method_rva(Unity::Transform::get_worldToLocalMatrix, 0xB916A0)
	method_rva(Unity::Transform::get_localToWorldMatrix, 0xB914E0)
	method_rva(Unity::Transform::Translate, 0xB90E90)
	//method_rva(Unity::Transform::Translate, 0xB90DF0)
	//method_rva(Unity::Transform::Translate, 0xB90E20)
	method_rva(Unity::Transform::Rotate, 0xB90530)
	//method_rva(Unity::Transform::Rotate, 0xB90BC0)
	//method_rva(Unity::Transform::Rotate, 0xB90BF0)
	method_rva(Unity::Transform::TransformDirection, 0xB90D20)
	method_rva(Unity::Transform::TransformPoint, 0xB90DA0)
	method_rva(Unity::Transform::InverseTransformPoint, 0xB904B0)
	method_rva(Unity::Transform::get_childCount, 0xB91020)
	method_rva(Unity::Transform::SetAsFirstSibling, 0xB90C60)
	method_rva(Unity::Transform::get_lossyScale, 0xB91550)
	method_rva(Unity::Transform::IsChildOf, 0xB90500)
	// method_rva(Unity::Transform::GetEnumerator, 0xB90400)
	method_rva(Unity::Transform::GetChild, 0xB903D0)
	method_rva(Unity::Transform::get_position_Injected, 0xB91590)
	method_rva(Unity::Transform::set_position_Injected, 0xB919E0)
	method_rva(Unity::Transform::get_localPosition_Injected, 0xB91360)
	method_rva(Unity::Transform::set_localPosition_Injected, 0xB91820)
	method_rva(Unity::Transform::get_rotation_Injected, 0xB91600)
	method_rva(Unity::Transform::set_rotation_Injected, 0xB91A40)
	method_rva(Unity::Transform::get_localRotation_Injected, 0xB913D0)
	method_rva(Unity::Transform::set_localRotation_Injected, 0xB91880)
	method_rva(Unity::Transform::get_localScale_Injected, 0xB91440)
	method_rva(Unity::Transform::set_localScale_Injected, 0xB918E0)
	method_rva(Unity::Transform::get_worldToLocalMatrix_Injected, 0xB91670)
	method_rva(Unity::Transform::get_localToWorldMatrix_Injected, 0xB914B0)
	method_rva(Unity::Transform::TransformDirection_Injected, 0xB90CF0)
	method_rva(Unity::Transform::TransformPoint_Injected, 0xB90D70)
	method_rva(Unity::Transform::InverseTransformPoint_Injected, 0xB90480)
	method_rva(Unity::Transform::get_lossyScale_Injected, 0xB91520)
}