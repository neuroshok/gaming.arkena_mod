#pragma once
#include <ark/class.hpp>


namespace Unity::Collections
{
    struct Allocator : ark::meta<Allocator>
    {
        int32_t value__; // 0x8


    };

}
namespace ark {

        template<> struct meta_statics<Unity::Collections::Allocator> {
        };

}

