// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosBreakingSortMethod_MAX = 5,
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByHighestImpulse = 3,
	SortByNearestFirst = 4,
	Count = 5,
	EChaosCollisionSortMethod_MAX = 6,
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t {
	SortNone = 0,
	SortByHighestMass = 1,
	SortByHighestSpeed = 2,
	SortByNearestFirst = 3,
	Count = 4,
	EChaosTrailingSortMethod_MAX = 5,
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t {
	HideNone = 0,
	HideWithCollision = 1,
	HideSelected = 2,
	HideWholeCollection = 3,
	HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5,
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t {
	Chaos_Traansform = 0,
	Chaos_Max = 1,
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t {
	Chaos_Active = 0,
	Chaos_DynamicState = 1,
	Chaos_CollisionGroup = 2,
	Chaos_Max = 3,
};

// Class GeometryCollectionEngine.ChaosDestructionListener
class UChaosDestructionListener : public USceneComponent {

public:

	char bIsCollisionEventListeningEnabled : 1; // 0x1F0 (1)
	char bIsBreakingEventListeningEnabled : 1; // 0x1F0 (1)
	char bIsTrailingEventListeningEnabled : 1; // 0x1F0 (1)
	char pad_1F0_3 : 5; // 0x1F0 (1)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1F4 (24)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x20C (24)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x224 (24)
	struct TSet<struct AChaosSolverActor> ChaosSolverActors; // 0x240 (80)
	struct TSet<struct AGeometryCollectionActor> GeometryCollectionActors; // 0x290 (80)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x2E0 (16)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x2F0 (16)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x300 (16)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6810>
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6720>
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6630>
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6590>
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6500>
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D63D0>
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6340>
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D62A0>
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6210>
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6190>
	void RemoveChaosSolverActor(struct AChaosSolverActor ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF06690>
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35D6000>
	void AddGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D5D40>
	void AddChaosSolverActor(struct AChaosSolverActor ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF06690>
};

// Class GeometryCollectionEngine.GeometryCollectionActor
class AGeometryCollectionActor : public UActor {

public:

	struct UGeometryCollectionComponent GeometryCollectionComponent; // 0x220 (8)
	struct UGeometryCollectionDebugDrawComponent GeometryCollectionDebugDrawComponent; // 0x228 (8)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x35D6030>
};

// Class GeometryCollectionEngine.GeometryCollectionCache
class UGeometryCollectionCache : public Object {

public:

	struct FRecordedTransformTrack RecordedData; // 0x28 (16)
	struct UGeometryCollection SupportedCollection; // 0x38 (8)
	struct FGuid CompatibleCollectionState; // 0x40 (16)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
class UGeometryCollectionComponent : public UMeshComponent {

public:

	struct AChaosSolverActor ChaosSolverActor; // 0x438 (8)
	struct UGeometryCollection RestCollection; // 0x520 (8)
	struct TArray<struct AFieldSystemActor> InitializationFields; // 0x528 (16)
	bool Simulating; // 0x538 (1)
	enum class EObjectStateTypeEnum ObjectType; // 0x540 (1)
	bool EnableClustering; // 0x541 (1)
	int32_t ClusterGroupIndex; // 0x544 (4)
	int32_t MaxClusterLevel; // 0x548 (4)
	struct TArray<float> DamageThreshold; // 0x550 (16)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x560 (1)
	int32_t CollisionGroup; // 0x564 (4)
	float CollisionSampleFraction; // 0x568 (4)
	float LinearEtherDrag; // 0x56C (4)
	float AngularEtherDrag; // 0x570 (4)
	struct UChaosPhysicalMaterial PhysicalMaterial; // 0x578 (8)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x580 (1)
	struct FVector InitialLinearVelocity; // 0x584 (12)
	struct FVector InitialAngularVelocity; // 0x590 (12)
	struct FGeomComponentCacheParameters CacheParameters; // 0x5A0 (80)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x5F0 (16)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x600 (16)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x628 (16)
	float DesiredCacheTime; // 0x638 (4)
	bool CachePlayback; // 0x63C (1)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x640 (16)
	bool bNotifyBreaks; // 0x650 (1)
	bool bNotifyCollisions; // 0x651 (1)
	struct UBodySetup DummyBodySetup; // 0x850 (8)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D6470>
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D5E90>
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D5DC0>
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
class AGeometryCollectionDebugDrawActor : public UActor {

public:

	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x220 (1)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x228 (24)
	bool bDebugDrawWholeCollection; // 0x240 (1)
	bool bDebugDrawHierarchy; // 0x241 (1)
	bool bDebugDrawClustering; // 0x242 (1)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x243 (1)
	bool bShowRigidBodyId; // 0x244 (1)
	bool bShowRigidBodyCollision; // 0x245 (1)
	bool bCollisionAtOrigin; // 0x246 (1)
	bool bShowRigidBodyTransform; // 0x247 (1)
	bool bShowRigidBodyInertia; // 0x248 (1)
	bool bShowRigidBodyVelocity; // 0x249 (1)
	bool bShowRigidBodyForce; // 0x24A (1)
	bool bShowRigidBodyInfos; // 0x24B (1)
	bool bShowTransformIndex; // 0x24C (1)
	bool bShowTransform; // 0x24D (1)
	bool bShowParent; // 0x24E (1)
	bool bShowLevel; // 0x24F (1)
	bool bShowConnectivityEdges; // 0x250 (1)
	bool bShowGeometryIndex; // 0x251 (1)
	bool bShowGeometryTransform; // 0x252 (1)
	bool bShowBoundingBox; // 0x253 (1)
	bool bShowFaces; // 0x254 (1)
	bool bShowFaceIndices; // 0x255 (1)
	bool bShowFaceNormals; // 0x256 (1)
	bool bShowSingleFace; // 0x257 (1)
	int32_t SingleFaceIndex; // 0x258 (4)
	bool bShowVertices; // 0x25C (1)
	bool bShowVertexIndices; // 0x25D (1)
	bool bShowVertexNormals; // 0x25E (1)
	bool bUseActiveVisualization; // 0x25F (1)
	float PointThickness; // 0x260 (4)
	float LineThickness; // 0x264 (4)
	bool bTextShadow; // 0x268 (1)
	float TextScale; // 0x26C (4)
	float NormalScale; // 0x270 (4)
	float AxisScale; // 0x274 (4)
	float ArrowScale; // 0x278 (4)
	struct FColor RigidBodyIdColor; // 0x27C (4)
	float RigidBodyTransformScale; // 0x280 (4)
	struct FColor RigidBodyCollisionColor; // 0x284 (4)
	struct FColor RigidBodyInertiaColor; // 0x288 (4)
	struct FColor RigidBodyVelocityColor; // 0x28C (4)
	struct FColor RigidBodyForceColor; // 0x290 (4)
	struct FColor RigidBodyInfoColor; // 0x294 (4)
	struct FColor TransformIndexColor; // 0x298 (4)
	float TransformScale; // 0x29C (4)
	struct FColor LevelColor; // 0x2A0 (4)
	struct FColor ParentColor; // 0x2A4 (4)
	float ConnectivityEdgeThickness; // 0x2A8 (4)
	struct FColor GeometryIndexColor; // 0x2AC (4)
	float GeometryTransformScale; // 0x2B0 (4)
	struct FColor BoundingBoxColor; // 0x2B4 (4)
	struct FColor FaceColor; // 0x2B8 (4)
	struct FColor FaceIndexColor; // 0x2BC (4)
	struct FColor FaceNormalColor; // 0x2C0 (4)
	struct FColor SingleFaceColor; // 0x2C4 (4)
	struct FColor VertexColor; // 0x2C8 (4)
	struct FColor VertexIndexColor; // 0x2CC (4)
	struct FColor VertexNormalColor; // 0x2D0 (4)
	struct UBillboardComponent SpriteComponent; // 0x2D8 (8)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
class UGeometryCollectionDebugDrawComponent : public UActorComponent {

public:

	struct AGeometryCollectionDebugDrawActor GeometryCollectionDebugDrawActor; // 0xB0 (8)
	struct AGeometryCollectionRenderLevelSetActor GeometryCollectionRenderLevelSetActor; // 0xB8 (8)
};

// Class GeometryCollectionEngine.GeometryCollection
class UGeometryCollection : public Object {

public:

	struct TArray<struct UMaterialInterface> Materials; // 0x30 (16)
	enum class ECollisionTypeEnum CollisionType; // 0x40 (1)
	enum class EImplicitTypeEnum ImplicitType; // 0x41 (1)
	int32_t MinLevelSetResolution; // 0x44 (4)
	int32_t MaxLevelSetResolution; // 0x48 (4)
	int32_t MinClusterLevelSetResolution; // 0x4C (4)
	int32_t MaxClusterLevelSetResolution; // 0x50 (4)
	float CollisionObjectReductionPercentage; // 0x54 (4)
	bool bMassAsDensity; // 0x58 (1)
	float Mass; // 0x5C (4)
	float MinimumMassClamp; // 0x60 (4)
	float CollisionParticlesFraction; // 0x64 (4)
	int32_t MaximumCollisionParticles; // 0x68 (4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70 (16)
	bool EnableRemovePiecesOnFracture; // 0x80 (1)
	struct TArray<struct UMaterialInterface> RemoveOnFractureMaterials; // 0x88 (16)
	struct FGuid PersistentGuid; // 0x98 (16)
	struct FGuid StateGuid; // 0xA8 (16)
	int32_t BoneSelectedMaterialIndex; // 0xB8 (4)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
class AGeometryCollectionRenderLevelSetActor : public UActor {

public:

	struct UVolumeTexture TargetVolumeTexture; // 0x220 (8)
	struct UMaterial RayMarchMaterial; // 0x228 (8)
	float SurfaceTolerance; // 0x230 (4)
	float Isovalue; // 0x234 (4)
	bool Enabled; // 0x238 (1)
	bool RenderVolumeBoundingBox; // 0x239 (1)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
class USkeletalMeshSimulationComponent : public UActorComponent {

public:

	struct UChaosPhysicalMaterial PhysicalMaterial; // 0xB8 (8)
	struct AChaosSolverActor ChaosSolverActor; // 0xC0 (8)
	struct UPhysicsAsset OverridePhysicsAsset; // 0xC8 (8)
	bool bSimulating; // 0xD0 (1)
	bool bNotifyCollisions; // 0xD1 (1)
	enum class EObjectStateTypeEnum ObjectType; // 0xD2 (1)
	float Density; // 0xD4 (4)
	float MinMass; // 0xD8 (4)
	float MaxMass; // 0xDC (4)
	enum class ECollisionTypeEnum CollisionType; // 0xE0 (1)
	float ImplicitShapeParticlesPerUnitArea; // 0xE4 (4)
	int32_t ImplicitShapeMinNumParticles; // 0xE8 (4)
	int32_t ImplicitShapeMaxNumParticles; // 0xEC (4)
	int32_t MinLevelSetResolution; // 0xF0 (4)
	int32_t MaxLevelSetResolution; // 0xF4 (4)
	int32_t CollisionGroup; // 0xF8 (4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xFC (1)
	struct FVector InitialLinearVelocity; // 0x100 (12)
	struct FVector InitialAngularVelocity; // 0x10C (12)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118 (16)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
class UStaticMeshSimulationComponent : public UActorComponent {

public:

	bool Simulating; // 0xB8 (1)
	bool bNotifyCollisions; // 0xB9 (1)
	enum class EObjectStateTypeEnum ObjectType; // 0xBA (1)
	float Mass; // 0xBC (4)
	enum class ECollisionTypeEnum CollisionType; // 0xC0 (1)
	enum class EImplicitTypeEnum ImplicitType; // 0xC1 (1)
	int32_t MinLevelSetResolution; // 0xC4 (4)
	int32_t MaxLevelSetResolution; // 0xC8 (4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xCC (1)
	struct FVector InitialLinearVelocity; // 0xD0 (12)
	struct FVector InitialAngularVelocity; // 0xDC (12)
	float DamageThreshold; // 0xE8 (4)
	struct UChaosPhysicalMaterial PhysicalMaterial; // 0xF0 (8)
	struct AChaosSolverActor ChaosSolverActor; // 0xF8 (8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100 (16)
	struct TArray<struct UPrimitiveComponent> SimulatedComponents; // 0x120 (16)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision(Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35D5FE0>
};

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
struct FGeomComponentCacheParameters {
	enum class EGeometryCollectionCacheType CacheMode; // 0x0 (1)
	struct UGeometryCollectionCache TargetCache; // 0x8 (8)
	float ReverseCacheBeginTime; // 0x10 (4)
	bool SaveCollisionData; // 0x14 (1)
	bool DoGenerateCollisionData; // 0x15 (1)
	int32_t CollisionDataSizeMax; // 0x18 (4)
	bool DoCollisionDataSpatialHash; // 0x1C (1)
	float CollisionDataSpatialHashRadius; // 0x20 (4)
	int32_t MaxCollisionPerCell; // 0x24 (4)
	bool SaveBreakingData; // 0x28 (1)
	bool DoGenerateBreakingData; // 0x29 (1)
	int32_t BreakingDataSizeMax; // 0x2C (4)
	bool DoBreakingDataSpatialHash; // 0x30 (1)
	float BreakingDataSpatialHashRadius; // 0x34 (4)
	int32_t MaxBreakingPerCell; // 0x38 (4)
	bool SaveTrailingData; // 0x3C (1)
	bool DoGenerateTrailingData; // 0x3D (1)
	int32_t TrailingDataSizeMax; // 0x40 (4)
	float TrailingMinSpeedThreshold; // 0x44 (4)
	float TrailingMinVolumeThreshold; // 0x48 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
struct FChaosCollisionEventData {
	struct FVector Location; // 0x0 (12)
	struct FVector Normal; // 0xC (12)
	struct FVector Velocity1; // 0x18 (12)
	struct FVector Velocity2; // 0x24 (12)
	float Mass1; // 0x30 (4)
	float Mass2; // 0x34 (4)
	struct FVector Impulse; // 0x38 (12)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
struct FChaosBreakingEventData {
	struct FVector Location; // 0x0 (12)
	struct FVector Velocity; // 0xC (12)
	float Mass; // 0x18 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
struct FChaosTrailingEventData {
	struct FVector Location; // 0x0 (12)
	struct FVector Velocity; // 0xC (12)
	struct FVector AngularVelocity; // 0x18 (12)
	float Mass; // 0x24 (4)
	int32_t ParticleIndex; // 0x28 (4)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0 (4)
	float MinRadius; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinMass; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0 (4)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinImpulse; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0 (4)
	float MinMass; // 0x4 (4)
	float MinSpeed; // 0x8 (4)
	float MinAngularSpeed; // 0xC (4)
	float MaxDistance; // 0x10 (4)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14 (1)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0 (4)
	struct AChaosSolverActor Solver; // 0x8 (8)
	struct AGeometryCollectionActor GeometryCollection; // 0x10 (8)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0 (4)
	enum class ECollisionTypeEnum CollisionType; // 0x4 (1)
	enum class EImplicitTypeEnum ImplicitType; // 0x5 (1)
	int32_t MinLevelSetResolution; // 0x8 (4)
	int32_t MaxLevelSetResolution; // 0xC (4)
	int32_t MinClusterLevelSetResolution; // 0x10 (4)
	int32_t MaxClusterLevelSetResolution; // 0x14 (4)
	int32_t CollisionObjectReductionPercentage; // 0x18 (4)
	float CollisionParticlesFraction; // 0x1C (4)
	int32_t MaximumCollisionParticles; // 0x20 (4)
};

// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
inline void UChaosDestructionListener::SortTrailingEvents(struct TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents");

	struct SortTrailingEvents_Params {
		struct TArray<struct FChaosTrailingEventData>& TrailingEvents;
		enum class EChaosTrailingSortMethod SortMethod;
	}; SortTrailingEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	TrailingEvents = Params.TrailingEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
inline void UChaosDestructionListener::SortCollisionEvents(struct TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents");

	struct SortCollisionEvents_Params {
		struct TArray<struct FChaosCollisionEventData>& CollisionEvents;
		enum class EChaosCollisionSortMethod SortMethod;
	}; SortCollisionEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionEvents = Params.CollisionEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
inline void UChaosDestructionListener::SortBreakingEvents(struct TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents");

	struct SortBreakingEvents_Params {
		struct TArray<struct FChaosBreakingEventData>& BreakingEvents;
		enum class EChaosBreakingSortMethod SortMethod;
	}; SortBreakingEvents_Params Params;

	Params.SortMethod = SortMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	BreakingEvents = Params.BreakingEvents;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
inline void UChaosDestructionListener::SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings");

	struct SetTrailingEventRequestSettings_Params {
		struct FChaosTrailingEventRequestSettings& InSettings;
	}; SetTrailingEventRequestSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
inline void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled");

	struct SetTrailingEventEnabled_Params {
		bool bIsEnabled;
	}; SetTrailingEventEnabled_Params Params;

	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
inline void UChaosDestructionListener::SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings");

	struct SetCollisionEventRequestSettings_Params {
		struct FChaosCollisionEventRequestSettings& InSettings;
	}; SetCollisionEventRequestSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
inline void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled");

	struct SetCollisionEventEnabled_Params {
		bool bIsEnabled;
	}; SetCollisionEventEnabled_Params Params;

	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
inline void UChaosDestructionListener::SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings");

	struct SetBreakingEventRequestSettings_Params {
		struct FChaosBreakingEventRequestSettings& InSettings;
	}; SetBreakingEventRequestSettings_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSettings = Params.InSettings;

}

// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
inline void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled");

	struct SetBreakingEventEnabled_Params {
		bool bIsEnabled;
	}; SetBreakingEventEnabled_Params Params;

	Params.bIsEnabled = bIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
inline void UChaosDestructionListener::RemoveGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor");

	struct RemoveGeometryCollectionActor_Params {
		struct AGeometryCollectionActor GeometryCollectionActor;
	}; RemoveGeometryCollectionActor_Params Params;

	Params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
inline void UChaosDestructionListener::RemoveChaosSolverActor(struct AChaosSolverActor ChaosSolverActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor");

	struct RemoveChaosSolverActor_Params {
		struct AChaosSolverActor ChaosSolverActor;
	}; RemoveChaosSolverActor_Params Params;

	Params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
inline bool UChaosDestructionListener::IsEventListening() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening");

	struct IsEventListening_Params {
		
		bool ReturnValue;

	}; IsEventListening_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
inline void UChaosDestructionListener::AddGeometryCollectionActor(struct AGeometryCollectionActor GeometryCollectionActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor");

	struct AddGeometryCollectionActor_Params {
		struct AGeometryCollectionActor GeometryCollectionActor;
	}; AddGeometryCollectionActor_Params Params;

	Params.GeometryCollectionActor = GeometryCollectionActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
inline void UChaosDestructionListener::AddChaosSolverActor(struct AChaosSolverActor ChaosSolverActor) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor");

	struct AddChaosSolverActor_Params {
		struct AChaosSolverActor ChaosSolverActor;
	}; AddChaosSolverActor_Params Params;

	Params.ChaosSolverActor = ChaosSolverActor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
inline bool AGeometryCollectionActor::RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult& OutHit) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle");

	struct RaycastSingle_Params {
		struct FVector Start;
		struct FVector End;
		struct FHitResult& OutHit;
		bool ReturnValue;

	}; RaycastSingle_Params Params;

	Params.Start = Start;
	Params.End = End;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutHit = Params.OutHit;


	return params.ReturnValue;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
inline void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks");

	struct SetNotifyBreaks_Params {
		bool bNewNotifyBreaks;
	}; SetNotifyBreaks_Params Params;

	Params.bNewNotifyBreaks = bNewNotifyBreaks;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
inline void UGeometryCollectionComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct FChaosPhysicsCollisionInfo& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
inline void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	struct NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params {
		struct UGeometryCollectionComponent FracturedComponent;
	}; NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Params;

	Params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
inline void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent FracturedComponent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	struct NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params {
		struct UGeometryCollectionComponent FracturedComponent;
	}; NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Params;

	Params.FracturedComponent = FracturedComponent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
inline void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField");

	struct ApplyPhysicsField_Params {
		bool Enabled;
		enum class EGeometryCollectionPhysicsTypeEnum Target;
		struct UFieldSystemMetaData MetaData;
		struct UFieldNodeBase Field;
	}; ApplyPhysicsField_Params Params;

	Params.Enabled = Enabled;
	Params.Target = Target;
	Params.MetaData = MetaData;
	Params.Field = Field;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
inline void UGeometryCollectionComponent::ApplyKinematicField(float Radius, struct FVector Position) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField");

	struct ApplyKinematicField_Params {
		float Radius;
		struct FVector Position;
	}; ApplyKinematicField_Params Params;

	Params.Radius = Radius;
	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
inline void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct FChaosPhysicsCollisionInfo& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
inline void UStaticMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision");

	struct ReceivePhysicsCollision_Params {
		struct FChaosPhysicsCollisionInfo& CollisionInfo;
	}; ReceivePhysicsCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	CollisionInfo = Params.CollisionInfo;

}

// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
inline void UStaticMeshSimulationComponent::ForceRecreatePhysicsState() {
	static auto fn = UObject::FindObject<UFunction>("Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState");

	struct ForceRecreatePhysicsState_Params {
		
	}; ForceRecreatePhysicsState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

