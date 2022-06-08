// Enum PhysXVehicles.EWheelSweepType
enum class EWheelSweepType : uint8_t {
	SimpleAndComplex = 0,
	Simple = 1,
	Complex = 2,
	EWheelSweepType_MAX = 3,
};

// Enum PhysXVehicles.EVehicleDifferential4W
enum class EVehicleDifferential4W : uint8_t {
	LimitedSlip_4W = 0,
	LimitedSlip_FrontDrive = 1,
	LimitedSlip_RearDrive = 2,
	Open_4W = 3,
	Open_FrontDrive = 4,
	Open_RearDrive = 5,
	EVehicleDifferential4W_MAX = 6,
};

// Class PhysXVehicles.WheeledVehicleMovementComponent
class UWheeledVehicleMovementComponent : public UPawnMovementComponent {

public:

	char bDeprecatedSpringOffsetMode : 1; // 0x140 (1)
	char pad_138_1 : 7; // 0x138 (1)
	char pad_139_0 : 1; // 0x139 (1)
	char bReverseAsBrake : 1; // 0x140 (1)
	char pad_139_2 : 6; // 0x139 (1)
	char pad_13A_0 : 2; // 0x13A (1)
	char bUseRVOAvoidance : 1; // 0x140 (1)
	char pad_13A_3 : 5; // 0x13A (1)
	char pad_13B_0 : 3; // 0x13B (1)
	char bRawHandbrakeInput : 1; // 0x140 (1)
	char pad_13B_4 : 4; // 0x13B (1)
	char pad_13C_0 : 4; // 0x13C (1)
	char bRawGearUpInput : 1; // 0x140 (1)
	char pad_13C_5 : 3; // 0x13C (1)
	char pad_13D_0 : 5; // 0x13D (1)
	char bRawGearDownInput : 1; // 0x140 (1)
	char pad_13D_6 : 2; // 0x13D (1)
	char bWasAvoidanceUpdated : 1; // 0x144 (1)
	char pad_13E_1 : 7; // 0x13E (1)
	float Mass; // 0x148 (4)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x150 (16)
	float DragCoefficient; // 0x160 (4)
	float ChassisWidth; // 0x164 (4)
	float ChassisHeight; // 0x168 (4)
	float DragArea; // 0x16C (4)
	float EstimatedMaxEngineSpeed; // 0x170 (4)
	float MaxEngineRPM; // 0x174 (4)
	float DebugDragMagnitude; // 0x178 (4)
	struct FVector InertiaTensorScale; // 0x17C (12)
	float MinNormalizedTireLoad; // 0x188 (4)
	float MinNormalizedTireLoadFiltered; // 0x18C (4)
	float MaxNormalizedTireLoad; // 0x190 (4)
	float MaxNormalizedTireLoadFiltered; // 0x194 (4)
	float ThresholdLongitudinalSpeed; // 0x198 (4)
	int32_t LowForwardSpeedSubStepCount; // 0x19C (4)
	int32_t HighForwardSpeedSubStepCount; // 0x1A0 (4)
	struct TArray<struct UVehicleWheel> Wheels; // 0x1A8 (16)
	float RVOAvoidanceRadius; // 0x1D0 (4)
	float RVOAvoidanceHeight; // 0x1D4 (4)
	float AvoidanceConsiderationRadius; // 0x1D8 (4)
	float RVOSteeringStep; // 0x1DC (4)
	float RVOThrottleStep; // 0x1E0 (4)
	int32_t AvoidanceUID; // 0x1E4 (4)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x1E8 (4)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x1EC (4)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x1F0 (4)
	float AvoidanceWeight; // 0x1F4 (4)
	struct FVector PendingLaunchVelocity; // 0x1F8 (12)
	struct FReplicatedVehicleState ReplicatedState; // 0x204 (20)
	float RawSteeringInput; // 0x21C (4)
	float RawThrottleInput; // 0x220 (4)
	float RawBrakeInput; // 0x224 (4)
	float SteeringInput; // 0x228 (4)
	float ThrottleInput; // 0x22C (4)
	float BrakeInput; // 0x230 (4)
	float HandbrakeInput; // 0x234 (4)
	float IdleBrakeInput; // 0x238 (4)
	float StopThreshold; // 0x23C (4)
	float WrongDirectionThreshold; // 0x240 (4)
	struct FVehicleInputRate ThrottleInputRate; // 0x244 (8)
	struct FVehicleInputRate BrakeInputRate; // 0x24C (8)
	struct FVehicleInputRate HandbrakeInputRate; // 0x254 (8)
	struct FVehicleInputRate SteeringInputRate; // 0x25C (8)
	struct AController OverrideController; // 0x288 (8)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1244590>
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1244510>
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1244450>
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x12443D0>
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1244270>
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x12441E0>
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1244160>
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x12440D0>
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1244050>
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243FC0>
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243F30>
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243D10>
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243C80>
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243C00>
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243B70>
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState(Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // <VeiledExperts-Win64-Shipping.exe+0x12439A0>
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1243910>
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x12438E0>
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1243820>
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x12437F0>
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x12437C0>
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1243790>
};

// Class PhysXVehicles.TireConfig
class UTireConfig : public UDataAsset {

public:

