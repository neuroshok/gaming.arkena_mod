#pragma once

#include <ark/class.hpp>
#include <autogen/Unity/MonoBehaviour.hpp>
#include <autogen/System/Collections/Generic/List.hpp>

template<class T> using List = System::Collections::Generic::List<T>;

struct UIBehaviour : ark::meta<UIBehaviour, Unity::MonoBehaviour>{};


struct UnityEventBase : ark::meta<UnityEventBase>
{
	ark_meta("", "UnityEventBase", "UnityEventBase, Assembly - CSharp");

	struct InvokableCallList* m_Calls; // 0x8
	struct PersistentCallGroup* m_PersistentCalls; // 0xC
	bool m_CallsDirty; // 0x10

	void _ctor() { return method_call(_ctor); } // 0xC10670
	// virtual // void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() { return method_call(UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize); } // 0x1D44E0 // Slot: 4
	// virtual // void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() { return method_call(UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize); } // 0xC0FD50 // Slot: 5
	// RVA: -1 Offset: -1	// virtual // struct MethodInfo* FindMethod_Impl(struct string* name, struct object* targetObj) { return method_call(FindMethod_Impl, name, targetObj); } // 0xC0FD50 // Slot: 6
	// RVA: -1 Offset: -1	// virtual // struct BaseInvokableCall* GetDelegate(struct object* target, struct MethodInfo* theFunction) { return method_call(GetDelegate, target, theFunction); } // 0xC0FD50 // Slot: 7
	struct MethodInfo* FindMethod(struct PersistentCall* call) { return method_call(FindMethod, call); } // 0xC0FDB0
	//struct MethodInfo* FindMethod(struct string* name, struct object* listener, struct PersistentListenerMode* mode, struct Type* argumentType) { return method_call(FindMethod, name, listener, mode, argumentType); } // 0xC0FEE0
	void DirtyPersistentCalls() { return method_call(DirtyPersistentCalls); } // 0xC0FD50
	void RebuildPersistentCallsIfNeeded() { return method_call(RebuildPersistentCallsIfNeeded); } // 0xC10420
	void AddCall(struct BaseInvokableCall* call) { return method_call(AddCall, call); } // 0xC0FCF0
	void RemoveListener(struct object* targetObj, struct MethodInfo* method) { return method_call(RemoveListener, targetObj, method); } // 0xC104A0
	void RemoveAllListeners() { return method_call(RemoveAllListeners); } // 0xC10450
	//List<BaseInvokableCall>* PrepareInvoke() { return method_call(PrepareInvoke); } // 0xC10370
	// virtual // struct string* ToString() { return method_call(ToString); } // 0xC10600 // Slot: 3
	struct MethodInfo* GetValidMethodInfo(struct object* obj, struct string* functionName, struct Type* argumentTypes) { return method_call(GetValidMethodInfo, obj, functionName, argumentTypes); } // 0xC10220
};
namespace ark::method_info
{

	method_rva(UnityEventBase::_ctor, 0xC10670)
	// method_rva(UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize, 0x1D44E0)
	// method_rva(UnityEventBase::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize, 0xC0FD50)
	// method_rva(UnityEventBase::FindMethod_Impl, 0xC0FD50)
	// method_rva(UnityEventBase::GetDelegate, 0xC0FD50)
	method_rva(UnityEventBase::FindMethod, 0xC0FDB0)
	//method_rva(UnityEventBase::FindMethod, 0xC0FEE0)
	method_rva(UnityEventBase::DirtyPersistentCalls, 0xC0FD50)
	method_rva(UnityEventBase::RebuildPersistentCallsIfNeeded, 0xC10420)
	method_rva(UnityEventBase::AddCall, 0xC0FCF0)
	method_rva(UnityEventBase::RemoveListener, 0xC104A0)
	method_rva(UnityEventBase::RemoveAllListeners, 0xC10450)
	//method_rva(UnityEventBase::PrepareInvoke, 0xC10370)
	// method_rva(UnityEventBase::ToString, 0xC10600)
	method_rva(UnityEventBase::GetValidMethodInfo, 0xC10220)
}



