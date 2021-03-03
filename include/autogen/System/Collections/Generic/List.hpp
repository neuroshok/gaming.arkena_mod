#pragma once

#include <ark/class.hpp>
#include <il2cpp/type.hpp>

namespace System::Collections::Generic {

template <class T>
struct List : il2cpp::Il2CppObject {
    ark_meta("System", "List", "");

    il2cpp::array<T>* _items;
    std::int32_t _size;
    std::int32_t _version;
    struct Il2CppObject* _syncRoot;

    using value_type = T*;

    value_type* begin() {
        return &_items->m_Items;
    }

    value_type* end() {
        return &_items->m_Items + size();
    }

    std::size_t size() const {
        return static_cast<std::size_t>(_size);
    }

    value_type& operator[](std::size_t index) {
        assert(index <= size());
        return begin()[index];
    }
};

} // namespace System::Collections::Generic
