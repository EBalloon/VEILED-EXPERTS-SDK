// Enum MovieSceneCapture.EHDRCaptureGamut
enum class EHDRCaptureGamut : uint8_t {
	HCGM_Rec709 = 0,
	HCGM_P3DCI = 1,
	HCGM_Rec2020 = 2,
	HCGM_ACES = 3,
	HCGM_ACEScg = 4,
	HCGM_Linear = 5,
	HCGM_MAX = 6,
};

// Enum MovieSceneCapture.EMovieSceneCaptureProtocolState
enum class EMovieSceneCaptureProtocolState : uint8_t {
	Idle = 0,
	Initialized = 1,
	Capturing = 2,
	Finalizing = 3,
	EMovieSceneCaptureProtocolState_MAX = 4,
};

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
class UMovieSceneCaptureProtocolBase : public Object {

public:

	enum class EMovieSceneCaptureProtocolState State; // 0x50 (1)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B84650>
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25EB200>
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {

public:

	struct FString Filename; // 0x58 (16)
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {

public:

	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58 (16)
	bool bCaptureFramesInHDR; // 0x68 (1)
	int32_t HDRCompressionQuality; // 0x6C (4)
	enum class EHDRCaptureGamut CaptureGamut; // 0x70 (1)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78 (24)
	bool bDisableScreenPercentage; // 0x90 (1)
	struct UMaterialInterface PostProcessingMaterialPtr; // 0x98 (8)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol {

public:

	int32_t CompressionQuality; // 0xD8 (4)
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol {

public:

	bool bCompressed; // 0xD8 (1)
	enum class EHDRCaptureGamut CaptureGamut; // 0xD9 (1)
};

// Class MovieSceneCapture.MovieSceneCapture
class UMovieSceneCapture : public Object {

public:

	struct FSoftClassPath ImageCaptureProtocolType; // 0x38 (24)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50 (24)
	struct UMovieSceneImageCaptureProtocolBase ImageCaptureProtocol; // 0x68 (8)
	struct UMovieSceneAudioCaptureProtocolBase AudioCaptureProtocol; // 0x70 (8)
	struct FMovieSceneCaptureSettings Settings; // 0x78 (112)
	bool bUseSeparateProcess; // 0xE8 (1)
	bool bCloseEditorWhenCaptureStarts; // 0xE9 (1)
	struct FString AdditionalCommandLineArguments; // 0xF0 (16)
	struct FString InheritedCommandLineArguments; // 0x100 (16)

	void SetImageCaptureProtocolType(struct UClass* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B848B0>
	void SetAudioCaptureProtocolType(struct UClass* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84830>
	struct UMovieSceneCaptureProtocolBase GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84600>
	struct UMovieSceneCaptureProtocolBase GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84560>
};

// Class MovieSceneCapture.LevelCapture
class ULevelCapture : public UMovieSceneCapture {

public:

	bool bAutoStartCapture; // 0x220 (1)
	struct FGuid PrerequisiteActorId; // 0x22C (16)
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {

public:

	struct UWorld World; // 0x58 (8)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84A20>
	void StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84930>
	void ResolveBuffer(struct UTexture Buffer, struct FCapturedPixelsID& BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B846F0>
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup(Native|Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x2B846C0>
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived(Event|Protected|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize(Native|Event|Protected|BlueprintEvent|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B84690>
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B845E0>
	struct FString GenerateFilename(struct FFrameMetrics& InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename(Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2B84290>
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol {

public:

	enum class EDesiredImageFormat Format; // 0xD8 (1)
	bool bEnableCompression; // 0xD9 (1)
	int32_t CompressionQuality; // 0xDC (4)

	void WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84A40>
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B844E0>
	struct FString GenerateFilenameForBuffer(struct UTexture Buffer, struct FCapturedPixelsID& StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2B84380>
};

// Class MovieSceneCapture.VideoCaptureProtocol
class UVideoCaptureProtocol : public UFrameGrabberProtocol {

public:

	bool bUseCompression; // 0x68 (1)
	float CompressionQuality; // 0x6C (4)
};

// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
struct FCompositionGraphCapturePasses {
	struct TArray<struct FString> Value; // 0x0 (16)
};

// ScriptStruct MovieSceneCapture.FrameMetrics
struct FFrameMetrics {
	float TotalElapsedTime; // 0x0 (4)
	float FrameDelta; // 0x4 (4)
	int32_t FrameNumber; // 0x8 (4)
	int32_t NumDroppedFrames; // 0xC (4)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
struct FMovieSceneCaptureSettings {
	struct FDirectoryPath OutputDirectory; // 0x0 (16)
	struct UClass* GameModeOverride; // 0x10 (8)
	struct FString OutputFormat; // 0x18 (16)
	bool bOverwriteExisting; // 0x28 (1)
	bool bUseRelativeFrameNumbers; // 0x29 (1)
	int32_t HandleFrames; // 0x2C (4)
	struct FString MovieExtension; // 0x30 (16)
	char ZeroPadFrameNumbers; // 0x40 (1)
	struct FFrameRate FrameRate; // 0x44 (8)
	bool bUseCustomFrameRate; // 0x4C (1)
	struct FFrameRate CustomFrameRate; // 0x50 (8)
	struct FCaptureResolution Resolution; // 0x58 (8)
	bool bEnableTextureStreaming; // 0x60 (1)
	bool bCinematicEngineScalability; // 0x61 (1)
	bool bCinematicMode; // 0x62 (1)
	bool bAllowMovement; // 0x63 (1)
	bool bAllowTurning; // 0x64 (1)
	bool bShowPlayer; // 0x65 (1)
	bool bShowHUD; // 0x66 (1)
	bool bUsePathTracer; // 0x67 (1)
	int32_t PathTracerSamplePerPixel; // 0x68 (4)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
struct FCaptureResolution {
	int32_t ResX; // 0x0 (4)
	int32_t ResY; // 0x4 (4)
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
struct FCapturedPixelsID {
	struct TMap<struct FName, struct FName> Identifiers; // 0x0 (80)
};

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing
inline bool UMovieSceneCaptureProtocolBase::IsCapturing() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing");

	struct IsCapturing_Params {
		
		bool ReturnValue;

	}; IsCapturing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState
inline enum class EMovieSceneCaptureProtocolState UMovieSceneCaptureProtocolBase::GetState() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState");

	struct GetState_Params {
		
		enum class EMovieSceneCaptureProtocolState ReturnValue;

	}; GetState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType
inline void UMovieSceneCapture::SetImageCaptureProtocolType(struct UClass* ProtocolType) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType");

	struct SetImageCaptureProtocolType_Params {
		struct UClass* ProtocolType;
	}; SetImageCaptureProtocolType_Params Params;

	Params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType
inline void UMovieSceneCapture::SetAudioCaptureProtocolType(struct UClass* ProtocolType) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType");

	struct SetAudioCaptureProtocolType_Params {
		struct UClass* ProtocolType;
	}; SetAudioCaptureProtocolType_Params Params;

	Params.ProtocolType = ProtocolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol
inline struct UMovieSceneCaptureProtocolBase UMovieSceneCapture::GetImageCaptureProtocol() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol");

	struct GetImageCaptureProtocol_Params {
		
		struct UMovieSceneCaptureProtocolBase ReturnValue;

	}; GetImageCaptureProtocol_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol
inline struct UMovieSceneCaptureProtocolBase UMovieSceneCapture::GetAudioCaptureProtocol() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol");

	struct GetAudioCaptureProtocol_Params {
		
		struct UMovieSceneCaptureProtocolBase ReturnValue;

	}; GetAudioCaptureProtocol_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels
inline void UUserDefinedCaptureProtocol::StopCapturingFinalPixels() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels");

	struct StopCapturingFinalPixels_Params {
		
	}; StopCapturingFinalPixels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels
inline void UUserDefinedCaptureProtocol::StartCapturingFinalPixels(struct FCapturedPixelsID& StreamID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels");

	struct StartCapturingFinalPixels_Params {
		struct FCapturedPixelsID& StreamID;
	}; StartCapturingFinalPixels_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StreamID = Params.StreamID;

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer
inline void UUserDefinedCaptureProtocol::ResolveBuffer(struct UTexture Buffer, struct FCapturedPixelsID& BufferID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer");

	struct ResolveBuffer_Params {
		struct UTexture Buffer;
		struct FCapturedPixelsID& BufferID;
	}; ResolveBuffer_Params Params;

	Params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BufferID = Params.BufferID;

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp
inline void UUserDefinedCaptureProtocol::OnWarmUp() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp");

	struct OnWarmUp_Params {
		
	}; OnWarmUp_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick
inline void UUserDefinedCaptureProtocol::OnTick() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick");

	struct OnTick_Params {
		
	}; OnTick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture
inline void UUserDefinedCaptureProtocol::OnStartCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture");

	struct OnStartCapture_Params {
		
	}; OnStartCapture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup
inline bool UUserDefinedCaptureProtocol::OnSetup() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup");

	struct OnSetup_Params {
		
		bool ReturnValue;

	}; OnSetup_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick
inline void UUserDefinedCaptureProtocol::OnPreTick() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick");

	struct OnPreTick_Params {
		
	}; OnPreTick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived
inline void UUserDefinedCaptureProtocol::OnPixelsReceived(struct FCapturedPixels& Pixels, struct FCapturedPixelsID& ID, struct FFrameMetrics FrameMetrics) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived");

	struct OnPixelsReceived_Params {
		struct FCapturedPixels& Pixels;
		struct FCapturedPixelsID& ID;
		struct FFrameMetrics FrameMetrics;
	}; OnPixelsReceived_Params Params;

	Params.FrameMetrics = FrameMetrics;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Pixels = Params.Pixels;
	ID = Params.ID;

}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture
inline void UUserDefinedCaptureProtocol::OnPauseCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture");

	struct OnPauseCapture_Params {
		
	}; OnPauseCapture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize
inline void UUserDefinedCaptureProtocol::OnFinalize() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize");

	struct OnFinalize_Params {
		
	}; OnFinalize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame
inline void UUserDefinedCaptureProtocol::OnCaptureFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame");

	struct OnCaptureFrame_Params {
		
	}; OnCaptureFrame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize
inline bool UUserDefinedCaptureProtocol::OnCanFinalize() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize");

	struct OnCanFinalize_Params {
		
		bool ReturnValue;

	}; OnCanFinalize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize
inline void UUserDefinedCaptureProtocol::OnBeginFinalize() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize");

	struct OnBeginFinalize_Params {
		
	}; OnBeginFinalize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics
inline struct FFrameMetrics UUserDefinedCaptureProtocol::GetCurrentFrameMetrics() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics");

	struct GetCurrentFrameMetrics_Params {
		
		struct FFrameMetrics ReturnValue;

	}; GetCurrentFrameMetrics_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename
inline struct FString UUserDefinedCaptureProtocol::GenerateFilename(struct FFrameMetrics& InFrameMetrics) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename");

	struct GenerateFilename_Params {
		struct FFrameMetrics& InFrameMetrics;
		struct FString ReturnValue;

	}; GenerateFilename_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InFrameMetrics = Params.InFrameMetrics;


	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk
inline void UUserDefinedImageCaptureProtocol::WriteImageToDisk(struct FCapturedPixels& PixelData, struct FCapturedPixelsID& StreamID, struct FFrameMetrics& FrameMetrics, bool bCopyImageData) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk");

	struct WriteImageToDisk_Params {
		struct FCapturedPixels& PixelData;
		struct FCapturedPixelsID& StreamID;
		struct FFrameMetrics& FrameMetrics;
		bool bCopyImageData;
	}; WriteImageToDisk_Params Params;

	Params.bCopyImageData = bCopyImageData;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PixelData = Params.PixelData;
	StreamID = Params.StreamID;
	FrameMetrics = Params.FrameMetrics;

}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame
inline struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForCurrentFrame() {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame");

	struct GenerateFilenameForCurrentFrame_Params {
		
		struct FString ReturnValue;

	}; GenerateFilenameForCurrentFrame_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer
inline struct FString UUserDefinedImageCaptureProtocol::GenerateFilenameForBuffer(struct UTexture Buffer, struct FCapturedPixelsID& StreamID) {
	static auto fn = UObject::FindObject<UFunction>("Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer");

	struct GenerateFilenameForBuffer_Params {
		struct UTexture Buffer;
		struct FCapturedPixelsID& StreamID;
		struct FString ReturnValue;

	}; GenerateFilenameForBuffer_Params Params;

	Params.Buffer = Buffer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	StreamID = Params.StreamID;


	return params.ReturnValue;
}

