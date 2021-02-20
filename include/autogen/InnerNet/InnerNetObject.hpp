#pragma once

#include <autogen/Unity/MonoBehaviour.hpp>

namespace InnerNet {

// NJAHILONGKN in 2020.12.9s
struct InnerNetObject : Unity::MonoBehaviour {
    std::uint32_t SpawnId; // [marker]
    std::uint32_t NetId;
    std::uint32_t DirtyBits;
    std::uint8_t SpawnFlags;
    std::uint8_t sendMode;
    std::int32_t OwnerId;
    bool DespawnOnDestroy;
};

} // namespace InnerNet