	float FrictionScale; // 0x30 (4)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38 (16)
};

// Class PhysXVehicles.VehicleAnimInstance
class UVehicleAnimInstance : public UAnimInstance {

public:

	struct UWheeledVehicleMovementComponent WheeledVehicleMovementComponent; // 0x970 (8)

	struct AWheeledVehicle GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x1243940>
};

// Class PhysXVehicles.VehicleWheel
class UVehicleWheel : public Object {

public:

	struct UStaticMesh CollisionMesh; // 0x28 (8)
	bool bDontCreateShape; // 0x30 (1)
	bool bAutoAdjustCollisionSize; // 0x31 (1)
	struct FVector Offset; // 0x34 (12)
	float ShapeRadius; // 0x40 (4)
	float ShapeWidth; // 0x44 (4)
	float Mass; // 0x48 (4)
	float DampingRate; // 0x4C (4)
	float SteerAngle; // 0x50 (4)
	bool bAffectedByHandbrake; // 0x54 (1)
	struct UTireType TireType; // 0x58 (8)
	struct UTireConfig TireConfig; // 0x60 (8)
	float LatStiffMaxLoad; // 0x68 (4)
	float LatStiffValue; // 0x6C (4)
	float LongStiffValue; // 0x70 (4)
	float SuspensionForceOffset; // 0x74 (4)
	float SuspensionMaxRaise; // 0x78 (4)
	float SuspensionMaxDrop; // 0x7C (4)
	float SuspensionNaturalFrequency; // 0x80 (4)
	float SuspensionDampingRatio; // 0x84 (4)
	enum class EWheelSweepType SweepType; // 0x88 (1)
	float MaxBrakeTorque; // 0x8C (4)
	float MaxHandBrakeTorque; // 0x90 (4)
	struct UWheeledVehicleMovementComponent VehicleSim; // 0x98 (8)
	int32_t WheelIndex; // 0xA0 (4)
	float DebugLongSlip; // 0xA4 (4)
	float DebugLatSlip; // 0xA8 (4)
	float DebugNormalizedTireLoad; // 0xAC (4)
	float DebugWheelTorque; // 0xB4 (4)
	float DebugLongForce; // 0xB8 (4)
	float DebugLatForce; // 0xBC (4)
	struct FVector Location; // 0xC0 (12)
	struct FVector OldLocation; // 0xCC (12)
	struct FVector Velocity; // 0xD8 (12)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1243970>
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x12438B0>
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1243880>
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x1243850>
};

// Class PhysXVehicles.WheeledVehicle
class AWheeledVehicle : public APawn {

public:

	struct USkeletalMeshComponent Mesh; // 0x280 (8)
	struct UWheeledVehicleMovementComponent VehicleMovement; // 0x288 (8)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
class UWheeledVehicleMovementComponent4W : public UWheeledVehicleMovementComponent {

public:

	struct FVehicleEngineData EngineSetup; // 0x290 (160)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x330 (28)
	float AckermannAccuracy; // 0x34C (4)
	struct FVehicleTransmissionData TransmissionSetup; // 0x350 (48)
	struct FRuntimeFloatCurve SteeringCurve; // 0x380 (136)
};

// ScriptStruct PhysXVehicles.TireConfigMaterialFriction
struct FTireConfigMaterialFriction {
	struct UPhysicalMaterial PhysicalMaterial; // 0x0 (8)
	float FrictionScale; // 0x8 (4)
};

// ScriptStruct PhysXVehicles.VehicleInputRate
struct FVehicleInputRate {
	float RiseRate; // 0x0 (4)
	float FallRate; // 0x4 (4)
};

// ScriptStruct PhysXVehicles.ReplicatedVehicleState
struct FReplicatedVehicleState {
	float SteeringInput; // 0x0 (4)
	float ThrottleInput; // 0x4 (4)
	float BrakeInput; // 0x8 (4)
	float HandbrakeInput; // 0xC (4)
	int32_t CurrentGear; // 0x10 (4)
};

// ScriptStruct PhysXVehicles.WheelSetup
struct FWheelSetup {
	struct UClass* WheelClass; // 0x0 (8)
	struct FName BoneName; // 0x8 (8)
	struct FVector AdditionalOffset; // 0x10 (12)
	bool bDisableSteering; // 0x1C (1)
};

// ScriptStruct PhysXVehicles.VehicleTransmissionData
struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x0 (1)
	float GearSwitchTime; // 0x4 (4)
	float GearAutoBoxLatency; // 0x8 (4)
	float FinalRatio; // 0xC (4)
	struct TArray<struct FVehicleGearData> ForwardGears; // 0x10 (16)
	float ReverseGearRatio; // 0x20 (4)
	float NeutralGearUpRatio; // 0x24 (4)
	float ClutchStrength; // 0x28 (4)
};

// ScriptStruct PhysXVehicles.VehicleGearData
struct FVehicleGearData {
	float Ratio; // 0x0 (4)
	float DownRatio; // 0x4 (4)
	float UpRatio; // 0x8 (4)
};

// ScriptStruct PhysXVehicles.VehicleEngineData
struct FVehicleEngineData {
	struct FRuntimeFloatCurve TorqueCurve; // 0x0 (136)
	float MaxRPM; // 0x88 (4)
	float MOI; // 0x8C (4)
	float DampingRateFullThrottle; // 0x90 (4)
	float DampingRateZeroThrottleClutchEngaged; // 0x94 (4)
	float DampingRateZeroThrottleClutchDisengaged; // 0x98 (4)
};

// ScriptStruct PhysXVehicles.VehicleDifferential4WData
struct FVehicleDifferential4WData {
	enum class EVehicleDifferential4W DifferentialType; // 0x0 (1)
	float FrontRearSplit; // 0x4 (4)
	float FrontLeftRightSplit; // 0x8 (4)
	float RearLeftRightSplit; // 0xC (4)
	float CentreBias; // 0x10 (4)
	float FrontBias; // 0x14 (4)
	float RearBias; // 0x18 (4)
};

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears
inline void UWheeledVehicleMovementComponent::SetUseAutoGears(bool bUseAuto) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears");

	struct SetUseAutoGears_Params {
		bool bUseAuto;
	}; SetUseAutoGears_Params Params;

	Params.bUseAuto = bUseAuto;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput
inline void UWheeledVehicleMovementComponent::SetThrottleInput(float Throttle) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput");

	struct SetThrottleInput_Params {
		float Throttle;
	}; SetThrottleInput_Params Params;

	Params.Throttle = Throttle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear
inline void UWheeledVehicleMovementComponent::SetTargetGear(int32_t GearNum, bool bImmediate) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear");

	struct SetTargetGear_Params {
		int32_t GearNum;
		bool bImmediate;
	}; SetTargetGear_Params Params;

	Params.GearNum = GearNum;
	Params.bImmediate = bImmediate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput
inline void UWheeledVehicleMovementComponent::SetSteeringInput(float Steering) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput");

	struct SetSteeringInput_Params {
		float Steering;
	}; SetSteeringInput_Params Params;

	Params.Steering = Steering;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput
inline void UWheeledVehicleMovementComponent::SetHandbrakeInput(bool bNewHandbrake) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput");

	struct SetHandbrakeInput_Params {
		bool bNewHandbrake;
	}; SetHandbrakeInput_Params Params;

	Params.bNewHandbrake = bNewHandbrake;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask
inline void UWheeledVehicleMovementComponent::SetGroupsToIgnoreMask(struct FNavAvoidanceMask& GroupMask) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask");

	struct SetGroupsToIgnoreMask_Params {
		struct FNavAvoidanceMask& GroupMask;
	}; SetGroupsToIgnoreMask_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GroupMask = Params.GroupMask;

}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore
inline void UWheeledVehicleMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore");

	struct SetGroupsToIgnore_Params {
		int32_t GroupFlags;
	}; SetGroupsToIgnore_Params Params;

	Params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask
inline void UWheeledVehicleMovementComponent::SetGroupsToAvoidMask(struct FNavAvoidanceMask& GroupMask) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask");

	struct SetGroupsToAvoidMask_Params {
		struct FNavAvoidanceMask& GroupMask;
	}; SetGroupsToAvoidMask_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GroupMask = Params.GroupMask;

}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid
inline void UWheeledVehicleMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid");

	struct SetGroupsToAvoid_Params {
		int32_t GroupFlags;
	}; SetGroupsToAvoid_Params Params;

	Params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp
