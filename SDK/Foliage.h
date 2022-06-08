// Enum Foliage.EFoliageScaling
enum class EFoliageScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	LockXZ = 3,
	LockYZ = 4,
	EFoliageScaling_MAX = 5,
};

// Enum Foliage.EVertexColorMaskChannel
enum class EVertexColorMaskChannel : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	MAX_None = 4,
	EVertexColorMaskChannel_MAX = 5,
};

// Enum Foliage.FoliageVertexColorMask
enum class FoliageVertexColorMask : uint8_t {
	FOLIAGEVERTEXCOLORMASK_Disabled = 0,
	FOLIAGEVERTEXCOLORMASK_Red = 1,
	FOLIAGEVERTEXCOLORMASK_Green = 2,
	FOLIAGEVERTEXCOLORMASK_Blue = 3,
	FOLIAGEVERTEXCOLORMASK_Alpha = 4,
	FOLIAGEVERTEXCOLORMASK_MAX = 5,
};

// Enum Foliage.ESimulationQuery
enum class ESimulationQuery : uint8_t {
	None = 0,
	CollisionOverlap = 1,
	ShadeOverlap = 2,
	AnyOverlap = 3,
	ESimulationQuery_MAX = 4,
};

// Enum Foliage.ESimulationOverlap
enum class ESimulationOverlap : uint8_t {
	CollisionOverlap = 0,
	ShadeOverlap = 1,
	None = 2,
	ESimulationOverlap_MAX = 3,
};

// Class Foliage.FoliageInstancedStaticMeshComponent
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {

public:

	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x630 (16)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x640 (16)
	struct FGuid GenerationGuid; // 0x650 (16)
};

// Class Foliage.FoliageType
class UFoliageType : public Object {

public:

