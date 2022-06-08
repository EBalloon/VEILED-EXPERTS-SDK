// Class AnimationSharing.AnimSharingStateInstance
class UAnimSharingStateInstance : public UAnimInstance {

public:

	struct UAnimSequence AnimationToPlay; // 0x268 (8)
	float PermutationTimeOffset; // 0x270 (4)
	float PlayRate; // 0x274 (4)
	bool bStateBool; // 0x278 (1)
	struct UAnimSharingInstance Instance; // 0x280 (8)

	void GetInstancedActors(struct TArray<struct UActor>& Actors); // Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors(Final|Native|Protected|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEF7BB0>
};

// Class AnimationSharing.AnimSharingTransitionInstance
class UAnimSharingTransitionInstance : public UAnimInstance {

public:

	struct TWeakObjectPtr<struct USkeletalMeshComponent> FromComponent; // 0x268 (8)
	struct TWeakObjectPtr<struct USkeletalMeshComponent> ToComponent; // 0x270 (8)
	float BlendTime; // 0x278 (4)
	bool bBlendBool; // 0x27C (1)
};

// Class AnimationSharing.AnimSharingAdditiveInstance
class UAnimSharingAdditiveInstance : public UAnimInstance {

public:

	struct TWeakObjectPtr<struct USkeletalMeshComponent> BaseComponent; // 0x268 (8)
	struct TWeakObjectPtr<struct UAnimSequence> AdditiveAnimation; // 0x270 (8)
	float Alpha; // 0x278 (4)
	bool bStateBool; // 0x27C (1)
};

// Class AnimationSharing.AnimSharingInstance
class UAnimSharingInstance : public Object {

public:

	struct TArray<struct UActor> RegisteredActors; // 0x28 (16)
	struct UAnimationSharingStateProcessor StateProcessor; // 0xA8 (8)
	struct TArray<struct UAnimSequence> UsedAnimationSequences; // 0xE8 (16)
	struct UEnum StateEnum; // 0x108 (8)
	struct UActor SharingActor; // 0x110 (8)
};

// Class AnimationSharing.AnimationSharingManager
class UAnimationSharingManager : public Object {

public:

	struct TArray<struct USkeleton> Skeletons; // 0x28 (16)
	struct TArray<struct UAnimSharingInstance> PerSkeletonData; // 0x38 (16)

	void RegisterActorWithSkeletonBP(struct UActor InActor, struct USkeleton SharingSkeleton); // Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEF7E10>
	struct UAnimationSharingManager GetAnimationSharingManager(struct Object WorldContextObject); // Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEF7B00>
	bool CreateAnimationSharingManager(struct Object WorldContextObject, struct UAnimationSharingSetup Setup); // Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEF7A40>
	bool AnimationSharingEnabled(); // Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled(Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xEF7A10>
};

// Class AnimationSharing.AnimationSharingSetup
class UAnimationSharingSetup : public Object {

public:

	struct TArray<struct FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28 (16)
	struct FAnimationSharingScalability ScalabilitySettings; // 0x38 (16)
};

// Class AnimationSharing.AnimationSharingStateProcessor
class UAnimationSharingStateProcessor : public Object {

public:

	struct TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28 (40)

