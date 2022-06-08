// Class GeometryCache.GeometryCache
class UGeometryCache : public Object {

public:

	struct TArray<struct UMaterialInterface> Materials; // 0x30 (16)
	struct TArray<struct UGeometryCacheTrack> Tracks; // 0x40 (16)
	int32_t StartFrame; // 0x60 (4)
	int32_t EndFrame; // 0x64 (4)
};

// Class GeometryCache.GeometryCacheActor
class AGeometryCacheActor : public UActor {

public:

	struct UGeometryCacheComponent GeometryCacheComponent; // 0x220 (8)

	struct UGeometryCacheComponent GetGeometryCacheComponent(); // Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF23050>
};

// Class GeometryCache.GeometryCacheCodecBase
class UGeometryCacheCodecBase : public Object {

public:

	struct TArray<int32_t> TopologyRanges; // 0x28 (16)
};

// Class GeometryCache.GeometryCacheCodecRaw
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase {

public:

	int32_t DummyProperty; // 0x38 (4)
};

// Class GeometryCache.GeometryCacheComponent
class UGeometryCacheComponent : public UMeshComponent {

public:

	struct UGeometryCache GeometryCache; // 0x430 (8)
	bool bRunning; // 0x438 (1)
	bool bLooping; // 0x439 (1)
	float StartTimeOffset; // 0x43C (4)
	float PlaybackSpeed; // 0x440 (4)
	int32_t NumTracks; // 0x444 (4)
	float ElapsedTime; // 0x448 (4)
	float Duration; // 0x47C (4)
	bool bManualTick; // 0x480 (1)

	void TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping); // Function GeometryCache.GeometryCacheComponent.TickAtThisTime(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF235A0>
	void Stop(); // Function GeometryCache.GeometryCacheComponent.Stop(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23580>
	void SetStartTimeOffset(float NewStartTimeOffset); // Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23500>
	void SetPlaybackSpeed(float NewPlaybackSpeed); // Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23480>
	void SetLooping(bool bNewLooping); // Function GeometryCache.GeometryCacheComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23300>
	bool SetGeometryCache(struct UGeometryCache NewGeomCache); // Function GeometryCache.GeometryCacheComponent.SetGeometryCache(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23270>
	void PlayReversedFromEnd(); // Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23250>
	void PlayReversed(); // Function GeometryCache.GeometryCacheComponent.PlayReversed(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23230>
	void PlayFromStart(); // Function GeometryCache.GeometryCacheComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF23210>
	void Play(); // Function GeometryCache.GeometryCacheComponent.Play(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF231F0>
	void Pause(); // Function GeometryCache.GeometryCacheComponent.Pause(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF231D0>
	bool IsPlayingReversed(); // Function GeometryCache.GeometryCacheComponent.IsPlayingReversed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF231A0>
	bool IsPlaying(); // Function GeometryCache.GeometryCacheComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF23170>
	bool IsLooping(); // Function GeometryCache.GeometryCacheComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF23140>
	float GetStartTimeOffset(); // Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF23110>
	float GetPlaybackSpeed(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF230E0>
	float GetPlaybackDirection(); // Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF230B0>
	int32_t GetNumberOfFrames(); // Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF23080>
	float GetDuration(); // Function GeometryCache.GeometryCacheComponent.GetDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF23020>
	float GetAnimationTime(); // Function GeometryCache.GeometryCacheComponent.GetAnimationTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xF22FF0>
};

// Class GeometryCache.GeometryCacheTrack
class UGeometryCacheTrack : public Object {

public:

	float Duration; // 0x28 (4)
};

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {

public:

	uint32_t NumMeshSamples; // 0x58 (4)

	void AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime); // Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample(Final|Native|Public|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0xF22EC0>
};

// Class GeometryCache.GeometryCacheTrackStreamable
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack {

public:

	struct UGeometryCacheCodecBase Codec; // 0x58 (8)
	float StartSampleTime; // 0xC8 (4)
};

// Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent
inline struct UGeometryCacheComponent AGeometryCacheActor::GetGeometryCacheComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheActor.GetGeometryCacheComponent");

	struct GetGeometryCacheComponent_Params {
		
		struct UGeometryCacheComponent ReturnValue;

	}; GetGeometryCacheComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.TickAtThisTime