struct UnityEvent : ark::meta<UnityEvent, UnityEventBase>
{
	ark_meta("", "UnityEvent", "UnityEvent, Assembly - CSharp");

	/*object*/ void* m_InvokeArray; // 0x14

	void _ctor() { return method_call(_ctor, ); } // 0xC10B10
	void AddListener(struct UnityAction* call) { return method_call(AddListener, call); } // 0xC107A0
	// virtual // struct MethodInfo* FindMethod_Impl(struct string* name, struct object* targetObj) { return method_call(FindMethod_Impl, name, targetObj); } // 0xC10840 // Slot: 6
	// virtual // struct BaseInvokableCall* GetDelegate(struct object* target, struct MethodInfo* theFunction) { return method_call(GetDelegate, target, theFunction); } // 0xC10890 // Slot: 7
	struct BaseInvokableCall* GetDelegate(struct UnityAction* action) { return method_call(GetDelegate, action); } // 0xC108E0
	void Invoke() { return method_call(Invoke, ); } // 0xC10930
};

namespace ark::method_info
{

	method_rva(UnityEvent::_ctor, 0xC10B10)
	method_rva(UnityEvent::AddListener, 0xC107A0)
	// method_rva(UnityEvent::FindMethod_Impl, 0xC10840)
	// method_rva(UnityEvent::GetDelegate, 0xC10890)
	method_rva(UnityEvent::GetDelegate, 0xC108E0)
	method_rva(UnityEvent::Invoke, 0xC10930)
}


struct Button_ButtonClickedEvent : ark::meta<Button_ButtonClickedEvent, UnityEvent>
{
	ark_meta("", "Button_ButtonClickedEvent", "Button_ButtonClickedEvent, Assembly - CSharp");
	void _ctor() { return method_call(_ctor, ); } // 0x4E38B0
};






struct Selectable : ark::meta<Selectable, UIBehaviour>
{
	ark_meta("", "Selectable", "Selectable, Assembly - CSharp");

	static struct Selectable* s_Selectables; // 0x0
	static std::int32_t s_SelectableCount; // 0x4
	struct Navigation* m_Navigation; // 0xC
	struct Selectable_Transition* m_Transition; // 0x20
	struct ColorBlock* m_Colors; // 0x24
	struct SpriteState* m_SpriteState; // 0x7C
	struct AnimationTriggers* m_AnimationTriggers; // 0x8C
	bool m_Interactable; // 0x90
	struct Graphic* m_TargetGraphic; // 0x94
	bool m_GroupsAllowInteraction; // 0x98
	std::int32_t m_CurrentIndex; // 0x9C
	bool isPointerInsidek__BackingField; // 0xA0
	bool isPointerDownk__BackingField; // 0xA1
	bool hasSelectionk__BackingField; // 0xA2
	List<struct CanvasGroup*>* m_CanvasGroupCache; // 0xA4

