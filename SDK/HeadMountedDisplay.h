// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class EXRTrackedDeviceType : uint8_t {
	HeadMountedDisplay = 0,
	Controller = 1,
	TrackingReference = 2,
	Other = 3,
	Invalid = 254,
	Any = 255,
	EXRTrackedDeviceType_MAX = 256,
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class ESpectatorScreenMode : uint8_t {
	Disabled = 0,
	SingleEyeLetterboxed = 1,
	Undistorted = 2,
	Distorted = 3,
	SingleEye = 4,
	SingleEyeCroppedToFill = 5,
	Texture = 6,
	TexturePlusEye = 7,
	ESpectatorScreenMode_MAX = 8,
};

// Enum HeadMountedDisplay.EHMDWornState
enum class EHMDWornState : uint8_t {
	Unknown = 0,
	Worn = 1,
	NotWorn = 2,
	EHMDWornState_MAX = 3,
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class EHMDTrackingOrigin : uint8_t {
	Floor = 0,
	Eye = 1,
	Stage = 2,
	EHMDTrackingOrigin_MAX = 3,
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class EOrientPositionSelector : uint8_t {
	Orientation = 0,
	Position = 1,
	OrientationAndPosition = 2,
	EOrientPositionSelector_MAX = 3,
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class ETrackingStatus : uint8_t {
	NotTracked = 0,
	InertialOnly = 1,
	Tracked = 2,
	ETrackingStatus_MAX = 3,
};

// Class HeadMountedDisplay.VRNotificationsComponent
class UVRNotificationsComponent : public UActorComponent {

public:

	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB0 (16)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xC0 (16)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xD0 (16)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0xE0 (16)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0xF0 (16)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100 (16)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110 (16)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120 (16)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130 (16)
};

// Class HeadMountedDisplay.MotionControllerComponent
class UMotionControllerComponent : public UPrimitiveComponent {

public:

	int32_t PlayerIndex; // 0x408 (4)
	enum class EControllerHand Hand; // 0x40C (1)
	struct FName MotionSource; // 0x410 (8)
	char bDisableLowLatencyUpdate : 1; // 0x418 (1)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x41C (1)
	bool bDisplayDeviceModel; // 0x41D (1)
	char pad_41F_1 : 7; // 0x41F (1)
	struct FName DisplayModelSource; // 0x420 (8)
	struct UStaticMesh CustomDisplayMesh; // 0x428 (8)
	struct TArray<struct UMaterialInterface> DisplayMeshMaterialOverrides; // 0x430 (16)
	struct UPrimitiveComponent DisplayComponent; // 0x4A0 (8)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FBE10>
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FBD20>
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FB9C0>
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FB720>
	void SetCustomDisplayMesh(struct UStaticMesh NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FB6A0>
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FB570>
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25FB4A0>
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25FADD0>
	float GetParameterValue(struct FName InName, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue(Final|Native|Protected|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FA640>
	struct FVector GetHandJointPosition(int32_t jointIndex, bool& bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition(Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25FA400>
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
class UAsyncTask_LoadXRDeviceVisComponent : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnModelLoaded; // 0x30 (16)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40 (16)
	struct UPrimitiveComponent SpawnedComponent; // 0x58 (8)

	struct UAsyncTask_LoadXRDeviceVisComponent AddNamedDeviceVisualizationComponentAsync(struct UActor Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25F92A0>
	struct UAsyncTask_LoadXRDeviceVisComponent AddDeviceVisualizationComponentAsync(struct UActor Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent& NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync(Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25F8CE0>
};

// ScriptStruct HeadMountedDisplay.XRDeviceId
struct FXRDeviceId {
	struct FName SystemName; // 0x0 (8)
	int32_t DeviceID; // 0x8 (4)
};

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource
inline void UMotionControllerComponent::SetTrackingSource(enum class EControllerHand NewSource) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource");

	struct SetTrackingSource_Params {
		enum class EControllerHand NewSource;
	}; SetTrackingSource_Params Params;

	Params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource
inline void UMotionControllerComponent::SetTrackingMotionSource(struct FName NewSource) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource");

	struct SetTrackingMotionSource_Params {
		struct FName NewSource;
	}; SetTrackingMotionSource_Params Params;

	Params.NewSource = NewSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel
inline void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel");

	struct SetShowDeviceModel_Params {
		bool bShowControllerModel;
	}; SetShowDeviceModel_Params Params;

	Params.bShowControllerModel = bShowControllerModel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource
inline void UMotionControllerComponent::SetDisplayModelSource(struct FName NewDisplayModelSource) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource");

	struct SetDisplayModelSource_Params {
		struct FName NewDisplayModelSource;
	}; SetDisplayModelSource_Params Params;

	Params.NewDisplayModelSource = NewDisplayModelSource;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh
inline void UMotionControllerComponent::SetCustomDisplayMesh(struct UStaticMesh NewDisplayMesh) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh");

	struct SetCustomDisplayMesh_Params {
		struct UStaticMesh NewDisplayMesh;
	}; SetCustomDisplayMesh_Params Params;

	Params.NewDisplayMesh = NewDisplayMesh;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex
inline void UMotionControllerComponent::SetAssociatedPlayerIndex(int32_t NewPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex");

	struct SetAssociatedPlayerIndex_Params {
		int32_t NewPlayer;
	}; SetAssociatedPlayerIndex_Params Params;

	Params.NewPlayer = NewPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated
inline void UMotionControllerComponent::OnMotionControllerUpdated() {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated");

	struct OnMotionControllerUpdated_Params {
		
	}; OnMotionControllerUpdated_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function HeadMountedDisplay.MotionControllerComponent.IsTracked
inline bool UMotionControllerComponent::IsTracked() {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.IsTracked");

	struct IsTracked_Params {
		
		bool ReturnValue;

	}; IsTracked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource
inline enum class EControllerHand UMotionControllerComponent::GetTrackingSource() {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource");

	struct GetTrackingSource_Params {
		
		enum class EControllerHand ReturnValue;

	}; GetTrackingSource_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue
inline float UMotionControllerComponent::GetParameterValue(struct FName InName, bool& bValueFound) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue");

	struct GetParameterValue_Params {
		struct FName InName;
		bool& bValueFound;
		float ReturnValue;

	}; GetParameterValue_Params Params;

	Params.InName = InName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bValueFound = Params.bValueFound;


	return params.ReturnValue;
}

// Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition
inline struct FVector UMotionControllerComponent::GetHandJointPosition(int32_t jointIndex, bool& bValueFound) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition");

	struct GetHandJointPosition_Params {
		int32_t jointIndex;
		bool& bValueFound;
		struct FVector ReturnValue;

	}; GetHandJointPosition_Params Params;

	Params.jointIndex = jointIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	bValueFound = Params.bValueFound;


	return params.ReturnValue;
}

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync
inline struct UAsyncTask_LoadXRDeviceVisComponent UAsyncTask_LoadXRDeviceVisComponent::AddNamedDeviceVisualizationComponentAsync(struct UActor Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform& RelativeTransform, struct FXRDeviceId& XRDeviceId, struct UPrimitiveComponent& NewComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync");

	struct AddNamedDeviceVisualizationComponentAsync_Params {
		struct UActor Target;
		struct FName SystemName;
		struct FName DeviceName;
		bool bManualAttachment;
		struct FTransform& RelativeTransform;
		struct FXRDeviceId& XRDeviceId;
		struct UPrimitiveComponent& NewComponent;
		struct UAsyncTask_LoadXRDeviceVisComponent ReturnValue;

	}; AddNamedDeviceVisualizationComponentAsync_Params Params;

	Params.Target = Target;
	Params.SystemName = SystemName;
	Params.DeviceName = DeviceName;
	Params.bManualAttachment = bManualAttachment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	RelativeTransform = Params.RelativeTransform;
	XRDeviceId = Params.XRDeviceId;
	NewComponent = Params.NewComponent;


	return params.ReturnValue;
}

// Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync
inline struct UAsyncTask_LoadXRDeviceVisComponent UAsyncTask_LoadXRDeviceVisComponent::AddDeviceVisualizationComponentAsync(struct UActor Target, struct FXRDeviceId& XRDeviceId, bool bManualAttachment, struct FTransform& RelativeTransform, struct UPrimitiveComponent& NewComponent) {
	static auto fn = UObject::FindObject<UFunction>("Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync");

	struct AddDeviceVisualizationComponentAsync_Params {
		struct UActor Target;
		struct FXRDeviceId& XRDeviceId;
		bool bManualAttachment;
		struct FTransform& RelativeTransform;
		struct UPrimitiveComponent& NewComponent;
		struct UAsyncTask_LoadXRDeviceVisComponent ReturnValue;

	}; AddDeviceVisualizationComponentAsync_Params Params;

	Params.Target = Target;
	Params.bManualAttachment = bManualAttachment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	XRDeviceId = Params.XRDeviceId;
	RelativeTransform = Params.RelativeTransform;
	NewComponent = Params.NewComponent;


	return params.ReturnValue;
}