inline void UWheeledVehicleMovementComponent::SetGearUp(bool bNewGearUp) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp");

	struct SetGearUp_Params {
		bool bNewGearUp;
	}; SetGearUp_Params Params;

	Params.bNewGearUp = bNewGearUp;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown
inline void UWheeledVehicleMovementComponent::SetGearDown(bool bNewGearDown) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown");

	struct SetGearDown_Params {
		bool bNewGearDown;
	}; SetGearDown_Params Params;

	Params.bNewGearDown = bNewGearDown;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput
inline void UWheeledVehicleMovementComponent::SetBrakeInput(float Brake) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput");

	struct SetBrakeInput_Params {
		float Brake;
	}; SetBrakeInput_Params Params;

	Params.Brake = Brake;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask
inline void UWheeledVehicleMovementComponent::SetAvoidanceGroupMask(struct FNavAvoidanceMask& GroupMask) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask");

	struct SetAvoidanceGroupMask_Params {
		struct FNavAvoidanceMask& GroupMask;
	}; SetAvoidanceGroupMask_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GroupMask = Params.GroupMask;

}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup
inline void UWheeledVehicleMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup");

	struct SetAvoidanceGroup_Params {
		int32_t GroupFlags;
	}; SetAvoidanceGroup_Params Params;

	Params.GroupFlags = GroupFlags;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled
inline void UWheeledVehicleMovementComponent::SetAvoidanceEnabled(bool bEnable) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled");

	struct SetAvoidanceEnabled_Params {
		bool bEnable;
	}; SetAvoidanceEnabled_Params Params;

	Params.bEnable = bEnable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState
inline void UWheeledVehicleMovementComponent::ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear) {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState");

	struct ServerUpdateState_Params {
		float InSteeringInput;
		float InThrottleInput;
		float InBrakeInput;
		float InHandbrakeInput;
		int32_t CurrentGear;
	}; ServerUpdateState_Params Params;

	Params.InSteeringInput = InSteeringInput;
	Params.InThrottleInput = InThrottleInput;
	Params.InBrakeInput = InBrakeInput;
	Params.InHandbrakeInput = InHandbrakeInput;
	Params.CurrentGear = CurrentGear;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears
inline bool UWheeledVehicleMovementComponent::GetUseAutoGears() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears");

	struct GetUseAutoGears_Params {
		
		bool ReturnValue;

	}; GetUseAutoGears_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear
inline int32_t UWheeledVehicleMovementComponent::GetTargetGear() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear");

	struct GetTargetGear_Params {
		
		int32_t ReturnValue;

	}; GetTargetGear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed
inline float UWheeledVehicleMovementComponent::GetForwardSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed");

	struct GetForwardSpeed_Params {
		
		float ReturnValue;

	}; GetForwardSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed
inline float UWheeledVehicleMovementComponent::GetEngineRotationSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed");

	struct GetEngineRotationSpeed_Params {
		
		float ReturnValue;

	}; GetEngineRotationSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed
inline float UWheeledVehicleMovementComponent::GetEngineMaxRotationSpeed() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed");

	struct GetEngineMaxRotationSpeed_Params {
		
		float ReturnValue;

	}; GetEngineMaxRotationSpeed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear
inline int32_t UWheeledVehicleMovementComponent::GetCurrentGear() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear");

	struct GetCurrentGear_Params {
		
		int32_t ReturnValue;

	}; GetCurrentGear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.VehicleAnimInstance.GetVehicle
inline struct AWheeledVehicle UVehicleAnimInstance::GetVehicle() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleAnimInstance.GetVehicle");

	struct GetVehicle_Params {
		
		struct AWheeledVehicle ReturnValue;

	}; GetVehicle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.VehicleWheel.IsInAir
inline bool UVehicleWheel::IsInAir() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.IsInAir");

	struct IsInAir_Params {
		
		bool ReturnValue;

	}; IsInAir_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.VehicleWheel.GetSuspensionOffset
inline float UVehicleWheel::GetSuspensionOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSuspensionOffset");

	struct GetSuspensionOffset_Params {
		
		float ReturnValue;

	}; GetSuspensionOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.VehicleWheel.GetSteerAngle
inline float UVehicleWheel::GetSteerAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetSteerAngle");

	struct GetSteerAngle_Params {
		
		float ReturnValue;

	}; GetSteerAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PhysXVehicles.VehicleWheel.GetRotationAngle
inline float UVehicleWheel::GetRotationAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function PhysXVehicles.VehicleWheel.GetRotationAngle");

	struct GetRotationAngle_Params {
		
		float ReturnValue;

	}; GetRotationAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

