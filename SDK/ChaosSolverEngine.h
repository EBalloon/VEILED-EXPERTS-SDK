// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t {
	Chaos_PointImplicit = 0,
	Chaos_DelaunayTriangulation = 1,
	Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	Chaos_None = 4,
	Chaos_EClsuterCreationParameters_Max = 5,
	Chaos_MAX = 6,
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent {

public:

	struct TMap<struct UPrimitiveComponent, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1C8 (80)
	struct TMap<struct UPrimitiveComponent, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218 (80)
};

// Class ChaosSolverEngine.ChaosSolverActor
class AChaosSolverActor : public UActor {

public:

	float TimeStepMultiplier; // 0x220 (4)
	int32_t CollisionIterations; // 0x224 (4)
	int32_t PushOutIterations; // 0x228 (4)
	int32_t PushOutPairIterations; // 0x22C (4)
	float ClusterConnectionFactor; // 0x230 (4)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x234 (1)
	bool DoGenerateCollisionData; // 0x235 (1)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x238 (16)
	bool DoGenerateBreakingData; // 0x248 (1)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x24C (16)
	bool DoGenerateTrailingData; // 0x25C (1)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x260 (16)
	bool bHasFloor; // 0x270 (1)
	float FloorHeight; // 0x274 (4)
	float MassScale; // 0x278 (4)
	bool bGenerateContactGraph; // 0x27C (1)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x27D (3)
	struct UBillboardComponent SpriteComponent; // 0x280 (8)
	struct UChaosGameplayEventDispatcher GameplayEventDispatcherComponent; // 0x2A0 (8)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B3E30>
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35B3E10>
};

// Class ChaosSolverEngine.ChaosSolverSettings
class UChaosSolverSettings : public UDeveloperSettings {

public:

	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40 (24)
};

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
struct FChaosPhysicsCollisionInfo {
	struct UPrimitiveComponent Component; // 0x0 (8)
	struct UPrimitiveComponent OtherComponent; // 0x8 (8)
	struct FVector Location; // 0x10 (12)
	struct FVector Normal; // 0x1C (12)
	struct FVector AccumulatedImpulse; // 0x28 (12)
	struct FVector Velocity; // 0x34 (12)
	struct FVector OtherVelocity; // 0x40 (12)
	struct FVector AngularVelocity; // 0x4C (12)
	struct FVector OtherAngularVelocity; // 0x58 (12)
	float Mass; // 0x64 (4)
	float OtherMass; // 0x68 (4)
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
struct FChaosBreakEvent {
	struct UPrimitiveComponent Component; // 0x0 (8)
	struct FVector Location; // 0x8 (12)
	struct FVector Velocity; // 0x14 (12)
	struct FVector AngularVelocity; // 0x20 (12)
	float Mass; // 0x2C (4)
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
struct FChaosHandlerSet {
	struct TSet<struct Object> ChaosHandlers; // 0x8 (80)
};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
struct FChaosDebugSubstepControl {
	bool bPause; // 0x0 (1)
	bool bSubstep; // 0x1 (1)
	bool bStep; // 0x2 (1)
};

// Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive
inline void AChaosSolverActor::SetSolverActive(bool bActive) {
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive");

	struct SetSolverActive_Params {
		bool bActive;
	}; SetSolverActive_Params Params;

	Params.bActive = bActive;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
inline void AChaosSolverActor::SetAsCurrentWorldSolver() {
	static auto fn = UObject::FindObject<UFunction>("Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver");

	struct SetAsCurrentWorldSolver_Params {
		
	}; SetAsCurrentWorldSolver_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

