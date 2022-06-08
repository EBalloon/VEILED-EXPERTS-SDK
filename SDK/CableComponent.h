// Class CableComponent.CableActor
class ACableActor : public UActor {

public:

	struct UCableComponent CableComponent; // 0x220 (8)
};

// Class CableComponent.CableComponent
class UCableComponent : public UMeshComponent {

public:

	bool bAttachStart; // 0x430 (1)
	bool bAttachEnd; // 0x431 (1)
	struct FComponentReference AttachEndTo; // 0x438 (40)
	struct FName AttachEndToSocketName; // 0x460 (8)
	struct FVector EndLocation; // 0x468 (12)
	float CableLength; // 0x474 (4)
	int32_t NumSegments; // 0x478 (4)
	float SubstepTime; // 0x47C (4)
	int32_t SolverIterations; // 0x480 (4)
	bool bEnableStiffness; // 0x484 (1)
	bool bEnableCollision; // 0x485 (1)
	float CollisionFriction; // 0x488 (4)
	struct FVector CableForce; // 0x48C (12)
	float CableGravityScale; // 0x498 (4)
	float CableWidth; // 0x49C (4)
	int32_t NumSides; // 0x4A0 (4)
	float TileMaterial; // 0x4A4 (4)

	void SetAttachEndToComponent(struct USceneComponent Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x122B9F0>
	void SetAttachEndTo(struct UActor Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x122B8F0>
	void GetCableParticleLocations(struct TArray<struct FVector>& Locations); // Function CableComponent.CableComponent.GetCableParticleLocations(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x122B840>
	struct USceneComponent GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x122B810>
	struct UActor GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x122B7E0>
};

// Function CableComponent.CableComponent.SetAttachEndToComponent
inline void UCableComponent::SetAttachEndToComponent(struct USceneComponent Component, struct FName SocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndToComponent");

	struct SetAttachEndToComponent_Params {
		struct USceneComponent Component;
		struct FName SocketName;
	}; SetAttachEndToComponent_Params Params;

	Params.Component = Component;
	Params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CableComponent.CableComponent.SetAttachEndTo
inline void UCableComponent::SetAttachEndTo(struct UActor Actor, struct FName ComponentProperty, struct FName SocketName) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.SetAttachEndTo");

	struct SetAttachEndTo_Params {
		struct UActor Actor;
		struct FName ComponentProperty;
		struct FName SocketName;
	}; SetAttachEndTo_Params Params;

	Params.Actor = Actor;
	Params.ComponentProperty = ComponentProperty;
	Params.SocketName = SocketName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function CableComponent.CableComponent.GetCableParticleLocations
inline void UCableComponent::GetCableParticleLocations(struct TArray<struct FVector>& Locations) {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetCableParticleLocations");

	struct GetCableParticleLocations_Params {
		struct TArray<struct FVector>& Locations;
	}; GetCableParticleLocations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Locations = Params.Locations;

}

// Function CableComponent.CableComponent.GetAttachedComponent
inline struct USceneComponent UCableComponent::GetAttachedComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedComponent");

	struct GetAttachedComponent_Params {
		
		struct USceneComponent ReturnValue;

	}; GetAttachedComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function CableComponent.CableComponent.GetAttachedActor
inline struct UActor UCableComponent::GetAttachedActor() {
	static auto fn = UObject::FindObject<UFunction>("Function CableComponent.CableComponent.GetAttachedActor");

	struct GetAttachedActor_Params {
		
		struct UActor ReturnValue;

	}; GetAttachedActor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