	struct FGuid UpdateGuid; // 0x28 (16)
	float Density; // 0x38 (4)
	float DensityAdjustmentFactor; // 0x3C (4)
	float Radius; // 0x40 (4)
	bool bSingleInstanceModeOverrideRadius; // 0x44 (1)
	float SingleInstanceModeRadius; // 0x48 (4)
	enum class EFoliageScaling Scaling; // 0x4C (1)
	struct FFloatInterval ScaleX; // 0x50 (8)
	struct FFloatInterval ScaleY; // 0x58 (8)
	struct FFloatInterval ScaleZ; // 0x60 (8)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68 (48)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98 (1)
	float VertexColorMaskThreshold; // 0x9C (4)
	char VertexColorMaskInvert : 1; // 0xA0 (1)
	char pad_97_1 : 7; // 0x97 (1)
	struct FFloatInterval ZOffset; // 0xA4 (8)
	char AlignToNormal : 1; // 0xAC (1)
	char pad_A0_1 : 7; // 0xA0 (1)
	float AlignMaxAngle; // 0xB0 (4)
	char RandomYaw : 1; // 0xB4 (1)
	char pad_A5_1 : 7; // 0xA5 (1)
	float RandomPitchAngle; // 0xB8 (4)
	struct FFloatInterval GroundSlopeAngle; // 0xBC (8)
	struct FFloatInterval Height; // 0xC4 (8)
	struct TArray<struct FName> LandscapeLayers; // 0xD0 (16)
	float MinimumLayerWeight; // 0xE0 (4)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xE8 (16)
	float MinimumExclusionLayerWeight; // 0xF8 (4)
	struct FName LandscapeLayer; // 0xFC (8)
	char CollisionWithWorld : 1; // 0x104 (1)
	char pad_EA_1 : 7; // 0xEA (1)
	struct FVector CollisionScale; // 0x108 (12)
	struct FBoxSphereBounds MeshBounds; // 0x114 (28)
	struct FVector LowBoundOriginRadius; // 0x130 (12)
	enum class EComponentMobility Mobility; // 0x13C (1)
	struct FInt32Interval CullDistance; // 0x140 (8)
	char bEnableStaticLighting : 1; // 0x148 (1)
	char pad_128_1 : 7; // 0x128 (1)
	char pad_129_0 : 1; // 0x129 (1)
	char CastShadow : 1; // 0x148 (1)
	char pad_129_2 : 6; // 0x129 (1)
	char pad_12A_0 : 2; // 0x12A (1)
	char bAffectDynamicIndirectLighting : 1; // 0x148 (1)
	char pad_12A_3 : 5; // 0x12A (1)
	char pad_12B_0 : 3; // 0x12B (1)
	char bAffectDistanceFieldLighting : 1; // 0x148 (1)
	char pad_12B_4 : 4; // 0x12B (1)
	char pad_12C_0 : 4; // 0x12C (1)
	char bCastDynamicShadow : 1; // 0x148 (1)
	char pad_12C_5 : 3; // 0x12C (1)
	char pad_12D_0 : 5; // 0x12D (1)
	char bCastStaticShadow : 1; // 0x148 (1)
	char pad_12D_6 : 2; // 0x12D (1)
	char pad_12E_0 : 6; // 0x12E (1)
	char bCastShadowAsTwoSided : 1; // 0x148 (1)
	char pad_12E_7 : 1; // 0x12E (1)
	char pad_12F_0 : 7; // 0x12F (1)
	char bReceivesDecals : 1; // 0x148 (1)
	char bOverrideLightMapRes : 1; // 0x149 (1)
	char pad_130_1 : 7; // 0x130 (1)
	int32_t OverriddenLightMapRes; // 0x14C (4)
	enum class ELightmapType LightmapType; // 0x150 (1)
	char bUseAsOccluder : 1; // 0x154 (1)
	char pad_136_1 : 7; // 0x136 (1)
	struct FBodyInstance BodyInstance; // 0x158 (304)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x288 (1)
	struct FLightingChannels LightingChannels; // 0x289 (1)
	char bRenderCustomDepth : 1; // 0x28C (1)
	char pad_269_1 : 7; // 0x269 (1)
	int32_t CustomDepthStencilValue; // 0x290 (4)
	int32_t TranslucencySortPriority; // 0x294 (4)
	float CollisionRadius; // 0x298 (4)
	float ShadeRadius; // 0x29C (4)
	int32_t NumSteps; // 0x2A0 (4)
	float InitialSeedDensity; // 0x2A4 (4)
	float AverageSpreadDistance; // 0x2A8 (4)
	float SpreadVariance; // 0x2AC (4)
	int32_t SeedsPerStep; // 0x2B0 (4)
	int32_t DistributionSeed; // 0x2B4 (4)
	float MaxInitialSeedOffset; // 0x2B8 (4)
	bool bCanGrowInShade; // 0x2BC (1)
	bool bSpawnsInShade; // 0x2BD (1)
	float MaxInitialAge; // 0x2C0 (4)
	float MaxAge; // 0x2C4 (4)
	float OverlapPriority; // 0x2C8 (4)
	struct FFloatInterval ProceduralScale; // 0x2CC (8)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2D8 (136)
	int32_t ChangeCount; // 0x360 (4)
	char ReapplyDensity : 1; // 0x364 (1)
	char pad_338_1 : 7; // 0x338 (1)
	char pad_339_0 : 1; // 0x339 (1)
	char ReapplyRadius : 1; // 0x364 (1)
	char pad_339_2 : 6; // 0x339 (1)
	char pad_33A_0 : 2; // 0x33A (1)
	char ReapplyAlignToNormal : 1; // 0x364 (1)
	char pad_33A_3 : 5; // 0x33A (1)
	char pad_33B_0 : 3; // 0x33B (1)
	char ReapplyRandomYaw : 1; // 0x364 (1)
	char pad_33B_4 : 4; // 0x33B (1)
	char pad_33C_0 : 4; // 0x33C (1)
	char ReapplyScaling : 1; // 0x364 (1)
	char pad_33C_5 : 3; // 0x33C (1)
	char pad_33D_0 : 5; // 0x33D (1)
	char ReapplyScaleX : 1; // 0x364 (1)
	char pad_33D_6 : 2; // 0x33D (1)
	char pad_33E_0 : 6; // 0x33E (1)
	char ReapplyScaleY : 1; // 0x364 (1)
	char pad_33E_7 : 1; // 0x33E (1)
	char pad_33F_0 : 7; // 0x33F (1)
	char ReapplyScaleZ : 1; // 0x364 (1)
	char ReapplyRandomPitchAngle : 1; // 0x365 (1)
	char pad_340_1 : 7; // 0x340 (1)
	char pad_341_0 : 1; // 0x341 (1)
	char ReapplyGroundSlope : 1; // 0x365 (1)
	char pad_341_2 : 6; // 0x341 (1)
	char pad_342_0 : 2; // 0x342 (1)
	char ReapplyHeight : 1; // 0x365 (1)
	char pad_342_3 : 5; // 0x342 (1)
	char pad_343_0 : 3; // 0x343 (1)
	char ReapplyLandscapeLayers : 1; // 0x365 (1)
	char pad_343_4 : 4; // 0x343 (1)
	char pad_344_0 : 4; // 0x344 (1)
	char ReapplyZOffset : 1; // 0x365 (1)
	char pad_344_5 : 3; // 0x344 (1)
	char pad_345_0 : 5; // 0x345 (1)
	char ReapplyCollisionWithWorld : 1; // 0x365 (1)
	char pad_345_6 : 2; // 0x345 (1)
	char pad_346_0 : 6; // 0x346 (1)
	char ReapplyVertexColorMask : 1; // 0x365 (1)
	char pad_346_7 : 1; // 0x346 (1)
	char pad_347_0 : 7; // 0x347 (1)
	char bEnableDensityScaling : 1; // 0x365 (1)
	struct TArray<struct URuntimeVirtualTexture> RuntimeVirtualTextures; // 0x368 (16)
	int32_t VirtualTextureCullMips; // 0x378 (4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x37C (1)
};

// Class Foliage.FoliageType_Actor
class UFoliageType_Actor : public UFoliageType {

public:

	struct UClass* ActorClass; // 0x380 (8)
	bool bShouldAttachToBaseComponent; // 0x388 (1)
};

