//au/UnityEngine/HideFlags
#pragma once
#include <ark/class.hpp>


namespace UnityEngine {
enum class HideFlags : int
{


    // Fields

    
    None = 0,
    HideInHierarchy = 1,
    HideInInspector = 2,
    DontSaveInEditor = 4,
    NotEditable = 8,
    DontSaveInBuild = 16,
    DontUnloadUnusedAsset = 32,
    DontSave = 52,
    HideAndDontSave = 61,

};

} // ns

namespace ark
{
template<>
struct meta_statics<UnityEngine::HideFlags>
{
};
} // ark


namespace ark::method_info 
{
} // ark::method_info