#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/Object.hpp>
#include <au/UnityEngine/AudioClip/PCMReaderCallback.hpp>
#include <au/UnityEngine/AudioClip/PCMSetPositionCallback.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <cs/string.hpp>
#include <cs/array.hpp>
#include <au/UnityEngine/AudioClip/PCMSetPositionCallback.hpp>

namespace UnityEngine
{
    struct AudioClip : ark::meta<AudioClip, UnityEngine::Object>
    {
        UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE m_PCMReaderCallback; // 0xc
        UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE m_PCMSetPositionCallback; // 0x10

        void ctor() { return il2cpp::call<void(*)(AudioClip*)>(0x1ac9000)(this); } // 0x1ac9000
        bool GetData(UnityEngine::AudioClip* clip, cs::array<float>* data, int32_t numSamples, int32_t samplesOffset) { return il2cpp::call<bool(*)(AudioClip*, UnityEngine::AudioClip*, cs::array<float>*, int32_t, int32_t)>(0x1ac8cc0)(this, clip, data, numSamples, samplesOffset); } // 0x1ac8cc0
        bool SetData(UnityEngine::AudioClip* clip, cs::array<float>* data, int32_t numsamples, int32_t samplesOffset) { return il2cpp::call<bool(*)(AudioClip*, UnityEngine::AudioClip*, cs::array<float>*, int32_t, int32_t)>(0x1ac8f90)(this, clip, data, numsamples, samplesOffset); } // 0x1ac8f90
        UnityEngine::AudioClip* Construct_Internal() { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*)>(0x1ac87d0)(this); } // 0x1ac87d0
        cs::string* GetName() { return il2cpp::call<cs::string*(*)(AudioClip*)>(0x1ac8d00)(this); } // 0x1ac8d00
        void CreateUserSound(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream) { return il2cpp::call<void(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool)>(0x1ac87f0)(this, name, lengthSamples, channels, frequency, stream); } // 0x1ac87f0
        float get_length() { return il2cpp::call<float(*)(AudioClip*)>(0x1ac9220)(this); } // 0x1ac9220
        int32_t get_samples() { return il2cpp::call<int32_t(*)(AudioClip*)>(0x1ac9310)(this); } // 0x1ac9310
        int32_t get_channels() { return il2cpp::call<int32_t(*)(AudioClip*)>(0x1ac9190)(this); } // 0x1ac9190
        int32_t get_frequency() { return il2cpp::call<int32_t(*)(AudioClip*)>(0x1ac91c0)(this); } // 0x1ac91c0
        bool get_isReadyToPlay() { return il2cpp::call<bool(*)(AudioClip*)>(0x1ac91f0)(this); } // 0x1ac91f0
        UnityEngine::AudioClipLoadType get_loadType() { return il2cpp::call<UnityEngine::AudioClipLoadType(*)(AudioClip*)>(0x1ac92b0)(this); } // 0x1ac92b0
        bool LoadAudioData() { return il2cpp::call<bool(*)(AudioClip*)>(0x1ac8d70)(this); } // 0x1ac8d70
        bool UnloadAudioData() { return il2cpp::call<bool(*)(AudioClip*)>(0x1ac8fd0)(this); } // 0x1ac8fd0
        bool get_preloadAudioData() { return il2cpp::call<bool(*)(AudioClip*)>(0x1ac92e0)(this); } // 0x1ac92e0
        bool get_ambisonic() { return il2cpp::call<bool(*)(AudioClip*)>(0x1ac9160)(this); } // 0x1ac9160
        bool get_loadInBackground() { return il2cpp::call<bool(*)(AudioClip*)>(0x1ac9250)(this); } // 0x1ac9250
        UnityEngine::AudioDataLoadState get_loadState() { return il2cpp::call<UnityEngine::AudioDataLoadState(*)(AudioClip*)>(0x1ac9280)(this); } // 0x1ac9280
        bool GetData(cs::array<float>* data, int32_t offsetSamples) { return il2cpp::call<bool(*)(AudioClip*, cs::array<float>*, int32_t)>(0x1ac8b90)(this, data, offsetSamples); } // 0x1ac8b90
        bool SetData(cs::array<float>* data, int32_t offsetSamples) { return il2cpp::call<bool(*)(AudioClip*, cs::array<float>*, int32_t)>(0x1ac8da0)(this, data, offsetSamples); } // 0x1ac8da0
        UnityEngine::AudioClip* Create(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream) { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool, bool)>(0x1ac8860)(this, name, lengthSamples, channels, frequency, _3D, stream); } // 0x1ac8860
        UnityEngine::AudioClip* Create(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE pcmreadercallback) { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool, bool, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE)>(0x1ac8830)(this, name, lengthSamples, channels, frequency, _3D, stream, pcmreadercallback); } // 0x1ac8830
        UnityEngine::AudioClip* Create(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool _3D, bool stream, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE pcmreadercallback, UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE pcmsetpositioncallback) { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool, bool, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE, UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE)>(0x1ac88c0)(this, name, lengthSamples, channels, frequency, _3D, stream, pcmreadercallback, pcmsetpositioncallback); } // 0x1ac88c0
        UnityEngine::AudioClip* Create(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream) { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool)>(0x1ac8890)(this, name, lengthSamples, channels, frequency, stream); } // 0x1ac8890
        UnityEngine::AudioClip* Create(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE pcmreadercallback) { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE)>(0x1ac8b60)(this, name, lengthSamples, channels, frequency, stream, pcmreadercallback); } // 0x1ac8b60
        UnityEngine::AudioClip* Create(cs::string* name, int32_t lengthSamples, int32_t channels, int32_t frequency, bool stream, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE pcmreadercallback, UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE pcmsetpositioncallback) { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioClip*, cs::string*, int32_t, int32_t, int32_t, bool, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE, UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE)>(0x1ac88f0)(this, name, lengthSamples, channels, frequency, stream, pcmreadercallback, pcmsetpositioncallback); } // 0x1ac88f0
        void add_m_PCMReaderCallback(UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE value) { return il2cpp::call<void(*)(AudioClip*, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE)>(0x1ac9060)(this, value); } // 0x1ac9060
        void remove_m_PCMReaderCallback(UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE value) { return il2cpp::call<void(*)(AudioClip*, UnityEngine::AudioClip+PCMReaderCallback*NESTEDTYPE)>(0x1ac9340)(this, value); } // 0x1ac9340
        void add_m_PCMSetPositionCallback(UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE value) { return il2cpp::call<void(*)(AudioClip*, UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE)>(0x1ac90e0)(this, value); } // 0x1ac90e0
        void remove_m_PCMSetPositionCallback(UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE value) { return il2cpp::call<void(*)(AudioClip*, UnityEngine::AudioClip+PCMSetPositionCallback*NESTEDTYPE)>(0x1ac93c0)(this, value); } // 0x1ac93c0
        void InvokePCMReaderCallback_Internal(cs::array<float>* data) { return il2cpp::call<void(*)(AudioClip*, cs::array<float>*)>(0x1ac8d30)(this, data); } // 0x1ac8d30
        void InvokePCMSetPositionCallback_Internal(int32_t position) { return il2cpp::call<void(*)(AudioClip*, int32_t)>(0x1ac8d50)(this, position); } // 0x1ac8d50

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AudioClip> {
        };

}

