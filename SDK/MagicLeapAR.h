// Enum MagicLeapAR.ELuminARLineTraceChannel
enum class ELuminARLineTraceChannel : uint8_t {
	None = 0,
	FeaturePoint = 1,
	InfinitePlane = 2,
	PlaneUsingExtent = 4,
	PlaneUsingBoundaryPolygon = 8,
	FeaturePointWithSurfaceNormal = 16,
	ELuminARLineTraceChannel_MAX = 17,
};

// Enum MagicLeapAR.ELuminARTrackingState
enum class ELuminARTrackingState : uint8_t {
	Tracking = 0,
	NotTracking = 1,
	StoppedTracking = 2,
	ELuminARTrackingState_MAX = 3,
};

// Class MagicLeapAR.LuminARSessionConfig
class ULuminARSessionConfig : public UARSessionConfig {

public:

	struct FMagicLeapPlanesQuery PlanesQuery; // 0xB0 (96)
	int32_t MaxPlaneQueryResults; // 0x110 (4)
	int32_t MinPlaneArea; // 0x114 (4)
	bool bArbitraryOrientationPlaneDetection; // 0x118 (1)
	struct FVector PlaneSearchExtents; // 0x11C (12)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x128 (16)
	bool bDiscardZeroExtentPlanes; // 0x138 (1)
	bool bDefaultUseUnreliablePose; // 0x139 (1)
};

// Class MagicLeapAR.LuminARLightEstimate
class ULuminARLightEstimate : public UARBasicLightEstimate {

public:

	struct TArray<float> AmbientIntensityNits; // 0x40 (16)

	struct TArray<float> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x119BC00>
};

// Class MagicLeapAR.LuminARCandidateImage
class ULuminARCandidateImage : public UARCandidateImage {

public:

	bool bUseUnreliablePose; // 0x58 (1)
	bool bImageIsStationary; // 0x59 (1)

	bool GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x119BD10>
	bool GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x119BCC0>
};

// Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits
inline struct TArray<float> ULuminARLightEstimate::GetAmbientIntensityNits() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits");

	struct GetAmbientIntensityNits_Params {
		
		struct TArray<float> ReturnValue;

	}; GetAmbientIntensityNits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose
inline bool ULuminARCandidateImage::GetUseUnreliablePose() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose");

	struct GetUseUnreliablePose_Params {
		
		bool ReturnValue;

	}; GetUseUnreliablePose_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary
inline bool ULuminARCandidateImage::GetImageIsStationary() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary");

	struct GetImageIsStationary_Params {
		
		bool ReturnValue;

	}; GetImageIsStationary_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

