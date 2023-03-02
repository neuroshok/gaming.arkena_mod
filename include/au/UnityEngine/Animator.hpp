#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Behaviour.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/AnimatorUpdateMode.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/AvatarIKGoal.hpp>
#include <au/UnityEngine/AvatarIKHint.hpp>
#include <au/UnityEngine/HumanBodyBones.hpp>
#include <au/System/Type.hpp>
#include <cs/array.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/AvatarTarget.hpp>
#include <au/UnityEngine/Transform.hpp>
#include <au/UnityEngine/AnimatorCullingMode.hpp>
#include <au/UnityEngine/RuntimeAnimatorController.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Avatar.hpp>
#include <au/UnityEngine/Playables/PlayableGraph.hpp>
#include <cs/string.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Quaternion.hpp>
#include <au/UnityEngine/AvatarIKGoal.hpp>
#include <au/UnityEngine/AvatarIKHint.hpp>
#include <au/UnityEngine/Vector3.hpp>

namespace UnityEngine
{
    struct Animator : ark::meta<Animator, UnityEngine::Behaviour>
    {

        bool get_isOptimizable() { return il2cpp::call<bool(*)(Animator*)>(0x1a9ab90)(this); } // 0x1a9ab90
        bool get_isHuman() { return il2cpp::call<bool(*)(Animator*)>(0x1a9ab00)(this); } // 0x1a9ab00
        bool get_hasRootMotion() { return il2cpp::call<bool(*)(Animator*)>(0x1a9aa70)(this); } // 0x1a9aa70
        bool get_isRootPositionOrRotationControlledByCurves() { return il2cpp::call<bool(*)(Animator*)>(0x1a9abc0)(this); } // 0x1a9abc0
        float get_humanScale() { return il2cpp::call<float(*)(Animator*)>(0x1a9aad0)(this); } // 0x1a9aad0
        bool get_isInitialized() { return il2cpp::call<bool(*)(Animator*)>(0x1a9ab30)(this); } // 0x1a9ab30
        float GetFloat(cs::string* name) { return il2cpp::call<float(*)(Animator*, cs::string*)>(0x1a98730)(this, name); } // 0x1a98730
        float GetFloat(int32_t id) { return il2cpp::call<float(*)(Animator*, int32_t)>(0x1a98700)(this, id); } // 0x1a98700
        void SetFloat(cs::string* name, float value) { return il2cpp::call<void(*)(Animator*, cs::string*, float)>(0x1a99b40)(this, name, value); } // 0x1a99b40
        void SetFloat(cs::string* name, float value, float dampTime, float deltaTime) { return il2cpp::call<void(*)(Animator*, cs::string*, float, float, float)>(0x1a99af0)(this, name, value, dampTime, deltaTime); } // 0x1a99af0
        void SetFloat(int32_t id, float value) { return il2cpp::call<void(*)(Animator*, int32_t, float)>(0x1a99ab0)(this, id, value); } // 0x1a99ab0
        void SetFloat(int32_t id, float value, float dampTime, float deltaTime) { return il2cpp::call<void(*)(Animator*, int32_t, float, float, float)>(0x1a99a60)(this, id, value, dampTime, deltaTime); } // 0x1a99a60
        bool GetBool(cs::string* name) { return il2cpp::call<bool(*)(Animator*, cs::string*)>(0x1a98510)(this, name); } // 0x1a98510
        bool GetBool(int32_t id) { return il2cpp::call<bool(*)(Animator*, int32_t)>(0x1a984e0)(this, id); } // 0x1a984e0
        void SetBool(cs::string* name, bool value) { return il2cpp::call<void(*)(Animator*, cs::string*, bool)>(0x1a99a30)(this, name, value); } // 0x1a99a30
        void SetBool(int32_t id, bool value) { return il2cpp::call<void(*)(Animator*, int32_t, bool)>(0x1a99a00)(this, id, value); } // 0x1a99a00
        int32_t GetInteger(cs::string* name) { return il2cpp::call<int32_t(*)(Animator*, cs::string*)>(0x1a98bb0)(this, name); } // 0x1a98bb0
        int32_t GetInteger(int32_t id) { return il2cpp::call<int32_t(*)(Animator*, int32_t)>(0x1a98b80)(this, id); } // 0x1a98b80
        void SetInteger(cs::string* name, int32_t value) { return il2cpp::call<void(*)(Animator*, cs::string*, int32_t)>(0x1a99f90)(this, name, value); } // 0x1a99f90
        void SetInteger(int32_t id, int32_t value) { return il2cpp::call<void(*)(Animator*, int32_t, int32_t)>(0x1a99f60)(this, id, value); } // 0x1a99f60
        void SetTrigger(cs::string* name) { return il2cpp::call<void(*)(Animator*, cs::string*)>(0x1a9a3c0)(this, name); } // 0x1a9a3c0
        void SetTrigger(int32_t id) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a9a390)(this, id); } // 0x1a9a390
        void ResetTrigger(cs::string* name) { return il2cpp::call<void(*)(Animator*, cs::string*)>(0x1a998d0)(this, name); } // 0x1a998d0
        void ResetTrigger(int32_t id) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a998a0)(this, id); } // 0x1a998a0
        bool IsParameterControlledByCurve(cs::string* name) { return il2cpp::call<bool(*)(Animator*, cs::string*)>(0x1a991c0)(this, name); } // 0x1a991c0
        bool IsParameterControlledByCurve(int32_t id) { return il2cpp::call<bool(*)(Animator*, int32_t)>(0x1a99190)(this, id); } // 0x1a99190
        UnityEngine::Vector3 get_deltaPosition() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9a900)(this); } // 0x1a9a900
        UnityEngine::Quaternion get_deltaRotation() { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*)>(0x1a9a970)(this); } // 0x1a9a970
        UnityEngine::Vector3 get_velocity() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9b1d0)(this); } // 0x1a9b1d0
        UnityEngine::Vector3 get_angularVelocity() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9a5e0)(this); } // 0x1a9a5e0
        UnityEngine::Vector3 get_rootPosition() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9af10)(this); } // 0x1a9af10
        void set_rootPosition(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b610)(this, value); } // 0x1a9b610
        UnityEngine::Quaternion get_rootRotation() { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*)>(0x1a9af80)(this); } // 0x1a9af80
        void set_rootRotation(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9b670)(this, value); } // 0x1a9b670
        bool get_applyRootMotion() { return il2cpp::call<bool(*)(Animator*)>(0x1a9a650)(this); } // 0x1a9a650
        void set_applyRootMotion(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b280)(this, value); } // 0x1a9b280
        bool get_linearVelocityBlending() { return il2cpp::call<bool(*)(Animator*)>(0x1a9acb0)(this); } // 0x1a9acb0
        void set_linearVelocityBlending(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b540)(this, value); } // 0x1a9b540
        bool get_animatePhysics() { return il2cpp::call<bool(*)(Animator*)>(0x1a9a620)(this); } // 0x1a9a620
        void set_animatePhysics(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b240)(this, value); } // 0x1a9b240
        UnityEngine::AnimatorUpdateMode get_updateMode() { return il2cpp::call<UnityEngine::AnimatorUpdateMode(*)(Animator*)>(0x1a9b170)(this); } // 0x1a9b170
        void set_updateMode(UnityEngine::AnimatorUpdateMode value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AnimatorUpdateMode)>(0x1a9b740)(this, value); } // 0x1a9b740
        bool get_hasTransformHierarchy() { return il2cpp::call<bool(*)(Animator*)>(0x1a9aaa0)(this); } // 0x1a9aaa0
        bool get_allowConstantClipSamplingOptimization() { return il2cpp::call<bool(*)(Animator*)>(0x1a9a580)(this); } // 0x1a9a580
        void set_allowConstantClipSamplingOptimization(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b210)(this, value); } // 0x1a9b210
        float get_gravityWeight() { return il2cpp::call<float(*)(Animator*)>(0x1a9aa10)(this); } // 0x1a9aa10
        UnityEngine::Vector3 get_bodyPosition() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9a750)(this); } // 0x1a9a750
        void set_bodyPosition(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b340)(this, value); } // 0x1a9b340
        UnityEngine::Vector3 get_bodyPositionInternal() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9a710)(this); } // 0x1a9a710
        void set_bodyPositionInternal(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b310)(this, value); } // 0x1a9b310
        UnityEngine::Quaternion get_bodyRotation() { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*)>(0x1a9a840)(this); } // 0x1a9a840
        void set_bodyRotation(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9b3f0)(this, value); } // 0x1a9b3f0
        UnityEngine::Quaternion get_bodyRotationInternal() { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*)>(0x1a9a800)(this); } // 0x1a9a800
        void set_bodyRotationInternal(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9b3c0)(this, value); } // 0x1a9b3c0
        UnityEngine::Vector3 GetIKPosition(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<UnityEngine::Vector3(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98a60)(this, goal); } // 0x1a98a60
        UnityEngine::Vector3 GetGoalPosition(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<UnityEngine::Vector3(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98790)(this, goal); } // 0x1a98790
        void SetIKPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 goalPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Vector3)>(0x1a99e60)(this, goal, goalPosition); } // 0x1a99e60
        void SetGoalPosition(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 goalPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Vector3)>(0x1a99bb0)(this, goal, goalPosition); } // 0x1a99bb0
        UnityEngine::Quaternion GetIKRotation(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98b20)(this, goal); } // 0x1a98b20
        UnityEngine::Quaternion GetGoalRotation(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98810)(this, goal); } // 0x1a98810
        void SetIKRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion goalRotation) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Quaternion)>(0x1a99f10)(this, goal, goalRotation); } // 0x1a99f10
        void SetGoalRotation(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion goalRotation) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Quaternion)>(0x1a99c10)(this, goal, goalRotation); } // 0x1a99c10
        float GetIKPositionWeight(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<float(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98a20)(this, goal); } // 0x1a98a20
        float GetGoalWeightPosition(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<float(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98850)(this, goal); } // 0x1a98850
        void SetIKPositionWeight(UnityEngine::AvatarIKGoal goal, float value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, float)>(0x1a99e10)(this, goal, value); } // 0x1a99e10
        void SetGoalWeightPosition(UnityEngine::AvatarIKGoal goal, float value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, float)>(0x1a99c40)(this, goal, value); } // 0x1a99c40
        float GetIKRotationWeight(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<float(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98ae0)(this, goal); } // 0x1a98ae0
        float GetGoalWeightRotation(UnityEngine::AvatarIKGoal goal) { return il2cpp::call<float(*)(Animator*, UnityEngine::AvatarIKGoal)>(0x1a98880)(this, goal); } // 0x1a98880
        void SetIKRotationWeight(UnityEngine::AvatarIKGoal goal, float value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, float)>(0x1a99ec0)(this, goal, value); } // 0x1a99ec0
        void SetGoalWeightRotation(UnityEngine::AvatarIKGoal goal, float value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, float)>(0x1a99c80)(this, goal, value); } // 0x1a99c80
        UnityEngine::Vector3 GetIKHintPosition(UnityEngine::AvatarIKHint hint) { return il2cpp::call<UnityEngine::Vector3(*)(Animator*, UnityEngine::AvatarIKHint)>(0x1a989a0)(this, hint); } // 0x1a989a0
        UnityEngine::Vector3 GetHintPosition(UnityEngine::AvatarIKHint hint) { return il2cpp::call<UnityEngine::Vector3(*)(Animator*, UnityEngine::AvatarIKHint)>(0x1a988e0)(this, hint); } // 0x1a988e0
        void SetIKHintPosition(UnityEngine::AvatarIKHint hint, UnityEngine::Vector3 hintPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKHint, UnityEngine::Vector3)>(0x1a99db0)(this, hint, hintPosition); } // 0x1a99db0
        void SetHintPosition(UnityEngine::AvatarIKHint hint, UnityEngine::Vector3 hintPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKHint, UnityEngine::Vector3)>(0x1a99cf0)(this, hint, hintPosition); } // 0x1a99cf0
        float GetIKHintPositionWeight(UnityEngine::AvatarIKHint hint) { return il2cpp::call<float(*)(Animator*, UnityEngine::AvatarIKHint)>(0x1a98960)(this, hint); } // 0x1a98960
        float GetHintWeightPosition(UnityEngine::AvatarIKHint hint) { return il2cpp::call<float(*)(Animator*, UnityEngine::AvatarIKHint)>(0x1a98930)(this, hint); } // 0x1a98930
        void SetIKHintPositionWeight(UnityEngine::AvatarIKHint hint, float value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKHint, float)>(0x1a99d60)(this, hint, value); } // 0x1a99d60
        void SetHintWeightPosition(UnityEngine::AvatarIKHint hint, float value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKHint, float)>(0x1a99d20)(this, hint, value); } // 0x1a99d20
        void SetLookAtPosition(UnityEngine::Vector3 lookAtPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9a060)(this, lookAtPosition); } // 0x1a9a060
        void SetLookAtPositionInternal(UnityEngine::Vector3 lookAtPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9a030)(this, lookAtPosition); } // 0x1a9a030
        void SetLookAtWeight(float weight) { return il2cpp::call<void(*)(Animator*, float)>(0x1a9a120)(this, weight); } // 0x1a9a120
        void SetLookAtWeight(float weight, float bodyWeight) { return il2cpp::call<void(*)(Animator*, float, float)>(0x1a9a2e0)(this, weight, bodyWeight); } // 0x1a9a2e0
        void SetLookAtWeight(float weight, float bodyWeight, float headWeight) { return il2cpp::call<void(*)(Animator*, float, float, float)>(0x1a9a200)(this, weight, bodyWeight, headWeight); } // 0x1a9a200
        void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight) { return il2cpp::call<void(*)(Animator*, float, float, float, float)>(0x1a9a270)(this, weight, bodyWeight, headWeight, eyesWeight); } // 0x1a9a270
        void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight) { return il2cpp::call<void(*)(Animator*, float, float, float, float, float)>(0x1a9a190)(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight); } // 0x1a9a190
        void SetLookAtWeightInternal(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight) { return il2cpp::call<void(*)(Animator*, float, float, float, float, float)>(0x1a9a0b0)(this, weight, bodyWeight, headWeight, eyesWeight, clampWeight); } // 0x1a9a0b0
        void SetBoneLocalRotation(UnityEngine::HumanBodyBones humanBoneId, UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Animator*, UnityEngine::HumanBodyBones, UnityEngine::Quaternion)>(0x1a99990)(this, humanBoneId, rotation); } // 0x1a99990
        void SetBoneLocalRotationInternal(int32_t humanBoneId, UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Animator*, int32_t, UnityEngine::Quaternion)>(0x1a99960)(this, humanBoneId, rotation); } // 0x1a99960
        UnityEngine::ScriptableObject* GetBehaviour(System::Type* type) { return il2cpp::call<UnityEngine::ScriptableObject*(*)(Animator*, System::Type*)>(0x1a982f0)(this, type); } // 0x1a982f0
        Typeid_30 GetBehaviour() { return il2cpp::call<Typeid_30(*)(Animator*)>(0xa4ae0000)(this); } // 0xa4ae0000
        cs::array<Typeid_30>* ConvertStateMachineBehaviour(cs::array<UnityEngine::ScriptableObject>* rawObjects) { return il2cpp::call<cs::array<Typeid_30>*(*)(Animator*, cs::array<UnityEngine::ScriptableObject>*)>(0xa4ae0000)(this, rawObjects); } // 0xa4ae0000
        cs::array<Typeid_30>* GetBehaviours() { return il2cpp::call<cs::array<Typeid_30>*(*)(Animator*)>(0xa4ae0000)(this); } // 0xa4ae0000
        cs::array<UnityEngine::ScriptableObject>* InternalGetBehaviours(System::Type* type) { return il2cpp::call<cs::array<UnityEngine::ScriptableObject>*(*)(Animator*, System::Type*)>(0x1a99070)(this, type); } // 0x1a99070
        cs::array<UnityEngine::StateMachineBehaviour>* GetBehaviours(int32_t fullPathHash, int32_t layerIndex) { return il2cpp::call<cs::array<UnityEngine::StateMachineBehaviour>*(*)(Animator*, int32_t, int32_t)>(0x1a98320)(this, fullPathHash, layerIndex); } // 0x1a98320
        cs::array<UnityEngine::ScriptableObject>* InternalGetBehavioursByKey(int32_t fullPathHash, int32_t layerIndex, System::Type* type) { return il2cpp::call<cs::array<UnityEngine::ScriptableObject>*(*)(Animator*, int32_t, int32_t, System::Type*)>(0x1a99030)(this, fullPathHash, layerIndex, type); } // 0x1a99030
        bool get_stabilizeFeet() { return il2cpp::call<bool(*)(Animator*)>(0x1a9b030)(this); } // 0x1a9b030
        void set_stabilizeFeet(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b710)(this, value); } // 0x1a9b710
        int32_t get_layerCount() { return il2cpp::call<int32_t(*)(Animator*)>(0x1a9ac20)(this); } // 0x1a9ac20
        cs::string* GetLayerName(int32_t layerIndex) { return il2cpp::call<cs::string*(*)(Animator*, int32_t)>(0x1a98c10)(this, layerIndex); } // 0x1a98c10
        int32_t GetLayerIndex(cs::string* layerName) { return il2cpp::call<int32_t(*)(Animator*, cs::string*)>(0x1a98be0)(this, layerName); } // 0x1a98be0
        float GetLayerWeight(int32_t layerIndex) { return il2cpp::call<float(*)(Animator*, int32_t)>(0x1a98c40)(this, layerIndex); } // 0x1a98c40
        void SetLayerWeight(int32_t layerIndex, float weight) { return il2cpp::call<void(*)(Animator*, int32_t, float)>(0x1a99fc0)(this, layerIndex, weight); } // 0x1a99fc0
        void GetAnimatorStateInfo(int32_t layerIndex, UnityEngine::StateInfoIndex stateInfoIndex, UnityEngine::AnimatorStateInfo info) { return il2cpp::call<void(*)(Animator*, int32_t, UnityEngine::StateInfoIndex, UnityEngine::AnimatorStateInfo)>(0x1a981f0)(this, layerIndex, stateInfoIndex, info); } // 0x1a981f0
        UnityEngine::AnimatorStateInfo GetCurrentAnimatorStateInfo(int32_t layerIndex) { return il2cpp::call<UnityEngine::AnimatorStateInfo(*)(Animator*, int32_t)>(0x1a98620)(this, layerIndex); } // 0x1a98620
        UnityEngine::AnimatorStateInfo GetNextAnimatorStateInfo(int32_t layerIndex) { return il2cpp::call<UnityEngine::AnimatorStateInfo(*)(Animator*, int32_t)>(0x1a98d50)(this, layerIndex); } // 0x1a98d50
        void GetAnimatorTransitionInfo(int32_t layerIndex, UnityEngine::AnimatorTransitionInfo info) { return il2cpp::call<void(*)(Animator*, int32_t, UnityEngine::AnimatorTransitionInfo)>(0x1a982c0)(this, layerIndex, info); } // 0x1a982c0
        UnityEngine::AnimatorTransitionInfo GetAnimatorTransitionInfo(int32_t layerIndex) { return il2cpp::call<UnityEngine::AnimatorTransitionInfo(*)(Animator*, int32_t)>(0x1a98260)(this, layerIndex); } // 0x1a98260
        int32_t GetAnimatorClipInfoCount(int32_t layerIndex, bool current) { return il2cpp::call<int32_t(*)(Animator*, int32_t, bool)>(0x1a98180)(this, layerIndex, current); } // 0x1a98180
        int32_t GetCurrentAnimatorClipInfoCount(int32_t layerIndex) { return il2cpp::call<int32_t(*)(Animator*, int32_t)>(0x1a98540)(this, layerIndex); } // 0x1a98540
        int32_t GetNextAnimatorClipInfoCount(int32_t layerIndex) { return il2cpp::call<int32_t(*)(Animator*, int32_t)>(0x1a98c70)(this, layerIndex); } // 0x1a98c70
        cs::array<UnityEngine::AnimatorClipInfo>* GetCurrentAnimatorClipInfo(int32_t layerIndex) { return il2cpp::call<cs::array<UnityEngine::AnimatorClipInfo>*(*)(Animator*, int32_t)>(0x1a98570)(this, layerIndex); } // 0x1a98570
        cs::array<UnityEngine::AnimatorClipInfo>* GetNextAnimatorClipInfo(int32_t layerIndex) { return il2cpp::call<cs::array<UnityEngine::AnimatorClipInfo>*(*)(Animator*, int32_t)>(0x1a98ca0)(this, layerIndex); } // 0x1a98ca0
        void GetCurrentAnimatorClipInfo(int32_t layerIndex, System::Collections::Generic::List<UnityEngine::AnimatorClipInfo>* clips) { return il2cpp::call<void(*)(Animator*, int32_t, System::Collections::Generic::List<UnityEngine::AnimatorClipInfo>*)>(0x1a985a0)(this, layerIndex, clips); } // 0x1a985a0
        void GetAnimatorClipInfoInternal(int32_t layerIndex, bool isCurrent, il2cpp::Il2CppObject* clips) { return il2cpp::call<void(*)(Animator*, int32_t, bool, il2cpp::Il2CppObject*)>(0x1a981b0)(this, layerIndex, isCurrent, clips); } // 0x1a981b0
        void GetNextAnimatorClipInfo(int32_t layerIndex, System::Collections::Generic::List<UnityEngine::AnimatorClipInfo>* clips) { return il2cpp::call<void(*)(Animator*, int32_t, System::Collections::Generic::List<UnityEngine::AnimatorClipInfo>*)>(0x1a98cd0)(this, layerIndex, clips); } // 0x1a98cd0
        bool IsInTransition(int32_t layerIndex) { return il2cpp::call<bool(*)(Animator*, int32_t)>(0x1a99160)(this, layerIndex); } // 0x1a99160
        cs::array<UnityEngine::AnimatorControllerParameter>* get_parameters() { return il2cpp::call<cs::array<UnityEngine::AnimatorControllerParameter>*(*)(Animator*)>(0x1a9ad40)(this); } // 0x1a9ad40
        int32_t get_parameterCount() { return il2cpp::call<int32_t(*)(Animator*)>(0x1a9ad10)(this); } // 0x1a9ad10
        UnityEngine::AnimatorControllerParameter* GetParameter(int32_t index) { return il2cpp::call<UnityEngine::AnimatorControllerParameter*(*)(Animator*, int32_t)>(0x1a98e00)(this, index); } // 0x1a98e00
        float get_feetPivotActive() { return il2cpp::call<float(*)(Animator*)>(0x1a9a9b0)(this); } // 0x1a9a9b0
        void set_feetPivotActive(float value) { return il2cpp::call<void(*)(Animator*, float)>(0x1a9b470)(this, value); } // 0x1a9b470
        float get_pivotWeight() { return il2cpp::call<float(*)(Animator*)>(0x1a9ade0)(this); } // 0x1a9ade0
        UnityEngine::Vector3 get_pivotPosition() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9ada0)(this); } // 0x1a9ada0
        void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float startNormalizedTime, float targetNormalizedTime, bool completeMatch) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3, UnityEngine::Quaternion, int32_t, UnityEngine::MatchTargetWeightMask, float, float, bool)>(0x1a99240)(this, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime, completeMatch); } // 0x1a99240
        void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, UnityEngine::AvatarTarget targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float startNormalizedTime) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::AvatarTarget, UnityEngine::MatchTargetWeightMask, float)>(0x1a99320)(this, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime); } // 0x1a99320
        void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, UnityEngine::AvatarTarget targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float startNormalizedTime, float targetNormalizedTime) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::AvatarTarget, UnityEngine::MatchTargetWeightMask, float, float)>(0x1a992a0)(this, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime); } // 0x1a992a0
        void MatchTarget(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, UnityEngine::AvatarTarget targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float startNormalizedTime, float targetNormalizedTime, bool completeMatch) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3, UnityEngine::Quaternion, UnityEngine::AvatarTarget, UnityEngine::MatchTargetWeightMask, float, float, bool)>(0x1a993a0)(this, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime, completeMatch); } // 0x1a993a0
        void InterruptMatchTarget() { return il2cpp::call<void(*)(Animator*)>(0x1a990d0)(this); } // 0x1a990d0
        void InterruptMatchTarget(bool completeMatch) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a990a0)(this, completeMatch); } // 0x1a990a0
        bool get_isMatchingTarget() { return il2cpp::call<bool(*)(Animator*)>(0x1a9ab60)(this); } // 0x1a9ab60
        float get_speed() { return il2cpp::call<float(*)(Animator*)>(0x1a9b000)(this); } // 0x1a9b000
        void set_speed(float value) { return il2cpp::call<void(*)(Animator*, float)>(0x1a9b6d0)(this, value); } // 0x1a9b6d0
        void ForceStateNormalizedTime(float normalizedTime) { return il2cpp::call<void(*)(Animator*, float)>(0x1a98140)(this, normalizedTime); } // 0x1a98140
        void CrossFadeInFixedTime(cs::string* stateName, float fixedTransitionDuration) { return il2cpp::call<void(*)(Animator*, cs::string*, float)>(0x1a97b30)(this, stateName, fixedTransitionDuration); } // 0x1a97b30
        void CrossFadeInFixedTime(cs::string* stateName, float fixedTransitionDuration, int32_t layer) { return il2cpp::call<void(*)(Animator*, cs::string*, float, int32_t)>(0x1a97ac0)(this, stateName, fixedTransitionDuration, layer); } // 0x1a97ac0
        void CrossFadeInFixedTime(cs::string* stateName, float fixedTransitionDuration, int32_t layer, float fixedTimeOffset) { return il2cpp::call<void(*)(Animator*, cs::string*, float, int32_t, float)>(0x1a97d20)(this, stateName, fixedTransitionDuration, layer, fixedTimeOffset); } // 0x1a97d20
        void CrossFadeInFixedTime(cs::string* stateName, float fixedTransitionDuration, int32_t layer, float fixedTimeOffset, float normalizedTransitionTime) { return il2cpp::call<void(*)(Animator*, cs::string*, float, int32_t, float, float)>(0x1a97ba0)(this, stateName, fixedTransitionDuration, layer, fixedTimeOffset, normalizedTransitionTime); } // 0x1a97ba0
        void CrossFadeInFixedTime(int32_t stateHashName, float fixedTransitionDuration, int32_t layer, float fixedTimeOffset) { return il2cpp::call<void(*)(Animator*, int32_t, float, int32_t, float)>(0x1a97cd0)(this, stateHashName, fixedTransitionDuration, layer, fixedTimeOffset); } // 0x1a97cd0
        void CrossFadeInFixedTime(int32_t stateHashName, float fixedTransitionDuration, int32_t layer) { return il2cpp::call<void(*)(Animator*, int32_t, float, int32_t)>(0x1a97a70)(this, stateHashName, fixedTransitionDuration, layer); } // 0x1a97a70
        void CrossFadeInFixedTime(int32_t stateHashName, float fixedTransitionDuration) { return il2cpp::call<void(*)(Animator*, int32_t, float)>(0x1a97c20)(this, stateHashName, fixedTransitionDuration); } // 0x1a97c20
        void CrossFadeInFixedTime(int32_t stateHashName, float fixedTransitionDuration, int32_t layer, float fixedTimeOffset, float normalizedTransitionTime) { return il2cpp::call<void(*)(Animator*, int32_t, float, int32_t, float, float)>(0x1a97c70)(this, stateHashName, fixedTransitionDuration, layer, fixedTimeOffset, normalizedTransitionTime); } // 0x1a97c70
        void WriteDefaultValues() { return il2cpp::call<void(*)(Animator*)>(0x1a9a550)(this); } // 0x1a9a550
        void CrossFade(cs::string* stateName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset) { return il2cpp::call<void(*)(Animator*, cs::string*, float, int32_t, float)>(0x1a97e40)(this, stateName, normalizedTransitionDuration, layer, normalizedTimeOffset); } // 0x1a97e40
        void CrossFade(cs::string* stateName, float normalizedTransitionDuration, int32_t layer) { return il2cpp::call<void(*)(Animator*, cs::string*, float, int32_t)>(0x1a97f70)(this, stateName, normalizedTransitionDuration, layer); } // 0x1a97f70
        void CrossFade(cs::string* stateName, float normalizedTransitionDuration) { return il2cpp::call<void(*)(Animator*, cs::string*, float)>(0x1a97fe0)(this, stateName, normalizedTransitionDuration); } // 0x1a97fe0
        void CrossFade(cs::string* stateName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset, float normalizedTransitionTime) { return il2cpp::call<void(*)(Animator*, cs::string*, float, int32_t, float, float)>(0x1a98050)(this, stateName, normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime); } // 0x1a98050
        void CrossFade(int32_t stateHashName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset, float normalizedTransitionTime) { return il2cpp::call<void(*)(Animator*, int32_t, float, int32_t, float, float)>(0x1a97ec0)(this, stateHashName, normalizedTransitionDuration, layer, normalizedTimeOffset, normalizedTransitionTime); } // 0x1a97ec0
        void CrossFade(int32_t stateHashName, float normalizedTransitionDuration, int32_t layer, float normalizedTimeOffset) { return il2cpp::call<void(*)(Animator*, int32_t, float, int32_t, float)>(0x1a97f20)(this, stateHashName, normalizedTransitionDuration, layer, normalizedTimeOffset); } // 0x1a97f20
        void CrossFade(int32_t stateHashName, float normalizedTransitionDuration, int32_t layer) { return il2cpp::call<void(*)(Animator*, int32_t, float, int32_t)>(0x1a97da0)(this, stateHashName, normalizedTransitionDuration, layer); } // 0x1a97da0
        void CrossFade(int32_t stateHashName, float normalizedTransitionDuration) { return il2cpp::call<void(*)(Animator*, int32_t, float)>(0x1a97df0)(this, stateHashName, normalizedTransitionDuration); } // 0x1a97df0
        void PlayInFixedTime(cs::string* stateName, int32_t layer) { return il2cpp::call<void(*)(Animator*, cs::string*, int32_t)>(0x1a995a0)(this, stateName, layer); } // 0x1a995a0
        void PlayInFixedTime(cs::string* stateName) { return il2cpp::call<void(*)(Animator*, cs::string*)>(0x1a99600)(this, stateName); } // 0x1a99600
        void PlayInFixedTime(cs::string* stateName, int32_t layer, float fixedTime) { return il2cpp::call<void(*)(Animator*, cs::string*, int32_t, float)>(0x1a99480)(this, stateName, layer, fixedTime); } // 0x1a99480
        void PlayInFixedTime(int32_t stateNameHash, int32_t layer, float fixedTime) { return il2cpp::call<void(*)(Animator*, int32_t, int32_t, float)>(0x1a99560)(this, stateNameHash, layer, fixedTime); } // 0x1a99560
        void PlayInFixedTime(int32_t stateNameHash, int32_t layer) { return il2cpp::call<void(*)(Animator*, int32_t, int32_t)>(0x1a994e0)(this, stateNameHash, layer); } // 0x1a994e0
        void PlayInFixedTime(int32_t stateNameHash) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a99520)(this, stateNameHash); } // 0x1a99520
        void Play(cs::string* stateName, int32_t layer) { return il2cpp::call<void(*)(Animator*, cs::string*, int32_t)>(0x1a99660)(this, stateName, layer); } // 0x1a99660
        void Play(cs::string* stateName) { return il2cpp::call<void(*)(Animator*, cs::string*)>(0x1a997a0)(this, stateName); } // 0x1a997a0
        void Play(cs::string* stateName, int32_t layer, float normalizedTime) { return il2cpp::call<void(*)(Animator*, cs::string*, int32_t, float)>(0x1a996c0)(this, stateName, layer, normalizedTime); } // 0x1a996c0
        void Play(int32_t stateNameHash, int32_t layer, float normalizedTime) { return il2cpp::call<void(*)(Animator*, int32_t, int32_t, float)>(0x1a99760)(this, stateNameHash, layer, normalizedTime); } // 0x1a99760
        void Play(int32_t stateNameHash, int32_t layer) { return il2cpp::call<void(*)(Animator*, int32_t, int32_t)>(0x1a99720)(this, stateNameHash, layer); } // 0x1a99720
        void Play(int32_t stateNameHash) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a99800)(this, stateNameHash); } // 0x1a99800
        void SetTarget(UnityEngine::AvatarTarget targetIndex, float targetNormalizedTime) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarTarget, float)>(0x1a9a350)(this, targetIndex, targetNormalizedTime); } // 0x1a9a350
        UnityEngine::Vector3 get_targetPosition() { return il2cpp::call<UnityEngine::Vector3(*)(Animator*)>(0x1a9b0c0)(this); } // 0x1a9b0c0
        UnityEngine::Quaternion get_targetRotation() { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*)>(0x1a9b130)(this); } // 0x1a9b130
        bool IsControlled(UnityEngine::Transform* transform) { return il2cpp::call<bool(*)(Animator*, UnityEngine::Transform*)>(0x2b53b0)(this, transform); } // 0x2b53b0
        bool IsBoneTransform(UnityEngine::Transform* transform) { return il2cpp::call<bool(*)(Animator*, UnityEngine::Transform*)>(0x1a99100)(this, transform); } // 0x1a99100
        UnityEngine::Transform* get_avatarRoot() { return il2cpp::call<UnityEngine::Transform*(*)(Animator*)>(0x1a9a680)(this); } // 0x1a9a680
        UnityEngine::Transform* GetBoneTransform(UnityEngine::HumanBodyBones humanBoneId) { return il2cpp::call<UnityEngine::Transform*(*)(Animator*, UnityEngine::HumanBodyBones)>(0x1a983f0)(this, humanBoneId); } // 0x1a983f0
        UnityEngine::Transform* GetBoneTransformInternal(int32_t humanBoneId) { return il2cpp::call<UnityEngine::Transform*(*)(Animator*, int32_t)>(0x1a983c0)(this, humanBoneId); } // 0x1a983c0
        UnityEngine::AnimatorCullingMode get_cullingMode() { return il2cpp::call<UnityEngine::AnimatorCullingMode(*)(Animator*)>(0x1a9a8a0)(this); } // 0x1a9a8a0
        void set_cullingMode(UnityEngine::AnimatorCullingMode value) { return il2cpp::call<void(*)(Animator*, UnityEngine::AnimatorCullingMode)>(0x1a9b440)(this, value); } // 0x1a9b440
        void StartPlayback() { return il2cpp::call<void(*)(Animator*)>(0x1a9a3f0)(this); } // 0x1a9a3f0
        void StopPlayback() { return il2cpp::call<void(*)(Animator*)>(0x1a9a450)(this); } // 0x1a9a450
        float get_playbackTime() { return il2cpp::call<float(*)(Animator*)>(0x1a9ae50)(this); } // 0x1a9ae50
        void set_playbackTime(float value) { return il2cpp::call<void(*)(Animator*, float)>(0x1a9b5a0)(this, value); } // 0x1a9b5a0
        void StartRecording(int32_t frameCount) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a9a420)(this, frameCount); } // 0x1a9a420
        void StopRecording() { return il2cpp::call<void(*)(Animator*)>(0x1a9a480)(this); } // 0x1a9a480
        float get_recorderStartTime() { return il2cpp::call<float(*)(Animator*)>(0x1a98f30)(this); } // 0x1a98f30
        void set_recorderStartTime(float value) { return il2cpp::call<void(*)(Animator*, float)>(0x2babf0)(this, value); } // 0x2babf0
        float GetRecorderStartTime() { return il2cpp::call<float(*)(Animator*)>(0x1a98f30)(this); } // 0x1a98f30
        float get_recorderStopTime() { return il2cpp::call<float(*)(Animator*)>(0x1a98f60)(this); } // 0x1a98f60
        void set_recorderStopTime(float value) { return il2cpp::call<void(*)(Animator*, float)>(0x2babf0)(this, value); } // 0x2babf0
        float GetRecorderStopTime() { return il2cpp::call<float(*)(Animator*)>(0x1a98f60)(this); } // 0x1a98f60
        UnityEngine::AnimatorRecorderMode get_recorderMode() { return il2cpp::call<UnityEngine::AnimatorRecorderMode(*)(Animator*)>(0x1a9ae80)(this); } // 0x1a9ae80
        UnityEngine::RuntimeAnimatorController* get_runtimeAnimatorController() { return il2cpp::call<UnityEngine::RuntimeAnimatorController*(*)(Animator*)>(0x1a9afc0)(this); } // 0x1a9afc0
        void set_runtimeAnimatorController(UnityEngine::RuntimeAnimatorController* value) { return il2cpp::call<void(*)(Animator*, UnityEngine::RuntimeAnimatorController*)>(0x1a9b6a0)(this, value); } // 0x1a9b6a0
        bool get_hasBoundPlayables() { return il2cpp::call<bool(*)(Animator*)>(0x1a9aa40)(this); } // 0x1a9aa40
        void ClearInternalControllerPlayable() { return il2cpp::call<void(*)(Animator*)>(0x1a97a40)(this); } // 0x1a97a40
        bool HasState(int32_t layerIndex, int32_t stateID) { return il2cpp::call<bool(*)(Animator*, int32_t, int32_t)>(0x1a99000)(this, layerIndex, stateID); } // 0x1a99000
        int32_t StringToHash(cs::string* name) { return il2cpp::call<int32_t(*)(Animator*, cs::string*)>(0x1a9a4b0)(this, name); } // 0x1a9a4b0
        UnityEngine::Avatar* get_avatar() { return il2cpp::call<UnityEngine::Avatar*(*)(Animator*)>(0x1a9a6b0)(this); } // 0x1a9a6b0
        void set_avatar(UnityEngine::Avatar* value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Avatar*)>(0x1a9b2b0)(this, value); } // 0x1a9b2b0
        cs::string* GetStats() { return il2cpp::call<cs::string*(*)(Animator*)>(0x1a98f90)(this); } // 0x1a98f90
        UnityEngine::Playables::PlayableGraph get_playableGraph() { return il2cpp::call<UnityEngine::Playables::PlayableGraph(*)(Animator*)>(0x1a9ae10)(this); } // 0x1a9ae10
        void GetCurrentGraph(UnityEngine::Playables::PlayableGraph graph) { return il2cpp::call<void(*)(Animator*, UnityEngine::Playables::PlayableGraph)>(0x1a986a0)(this, graph); } // 0x1a986a0
        void CheckIfInIKPass() { return il2cpp::call<void(*)(Animator*)>(0x1a97990)(this); } // 0x1a97990
        bool IsInIKPass() { return il2cpp::call<bool(*)(Animator*)>(0x1a99130)(this); } // 0x1a99130
        void SetFloatString(cs::string* name, float value) { return il2cpp::call<void(*)(Animator*, cs::string*, float)>(0x1a99b40)(this, name, value); } // 0x1a99b40
        void SetFloatID(int32_t id, float value) { return il2cpp::call<void(*)(Animator*, int32_t, float)>(0x1a99ab0)(this, id, value); } // 0x1a99ab0
        float GetFloatString(cs::string* name) { return il2cpp::call<float(*)(Animator*, cs::string*)>(0x1a98730)(this, name); } // 0x1a98730
        float GetFloatID(int32_t id) { return il2cpp::call<float(*)(Animator*, int32_t)>(0x1a98700)(this, id); } // 0x1a98700
        void SetBoolString(cs::string* name, bool value) { return il2cpp::call<void(*)(Animator*, cs::string*, bool)>(0x1a99a30)(this, name, value); } // 0x1a99a30
        void SetBoolID(int32_t id, bool value) { return il2cpp::call<void(*)(Animator*, int32_t, bool)>(0x1a99a00)(this, id, value); } // 0x1a99a00
        bool GetBoolString(cs::string* name) { return il2cpp::call<bool(*)(Animator*, cs::string*)>(0x1a98510)(this, name); } // 0x1a98510
        bool GetBoolID(int32_t id) { return il2cpp::call<bool(*)(Animator*, int32_t)>(0x1a984e0)(this, id); } // 0x1a984e0
        void SetIntegerString(cs::string* name, int32_t value) { return il2cpp::call<void(*)(Animator*, cs::string*, int32_t)>(0x1a99f90)(this, name, value); } // 0x1a99f90
        void SetIntegerID(int32_t id, int32_t value) { return il2cpp::call<void(*)(Animator*, int32_t, int32_t)>(0x1a99f60)(this, id, value); } // 0x1a99f60
        int32_t GetIntegerString(cs::string* name) { return il2cpp::call<int32_t(*)(Animator*, cs::string*)>(0x1a98bb0)(this, name); } // 0x1a98bb0
        int32_t GetIntegerID(int32_t id) { return il2cpp::call<int32_t(*)(Animator*, int32_t)>(0x1a98b80)(this, id); } // 0x1a98b80
        void SetTriggerString(cs::string* name) { return il2cpp::call<void(*)(Animator*, cs::string*)>(0x1a9a3c0)(this, name); } // 0x1a9a3c0
        void SetTriggerID(int32_t id) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a9a390)(this, id); } // 0x1a9a390
        void ResetTriggerString(cs::string* name) { return il2cpp::call<void(*)(Animator*, cs::string*)>(0x1a998d0)(this, name); } // 0x1a998d0
        void ResetTriggerID(int32_t id) { return il2cpp::call<void(*)(Animator*, int32_t)>(0x1a998a0)(this, id); } // 0x1a998a0
        bool IsParameterControlledByCurveString(cs::string* name) { return il2cpp::call<bool(*)(Animator*, cs::string*)>(0x1a991c0)(this, name); } // 0x1a991c0
        bool IsParameterControlledByCurveID(int32_t id) { return il2cpp::call<bool(*)(Animator*, int32_t)>(0x1a99190)(this, id); } // 0x1a99190
        void SetFloatStringDamp(cs::string* name, float value, float dampTime, float deltaTime) { return il2cpp::call<void(*)(Animator*, cs::string*, float, float, float)>(0x1a99af0)(this, name, value, dampTime, deltaTime); } // 0x1a99af0
        void SetFloatIDDamp(int32_t id, float value, float dampTime, float deltaTime) { return il2cpp::call<void(*)(Animator*, int32_t, float, float, float)>(0x1a99a60)(this, id, value, dampTime, deltaTime); } // 0x1a99a60
        bool get_layersAffectMassCenter() { return il2cpp::call<bool(*)(Animator*)>(0x1a9ac50)(this); } // 0x1a9ac50
        void set_layersAffectMassCenter(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b510)(this, value); } // 0x1a9b510
        float get_leftFeetBottomHeight() { return il2cpp::call<float(*)(Animator*)>(0x1a9ac80)(this); } // 0x1a9ac80
        float get_rightFeetBottomHeight() { return il2cpp::call<float(*)(Animator*)>(0x1a9aeb0)(this); } // 0x1a9aeb0
        bool get_supportsOnAnimatorMove() { return il2cpp::call<bool(*)(Animator*)>(0x1a9b060)(this); } // 0x1a9b060
        void OnUpdateModeChanged() { return il2cpp::call<void(*)(Animator*)>(0x1a99450)(this); } // 0x1a99450
        void OnCullingModeChanged() { return il2cpp::call<void(*)(Animator*)>(0x1a99420)(this); } // 0x1a99420
        void WriteDefaultPose() { return il2cpp::call<void(*)(Animator*)>(0x1a9a520)(this); } // 0x1a9a520
        void Update(float deltaTime) { return il2cpp::call<void(*)(Animator*, float)>(0x1a9a4e0)(this, deltaTime); } // 0x1a9a4e0
        void Rebind() { return il2cpp::call<void(*)(Animator*)>(0x1a99870)(this); } // 0x1a99870
        void Rebind(bool writeDefaultValues) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a99840)(this, writeDefaultValues); } // 0x1a99840
        void ApplyBuiltinRootMotion() { return il2cpp::call<void(*)(Animator*)>(0x1a97960)(this); } // 0x1a97960
        void EvaluateController() { return il2cpp::call<void(*)(Animator*)>(0x1a980d0)(this); } // 0x1a980d0
        void EvaluateController(float deltaTime) { return il2cpp::call<void(*)(Animator*, float)>(0x1a98100)(this, deltaTime); } // 0x1a98100
        cs::string* GetCurrentStateName(int32_t layerIndex) { return il2cpp::call<cs::string*(*)(Animator*, int32_t)>(0x1a986d0)(this, layerIndex); } // 0x1a986d0
        cs::string* GetNextStateName(int32_t layerIndex) { return il2cpp::call<cs::string*(*)(Animator*, int32_t)>(0x1a98dd0)(this, layerIndex); } // 0x1a98dd0
        cs::string* GetAnimatorStateName(int32_t layerIndex, bool current) { return il2cpp::call<cs::string*(*)(Animator*, int32_t, bool)>(0x1a98230)(this, layerIndex, current); } // 0x1a98230
        cs::string* ResolveHash(int32_t hash) { return il2cpp::call<cs::string*(*)(Animator*, int32_t)>(0x1a99900)(this, hash); } // 0x1a99900
        bool get_logWarnings() { return il2cpp::call<bool(*)(Animator*)>(0x1a9ace0)(this); } // 0x1a9ace0
        void set_logWarnings(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b570)(this, value); } // 0x1a9b570
        bool get_fireEvents() { return il2cpp::call<bool(*)(Animator*)>(0x1a9a9e0)(this); } // 0x1a9a9e0
        void set_fireEvents(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b4b0)(this, value); } // 0x1a9b4b0
        bool get_keepAnimatorControllerStateOnDisable() { return il2cpp::call<bool(*)(Animator*)>(0x1a9abf0)(this); } // 0x1a9abf0
        void set_keepAnimatorControllerStateOnDisable(bool value) { return il2cpp::call<void(*)(Animator*, bool)>(0x1a9b4e0)(this, value); } // 0x1a9b4e0
        UnityEngine::Vector3 GetVector(cs::string* name) { return il2cpp::call<UnityEngine::Vector3(*)(Animator*, cs::string*)>(0x1a98fc0)(this, name); } // 0x1a98fc0
        UnityEngine::Vector3 GetVector(int32_t id) { return il2cpp::call<UnityEngine::Vector3(*)(Animator*, int32_t)>(0x1a98fc0)(this, id); } // 0x1a98fc0
        void SetVector(cs::string* name, UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, cs::string*, UnityEngine::Vector3)>(0x2babf0)(this, name, value); } // 0x2babf0
        void SetVector(int32_t id, UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, int32_t, UnityEngine::Vector3)>(0x2babf0)(this, id, value); } // 0x2babf0
        UnityEngine::Quaternion GetQuaternion(cs::string* name) { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*, cs::string*)>(0x1a98f00)(this, name); } // 0x1a98f00
        UnityEngine::Quaternion GetQuaternion(int32_t id) { return il2cpp::call<UnityEngine::Quaternion(*)(Animator*, int32_t)>(0x1a98f00)(this, id); } // 0x1a98f00
        void SetQuaternion(cs::string* name, UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, cs::string*, UnityEngine::Quaternion)>(0x2babf0)(this, name, value); } // 0x2babf0
        void SetQuaternion(int32_t id, UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, int32_t, UnityEngine::Quaternion)>(0x2babf0)(this, id, value); } // 0x2babf0
        void ctor() { return il2cpp::call<void(*)(Animator*)>(0xee3f90)(this); } // 0xee3f90
        void get_deltaPosition_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9a8d0)(this, ret); } // 0x1a9a8d0
        void get_deltaRotation_Injected(UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9a940)(this, ret); } // 0x1a9a940
        void get_velocity_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b1a0)(this, ret); } // 0x1a9b1a0
        void get_angularVelocity_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9a5b0)(this, ret); } // 0x1a9a5b0
        void get_rootPosition_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9aee0)(this, ret); } // 0x1a9aee0
        void set_rootPosition_Injected(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b5e0)(this, value); } // 0x1a9b5e0
        void get_rootRotation_Injected(UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9af50)(this, ret); } // 0x1a9af50
        void set_rootRotation_Injected(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9b640)(this, value); } // 0x1a9b640
        void get_bodyPositionInternal_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9a6e0)(this, ret); } // 0x1a9a6e0
        void set_bodyPositionInternal_Injected(UnityEngine::Vector3 value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b2e0)(this, value); } // 0x1a9b2e0
        void get_bodyRotationInternal_Injected(UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9a7d0)(this, ret); } // 0x1a9a7d0
        void set_bodyRotationInternal_Injected(UnityEngine::Quaternion value) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9b390)(this, value); } // 0x1a9b390
        void GetGoalPosition_Injected(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Vector3)>(0x1a98760)(this, goal, ret); } // 0x1a98760
        void SetGoalPosition_Injected(UnityEngine::AvatarIKGoal goal, UnityEngine::Vector3 goalPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Vector3)>(0x1a99b80)(this, goal, goalPosition); } // 0x1a99b80
        void GetGoalRotation_Injected(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Quaternion)>(0x1a987e0)(this, goal, ret); } // 0x1a987e0
        void SetGoalRotation_Injected(UnityEngine::AvatarIKGoal goal, UnityEngine::Quaternion goalRotation) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKGoal, UnityEngine::Quaternion)>(0x1a99be0)(this, goal, goalRotation); } // 0x1a99be0
        void GetHintPosition_Injected(UnityEngine::AvatarIKHint hint, UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKHint, UnityEngine::Vector3)>(0x1a988b0)(this, hint, ret); } // 0x1a988b0
        void SetHintPosition_Injected(UnityEngine::AvatarIKHint hint, UnityEngine::Vector3 hintPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::AvatarIKHint, UnityEngine::Vector3)>(0x1a99cc0)(this, hint, hintPosition); } // 0x1a99cc0
        void SetLookAtPositionInternal_Injected(UnityEngine::Vector3 lookAtPosition) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9a000)(this, lookAtPosition); } // 0x1a9a000
        void SetBoneLocalRotationInternal_Injected(int32_t humanBoneId, UnityEngine::Quaternion rotation) { return il2cpp::call<void(*)(Animator*, int32_t, UnityEngine::Quaternion)>(0x1a99930)(this, humanBoneId, rotation); } // 0x1a99930
        void get_pivotPosition_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9ad70)(this, ret); } // 0x1a9ad70
        void MatchTarget_Injected(UnityEngine::Vector3 matchPosition, UnityEngine::Quaternion matchRotation, int32_t targetBodyPart, UnityEngine::MatchTargetWeightMask weightMask, float startNormalizedTime, float targetNormalizedTime, bool completeMatch) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3, UnityEngine::Quaternion, int32_t, UnityEngine::MatchTargetWeightMask, float, float, bool)>(0x1a991f0)(this, matchPosition, matchRotation, targetBodyPart, weightMask, startNormalizedTime, targetNormalizedTime, completeMatch); } // 0x1a991f0
        void get_targetPosition_Injected(UnityEngine::Vector3 ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Vector3)>(0x1a9b090)(this, ret); } // 0x1a9b090
        void get_targetRotation_Injected(UnityEngine::Quaternion ret) { return il2cpp::call<void(*)(Animator*, UnityEngine::Quaternion)>(0x1a9b100)(this, ret); } // 0x1a9b100

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::Animator> {
        };

}