	struct Selectable* get_allSelectablesArray() { return method_call(get_allSelectablesArray); } // 0xAB5900
	std::int32_t get_allSelectableCount() { return method_call(get_allSelectableCount); } // 0xAB58B0
	List<Selectable>* get_allSelectables() { return method_call(get_allSelectables); } // 0xAB5980
	std::int32_t AllSelectablesNoAlloc(struct Selectable* selectables) { return method_call(AllSelectablesNoAlloc, selectables); } // 0xAB3970
	struct Navigation* get_navigation() { return method_call(get_navigation); } // 0xAB5BD0
	void set_navigation(struct Navigation* value) { return method_call(set_navigation, value); } // 0xAB5EB0
	struct Selectable_Transition* get_transition() { return method_call(get_transition); } // 0x24D430
	void set_transition(struct Selectable_Transition* value) { return method_call(set_transition, value); } // 0xAB5FC0
	struct ColorBlock* get_colors() { return method_call(get_colors); } // 0xAB5A90
	void set_colors(struct ColorBlock* value) { return method_call(set_colors, value); } // 0xAB5C60
	struct SpriteState* get_spriteState() { return method_call(get_spriteState); } // 0xAB5BF0
	void set_spriteState(struct SpriteState* value) { return method_call(set_spriteState, value); } // 0xAB5F10
	struct AnimationTriggers* get_animationTriggers() { return method_call(get_animationTriggers); } // 0x464010
	void set_animationTriggers(struct AnimationTriggers* value) { return method_call(set_animationTriggers, value); } // 0xAB5C10
	struct Graphic* get_targetGraphic() { return method_call(get_targetGraphic); } // 0x4635E0
	void set_targetGraphic(struct Graphic* value) { return method_call(set_targetGraphic, value); } // 0xAB5F70
	bool get_interactable() { return method_call(get_interactable); } // 0xAB5BB0
	void set_interactable(bool value) { return method_call(set_interactable, value); } // 0xAB5D00
	bool get_isPointerInside() { return method_call(get_isPointerInside); } // 0x76A0A0
	void set_isPointerInside(bool value) { return method_call(set_isPointerInside, value); } // 0xAB5E90
	bool get_isPointerDown() { return method_call(get_isPointerDown); } // 0xAB5BC0
	void set_isPointerDown(bool value) { return method_call(set_isPointerDown, value); } // 0xAB5E70
	bool get_hasSelection() { return method_call(get_hasSelection); } // 0xAB5B30
	void set_hasSelection(bool value) { return method_call(set_hasSelection, value); } // 0xAB5CE0
	void _ctor() { return method_call(_ctor); } // 0xAB57B0
	struct Image* get_image() { return method_call(get_image); } // 0xAB5B40
	void set_image(struct Image* value) { return method_call(set_image, value); } // 0x4636D0
	struct Animator* get_animator() { return method_call(get_animator); } // 0xAB5A50
	// virtual // void Awake() { return method_call(Awake); } // 0xAB3A30 // Slot: 4
	// virtual // void OnCanvasGroupChanged() { return method_call(OnCanvasGroupChanged); } // 0xAB4AB0 // Slot: 14
	// virtual // bool IsInteractable() { return method_call(IsInteractable); } // 0xAB49A0 // Slot: 24
	// virtual // void OnDidApplyAnimationProperties() { return method_call(OnDidApplyAnimationProperties); } // 0xAB4C70 // Slot: 13
	// virtual // void OnEnable() { return method_call(OnEnable); } // 0xAB4DE0 // Slot: 5
	// virtual // void OnTransformParentChanged() { return method_call(OnTransformParentChanged); } // 0xAB5380 // Slot: 12
	void OnSetProperty() { return method_call(OnSetProperty); } // 0xAB5310
	// virtual // void OnDisable() { return method_call(OnDisable); } // 0xAB4C80 // Slot: 7
	struct Selectable_SelectionState* get_currentSelectionState() { return method_call(get_currentSelectionState); } // 0xAB5AD0
	// virtual // void InstantClearState() { return method_call(InstantClearState); } // 0xAB48B0 // Slot: 25
	// virtual // void DoStateTransition(struct Selectable_SelectionState* state, bool instant) { return method_call(DoStateTransition, state, instant); } // 0xAB3B40 // Slot: 26
	struct Selectable* FindSelectable(struct Vector3* dir) { return method_call(FindSelectable, dir); } // 0xAB41C0
	struct Vector3* GetPointOnRectEdge(struct RectTransform* rect, struct Vector2* dir) { return method_call(GetPointOnRectEdge, rect, dir); } // 0xAB4670
	void Navigate(struct AxisEventData* eventData, struct Selectable* sel) { return method_call(Navigate, eventData, sel); } // 0xAB4A10
	// virtual // struct Selectable* FindSelectableOnLeft() { return method_call(FindSelectableOnLeft); } // 0xAB3E60 // Slot: 27
	// virtual // struct Selectable* FindSelectableOnRight() { return method_call(FindSelectableOnRight); } // 0xAB3F80 // Slot: 28
	// virtual // struct Selectable* FindSelectableOnUp() { return method_call(FindSelectableOnUp); } // 0xAB40A0 // Slot: 29
	// virtual // struct Selectable* FindSelectableOnDown() { return method_call(FindSelectableOnDown); } // 0xAB3D40 // Slot: 30
	// virtual // void OnMove(struct AxisEventData* eventData) { return method_call(OnMove, eventData); } // 0xAB4FC0 // Slot: 31
	void StartColorTween(struct Color* targetColor, bool instant) { return method_call(StartColorTween, targetColor, instant); } // 0xAB54B0
	void DoSpriteSwap(struct Sprite* newSprite) { return method_call(DoSpriteSwap, newSprite); } // 0xAB3AB0
	void TriggerAnimation(struct string* triggername) { return method_call(TriggerAnimation, triggername); } // 0xAB5560
	bool IsHighlighted() { return method_call(IsHighlighted); } // 0xAB4940
	bool IsPressed() { return method_call(IsPressed); } // 0xAB49C0
	void EvaluateAndTransitionToSelectionState() { return method_call(EvaluateAndTransitionToSelectionState); } // 0xAB3CE0
	// virtual // void OnPointerDown(struct PointerEventData* eventData) { return method_call(OnPointerDown, eventData); } // 0xAB5090 // Slot: 32
	// virtual // void OnPointerUp(struct PointerEventData* eventData) { return method_call(OnPointerUp, eventData); } // 0xAB5280 // Slot: 33
	// virtual // void OnPointerEnter(struct PointerEventData* eventData) { return method_call(OnPointerEnter, eventData); } // 0xAB51C0 // Slot: 34
	// virtual // void OnPointerExit(struct PointerEventData* eventData) { return method_call(OnPointerExit, eventData); } // 0xAB5220 // Slot: 35
	// virtual // void OnSelect(struct BaseEventData* eventData) { return method_call(OnSelect, eventData); } // 0xAB52B0 // Slot: 36
	// virtual // void OnDeselect(struct BaseEventData* eventData) { return method_call(OnDeselect, eventData); } // 0xAB4C10 // Slot: 37
	// virtual // void Select() { return method_call(Select); } // 0xAB53B0 // Slot: 38
	void _cctor() { return method_call(_cctor); } // 0xAB5760
};
namespace ark::method_info
{