// Class Foliage.FoliageType_InstancedStaticMesh
class UFoliageType_InstancedStaticMesh : public UFoliageType {

public:

	struct UStaticMesh Mesh; // 0x380 (8)
	struct TArray<struct UMaterialInterface> OverrideMaterials; // 0x388 (16)
	struct UClass* ComponentClass; // 0x398 (8)
};

// Class Foliage.InteractiveFoliageActor
class AInteractiveFoliageActor : public AStaticMeshActor {

public:

	struct UCapsuleComponent CapsuleComponent; // 0x230 (8)
	struct FVector TouchingActorEntryPosition; // 0x238 (12)
	struct FVector FoliageVelocity; // 0x244 (12)
	struct FVector FoliageForce; // 0x250 (12)
	struct FVector FoliagePosition; // 0x25C (12)
	float FoliageDamageImpulseScale; // 0x268 (4)
	float FoliageTouchImpulseScale; // 0x26C (4)
	float FoliageStiffness; // 0x270 (4)
	float FoliageStiffnessQuadratic; // 0x274 (4)
	float FoliageDamping; // 0x278 (4)
	float MaxDamageImpulse; // 0x27C (4)
	float MaxTouchImpulse; // 0x280 (4)
	float MaxForce; // 0x284 (4)
	float Mass; // 0x288 (4)

	void CapsuleTouched(struct UPrimitiveComponent OverlappedComp, struct UActor Other, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched(Final|Native|Protected|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x27E7E40>
};

// Class Foliage.ProceduralFoliageBlockingVolume
class AProceduralFoliageBlockingVolume : public AVolume {

public:

	struct AProceduralFoliageVolume ProceduralFoliageVolume; // 0x258 (8)
};

// Class Foliage.ProceduralFoliageComponent
class UProceduralFoliageComponent : public UActorComponent {

public:

	struct UProceduralFoliageSpawner FoliageSpawner; // 0xB0 (8)
	float TileOverlap; // 0xB8 (4)
	struct AVolume SpawningVolume; // 0xC0 (8)
	struct FGuid ProceduralGuid; // 0xC8 (16)
};

// Class Foliage.ProceduralFoliageSpawner
class UProceduralFoliageSpawner : public Object {

public:

	int32_t RandomSeed; // 0x28 (4)
	float TileSize; // 0x2C (4)
	int32_t NumUniqueTiles; // 0x30 (4)
	float MinimumQuadTreeSize; // 0x34 (4)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40 (16)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x27E82A0>
};

// Class Foliage.ProceduralFoliageTile
class UProceduralFoliageTile : public Object {

public:

	struct UProceduralFoliageSpawner FoliageSpawner; // 0x28 (8)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xD0 (16)
};

// Class Foliage.ProceduralFoliageVolume
class AProceduralFoliageVolume : public AVolume {

public:

	struct UProceduralFoliageComponent ProceduralComponent; // 0x258 (8)
};

// ScriptStruct Foliage.FoliageVertexColorChannelMask
struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0 (1)
	char pad_0_1 : 7; // 0x0 (1)
	float MaskThreshold; // 0x4 (4)
	char InvertMask : 1; // 0x8 (1)
};

// ScriptStruct Foliage.FoliageTypeObject
struct FFoliageTypeObject {
	struct Object FoliageTypeObject; // 0x0 (8)
	struct UFoliageType TypeInstance; // 0x8 (8)
	bool bIsAsset; // 0x10 (1)
	struct UClass* Type; // 0x18 (8)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
struct FProceduralFoliageInstance {
	struct FVector Location; // 0x0 (12)
	struct FQuat Rotation; // 0x10 (16)
	struct FVector Normal; // 0x20 (12)
	float Age; // 0x2C (4)
	float Scale; // 0x30 (4)
	struct UFoliageType Type; // 0x38 (8)
};

// Function Foliage.InteractiveFoliageActor.CapsuleTouched
inline void AInteractiveFoliageActor::CapsuleTouched(struct UPrimitiveComponent OverlappedComp, struct UActor Other, struct UPrimitiveComponent OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult& OverlapInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.InteractiveFoliageActor.CapsuleTouched");

	struct CapsuleTouched_Params {
		struct UPrimitiveComponent OverlappedComp;
		struct UActor Other;
		struct UPrimitiveComponent OtherComp;
		int32_t OtherBodyIndex;
		bool bFromSweep;
		struct FHitResult& OverlapInfo;
	}; CapsuleTouched_Params Params;

	Params.OverlappedComp = OverlappedComp;
	Params.Other = Other;
	Params.OtherComp = OtherComp;
	Params.OtherBodyIndex = OtherBodyIndex;
	Params.bFromSweep = bFromSweep;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OverlapInfo = Params.OverlapInfo;

}

// Function Foliage.ProceduralFoliageSpawner.Simulate
inline void UProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
	static auto fn = UObject::FindObject<UFunction>("Function Foliage.ProceduralFoliageSpawner.Simulate");

	struct Simulate_Params {
		int32_t NumSteps;
	}; Simulate_Params Params;

	Params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

