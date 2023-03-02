#pragma once
#include <ark/class.hpp>


namespace UnityEngine::ResourceManagement::AsyncOperations
{
    struct IAsyncOperation : ark::meta<IAsyncOperation>
    {


    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::ResourceManagement::AsyncOperations::IAsyncOperation> {
        };

}