	method_rva(Selectable::get_allSelectablesArray, 0xAB5900)
	method_rva(Selectable::get_allSelectableCount, 0xAB58B0)
	method_rva(Selectable::get_allSelectables, 0xAB5980)
	method_rva(Selectable::AllSelectablesNoAlloc, 0xAB3970)
	method_rva(Selectable::get_navigation, 0xAB5BD0)
	method_rva(Selectable::set_navigation, 0xAB5EB0)
	method_rva(Selectable::get_transition, 0x24D430)
	method_rva(Selectable::set_transition, 0xAB5FC0)
	method_rva(Selectable::get_colors, 0xAB5A90)
	method_rva(Selectable::set_colors, 0xAB5C60)
	method_rva(Selectable::get_spriteState, 0xAB5BF0)
	method_rva(Selectable::set_spriteState, 0xAB5F10)
	method_rva(Selectable::get_animationTriggers, 0x464010)
	method_rva(Selectable::set_animationTriggers, 0xAB5C10)
	method_rva(Selectable::get_targetGraphic, 0x4635E0)
	method_rva(Selectable::set_targetGraphic, 0xAB5F70)
	method_rva(Selectable::get_interactable, 0xAB5BB0)
	method_rva(Selectable::set_interactable, 0xAB5D00)
	method_rva(Selectable::get_isPointerInside, 0x76A0A0)
	method_rva(Selectable::set_isPointerInside, 0xAB5E90)
	method_rva(Selectable::get_isPointerDown, 0xAB5BC0)
	method_rva(Selectable::set_isPointerDown, 0xAB5E70)
	method_rva(Selectable::get_hasSelection, 0xAB5B30)
	method_rva(Selectable::set_hasSelection, 0xAB5CE0)
	method_rva(Selectable::_ctor, 0xAB57B0)
	method_rva(Selectable::get_image, 0xAB5B40)
	method_rva(Selectable::set_image, 0x4636D0)
	method_rva(Selectable::get_animator, 0xAB5A50)
	// method_rva(Selectable::Awake, 0xAB3A30)
	// method_rva(Selectable::OnCanvasGroupChanged, 0xAB4AB0)
	// method_rva(Selectable::IsInteractable, 0xAB49A0)
	// method_rva(Selectable::OnDidApplyAnimationProperties, 0xAB4C70)
	// method_rva(Selectable::OnEnable, 0xAB4DE0)
	// method_rva(Selectable::OnTransformParentChanged, 0xAB5380)
	method_rva(Selectable::OnSetProperty, 0xAB5310)
	// method_rva(Selectable::OnDisable, 0xAB4C80)
	method_rva(Selectable::get_currentSelectionState, 0xAB5AD0)
	// method_rva(Selectable::InstantClearState, 0xAB48B0)
	// method_rva(Selectable::DoStateTransition, 0xAB3B40)
	method_rva(Selectable::FindSelectable, 0xAB41C0)
	method_rva(Selectable::GetPointOnRectEdge, 0xAB4670)
	method_rva(Selectable::Navigate, 0xAB4A10)
	// method_rva(Selectable::FindSelectableOnLeft, 0xAB3E60)
	// method_rva(Selectable::FindSelectableOnRight, 0xAB3F80)
	// method_rva(Selectable::FindSelectableOnUp, 0xAB40A0)
	// method_rva(Selectable::FindSelectableOnDown, 0xAB3D40)
	// method_rva(Selectable::OnMove, 0xAB4FC0)
	method_rva(Selectable::StartColorTween, 0xAB54B0)
	method_rva(Selectable::DoSpriteSwap, 0xAB3AB0)
	method_rva(Selectable::TriggerAnimation, 0xAB5560)
	method_rva(Selectable::IsHighlighted, 0xAB4940)
	method_rva(Selectable::IsPressed, 0xAB49C0)
	method_rva(Selectable::EvaluateAndTransitionToSelectionState, 0xAB3CE0)
	// method_rva(Selectable::OnPointerDown, 0xAB5090)
	// method_rva(Selectable::OnPointerUp, 0xAB5280)
	// method_rva(Selectable::OnPointerEnter, 0xAB51C0)
	// method_rva(Selectable::OnPointerExit, 0xAB5220)
	// method_rva(Selectable::OnSelect, 0xAB52B0)
	// method_rva(Selectable::OnDeselect, 0xAB4C10)
	// method_rva(Selectable::Select, 0xAB53B0)
	method_rva(Selectable::_cctor, 0xAB5760)
}




