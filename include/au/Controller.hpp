#pragma once
#include <ark/class.hpp>

#include <il2cpp/core.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/Collider2D.hpp>
#include <au/UnityEngine/Vector3.hpp>
#include <au/UnityEngine/Camera.hpp>

namespace 
{
    struct Controller : ark::meta<Controller, il2cpp::Il2CppObject>
    {
        static UnityEngine::Vector3 oldMousePos(); // 0x0
        cs::array<Controller+TouchStateNESTEDTYPE>* Touches; // 0x8
        UnityEngine::Collider2D* amTouching; // 0xc
        int32_t touchId; // 0x10
        UnityEngine::Camera* _mainCam_k__BackingField; // 0x14

        Controller+TouchType get_currentTouchType() { return il2cpp::call<Controller+TouchType(*)(Controller*)>(0x8f9e60)(this); } // 0x8f9e60
        void ctor() { return il2cpp::call<void(*)(Controller*)>(0x8f9ab0)(this); } // 0x8f9ab0
        bool CheckHover(UnityEngine::Collider2D* coll) { return il2cpp::call<bool(*)(Controller*, UnityEngine::Collider2D*)>(0x8f8fd0)(this, coll); } // 0x8f8fd0
        UnityEngine::Vector2 get_HoverPosition() { return il2cpp::call<UnityEngine::Vector2(*)(Controller*)>(0x8f9de0)(this); } // 0x8f9de0
        au::DragState CheckDrag(UnityEngine::Collider2D* coll) { return il2cpp::call<au::DragState(*)(Controller*, UnityEngine::Collider2D*)>(0x8f8d40)(this, coll); } // 0x8f8d40
        bool get_AnyTouch() { return il2cpp::call<bool(*)(Controller*)>(0x8f9c70)(this); } // 0x8f9c70
        bool get_AnyTouchDown() { return il2cpp::call<bool(*)(Controller*)>(0x8f9bb0)(this); } // 0x8f9bb0
        bool get_AnyTouchUp() { return il2cpp::call<bool(*)(Controller*)>(0x8f9c10)(this); } // 0x8f9c10
        bool get_FirstDown() { return il2cpp::call<bool(*)(Controller*)>(0x8f9da0)(this); } // 0x8f9da0
        UnityEngine::Vector2 get_DragPosition() { return il2cpp::call<UnityEngine::Vector2(*)(Controller*)>(0x8f9cd0)(this); } // 0x8f9cd0
        UnityEngine::Vector2 get_DragStartPosition() { return il2cpp::call<UnityEngine::Vector2(*)(Controller*)>(0x8f9d40)(this); } // 0x8f9d40
        void ResetDragPosition() { return il2cpp::call<void(*)(Controller*)>(0x8f9140)(this); } // 0x8f9140
        void ClearTouch() { return il2cpp::call<void(*)(Controller*)>(0x8f90c0)(this); } // 0x8f90c0
        UnityEngine::Camera* get_mainCam() { return il2cpp::call<UnityEngine::Camera*(*)(Controller*)>(0x2c5100)(this); } // 0x2c5100
        void set_mainCam(UnityEngine::Camera* value) { return il2cpp::call<void(*)(Controller*, UnityEngine::Camera*)>(0x2c5130)(this, value); } // 0x2c5130
        void Update() { return il2cpp::call<void(*)(Controller*)>(0x8f9260)(this); } // 0x8f9260
        void Reset() { return il2cpp::call<void(*)(Controller*)>(0x8f9190)(this); } // 0x8f9190
        Controller+TouchState*NESTEDTYPE GetTouch(int32_t i) { return il2cpp::call<Controller+TouchState*NESTEDTYPE(*)(Controller*, int32_t)>(0x8f9110)(this, i); } // 0x8f9110
        void cctor() { return il2cpp::call<void(*)(Controller*)>(0x8f9a70)(this); } // 0x8f9a70

    };

}
namespace ark {

        template<> struct meta_statics<::Controller> {
        UnityEngine::Vector3 oldMousePos; // 0x0
        };

}



UnityEngine::Vector3 ::Controller::oldMousePos() { return statics()->oldMousePos; }; // 0x0