inline void UGeometryCacheComponent::TickAtThisTime(float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.TickAtThisTime");

	struct TickAtThisTime_Params {
		float Time;
		bool bInIsRunning;
		bool bInBackwards;
		bool bInIsLooping;
	}; TickAtThisTime_Params Params;

	Params.Time = Time;
	Params.bInIsRunning = bInIsRunning;
	Params.bInBackwards = bInBackwards;
	Params.bInIsLooping = bInIsLooping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.Stop
inline void UGeometryCacheComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset
inline void UGeometryCacheComponent::SetStartTimeOffset(float NewStartTimeOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetStartTimeOffset");

	struct SetStartTimeOffset_Params {
		float NewStartTimeOffset;
	}; SetStartTimeOffset_Params Params;

	Params.NewStartTimeOffset = NewStartTimeOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed
inline void UGeometryCacheComponent::SetPlaybackSpeed(float NewPlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetPlaybackSpeed");

	struct SetPlaybackSpeed_Params {
		float NewPlaybackSpeed;
	}; SetPlaybackSpeed_Params Params;

	Params.NewPlaybackSpeed = NewPlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetLooping
inline void UGeometryCacheComponent::SetLooping(bool bNewLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetLooping");

	struct SetLooping_Params {
		bool bNewLooping;
	}; SetLooping_Params Params;

	Params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.SetGeometryCache
inline bool UGeometryCacheComponent::SetGeometryCache(struct UGeometryCache NewGeomCache) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.SetGeometryCache");

	struct SetGeometryCache_Params {
		struct UGeometryCache NewGeomCache;
		bool ReturnValue;

	}; SetGeometryCache_Params Params;

	Params.NewGeomCache = NewGeomCache;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd
inline void UGeometryCacheComponent::PlayReversedFromEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversedFromEnd");

	struct PlayReversedFromEnd_Params {
		
	}; PlayReversedFromEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.PlayReversed
inline void UGeometryCacheComponent::PlayReversed() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayReversed");

	struct PlayReversed_Params {
		
	}; PlayReversed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.PlayFromStart
inline void UGeometryCacheComponent::PlayFromStart() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.PlayFromStart");

	struct PlayFromStart_Params {
		
	}; PlayFromStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.Play
inline void UGeometryCacheComponent::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Play");

	struct Play_Params {
		
	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.Pause
inline void UGeometryCacheComponent::Pause() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.Pause");

	struct Pause_Params {
		
	}; Pause_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCache.GeometryCacheComponent.IsPlayingReversed
inline bool UGeometryCacheComponent::IsPlayingReversed() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlayingReversed");

	struct IsPlayingReversed_Params {
		
		bool ReturnValue;

	}; IsPlayingReversed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.IsPlaying
inline bool UGeometryCacheComponent::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsPlaying");

	struct IsPlaying_Params {
		
		bool ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.IsLooping
inline bool UGeometryCacheComponent::IsLooping() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.IsLooping");

	struct IsLooping_Params {
		
		bool ReturnValue;

	}; IsLooping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset
inline float UGeometryCacheComponent::GetStartTimeOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetStartTimeOffset");

	struct GetStartTimeOffset_Params {
		
		float ReturnValue;

	}; GetStartTimeOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed
inline float UGeometryCacheComponent::GetPlaybackSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackSpeed");

	struct GetPlaybackSpeed_Params {
		
		float ReturnValue;

	}; GetPlaybackSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection
inline float UGeometryCacheComponent::GetPlaybackDirection() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetPlaybackDirection");

	struct GetPlaybackDirection_Params {
		
		float ReturnValue;

	}; GetPlaybackDirection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames
inline int32_t UGeometryCacheComponent::GetNumberOfFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetNumberOfFrames");

	struct GetNumberOfFrames_Params {
		
		int32_t ReturnValue;

	}; GetNumberOfFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetDuration
inline float UGeometryCacheComponent::GetDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetDuration");

	struct GetDuration_Params {
		
		float ReturnValue;

	}; GetDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheComponent.GetAnimationTime
inline float UGeometryCacheComponent::GetAnimationTime() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheComponent.GetAnimationTime");

	struct GetAnimationTime_Params {
		
		float ReturnValue;

	}; GetAnimationTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample
inline void UGeometryCacheTrack_FlipbookAnimation::AddMeshSample(struct FGeometryCacheMeshData& MeshData, float SampleTime) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCache.GeometryCacheTrack_FlipbookAnimation.AddMeshSample");

	struct AddMeshSample_Params {
		struct FGeometryCacheMeshData& MeshData;
		float SampleTime;
	}; AddMeshSample_Params Params;

	Params.SampleTime = SampleTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MeshData = Params.MeshData;

}

