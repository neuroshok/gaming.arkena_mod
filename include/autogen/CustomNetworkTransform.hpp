#pragma once

#include <autogen/InnerNet/InnerNetObject.hpp>
#include <autogen/Unity/Vector2.hpp>
#include <autogen/Unity/Rigidbody2D.hpp>

// LEAFKMLHONI in 2020.10.8i
// HLNNOIPCILF in 2020.10.22s
// BCKFLLHLHGP in 2020.11.4s
// AMOIOPOABJF in 2020.11.17s
// LNBAPKHKDPG in 2020.12.9s
struct CustomNetworkTransform : InnerNet::InnerNetObject {
    struct FloatRange_o *XRange;
    struct FloatRange_o *YRange;
    float sendInterval; // [marker]
    float snapThreshold;
    float interpolateMovement;
    Unity::Rigidbody2D* body;
    Unity::Vector2 targetSyncPosition;
    Unity::Vector2 targetSyncVelocity;
    std::uint16_t lastSequenceId;
    Unity::Vector2 prevPosSent;
    Unity::Vector2 prevVelSent;
};