struct Button : ark::meta<Button, Selectable>
{
	ark_meta("UnityEngine.UI", "Button", "UnityEngine.UI.Button, UnityEngine.UI");

	struct Button_ButtonClickedEvent* m_OnClick; // 0xA8

	void _ctor() { return method_call(_ctor); } // 0x4E3A80
	struct Button_ButtonClickedEvent* get_onClick() { return method_call(get_onClick); } // 0x4E3AF0
	void set_onClick(struct Button_ButtonClickedEvent* value) { return method_call(set_onClick, value); } // 0x4E3B00
	void Press() { return method_call(Press); } // 0x4E39F0
	// virtual // void OnPointerClick(struct PointerEventData* eventData) { return method_call(OnPointerClick, eventData); } // 0x4E3910 // Slot: 41
	// virtual // void OnSubmit(struct BaseEventData* eventData) { return method_call(OnSubmit, eventData); } // 0x4E3940 // Slot: 42
	struct IEnumerator* OnFinishSubmit() { return method_call(OnFinishSubmit); } // 0x4E38C0
};
namespace ark::method_info
{
	method_rva(Button::_ctor, 0x4E3A80)
	method_rva(Button::get_onClick, 0x4E3AF0)
	method_rva(Button::set_onClick, 0x4E3B00)
	method_rva(Button::Press, 0x4E39F0)
	// method_rva(Button::OnPointerClick, 0x4E3910)
	// method_rva(Button::OnSubmit, 0x4E3940)
	method_rva(Button::OnFinishSubmit, 0x4E38C0)
}