	void ProcessActorState(int32_t& OutState, struct UActor InActor, char CurrentState, char OnDemandState, bool& bShouldProcess); // Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState(Native|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0xEF7C60>
	struct UEnum GetAnimationStateEnum(); // Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum(Native|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0xEF7B80>
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
struct FAnimationSharingScalability {
	struct FPerPlatformBool UseBlendTransitions; // 0x0 (1)
	struct FPerPlatformFloat BlendSignificanceValue; // 0x4 (4)
	struct FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8 (4)
	struct FPerPlatformFloat TickSignificanceValue; // 0xC (4)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
struct FPerSkeletonAnimationSharingSetup {
	struct USkeleton Skeleton; // 0x0 (8)
	struct USkeletalMesh SkeletalMesh; // 0x8 (8)
	struct UClass* BlendAnimBlueprint; // 0x10 (8)
	struct UClass* AdditiveAnimBlueprint; // 0x18 (8)
	struct UClass* StateProcessorClass; // 0x20 (8)
	struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x28 (16)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
struct FAnimationStateEntry {
	char State; // 0x0 (1)
	struct TArray<struct FAnimationSetup> AnimationSetups; // 0x8 (16)
	bool bOnDemand; // 0x18 (1)
	bool bAdditive; // 0x19 (1)
	float BlendTime; // 0x1C (4)
	bool bReturnToPreviousState; // 0x20 (1)
	bool bSetNextState; // 0x21 (1)
	char NextState; // 0x22 (1)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24 (4)
	float WiggleTimePercentage; // 0x28 (4)
	bool bRequiresCurves; // 0x2C (1)
};

// ScriptStruct AnimationSharing.AnimationSetup
struct FAnimationSetup {
	struct UAnimSequence AnimSequence; // 0x0 (8)
	struct UClass* AnimBlueprint; // 0x8 (8)
	struct FPerPlatformInt NumRandomizedInstances; // 0x10 (4)
	struct FPerPlatformBool Enabled; // 0x14 (1)
};

// Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors
inline void UAnimSharingStateInstance::GetInstancedActors(struct TArray<struct UActor>& Actors) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimSharingStateInstance.GetInstancedActors");

	struct GetInstancedActors_Params {
		struct TArray<struct UActor>& Actors;
	}; GetInstancedActors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Actors = Params.Actors;

}

// Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP
inline void UAnimationSharingManager::RegisterActorWithSkeletonBP(struct UActor InActor, struct USkeleton SharingSkeleton) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.RegisterActorWithSkeletonBP");

	struct RegisterActorWithSkeletonBP_Params {
		struct UActor InActor;
		struct USkeleton SharingSkeleton;
	}; RegisterActorWithSkeletonBP_Params Params;

	Params.InActor = InActor;
	Params.SharingSkeleton = SharingSkeleton;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager
inline struct UAnimationSharingManager UAnimationSharingManager::GetAnimationSharingManager(struct Object WorldContextObject) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.GetAnimationSharingManager");

	struct GetAnimationSharingManager_Params {
		struct Object WorldContextObject;
		struct UAnimationSharingManager ReturnValue;

	}; GetAnimationSharingManager_Params Params;

	Params.WorldContextObject = WorldContextObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager
inline bool UAnimationSharingManager::CreateAnimationSharingManager(struct Object WorldContextObject, struct UAnimationSharingSetup Setup) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.CreateAnimationSharingManager");

	struct CreateAnimationSharingManager_Params {
		struct Object WorldContextObject;
		struct UAnimationSharingSetup Setup;
		bool ReturnValue;

	}; CreateAnimationSharingManager_Params Params;

	Params.WorldContextObject = WorldContextObject;
	Params.Setup = Setup;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled
inline bool UAnimationSharingManager::AnimationSharingEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingManager.AnimationSharingEnabled");

	struct AnimationSharingEnabled_Params {
		
		bool ReturnValue;

	}; AnimationSharingEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState
inline void UAnimationSharingStateProcessor::ProcessActorState(int32_t& OutState, struct UActor InActor, char CurrentState, char OnDemandState, bool& bShouldProcess) {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.ProcessActorState");

	struct ProcessActorState_Params {
		int32_t& OutState;
		struct UActor InActor;
		char CurrentState;
		char OnDemandState;
		bool& bShouldProcess;
	}; ProcessActorState_Params Params;

	Params.InActor = InActor;
	Params.CurrentState = CurrentState;
	Params.OnDemandState = OnDemandState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutState = Params.OutState;
	bShouldProcess = Params.bShouldProcess;

}

// Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum
inline struct UEnum UAnimationSharingStateProcessor::GetAnimationStateEnum() {
	static auto fn = UObject::FindObject<UFunction>("Function AnimationSharing.AnimationSharingStateProcessor.GetAnimationStateEnum");

	struct GetAnimationStateEnum_Params {
		
		struct UEnum ReturnValue;

	}; GetAnimationStateEnum_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

