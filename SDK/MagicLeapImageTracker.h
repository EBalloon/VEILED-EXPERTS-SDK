// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
class UMagicLeapImageTrackerComponent : public USceneComponent {

public:

	struct UTexture2D TargetImageTexture; // 0x1F0 (8)
	struct FString Name; // 0x1F8 (16)
	float LongerDimension; // 0x208 (4)
	bool bIsStationary; // 0x20C (1)
	bool bUseUnreliablePose; // 0x20D (1)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x210 (16)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x220 (16)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x230 (16)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x240 (16)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x250 (16)

	bool SetTargetAsync(struct UTexture2D ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x11B5F60>
	bool RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x11B5EC0>
};

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync
inline bool UMagicLeapImageTrackerComponent::SetTargetAsync(struct UTexture2D ImageTarget) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync");

	struct SetTargetAsync_Params {
		struct UTexture2D ImageTarget;
		bool ReturnValue;

	}; SetTargetAsync_Params Params;

	Params.ImageTarget = ImageTarget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync
inline bool UMagicLeapImageTrackerComponent::RemoveTargetAsync() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync");

	struct RemoveTargetAsync_Params {
		
		bool ReturnValue;

	}; RemoveTargetAsync_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

