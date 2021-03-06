// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
class AMagicLeapSharedWorldGameMode : public AGameMode {

public:

	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308 (16)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318 (16)
	float PinSelectionConfidenceThreshold; // 0x328 (4)
	struct AMagicLeapSharedWorldPlayerController ChosenOne; // 0x3D0 (8)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients(Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x11909A0>
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne(BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1190980>
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData& NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData(BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1190860>
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
class AMagicLeapSharedWorldGameState : public AGameState {

public:

	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290 (16)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2A0 (16)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2B0 (16)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2C0 (16)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1190960>
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0x1190940>
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform(Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1190710>
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldSharedData
struct FMagicLeapSharedWorldSharedData {
	struct TArray<struct FGuid> PinIDs; // 0x0 (16)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldAlignmentTransforms
struct FMagicLeapSharedWorldAlignmentTransforms {
	struct TArray<struct FTransform> AlignmentTransforms; // 0x0 (16)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldLocalData
struct FMagicLeapSharedWorldLocalData {
	struct TArray<struct FMagicLeapSharedWorldPinData> LocalPins; // 0x0 (16)
};

// ScriptStruct MagicLeapSharedWorld.MagicLeapSharedWorldPinData
struct FMagicLeapSharedWorldPinData {
	struct FGuid PinID; // 0x0 (16)
	struct FMagicLeapARPinState PinState; // 0x10 (16)
};

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients
inline bool AMagicLeapSharedWorldGameMode::SendSharedWorldDataToClients() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients");

	struct SendSharedWorldDataToClients_Params {
		
		bool ReturnValue;

	}; SendSharedWorldDataToClients_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne
inline void AMagicLeapSharedWorldGameMode::SelectChosenOne() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne");

	struct SelectChosenOne_Params {
		
	}; SelectChosenOne_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature
inline void AMagicLeapSharedWorldGameMode::MagicLeapOnNewLocalDataFromClients__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature");

	struct MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params {
		
	}; MagicLeapOnNewLocalDataFromClients__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData
inline void AMagicLeapSharedWorldGameMode::DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData& NewSharedWorldData) {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData");

	struct DetermineSharedWorldData_Params {
		struct FMagicLeapSharedWorldSharedData& NewSharedWorldData;
	}; DetermineSharedWorldData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewSharedWorldData = Params.NewSharedWorldData;

}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData
inline void AMagicLeapSharedWorldGameState::OnReplicate_SharedWorldData() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData");

	struct OnReplicate_SharedWorldData_Params {
		
	}; OnReplicate_SharedWorldData_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms
inline void AMagicLeapSharedWorldGameState::OnReplicate_AlignmentTransforms() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms");

	struct OnReplicate_AlignmentTransforms_Params {
		
	}; OnReplicate_AlignmentTransforms_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature
inline void AMagicLeapSharedWorldGameState::MagicLeapSharedWorldEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature");

	struct MagicLeapSharedWorldEvent__DelegateSignature_Params {
		
	}; MagicLeapSharedWorldEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform
inline struct FTransform AMagicLeapSharedWorldGameState::CalculateXRCameraRootTransform() {
	static auto fn = UObject::FindObject<UFunction>("Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform");

	struct CalculateXRCameraRootTransform_Params {
		
		struct FTransform ReturnValue;

	}; CalculateXRCameraRootTransform_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

