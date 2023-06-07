#pragma once

namespace ark
{
    template<class To, class From>
    std::enable_if_t<
        sizeof(To) == sizeof(From) &&
        std::is_trivially_copyable_v<From> &&
        std::is_trivially_copyable_v<To>,
        To>
    bit_cast(const From& src) noexcept
    {
        static_assert(std::is_trivially_constructible_v<To>,
            "This implementation additionally requires "
            "destination type to be trivially constructible");

        To dst;
        std::memcpy(&dst, &src, sizeof(To));
        return dst;
    }
} // ark