// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t {
	MagnitudeSpectrum = 0,
	PowerSpectrum = 1,
	EAudioSpectrumType_MAX = 2,
};

// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t {
	None = 0,
	Hamming = 1,
	Hann = 2,
	Blackman = 3,
	EFFTWindowType_MAX = 4,
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t {
	NearestNeighbor = 0,
	Linear = 1,
	Quadratic = 2,
	EFFTPeakInterpolationMethod_MAX = 3,
};

// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t {
	DefaultSize = 0,
	Min = 1,
	Small = 2,
	Medium = 3,
	Large = 4,
	Max = 5,
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t {
	Disabled = 0,
	Average = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsChannelLinkMode_MAX = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t {
	MeanSquared = 0,
	RootMeanSquared = 1,
	Peak = 2,
	Count = 3,
	ESubmixEffectDynamicsPeakMode_MAX = 4,
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t {
	Compressor = 0,
	Limiter = 1,
	Expander = 2,
	Gate = 3,
	Count = 4,
	ESubmixEffectDynamicsProcessorType_MAX = 5,
};

// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent {

public:

	char bAutoDestroy : 1; // 0x1F0 (1)
	char bStopWhenOwnerDestroyed : 1; // 0x1F0 (1)
	char bAllowSpatialization : 1; // 0x1F0 (1)
	char bOverrideAttenuation : 1; // 0x1F0 (1)
	char pad_1F0_4 : 4; // 0x1F0 (1)
	char bOutputToBusOnly : 1; // 0x1F4 (1)
	char pad_1F1_1 : 7; // 0x1F1 (1)
	struct USoundAttenuation AttenuationSettings; // 0x1F8 (8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x200 (928)
	struct USoundConcurrency ConcurrencySettings; // 0x5A0 (8)
	struct TSet<struct USoundConcurrency> ConcurrencySet; // 0x5A8 (80)
	struct USoundClass SoundClass; // 0x5F8 (8)
	struct USoundEffectSourcePresetChain SourceEffectChain; // 0x600 (8)
	struct USoundSubmixBase SoundSubmix; // 0x608 (8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x610 (16)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x620 (16)
	struct FSoundModulation Modulation; // 0x630 (16)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640 (16)
	char bIsUISound : 1; // 0x650 (1)
	char pad_64A_1 : 7; // 0x64A (1)
	char pad_64B_0 : 1; // 0x64B (1)
	char bIsPreviewSound : 1; // 0x650 (1)
	char pad_64B_2 : 6; // 0x64B (1)
	int32_t EnvelopeFollowerAttackTime; // 0x654 (4)
	int32_t EnvelopeFollowerReleaseTime; // 0x658 (4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x660 (16)
	struct USynthSound Synth; // 0x690 (8)
	struct UAudioComponent AudioComponent; // 0x698 (8)

	void Stop(); // Function AudioMixer.SynthComponent.Stop(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A81060>
	void Start(); // Function AudioMixer.SynthComponent.Start(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80D80>
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80D00>
	void SetSubmixSend(struct USoundSubmixBase Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80C30>
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A7FE70>
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset {

public:

	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xB8 (80)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A807A0>
	void SetExternalSubmix(struct USoundSubmix Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80720>
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset {

public:

	struct FSubmixEffectSubmixEQSettings Settings; // 0x78 (16)

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x12723C0>
};

// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset {

public:

	struct FSubmixEffectReverbSettings Settings; // 0x9C (52)

	void SetSettingsWithReverbEffect(struct UReverbEffect InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80B30>
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80970>
};

// Class AudioMixer.SubmixEffectReverbFastPreset
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset {

public:

	struct FSubmixEffectReverbFastSettings Settings; // 0xA0 (56)

	void SetSettingsWithReverbEffect(struct UReverbEffect InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A80A30>
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A808B0>
};

// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural {

public:

	struct USynthComponent OwningSynthComponent; // 0x360 (8)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
struct FSubmixEffectDynamicsProcessorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0 (1)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x1 (1)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2 (1)
	float InputGainDb; // 0x4 (4)
	float ThresholdDb; // 0x8 (4)
	float Ratio; // 0xC (4)
	float KneeBandwidthDb; // 0x10 (4)
	float LookAheadMsec; // 0x14 (4)
	float AttackTimeMsec; // 0x18 (4)
	float ReleaseTimeMsec; // 0x1C (4)
	struct USoundSubmix ExternalSubmix; // 0x20 (8)
	char bChannelLinked : 1; // 0x28 (1)
	char pad_27_1 : 7; // 0x27 (1)
	char pad_28_0 : 1; // 0x28 (1)
	char bAnalogMode : 1; // 0x28 (1)
	char bKeyAudition : 1; // 0x28 (1)
	char pad_28_3 : 5; // 0x28 (1)
	float KeyGainDb; // 0x2C (4)
	float OutputGainDb; // 0x30 (4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34 (12)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40 (12)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0 (1)
	char pad_0_1 : 7; // 0x0 (1)
	float Cutoff; // 0x4 (4)
	float GainDb; // 0x8 (4)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
struct FSubmixEffectSubmixEQSettings {
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x0 (16)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
struct FSubmixEffectEQBand {
	float Frequency; // 0x0 (4)
	float Bandwidth; // 0x4 (4)
	float GainDb; // 0x8 (4)
	char bEnabled : 1; // 0xC (1)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
struct FSubmixEffectReverbSettings {
	float Density; // 0x0 (4)
	float Diffusion; // 0x4 (4)
	float Gain; // 0x8 (4)
	float GainHF; // 0xC (4)
	float DecayTime; // 0x10 (4)
	float DecayHFRatio; // 0x14 (4)
	float ReflectionsGain; // 0x18 (4)
	float ReflectionsDelay; // 0x1C (4)
	float LateGain; // 0x20 (4)
	float LateDelay; // 0x24 (4)
	float AirAbsorptionGainHF; // 0x28 (4)
	float WetLevel; // 0x2C (4)
	float DryLevel; // 0x30 (4)
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
struct FSubmixEffectReverbFastSettings {
	bool bBypass; // 0x0 (1)
	float Density; // 0x4 (4)
	float Diffusion; // 0x8 (4)
	float Gain; // 0xC (4)
	float GainHF; // 0x10 (4)
	float DecayTime; // 0x14 (4)
	float DecayHFRatio; // 0x18 (4)
	float ReflectionsGain; // 0x1C (4)
	float ReflectionsDelay; // 0x20 (4)
	float LateGain; // 0x24 (4)
	float LateDelay; // 0x28 (4)
	float AirAbsorptionGainHF; // 0x2C (4)
	float WetLevel; // 0x30 (4)
	float DryLevel; // 0x34 (4)
};

// Function AudioMixer.SynthComponent.Stop
inline void USynthComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.Start
inline void USynthComponent::Start() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.Start");

	struct Start_Params {
		
	}; Start_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.SetVolumeMultiplier
inline void USynthComponent::SetVolumeMultiplier(float VolumeMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetVolumeMultiplier");

	struct SetVolumeMultiplier_Params {
		float VolumeMultiplier;
	}; SetVolumeMultiplier_Params Params;

	Params.VolumeMultiplier = VolumeMultiplier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.SetSubmixSend
inline void USynthComponent::SetSubmixSend(struct USoundSubmixBase Submix, float SendLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.SetSubmixSend");

	struct SetSubmixSend_Params {
		struct USoundSubmixBase Submix;
		float SendLevel;
	}; SetSubmixSend_Params Params;

	Params.Submix = Submix;
	Params.SendLevel = SendLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SynthComponent.IsPlaying
inline bool USynthComponent::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SynthComponent.IsPlaying");

	struct IsPlaying_Params {
		
		bool ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings
inline void USubmixEffectDynamicsProcessorPreset::SetSettings(struct FSubmixEffectDynamicsProcessorSettings& Settings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings");

	struct SetSettings_Params {
		struct FSubmixEffectDynamicsProcessorSettings& Settings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Settings = Params.Settings;

}

// Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix
inline void USubmixEffectDynamicsProcessorPreset::SetExternalSubmix(struct USoundSubmix Submix) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix");

	struct SetExternalSubmix_Params {
		struct USoundSubmix Submix;
	}; SetExternalSubmix_Params Params;

	Params.Submix = Submix;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings
inline void USubmixEffectSubmixEQPreset::SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings");

	struct SetSettings_Params {
		struct FSubmixEffectSubmixEQSettings& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect
inline void USubmixEffectReverbPreset::SetSettingsWithReverbEffect(struct UReverbEffect InReverbEffect, float WetLevel, float DryLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect");

	struct SetSettingsWithReverbEffect_Params {
		struct UReverbEffect InReverbEffect;
		float WetLevel;
		float DryLevel;
	}; SetSettingsWithReverbEffect_Params Params;

	Params.InReverbEffect = InReverbEffect;
	Params.WetLevel = WetLevel;
	Params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SubmixEffectReverbPreset.SetSettings
inline void USubmixEffectReverbPreset::SetSettings(struct FSubmixEffectReverbSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbPreset.SetSettings");

	struct SetSettings_Params {
		struct FSubmixEffectReverbSettings& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect
inline void USubmixEffectReverbFastPreset::SetSettingsWithReverbEffect(struct UReverbEffect InReverbEffect, float WetLevel, float DryLevel) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect");

	struct SetSettingsWithReverbEffect_Params {
		struct UReverbEffect InReverbEffect;
		float WetLevel;
		float DryLevel;
	}; SetSettingsWithReverbEffect_Params Params;

	Params.InReverbEffect = InReverbEffect;
	Params.WetLevel = WetLevel;
	Params.DryLevel = DryLevel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings
inline void USubmixEffectReverbFastPreset::SetSettings(struct FSubmixEffectReverbFastSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings");

	struct SetSettings_Params {
		struct FSubmixEffectReverbFastSettings& InSettings;
	}; SetSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

