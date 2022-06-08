// BlueprintGeneratedClass bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C
class Abp_ac_AkVolumetricSplineEmitter_C : public UActor {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220 (8)
	struct UAkComponent AkComponent; // 0x228 (8)
	struct USplineComponent Spline; // 0x230 (8)
	struct USceneComponent DefaultSceneRoot; // 0x238 (8)
	bool Debug; // 0x240 (1)
	bool Hidden In Game; // 0x241 (1)
	bool Follow Player Elevation; // 0x242 (1)
	struct UAkAudioEvent Ak Event Emitter; // 0x248 (8)
	struct FName State Group; // 0x250 (8)
	struct FName State Inside; // 0x258 (8)
	struct FName State Outside; // 0x260 (8)
	float Occ Refresh Interval; // 0x268 (4)
	float Max Range Fade Distance; // 0x26C (4)
	bool Is Inside Spline; // 0x270 (1)
	float Dot Value; // 0x274 (4)
	struct FVector Ak Emitter Location; // 0x278 (12)
	float Timer Lazy; // 0x284 (4)
	bool Is Lazy; // 0x288 (1)
	bool Is Initialized; // 0x289 (1)
	struct FVector Spline Curve Location Closest To Player; // 0x28C (12)

	void GetDistanceToPlayerFromClosestSplinePoint(float& DistanceToPlayerFromClosestSplinePoint); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetDistanceToPlayerFromClosestSplinePoint(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void GetIsInsideSpline(bool& IsInsideSpline?, bool& IsInsideSplineChanged?); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetIsInsideSpline(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void GetPlayerControllerCameraRotation(struct FRotator& PlayerControllerCameraRotation); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetPlayerControllerCameraRotation(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void GetControlledPawnLocation(struct APawn& ControlledPawnReference, struct FVector& ControlledPawnLocation); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetControlledPawnLocation(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void UserConstructionScript(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UserConstructionScript(Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void UpdateEmitterLocationProxy(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UpdateEmitterLocationProxy(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Update Emitter Slowly(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Update Emitter Slowly(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveTick(float DeltaSeconds); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveTick(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ReceiveBeginPlay(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveBeginPlay(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Set AK State(); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Set AK State(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter(int32_t EntryPoint); // Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter(Final|UbergraphFunction|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetDistanceToPlayerFromClosestSplinePoint
inline void Abp_ac_AkVolumetricSplineEmitter_C::GetDistanceToPlayerFromClosestSplinePoint(float& DistanceToPlayerFromClosestSplinePoint) {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetDistanceToPlayerFromClosestSplinePoint");

	struct GetDistanceToPlayerFromClosestSplinePoint_Params {
		float& DistanceToPlayerFromClosestSplinePoint;
	}; GetDistanceToPlayerFromClosestSplinePoint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	DistanceToPlayerFromClosestSplinePoint = Params.DistanceToPlayerFromClosestSplinePoint;

}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetIsInsideSpline
inline void Abp_ac_AkVolumetricSplineEmitter_C::GetIsInsideSpline(bool& IsInsideSpline?, bool& IsInsideSplineChanged?) {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetIsInsideSpline");

	struct GetIsInsideSpline_Params {
		bool& IsInsideSpline?;
		bool& IsInsideSplineChanged?;
	}; GetIsInsideSpline_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	IsInsideSpline? = Params.IsInsideSpline?;
	IsInsideSplineChanged? = Params.IsInsideSplineChanged?;

}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetPlayerControllerCameraRotation
inline void Abp_ac_AkVolumetricSplineEmitter_C::GetPlayerControllerCameraRotation(struct FRotator& PlayerControllerCameraRotation) {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetPlayerControllerCameraRotation");

	struct GetPlayerControllerCameraRotation_Params {
		struct FRotator& PlayerControllerCameraRotation;
	}; GetPlayerControllerCameraRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PlayerControllerCameraRotation = Params.PlayerControllerCameraRotation;

}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetControlledPawnLocation
inline void Abp_ac_AkVolumetricSplineEmitter_C::GetControlledPawnLocation(struct APawn& ControlledPawnReference, struct FVector& ControlledPawnLocation) {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.GetControlledPawnLocation");

	struct GetControlledPawnLocation_Params {
		struct APawn& ControlledPawnReference;
		struct FVector& ControlledPawnLocation;
	}; GetControlledPawnLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	ControlledPawnReference = Params.ControlledPawnReference;
	ControlledPawnLocation = Params.ControlledPawnLocation;

}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UserConstructionScript
inline void Abp_ac_AkVolumetricSplineEmitter_C::UserConstructionScript() {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UserConstructionScript");

	struct UserConstructionScript_Params {
		
	}; UserConstructionScript_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UpdateEmitterLocationProxy
inline void Abp_ac_AkVolumetricSplineEmitter_C::UpdateEmitterLocationProxy() {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.UpdateEmitterLocationProxy");

	struct UpdateEmitterLocationProxy_Params {
		
	}; UpdateEmitterLocationProxy_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Update Emitter Slowly
inline void Abp_ac_AkVolumetricSplineEmitter_C::Update Emitter Slowly() {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Update Emitter Slowly");

	struct Update Emitter Slowly_Params {
		
	}; Update Emitter Slowly_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveTick
inline void Abp_ac_AkVolumetricSplineEmitter_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveBeginPlay
inline void Abp_ac_AkVolumetricSplineEmitter_C::ReceiveBeginPlay() {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ReceiveBeginPlay");

	struct ReceiveBeginPlay_Params {
		
	}; ReceiveBeginPlay_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Set AK State
inline void Abp_ac_AkVolumetricSplineEmitter_C::Set AK State() {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.Set AK State");

	struct Set AK State_Params {
		
	}; Set AK State_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter
inline void Abp_ac_AkVolumetricSplineEmitter_C::ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function bp_ac_AkVolumetricSplineEmitter.bp_ac_AkVolumetricSplineEmitter_C.ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter");

	struct ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_bp_ac_AkVolumetricSplineEmitter_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

