#pragma once
#include <ark/class.hpp>

#include <au/UnityEngine/AudioBehaviour.hpp>
#include <au/UnityEngine/AudioSource.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/UnityEngine/Audio/AudioMixerGroup.hpp>
#include <au/UnityEngine/AudioClip.hpp>
#include <au/UnityEngine/AudioVelocityUpdateMode.hpp>
#include <au/UnityEngine/AudioSourceCurveType.hpp>
#include <au/UnityEngine/AudioRolloffMode.hpp>
#include <cs/array.hpp>

namespace UnityEngine
{
    struct AudioSource : ark::meta<AudioSource, UnityEngine::AudioBehaviour>
    {

        float GetPitch(UnityEngine::AudioSource* source) { return il2cpp::call<float(*)(AudioSource*, UnityEngine::AudioSource*)>(0x1ac96e0)(this, source); } // 0x1ac96e0
        void SetPitch(UnityEngine::AudioSource* source, float pitch) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSource*, float)>(0x1ac9e70)(this, source, pitch); } // 0x1ac9e70
        void PlayHelper(UnityEngine::AudioSource* source, uint64_t delay) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSource*, uint64_t)>(0x1ac9b20)(this, source, delay); } // 0x1ac9b20
        void Play(Typeid_13 delay) { return il2cpp::call<void(*)(AudioSource*, Typeid_13)>(0x1ac9d90)(this, delay); } // 0x1ac9d90
        void PlayOneShotHelper(UnityEngine::AudioSource* source, UnityEngine::AudioClip* clip, float volumeScale) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSource*, UnityEngine::AudioClip*, float)>(0x1ac9b50)(this, source, clip, volumeScale); } // 0x1ac9b50
        void Stop(bool stopOneShots) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1ac9fa0)(this, stopOneShots); } // 0x1ac9fa0
        void SetCustomCurveHelper(UnityEngine::AudioSource* source, UnityEngine::AudioSourceCurveType type, UnityEngine::AnimationCurve* curve) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSource*, UnityEngine::AudioSourceCurveType, UnityEngine::AnimationCurve*)>(0x1ac9e40)(this, source, type, curve); } // 0x1ac9e40
        UnityEngine::AnimationCurve* GetCustomCurveHelper(UnityEngine::AudioSource* source, UnityEngine::AudioSourceCurveType type) { return il2cpp::call<UnityEngine::AnimationCurve*(*)(AudioSource*, UnityEngine::AudioSource*, UnityEngine::AudioSourceCurveType)>(0x1ac9620)(this, source, type); } // 0x1ac9620
        void GetOutputDataHelper(UnityEngine::AudioSource* source, cs::array<float>* samples, int32_t channel) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSource*, cs::array<float>*, int32_t)>(0x1ac9650)(this, source, samples, channel); } // 0x1ac9650
        void GetSpectrumDataHelper(UnityEngine::AudioSource* source, cs::array<float>* samples, int32_t channel, UnityEngine::FFTWindow window) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSource*, cs::array<float>*, int32_t, UnityEngine::FFTWindow)>(0x1ac9740)(this, source, samples, channel, window); } // 0x1ac9740
        float get_volume() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca600)(this); } // 0x1aca600
        void set_volume(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1acac50)(this, value); } // 0x1acac50
        float get_pitch() { return il2cpp::call<float(*)(AudioSource*)>(0x1ac96e0)(this); } // 0x1ac96e0
        void set_pitch(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1ac9e70)(this, value); } // 0x1ac9e70
        float get_time() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca5a0)(this); } // 0x1aca5a0
        void set_time(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1acabe0)(this, value); } // 0x1acabe0
        int32_t get_timeSamples() { return il2cpp::call<int32_t(*)(AudioSource*)>(0x1aca570)(this); } // 0x1aca570
        void set_timeSamples(int32_t value) { return il2cpp::call<void(*)(AudioSource*, int32_t)>(0x1acabb0)(this, value); } // 0x1acabb0
        UnityEngine::AudioClip* get_clip() { return il2cpp::call<UnityEngine::AudioClip*(*)(AudioSource*)>(0x1aca090)(this); } // 0x1aca090
        void set_clip(UnityEngine::AudioClip* value) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioClip*)>(0x1aca6c0)(this, value); } // 0x1aca6c0
        UnityEngine::Audio::AudioMixerGroup* get_outputAudioMixerGroup() { return il2cpp::call<UnityEngine::Audio::AudioMixerGroup*(*)(AudioSource*)>(0x1aca330)(this); } // 0x1aca330
        void set_outputAudioMixerGroup(UnityEngine::Audio::AudioMixerGroup* value) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::Audio::AudioMixerGroup*)>(0x1aca930)(this, value); } // 0x1aca930
        void Play() { return il2cpp::call<void(*)(AudioSource*)>(0x1ac9dd0)(this); } // 0x1ac9dd0
        void Play(uint64_t delay) { return il2cpp::call<void(*)(AudioSource*, uint64_t)>(0x1ac9b20)(this, delay); } // 0x1ac9b20
        void PlayDelayed(float delay) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1ac9ab0)(this, delay); } // 0x1ac9ab0
        void PlayScheduled(Typeid_13 time) { return il2cpp::call<void(*)(AudioSource*, Typeid_13)>(0x1ac9d30)(this, time); } // 0x1ac9d30
        void PlayOneShot(UnityEngine::AudioClip* clip) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioClip*)>(0x1ac9b90)(this, clip); } // 0x1ac9b90
        void PlayOneShot(UnityEngine::AudioClip* clip, float volumeScale) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioClip*, float)>(0x1ac9c60)(this, clip, volumeScale); } // 0x1ac9c60
        void SetScheduledStartTime(Typeid_13 time) { return il2cpp::call<void(*)(AudioSource*, Typeid_13)>(0x1ac9ef0)(this, time); } // 0x1ac9ef0
        void SetScheduledEndTime(Typeid_13 time) { return il2cpp::call<void(*)(AudioSource*, Typeid_13)>(0x1ac9eb0)(this, time); } // 0x1ac9eb0
        void Stop() { return il2cpp::call<void(*)(AudioSource*)>(0x1ac9f70)(this); } // 0x1ac9f70
        void Pause() { return il2cpp::call<void(*)(AudioSource*)>(0x1ac97f0)(this); } // 0x1ac97f0
        void UnPause() { return il2cpp::call<void(*)(AudioSource*)>(0x1ac9fd0)(this); } // 0x1ac9fd0
        bool get_isPlaying() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca150)(this); } // 0x1aca150
        bool get_isVirtual() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca180)(this); } // 0x1aca180
        void PlayClipAtPoint(UnityEngine::AudioClip* clip, UnityEngine::Vector3 position) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioClip*, UnityEngine::Vector3)>(0x1ac9a80)(this, clip, position); } // 0x1ac9a80
        void PlayClipAtPoint(UnityEngine::AudioClip* clip, UnityEngine::Vector3 position, float volume) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioClip*, UnityEngine::Vector3, float)>(0x1ac9820)(this, clip, position, volume); } // 0x1ac9820
        bool get_loop() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca1b0)(this); } // 0x1aca1b0
        void set_loop(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca790)(this, value); } // 0x1aca790
        bool get_ignoreListenerVolume() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca120)(this); } // 0x1aca120
        void set_ignoreListenerVolume(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca760)(this, value); } // 0x1aca760
        bool get_playOnAwake() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca390)(this); } // 0x1aca390
        void set_playOnAwake(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca9a0)(this, value); } // 0x1aca9a0
        bool get_ignoreListenerPause() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca0f0)(this); } // 0x1aca0f0
        void set_ignoreListenerPause(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca730)(this, value); } // 0x1aca730
        UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode() { return il2cpp::call<UnityEngine::AudioVelocityUpdateMode(*)(AudioSource*)>(0x1aca5d0)(this); } // 0x1aca5d0
        void set_velocityUpdateMode(UnityEngine::AudioVelocityUpdateMode value) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioVelocityUpdateMode)>(0x1acac20)(this, value); } // 0x1acac20
        float get_panStereo() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca360)(this); } // 0x1aca360
        void set_panStereo(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1aca960)(this, value); } // 0x1aca960
        float get_spatialBlend() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca4b0)(this); } // 0x1aca4b0
        void set_spatialBlend(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1acaad0)(this, value); } // 0x1acaad0
        bool get_spatialize() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca510)(this); } // 0x1aca510
        void set_spatialize(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1acab40)(this, value); } // 0x1acab40
        bool get_spatializePostEffects() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca4e0)(this); } // 0x1aca4e0
        void set_spatializePostEffects(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1acab10)(this, value); } // 0x1acab10
        void SetCustomCurve(UnityEngine::AudioSourceCurveType type, UnityEngine::AnimationCurve* curve) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioSourceCurveType, UnityEngine::AnimationCurve*)>(0x1ac9e40)(this, type, curve); } // 0x1ac9e40
        UnityEngine::AnimationCurve* GetCustomCurve(UnityEngine::AudioSourceCurveType type) { return il2cpp::call<UnityEngine::AnimationCurve*(*)(AudioSource*, UnityEngine::AudioSourceCurveType)>(0x1ac9620)(this, type); } // 0x1ac9620
        float get_reverbZoneMix() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca3f0)(this); } // 0x1aca3f0
        void set_reverbZoneMix(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1acaa00)(this, value); } // 0x1acaa00
        bool get_bypassEffects() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca000)(this); } // 0x1aca000
        void set_bypassEffects(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca630)(this, value); } // 0x1aca630
        bool get_bypassListenerEffects() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca030)(this); } // 0x1aca030
        void set_bypassListenerEffects(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca660)(this, value); } // 0x1aca660
        bool get_bypassReverbZones() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca060)(this); } // 0x1aca060
        void set_bypassReverbZones(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca690)(this, value); } // 0x1aca690
        float get_dopplerLevel() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca0c0)(this); } // 0x1aca0c0
        void set_dopplerLevel(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1aca6f0)(this, value); } // 0x1aca6f0
        float get_spread() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca540)(this); } // 0x1aca540
        void set_spread(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1acab70)(this, value); } // 0x1acab70
        int32_t get_priority() { return il2cpp::call<int32_t(*)(AudioSource*)>(0x1aca3c0)(this); } // 0x1aca3c0
        void set_priority(int32_t value) { return il2cpp::call<void(*)(AudioSource*, int32_t)>(0x1aca9d0)(this, value); } // 0x1aca9d0
        bool get_mute() { return il2cpp::call<bool(*)(AudioSource*)>(0x1aca300)(this); } // 0x1aca300
        void set_mute(bool value) { return il2cpp::call<void(*)(AudioSource*, bool)>(0x1aca900)(this, value); } // 0x1aca900
        float get_minDistance() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca270)(this); } // 0x1aca270
        void set_minDistance(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1aca860)(this, value); } // 0x1aca860
        float get_maxDistance() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca1e0)(this); } // 0x1aca1e0
        void set_maxDistance(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1aca7c0)(this, value); } // 0x1aca7c0
        UnityEngine::AudioRolloffMode get_rolloffMode() { return il2cpp::call<UnityEngine::AudioRolloffMode(*)(AudioSource*)>(0x1aca480)(this); } // 0x1aca480
        void set_rolloffMode(UnityEngine::AudioRolloffMode value) { return il2cpp::call<void(*)(AudioSource*, UnityEngine::AudioRolloffMode)>(0x1acaaa0)(this, value); } // 0x1acaaa0
        cs::array<float>* GetOutputData(int32_t numSamples, int32_t channel) { return il2cpp::call<cs::array<float>*(*)(AudioSource*, int32_t, int32_t)>(0x1ac9680)(this, numSamples, channel); } // 0x1ac9680
        void GetOutputData(cs::array<float>* samples, int32_t channel) { return il2cpp::call<void(*)(AudioSource*, cs::array<float>*, int32_t)>(0x1ac9650)(this, samples, channel); } // 0x1ac9650
        cs::array<float>* GetSpectrumData(int32_t numSamples, int32_t channel, UnityEngine::FFTWindow window) { return il2cpp::call<cs::array<float>*(*)(AudioSource*, int32_t, int32_t, UnityEngine::FFTWindow)>(0x1ac9780)(this, numSamples, channel, window); } // 0x1ac9780
        void GetSpectrumData(cs::array<float>* samples, int32_t channel, UnityEngine::FFTWindow window) { return il2cpp::call<void(*)(AudioSource*, cs::array<float>*, int32_t, UnityEngine::FFTWindow)>(0x1ac9740)(this, samples, channel, window); } // 0x1ac9740
        float get_minVolume() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca2a0)(this); } // 0x1aca2a0
        void set_minVolume(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1aca8a0)(this, value); } // 0x1aca8a0
        float get_maxVolume() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca210)(this); } // 0x1aca210
        void set_maxVolume(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1aca800)(this, value); } // 0x1aca800
        float get_rolloffFactor() { return il2cpp::call<float(*)(AudioSource*)>(0x1aca420)(this); } // 0x1aca420
        void set_rolloffFactor(float value) { return il2cpp::call<void(*)(AudioSource*, float)>(0x1acaa40)(this, value); } // 0x1acaa40
        bool SetSpatializerFloat(int32_t index, float value) { return il2cpp::call<bool(*)(AudioSource*, int32_t, float)>(0x1ac9f30)(this, index, value); } // 0x1ac9f30
        bool GetSpatializerFloat(int32_t index, float value) { return il2cpp::call<bool(*)(AudioSource*, int32_t, float)>(0x1ac9710)(this, index, value); } // 0x1ac9710
        bool GetAmbisonicDecoderFloat(int32_t index, float value) { return il2cpp::call<bool(*)(AudioSource*, int32_t, float)>(0x1ac95f0)(this, index, value); } // 0x1ac95f0
        bool SetAmbisonicDecoderFloat(int32_t index, float value) { return il2cpp::call<bool(*)(AudioSource*, int32_t, float)>(0x1ac9e00)(this, index, value); } // 0x1ac9e00
        void ctor() { return il2cpp::call<void(*)(AudioSource*)>(0xee3f90)(this); } // 0xee3f90

    };

}
namespace ark {

        template<> struct meta_statics<UnityEngine::AudioSource> {
        };

}

