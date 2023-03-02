#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Component.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/PhysicsMaterial2D.hpp>
#include <au/UnityEngine/RigidbodyType2D.hpp>
#include <au/UnityEngine/RigidbodyConstraints2D.hpp>
#include <au/UnityEngine/RigidbodyInterpolation2D.hpp>
#include <au/UnityEngine/RigidbodySleepMode2D.hpp>
#include <au/UnityEngine/CollisionDetectionMode2D.hpp>
#include <au/UnityEngine/Collider2D.hpp>
#include <au/UnityEngine/ContactFilter2D.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/ContactFilter2D.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/ContactFilter2D.hpp>
#include <cs/array.hpp>
#include <au/System/Collections/Generic/List.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Vector2.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/Collider2D.hpp>
#include <au/UnityEngine/ContactFilter2D.hpp>

namespace UnityEngine
{
    struct Rigidbody2D : ark::meta<Rigidbody2D, UnityEngine::Component>
    {

        UnityEngine::Vector2 get_position() { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*)>(0x1ab0c50)(this); } // 0x1ab0c50
        void set_position(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab1200)(this, value); } // 0x1ab1200
        float get_rotation() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0c90)(this); } // 0x1ab0c90
        void set_rotation(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab1230)(this, value); } // 0x1ab1230
        void SetRotation(float angle) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab07d0)(this, angle); } // 0x1ab07d0
        void SetRotation_Angle(float angle) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab07d0)(this, angle); } // 0x1ab07d0
        void SetRotation(UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Quaternion)>(0x1ab0870)(this, rotation); } // 0x1ab0870
        void SetRotation_Quaternion(UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Quaternion)>(0x1ab0840)(this, rotation); } // 0x1ab0840
        void MovePosition(UnityEngine::Vector2 position) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab04d0)(this, position); } // 0x1ab04d0
        void MoveRotation(float angle) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab0500)(this, angle); } // 0x1ab0500
        void MoveRotation_Angle(float angle) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab0500)(this, angle); } // 0x1ab0500
        void MoveRotation(UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Quaternion)>(0x1ab05a0)(this, rotation); } // 0x1ab05a0
        void MoveRotation_Quaternion(UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Quaternion)>(0x1ab0570)(this, rotation); } // 0x1ab0570
        UnityEngine::Vector2 get_velocity() { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*)>(0x1ab0de0)(this); } // 0x1ab0de0
        void set_velocity(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab1390)(this, value); } // 0x1ab1390
        float get_angularVelocity() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0940)(this); } // 0x1ab0940
        void set_angularVelocity(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab0ed0)(this, value); } // 0x1ab0ed0
        bool get_useAutoMass() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0d50)(this); } // 0x1ab0d50
        void set_useAutoMass(bool value) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab1300)(this, value); } // 0x1ab1300
        float get_mass() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0bf0)(this); } // 0x1ab0bf0
        void set_mass(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab1190)(this, value); } // 0x1ab1190
        UnityEngine::PhysicsMaterial2D* get_sharedMaterial() { return il2cpp::call<UnityEngine::PhysicsMaterial2D*(*)(Rigidbody2D*)>(0x1ab0cc0)(this); } // 0x1ab0cc0
        void set_sharedMaterial(UnityEngine::PhysicsMaterial2D* value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::PhysicsMaterial2D*)>(0x1ab1270)(this, value); } // 0x1ab1270
        UnityEngine::Vector2 get_centerOfMass() { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*)>(0x1ab0a00)(this); } // 0x1ab0a00
        void set_centerOfMass(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0f70)(this, value); } // 0x1ab0f70
        UnityEngine::Vector2 get_worldCenterOfMass() { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*)>(0x1ab0e50)(this); } // 0x1ab0e50
        float get_inertia() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0b60)(this); } // 0x1ab0b60
        void set_inertia(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab10e0)(this, value); } // 0x1ab10e0
        float get_drag() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0aa0)(this); } // 0x1ab0aa0
        void set_drag(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab1000)(this, value); } // 0x1ab1000
        float get_angularDrag() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0910)(this); } // 0x1ab0910
        void set_angularDrag(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab0e90)(this, value); } // 0x1ab0e90
        float get_gravityScale() { return il2cpp::call<float(*)(Rigidbody2D*)>(0x1ab0b30)(this); } // 0x1ab0b30
        void set_gravityScale(float value) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1ab10a0)(this, value); } // 0x1ab10a0
        UnityEngine::RigidbodyType2D get_bodyType() { return il2cpp::call<UnityEngine::RigidbodyType2D(*)(Rigidbody2D*)>(0x1ab09a0)(this); } // 0x1ab09a0
        void set_bodyType(UnityEngine::RigidbodyType2D value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::RigidbodyType2D)>(0x1ab0f10)(this, value); } // 0x1ab0f10
        void SetDragBehaviour(bool dragged) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab07a0)(this, dragged); } // 0x1ab07a0
        bool get_useFullKinematicContacts() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0d80)(this); } // 0x1ab0d80
        void set_useFullKinematicContacts(bool value) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab1330)(this, value); } // 0x1ab1330
        bool get_isKinematic() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0bc0)(this); } // 0x1ab0bc0
        void set_isKinematic(bool value) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab1150)(this, value); } // 0x1ab1150
        bool get_fixedAngle() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0ad0)(this); } // 0x1ab0ad0
        void set_fixedAngle(bool value) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab1040)(this, value); } // 0x1ab1040
        bool get_freezeRotation() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0b00)(this); } // 0x1ab0b00
        void set_freezeRotation(bool value) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab1070)(this, value); } // 0x1ab1070
        UnityEngine::RigidbodyConstraints2D get_constraints() { return il2cpp::call<UnityEngine::RigidbodyConstraints2D(*)(Rigidbody2D*)>(0x1ab0a70)(this); } // 0x1ab0a70
        void set_constraints(UnityEngine::RigidbodyConstraints2D value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::RigidbodyConstraints2D)>(0x1ab0fd0)(this, value); } // 0x1ab0fd0
        bool IsSleeping() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0280)(this); } // 0x1ab0280
        bool IsAwake() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0250)(this); } // 0x1ab0250
        void Sleep() { return il2cpp::call<void(*)(Rigidbody2D*)>(0x1ab08b0)(this); } // 0x1ab08b0
        void WakeUp() { return il2cpp::call<void(*)(Rigidbody2D*)>(0x1ab08e0)(this); } // 0x1ab08e0
        bool get_simulated() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab0cf0)(this); } // 0x1ab0cf0
        void set_simulated(bool value) { return il2cpp::call<void(*)(Rigidbody2D*, bool)>(0x1ab12a0)(this, value); } // 0x1ab12a0
        UnityEngine::RigidbodyInterpolation2D get_interpolation() { return il2cpp::call<UnityEngine::RigidbodyInterpolation2D(*)(Rigidbody2D*)>(0x1ab0b90)(this); } // 0x1ab0b90
        void set_interpolation(UnityEngine::RigidbodyInterpolation2D value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::RigidbodyInterpolation2D)>(0x1ab1120)(this, value); } // 0x1ab1120
        UnityEngine::RigidbodySleepMode2D get_sleepMode() { return il2cpp::call<UnityEngine::RigidbodySleepMode2D(*)(Rigidbody2D*)>(0x1ab0d20)(this); } // 0x1ab0d20
        void set_sleepMode(UnityEngine::RigidbodySleepMode2D value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::RigidbodySleepMode2D)>(0x1ab12d0)(this, value); } // 0x1ab12d0
        UnityEngine::CollisionDetectionMode2D get_collisionDetectionMode() { return il2cpp::call<UnityEngine::CollisionDetectionMode2D(*)(Rigidbody2D*)>(0x1ab0a40)(this); } // 0x1ab0a40
        void set_collisionDetectionMode(UnityEngine::CollisionDetectionMode2D value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::CollisionDetectionMode2D)>(0x1ab0fa0)(this, value); } // 0x1ab0fa0
        int32_t get_attachedColliderCount() { return il2cpp::call<int32_t(*)(Rigidbody2D*)>(0x1ab0970)(this); } // 0x1ab0970
        bool IsTouching(UnityEngine::Collider2D* collider) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::Collider2D*)>(0x1ab03d0)(this, collider); } // 0x1ab03d0
        bool IsTouching(UnityEngine::Collider2D* collider, UnityEngine::ContactFilter2D contactFilter) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::Collider2D*, UnityEngine::ContactFilter2D)>(0x1ab0400)(this, collider, contactFilter); } // 0x1ab0400
        bool IsTouching_OtherColliderWithFilter_Internal(UnityEngine::Collider2D* collider, UnityEngine::ContactFilter2D contactFilter) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::Collider2D*, UnityEngine::ContactFilter2D)>(0x1ab03a0)(this, collider, contactFilter); } // 0x1ab03a0
        bool IsTouching(UnityEngine::ContactFilter2D contactFilter) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::ContactFilter2D)>(0x1ab0450)(this, contactFilter); } // 0x1ab0450
        bool IsTouching_AnyColliderWithFilter_Internal(UnityEngine::ContactFilter2D contactFilter) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::ContactFilter2D)>(0x1ab0340)(this, contactFilter); } // 0x1ab0340
        bool IsTouchingLayers() { return il2cpp::call<bool(*)(Rigidbody2D*)>(0x1ab02b0)(this); } // 0x1ab02b0
        bool IsTouchingLayers(int32_t layerMask) { return il2cpp::call<bool(*)(Rigidbody2D*, int32_t)>(0x1ab02e0)(this, layerMask); } // 0x1ab02e0
        bool OverlapPoint(UnityEngine::Vector2 point) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0770)(this, point); } // 0x1ab0770
        UnityEngine::ColliderDistance2D Distance(UnityEngine::Collider2D* collider) { return il2cpp::call<UnityEngine::ColliderDistance2D(*)(Rigidbody2D*, UnityEngine::Collider2D*)>(0x1aaf8d0)(this, collider); } // 0x1aaf8d0
        UnityEngine::ColliderDistance2D Distance_Internal(UnityEngine::Collider2D* collider) { return il2cpp::call<UnityEngine::ColliderDistance2D(*)(Rigidbody2D*, UnityEngine::Collider2D*)>(0x1aaf890)(this, collider); } // 0x1aaf890
        UnityEngine::Vector2 ClosestPoint(UnityEngine::Vector2 position) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1aaf6d0)(this, position); } // 0x1aaf6d0
        void AddForce(UnityEngine::Vector2 force) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1aaf130)(this, force); } // 0x1aaf130
        void AddForce(UnityEngine::Vector2 force, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ForceMode2D)>(0x1aaf100)(this, force, mode); } // 0x1aaf100
        void AddRelativeForce(UnityEngine::Vector2 relativeForce) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1aaf1d0)(this, relativeForce); } // 0x1aaf1d0
        void AddRelativeForce(UnityEngine::Vector2 relativeForce, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ForceMode2D)>(0x1aaf1a0)(this, relativeForce, mode); } // 0x1aaf1a0
        void AddForceAtPosition(UnityEngine::Vector2 force, UnityEngine::Vector2 position) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1aaf080)(this, force, position); } // 0x1aaf080
        void AddForceAtPosition(UnityEngine::Vector2 force, UnityEngine::Vector2 position, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::ForceMode2D)>(0x1aaf040)(this, force, position, mode); } // 0x1aaf040
        void AddTorque(float torque) { return il2cpp::call<void(*)(Rigidbody2D*, float)>(0x1aaf210)(this, torque); } // 0x1aaf210
        void AddTorque(float torque, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, float, UnityEngine::ForceMode2D)>(0x1aaf250)(this, torque, mode); } // 0x1aaf250
        UnityEngine::Vector2 GetPoint(UnityEngine::Vector2 point) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0000)(this, point); } // 0x1ab0000
        UnityEngine::Vector2 GetRelativePoint(UnityEngine::Vector2 relativePoint) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0100)(this, relativePoint); } // 0x1ab0100
        UnityEngine::Vector2 GetVector(UnityEngine::Vector2 vector) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0200)(this, vector); } // 0x1ab0200
        UnityEngine::Vector2 GetRelativeVector(UnityEngine::Vector2 relativeVector) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0180)(this, relativeVector); } // 0x1ab0180
        UnityEngine::Vector2 GetPointVelocity(UnityEngine::Vector2 point) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1aaff80)(this, point); } // 0x1aaff80
        UnityEngine::Vector2 GetRelativePointVelocity(UnityEngine::Vector2 relativePoint) { return il2cpp::call<UnityEngine::Vector2(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0080)(this, relativePoint); } // 0x1ab0080
        int32_t OverlapCollider(UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, cs::array<UnityEngine::Collider2D>*)>(0x1ab06f0)(this, contactFilter, results); } // 0x1ab06f0
        int32_t OverlapColliderArray_Internal(UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, cs::array<UnityEngine::Collider2D>*)>(0x1ab0610)(this, contactFilter, results); } // 0x1ab0610
        int32_t OverlapCollider(UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1ab06a0)(this, contactFilter, results); } // 0x1ab06a0
        int32_t OverlapColliderList_Internal(UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1ab0670)(this, contactFilter, results); } // 0x1ab0670
        int32_t GetContacts(cs::array<UnityEngine::ContactPoint2D>* contacts) { return il2cpp::call<int32_t(*)(Rigidbody2D*, cs::array<UnityEngine::ContactPoint2D>*)>(0x1aafd10)(this, contacts); } // 0x1aafd10
        int32_t GetContacts(System::Collections::Generic::List<UnityEngine::ContactPoint2D>* contacts) { return il2cpp::call<int32_t(*)(Rigidbody2D*, System::Collections::Generic::List<UnityEngine::ContactPoint2D>*)>(0x1aafea0)(this, contacts); } // 0x1aafea0
        int32_t GetContacts(UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::ContactPoint2D>* contacts) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, cs::array<UnityEngine::ContactPoint2D>*)>(0x1aafbf0)(this, contactFilter, contacts); } // 0x1aafbf0
        int32_t GetContacts(UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::ContactPoint2D>* contacts) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::ContactPoint2D>*)>(0x1aafdc0)(this, contactFilter, contacts); } // 0x1aafdc0
        int32_t GetContacts(cs::array<UnityEngine::Collider2D>* colliders) { return il2cpp::call<int32_t(*)(Rigidbody2D*, cs::array<UnityEngine::Collider2D>*)>(0x1aafc60)(this, colliders); } // 0x1aafc60
        int32_t GetContacts(System::Collections::Generic::List<UnityEngine::Collider2D>* colliders) { return il2cpp::call<int32_t(*)(Rigidbody2D*, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1aafad0)(this, colliders); } // 0x1aafad0
        int32_t GetContacts(UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::Collider2D>* colliders) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, cs::array<UnityEngine::Collider2D>*)>(0x1aafe30)(this, contactFilter, colliders); } // 0x1aafe30
        int32_t GetContacts(UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::Collider2D>* colliders) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1aafb80)(this, contactFilter, colliders); } // 0x1aafb80
        int32_t GetAttachedColliders(cs::array<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, cs::array<UnityEngine::Collider2D>*)>(0x1aafa70)(this, results); } // 0x1aafa70
        int32_t GetAttachedCollidersArray_Internal(cs::array<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, cs::array<UnityEngine::Collider2D>*)>(0x1aafa70)(this, results); } // 0x1aafa70
        int32_t GetAttachedColliders(System::Collections::Generic::List<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1aafaa0)(this, results); } // 0x1aafaa0
        int32_t GetAttachedCollidersList_Internal(System::Collections::Generic::List<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1aafaa0)(this, results); } // 0x1aafaa0
        int32_t Cast(UnityEngine::Vector2 direction, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aaf550)(this, direction, results); } // 0x1aaf550
        int32_t Cast(UnityEngine::Vector2 direction, cs::array<UnityEngine::RaycastHit2D>* results, float distance) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, cs::array<UnityEngine::RaycastHit2D>*, float)>(0x1aaf5a0)(this, direction, results, distance); } // 0x1aaf5a0
        int32_t CastArray_Internal(UnityEngine::Vector2 direction, float distance, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aaf2d0)(this, direction, distance, results); } // 0x1aaf2d0
        int32_t Cast(UnityEngine::Vector2 direction, System::Collections::Generic::List<UnityEngine::RaycastHit2D>* results, float distance) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, System::Collections::Generic::List<UnityEngine::RaycastHit2D>*, float)>(0x1aaf490)(this, direction, results, distance); } // 0x1aaf490
        int32_t CastList_Internal(UnityEngine::Vector2 direction, float distance, System::Collections::Generic::List<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, System::Collections::Generic::List<UnityEngine::RaycastHit2D>*)>(0x1aaf450)(this, direction, distance, results); } // 0x1aaf450
        int32_t Cast(UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ContactFilter2D, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aaf5f0)(this, direction, contactFilter, results); } // 0x1aaf5f0
        int32_t Cast(UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::RaycastHit2D>* results, float distance) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ContactFilter2D, cs::array<UnityEngine::RaycastHit2D>*, float)>(0x1aaf4e0)(this, direction, contactFilter, results, distance); } // 0x1aaf4e0
        int32_t CastFilteredArray_Internal(UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aaf350)(this, direction, distance, contactFilter, results); } // 0x1aaf350
        int32_t Cast(UnityEngine::Vector2 direction, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::RaycastHit2D>* results, float distance) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::RaycastHit2D>*, float)>(0x1aaf660)(this, direction, contactFilter, results, distance); } // 0x1aaf660
        int32_t CastFilteredList_Internal(UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::RaycastHit2D>*)>(0x1aaf3d0)(this, direction, distance, contactFilter, results); } // 0x1aaf3d0
        void ctor() { return il2cpp::call<void(*)(Rigidbody2D*)>(0xee3f90)(this); } // 0xee3f90
        void get_position_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0c20)(this, ret); } // 0x1ab0c20
        void set_position_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab11d0)(this, value); } // 0x1ab11d0
        void SetRotation_Quaternion_Injected(UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Quaternion)>(0x1ab0810)(this, rotation); } // 0x1ab0810
        void MovePosition_Injected(UnityEngine::Vector2 position) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab04a0)(this, position); } // 0x1ab04a0
        void MoveRotation_Quaternion_Injected(UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Quaternion)>(0x1ab0540)(this, rotation); } // 0x1ab0540
        void get_velocity_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0db0)(this, ret); } // 0x1ab0db0
        void set_velocity_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab1360)(this, value); } // 0x1ab1360
        void get_centerOfMass_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab09d0)(this, ret); } // 0x1ab09d0
        void set_centerOfMass_Injected(UnityEngine::Vector2 value) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0f40)(this, value); } // 0x1ab0f40
        void get_worldCenterOfMass_Injected(UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0e20)(this, ret); } // 0x1ab0e20
        bool IsTouching_OtherColliderWithFilter_Internal_Injected(UnityEngine::Collider2D* collider, UnityEngine::ContactFilter2D contactFilter) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::Collider2D*, UnityEngine::ContactFilter2D)>(0x1ab0370)(this, collider, contactFilter); } // 0x1ab0370
        bool IsTouching_AnyColliderWithFilter_Internal_Injected(UnityEngine::ContactFilter2D contactFilter) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::ContactFilter2D)>(0x1ab0310)(this, contactFilter); } // 0x1ab0310
        bool OverlapPoint_Injected(UnityEngine::Vector2 point) { return il2cpp::call<bool(*)(Rigidbody2D*, UnityEngine::Vector2)>(0x1ab0740)(this, point); } // 0x1ab0740
        void Distance_Internal_Injected(UnityEngine::Collider2D* collider, UnityEngine::ColliderDistance2D ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Collider2D*, UnityEngine::ColliderDistance2D)>(0x1aaf860)(this, collider, ret); } // 0x1aaf860
        void AddForce_Injected(UnityEngine::Vector2 force, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ForceMode2D)>(0x1aaf0d0)(this, force, mode); } // 0x1aaf0d0
        void AddRelativeForce_Injected(UnityEngine::Vector2 relativeForce, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::ForceMode2D)>(0x1aaf170)(this, relativeForce, mode); } // 0x1aaf170
        void AddForceAtPosition_Injected(UnityEngine::Vector2 force, UnityEngine::Vector2 position, UnityEngine::ForceMode2D mode) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::ForceMode2D)>(0x1aaf000)(this, force, position, mode); } // 0x1aaf000
        void GetPoint_Injected(UnityEngine::Vector2 point, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1aaffd0)(this, point, ret); } // 0x1aaffd0
        void GetRelativePoint_Injected(UnityEngine::Vector2 relativePoint, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1ab00d0)(this, relativePoint, ret); } // 0x1ab00d0
        void GetVector_Injected(UnityEngine::Vector2 vector, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1ab01d0)(this, vector, ret); } // 0x1ab01d0
        void GetRelativeVector_Injected(UnityEngine::Vector2 relativeVector, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1ab0150)(this, relativeVector, ret); } // 0x1ab0150
        void GetPointVelocity_Injected(UnityEngine::Vector2 point, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1aaff50)(this, point, ret); } // 0x1aaff50
        void GetRelativePointVelocity_Injected(UnityEngine::Vector2 relativePoint, UnityEngine::Vector2 ret) { return il2cpp::call<void(*)(Rigidbody2D*, UnityEngine::Vector2, UnityEngine::Vector2)>(0x1ab0050)(this, relativePoint, ret); } // 0x1ab0050
        int32_t OverlapColliderArray_Internal_Injected(UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, cs::array<UnityEngine::Collider2D>*)>(0x1ab05e0)(this, contactFilter, results); } // 0x1ab05e0
        int32_t OverlapColliderList_Internal_Injected(UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::Collider2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::Collider2D>*)>(0x1ab0640)(this, contactFilter, results); } // 0x1ab0640
        int32_t CastArray_Internal_Injected(UnityEngine::Vector2 direction, float distance, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aaf290)(this, direction, distance, results); } // 0x1aaf290
        int32_t CastList_Internal_Injected(UnityEngine::Vector2 direction, float distance, System::Collections::Generic::List<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, System::Collections::Generic::List<UnityEngine::RaycastHit2D>*)>(0x1aaf410)(this, direction, distance, results); } // 0x1aaf410
        int32_t CastFilteredArray_Internal_Injected(UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, cs::array<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, cs::array<UnityEngine::RaycastHit2D>*)>(0x1aaf310)(this, direction, distance, contactFilter, results); } // 0x1aaf310
        int32_t CastFilteredList_Internal_Injected(UnityEngine::Vector2 direction, float distance, UnityEngine::ContactFilter2D contactFilter, System::Collections::Generic::List<UnityEngine::RaycastHit2D>* results) { return il2cpp::call<int32_t(*)(Rigidbody2D*, UnityEngine::Vector2, float, UnityEngine::ContactFilter2D, System::Collections::Generic::List<UnityEngine::RaycastHit2D>*)>(0x1aaf390)(this, direction, distance, contactFilter, results); } // 0x1aaf390

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Rigidbody2D> {
        };

}

