// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t {
	LSBM_AdditiveBlend = 0,
	LSBM_AlphaBlend = 1,
	LSBM_MAX = 2,
};

// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t {
	LSE_None = 0,
	LSE_NoLandscapeInfo = 1,
	LSE_CollsionXY = 2,
	LSE_NoLayerInfo = 3,
	LSE_MAX = 4,
};

// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t {
	Clear_Weightmap = 1,
	Clear_Heightmap = 2,
	Clear_All = 3,
	Clear_MAX = 4,
};

// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t {
	LGT_None = 0,
	LGT_Height = 1,
	LGT_Weight = 2,
	LGT_MAX = 3,
};

// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t {
	Uniform = 0,
	Free = 1,
	LockXY = 2,
	EGrassScaling_MAX = 3,
};

// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t {
	Red = 0,
	Green = 1,
	Blue = 2,
	Alpha = 3,
	ESplineModulationColorMask_MAX = 4,
};

// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t {
	Linear = 0,
	SquareRoot = 1,
	ELandscapeLODFalloff_MAX = 2,
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t {
	Default = 0,
	Alphabetical = 1,
	UserSpecific = 2,
	ELandscapeLayerDisplayMode_MAX = 3,
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t {
	None = 0,
	UseMaxLayers = 1,
	ExistingOnly = 2,
	UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction_MAX = 4,
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t {
	Additive = 0,
	Layered = 1,
	ELandscapeImportAlphamapType_MAX = 2,
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class LandscapeSplineMeshOrientation : uint8_t {
	LSMO_XUp = 0,
	LSMO_YUp = 1,
	LSMO_MAX = 2,
};

// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t {
	LB_WeightBlend = 0,
	LB_AlphaBlend = 1,
	LB_HeightBlend = 2,
	LB_MAX = 3,
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t {
	LCCT_None = 0,
	LCCT_CustomUV0 = 1,
	LCCT_CustomUV1 = 2,
	LCCT_CustomUV2 = 3,
	LCCT_WeightMapUV = 4,
	LCCT_MAX = 5,
};

// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t {
	TCMT_Auto = 0,
	TCMT_XY = 1,
	TCMT_XZ = 2,
	TCMT_YZ = 3,
	TCMT_MAX = 4,
};

// Class Landscape.ControlPointMeshActor
class AControlPointMeshActor : public UActor {

public:

	struct UControlPointMeshComponent ControlPointMeshComponent; // 0x220 (8)
};

// Class Landscape.ControlPointMeshComponent
class UControlPointMeshComponent : public UStaticMeshComponent {

public:

	float VirtualTextureMainPassMaxDrawDistance; // 0x498 (4)
};

// Class Landscape.LandscapeProxy
class ALandscapeProxy : public UActor {

public:

	struct ULandscapeSplinesComponent SplineComponent; // 0x220 (8)
	struct FGuid LandscapeGuid; // 0x228 (16)
	struct FIntPoint LandscapeSectionOffset; // 0x238 (8)
	int32_t MaxLODLevel; // 0x240 (4)
	float LODDistanceFactor; // 0x244 (4)
	enum class ELandscapeLODFalloff LODFalloff; // 0x248 (1)
	float ComponentScreenSizeToUseSubSections; // 0x24C (4)
	float LOD0ScreenSize; // 0x250 (4)
	float LOD0DistributionSetting; // 0x254 (4)
	float LODDistributionSetting; // 0x258 (4)
	float TessellationComponentScreenSize; // 0x25C (4)
	bool UseTessellationComponentScreenSizeFalloff; // 0x260 (1)
	float TessellationComponentScreenSizeFalloff; // 0x264 (4)
	int32_t OccluderGeometryLOD; // 0x268 (4)
	int32_t StaticLightingLOD; // 0x26C (4)
	struct UPhysicalMaterial DefaultPhysMaterial; // 0x270 (8)
	float StreamingDistanceMultiplier; // 0x278 (4)
	struct UMaterialInterface LandscapeMaterial; // 0x280 (8)
	struct UMaterialInterface LandscapeHoleMaterial; // 0x2A8 (8)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2B0 (16)
	bool bMeshHoles; // 0x2C0 (1)
	char MeshHolesMaxLod; // 0x2C1 (1)
	struct TArray<struct URuntimeVirtualTexture> RuntimeVirtualTextures; // 0x2C8 (16)
	int32_t VirtualTextureNumLods; // 0x2D8 (4)
	int32_t VirtualTextureLodBias; // 0x2DC (4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2E0 (1)
	float NegativeZBoundsExtension; // 0x2E4 (4)
	float PositiveZBoundsExtension; // 0x2E8 (4)
	struct TArray<struct ULandscapeComponent> LandscapeComponents; // 0x2F0 (16)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent> CollisionComponents; // 0x300 (16)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent> FoliageComponents; // 0x310 (16)
	bool bHasLandscapeGrass; // 0x384 (1)
	float StaticLightingResolution; // 0x388 (4)
	char bCastStaticShadow : 1; // 0x38C (1)
	char pad_2EE_1 : 7; // 0x2EE (1)
	char pad_2EF_0 : 1; // 0x2EF (1)
	char bCastShadowAsTwoSided : 1; // 0x38C (1)
	char pad_2EF_2 : 6; // 0x2EF (1)
	char pad_2F0_0 : 2; // 0x2F0 (1)
	char bCastFarShadow : 1; // 0x38C (1)
	char pad_2F0_3 : 5; // 0x2F0 (1)
	char bAffectDistanceFieldLighting : 1; // 0x390 (1)
	char pad_2F1_1 : 7; // 0x2F1 (1)
	struct FLightingChannels LightingChannels; // 0x391 (1)
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x394 (1)
	char pad_2F3_1 : 7; // 0x2F3 (1)
	char pad_2F4_0 : 1; // 0x2F4 (1)
	char bRenderCustomDepth : 1; // 0x394 (1)
	char pad_2F4_2 : 6; // 0x2F4 (1)
	int32_t CustomDepthStencilValue; // 0x398 (4)
	float LDMaxDrawDistance; // 0x39C (4)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3A0 (24)
	int32_t CollisionMipLevel; // 0x3B8 (4)
	int32_t SimpleCollisionMipLevel; // 0x3BC (4)
	float CollisionThickness; // 0x3C0 (4)
	struct FBodyInstance BodyInstance; // 0x3C8 (304)
	char bGenerateOverlapEvents : 1; // 0x4F8 (1)
	char pad_451_1 : 7; // 0x451 (1)
	char pad_452_0 : 1; // 0x452 (1)
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4F8 (1)
	char pad_452_2 : 6; // 0x452 (1)
	int32_t ComponentSizeQuads; // 0x4FC (4)
	int32_t SubsectionSizeQuads; // 0x500 (4)
	int32_t NumSubsections; // 0x504 (4)
	char bUsedForNavigation : 1; // 0x508 (1)
	char pad_45F_1 : 7; // 0x45F (1)
	char pad_460_0 : 1; // 0x460 (1)
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x508 (1)
	char pad_460_2 : 6; // 0x460 (1)
	bool bUseDynamicMaterialInstance; // 0x50C (1)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x50D (1)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x50E (1)
	bool bHasLayersContent; // 0x50F (1)
	struct TMap<struct UTexture2D, struct ULandscapeWeightmapUsage> WeightmapUsageMap; // 0x510 (80)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue(Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x28215F0>
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue(Final|RequiredAPI|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2821530>
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue(Final|RequiredAPI|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2821460>
	void EditorSetLandscapeMaterial(struct UMaterialInterface NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xF06690>
	void EditorApplySpline(struct USplineComponent InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x28210D0>
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2821040>
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2820FC0>
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2820F40>
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2820EC0>
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2820E40>
};

// Class Landscape.LandscapeComponent
class ULandscapeComponent : public UPrimitiveComponent {

public:

	int32_t SectionBaseX; // 0x408 (4)
	int32_t SectionBaseY; // 0x40C (4)
	int32_t ComponentSizeQuads; // 0x410 (4)
	int32_t SubsectionSizeQuads; // 0x414 (4)
	int32_t NumSubsections; // 0x418 (4)
	struct UMaterialInterface OverrideMaterial; // 0x420 (8)
	struct UMaterialInterface OverrideHoleMaterial; // 0x428 (8)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x430 (16)
	struct TArray<struct UMaterialInstanceConstant> MaterialInstances; // 0x440 (16)
	struct TArray<struct UMaterialInstanceDynamic> MaterialInstancesDynamic; // 0x450 (16)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x460 (16)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x470 (16)
	struct UTexture2D XYOffsetmapTexture; // 0x480 (8)
	struct FVector4 WeightmapScaleBias; // 0x490 (16)
	float WeightmapSubsectionOffset; // 0x4A0 (4)
	struct FVector4 HeightmapScaleBias; // 0x4B0 (16)
	struct FBox CachedLocalBox; // 0x4C0 (28)
	LazyObjectProperty CollisionComponent; // 0x4DC (28)
	struct UTexture2D HeightmapTexture; // 0x4F8 (8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x500 (16)
	struct TArray<struct UTexture2D> WeightmapTextures; // 0x510 (16)
	struct TArray<struct FWeightmapSource> WeightmapSources; // 0x520 (16)
	struct FGuid MapBuildDataId; // 0x530 (16)
	struct TArray<struct FGuid> IrrelevantLights; // 0x540 (16)
	int32_t CollisionMipLevel; // 0x550 (4)
	int32_t SimpleCollisionMipLevel; // 0x554 (4)
	float NegativeZBoundsExtension; // 0x558 (4)
	float PositiveZBoundsExtension; // 0x55C (4)
	float StaticLightingResolution; // 0x560 (4)
	int32_t ForcedLOD; // 0x564 (4)
	int32_t LODBias; // 0x568 (4)
	struct FGuid StateId; // 0x56C (16)
	struct FGuid BakedTextureMaterialGuid; // 0x57C (16)
	struct UTexture2D GIBakedBaseColorTexture; // 0x590 (8)
	char MobileBlendableLayerMask; // 0x598 (1)
	struct UMaterialInterface MobileMaterialInterface; // 0x5A0 (8)
	struct TArray<struct UMaterialInterface> MobileMaterialInterfaces; // 0x5A8 (16)
	struct TArray<struct UTexture2D> MobileWeightmapTextures; // 0x5B8 (16)

	struct UMaterialInstanceDynamic GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x281F5F0>
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x281F510>
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation(Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x281F510>
};

// Class Landscape.LandscapeGrassType
class ULandscapeGrassType : public Object {

public:

	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28 (16)
	char bEnableDensityScaling : 1; // 0x38 (1)
	char pad_38_1 : 7; // 0x38 (1)
	struct UStaticMesh GrassMesh; // 0x40 (8)
	float GrassDensity; // 0x48 (4)
	float PlacementJitter; // 0x4C (4)
	int32_t StartCullDistance; // 0x50 (4)
	int32_t EndCullDistance; // 0x54 (4)
	bool RandomRotation; // 0x58 (1)
	bool AlignToSurface; // 0x59 (1)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {

public:

	struct TArray<struct ULandscapeLayerInfoObject> ComponentLayerInfos; // 0x408 (16)
	int32_t SectionBaseX; // 0x418 (4)
	int32_t SectionBaseY; // 0x41C (4)
	int32_t CollisionSizeQuads; // 0x420 (4)
	float CollisionScale; // 0x424 (4)
	int32_t SimpleCollisionSizeQuads; // 0x428 (4)
	struct TArray<char> CollisionQuadFlags; // 0x430 (16)
	struct FGuid HeightfieldGuid; // 0x440 (16)
	struct FBox CachedLocalBox; // 0x450 (28)
	LazyObjectProperty RenderComponent; // 0x46C (28)
	struct TArray<struct UPhysicalMaterial> CookedPhysicalMaterials; // 0x498 (16)

	struct ULandscapeComponent GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x281F680>
};

// Class Landscape.LandscapeInfo
class ULandscapeInfo : public Object {

public:

	LazyObjectProperty LandscapeActor; // 0x28 (28)
	struct FGuid LandscapeGuid; // 0x44 (16)
	int32_t ComponentSizeQuads; // 0x54 (4)
	int32_t SubsectionSizeQuads; // 0x58 (4)
	int32_t ComponentNumSubsections; // 0x5C (4)
	struct FVector DrawScale; // 0x60 (12)
	struct TArray<struct ALandscapeStreamingProxy> Proxies; // 0x110 (16)
};

// Class Landscape.LandscapeLayerInfoObject
class ULandscapeLayerInfoObject : public Object {

public:

	struct FName LayerName; // 0x28 (8)
	struct UPhysicalMaterial PhysMaterial; // 0x30 (8)
	float Hardness; // 0x38 (4)
	struct FLinearColor LayerUsageDebugColor; // 0x3C (16)
};

// Class Landscape.LandscapeMaterialInstanceConstant
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant {

public:

	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410 (16)
	char bIsLayerThumbnail : 1; // 0x420 (1)
	char bDisableTessellation : 1; // 0x420 (1)
	char bMobile : 1; // 0x420 (1)
	char bEditorToolUsage : 1; // 0x420 (1)
};

// Class Landscape.LandscapeMeshCollisionComponent
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {

public:

	struct FGuid MeshGuid; // 0x4E8 (16)
};

// Class Landscape.LandscapeMeshProxyActor
class ALandscapeMeshProxyActor : public UActor {

public:

	struct ULandscapeMeshProxyComponent LandscapeMeshProxyComponent; // 0x220 (8)
};

// Class Landscape.LandscapeMeshProxyComponent
class ULandscapeMeshProxyComponent : public UStaticMeshComponent {

public:

	struct FGuid LandscapeGuid; // 0x498 (16)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x4A8 (16)
	int8_t ProxyLOD; // 0x4B8 (1)
};

// Class Landscape.LandscapeSettings
class ULandscapeSettings : public UDeveloperSettings {

public:

	int32_t MaxNumberOfLayers; // 0x38 (4)
};

// Class Landscape.LandscapeSplinesComponent
class ULandscapeSplinesComponent : public UPrimitiveComponent {

public:

	struct TArray<struct ULandscapeSplineControlPoint> ControlPoints; // 0x408 (16)
	struct TArray<struct ULandscapeSplineSegment> Segments; // 0x418 (16)
	struct TArray<struct UMeshComponent> CookedForeignMeshComponents; // 0x428 (16)

	struct TArray<struct USplineMeshComponent> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x28213E0>
};

// Class Landscape.LandscapeSplineControlPoint
class ULandscapeSplineControlPoint : public Object {

public:

	struct FVector Location; // 0x28 (12)
	struct FRotator Rotation; // 0x34 (12)
	float Width; // 0x40 (4)
	float LayerWidthRatio; // 0x44 (4)
	float SideFalloff; // 0x48 (4)
	float LeftSideFalloffFactor; // 0x4C (4)
	float RightSideFalloffFactor; // 0x50 (4)
	float LeftSideLayerFalloffFactor; // 0x54 (4)
	float RightSideLayerFalloffFactor; // 0x58 (4)
	float EndFalloff; // 0x5C (4)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60 (16)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70 (16)
	struct FBox Bounds; // 0x80 (28)
	struct UControlPointMeshComponent LocalMeshComponent; // 0xA0 (8)
};

// Class Landscape.LandscapeSplineSegment
class ULandscapeSplineSegment : public Object {

public:

	struct FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28 (48)
	struct FInterpCurveVector SplineInfo; // 0x58 (24)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70 (16)
	struct FBox Bounds; // 0x80 (28)
	struct TArray<struct USplineMeshComponent> LocalMeshComponents; // 0xA0 (16)
};

// Class Landscape.LandscapeStreamingProxy
class ALandscapeStreamingProxy : public ALandscapeProxy {

public:

	LazyObjectProperty LandscapeActor; // 0x560 (28)
};

// Class Landscape.LandscapeWeightmapUsage
class ULandscapeWeightmapUsage : public Object {

public:

	struct ULandscapeComponent ChannelUsage[0x4]; // 0x28 (32)
	struct FGuid LayerGuid; // 0x48 (16)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput {

public:

	struct TArray<struct FGrassInput> GrassTypes; // 0x40 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression {

public:

	struct TArray<struct FLayerBlendInput> Layers; // 0x40 (16)
	struct FGuid ExpressionGUID; // 0x50 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression {

public:

	enum class ETerrainCoordMappingType MappingType; // 0x40 (1)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41 (1)
	float MappingScale; // 0x44 (4)
	float MappingRotation; // 0x48 (4)
	float MappingPanU; // 0x4C (4)
	float MappingPanV; // 0x50 (4)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression {

public:

	struct FName ParameterName; // 0x40 (8)
	float PreviewWeight; // 0x48 (4)
	struct FGuid ExpressionGUID; // 0x4C (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression {

public:

	struct FExpressionInput LayerUsed; // 0x40 (12)
	struct FExpressionInput LayerNotUsed; // 0x54 (12)
	struct FName ParameterName; // 0x68 (8)
	char PreviewUsed : 1; // 0x70 (1)
	char pad_60_1 : 7; // 0x60 (1)
	struct FGuid ExpressionGUID; // 0x74 (16)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression {

public:

	struct FExpressionInput Base; // 0x40 (12)
	struct FExpressionInput Layer; // 0x54 (12)
	struct FName ParameterName; // 0x68 (8)
	float PreviewWeight; // 0x70 (4)
	struct FVector ConstBase; // 0x74 (12)
	struct FGuid ExpressionGUID; // 0x80 (16)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression {

public:

	struct FGuid ExpressionGUID; // 0x40 (16)
};

// ScriptStruct Landscape.LandscapeLayer
struct FLandscapeLayer {
	struct FGuid Guid; // 0x0 (16)
	struct FName Name; // 0x10 (8)
	bool bVisible; // 0x18 (1)
	bool bLocked; // 0x19 (1)
	float HeightmapAlpha; // 0x1C (4)
	float WeightmapAlpha; // 0x20 (4)
	enum class ELandscapeBlendMode BlendMode; // 0x24 (1)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28 (16)
	struct TMap<struct ULandscapeLayerInfoObject, bool> WeightmapLayerAllocationBlend; // 0x38 (80)
};

// ScriptStruct Landscape.WeightmapSource
struct FWeightmapSource {
	struct TArray<char> Data; // 0x0 (16)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
struct FLandscapeLayerComponentData {
	struct FHeightmapData HeightmapData; // 0x0 (8)
	struct FWeightmapData WeightmapData; // 0x8 (48)
};

// ScriptStruct Landscape.WeightmapData
struct FWeightmapData {
	struct TArray<struct UTexture2D> Textures; // 0x0 (16)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10 (16)
	struct TArray<struct ULandscapeWeightmapUsage> TextureUsages; // 0x20 (16)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject LayerInfo; // 0x0 (8)
	char WeightmapTextureIndex; // 0x8 (1)
	char WeightmapTextureChannel; // 0x9 (1)
};

// ScriptStruct Landscape.HeightmapData
struct FHeightmapData {
	struct UTexture2D Texture; // 0x0 (8)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
struct FLandscapeComponentMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x0 (4)
	struct UMaterialInterface Material; // 0x8 (8)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
struct FLandscapeEditToolRenderData {
	struct UMaterialInterface ToolMaterial; // 0x0 (8)
	struct UMaterialInterface GizmoMaterial; // 0x8 (8)
	int32_t SelectedType; // 0x10 (4)
	int32_t DebugChannelR; // 0x14 (4)
	int32_t DebugChannelG; // 0x18 (4)
	int32_t DebugChannelB; // 0x1C (4)
	struct UTexture2D DataTexture; // 0x20 (8)
	struct UTexture2D LayerContributionTexture; // 0x28 (8)
	struct UTexture2D DirtyTexture; // 0x30 (8)
};

// ScriptStruct Landscape.GrassVariety
struct FGrassVariety {
	struct UStaticMesh GrassMesh; // 0x0 (8)
	struct FPerPlatformFloat GrassDensity; // 0x8 (4)
	bool bUseGrid; // 0xC (1)
	float PlacementJitter; // 0x10 (4)
	struct FPerPlatformInt StartCullDistance; // 0x14 (4)
	struct FPerPlatformInt EndCullDistance; // 0x18 (4)
	int32_t MinLOD; // 0x1C (4)
	enum class EGrassScaling Scaling; // 0x20 (1)
	struct FFloatInterval ScaleX; // 0x24 (8)
	struct FFloatInterval ScaleY; // 0x2C (8)
	struct FFloatInterval ScaleZ; // 0x34 (8)
	bool RandomRotation; // 0x3C (1)
	bool AlignToSurface; // 0x3D (1)
	bool bUseLandscapeLightmap; // 0x3E (1)
	struct FLightingChannels LightingChannels; // 0x3F (1)
	bool bReceivesDecals; // 0x40 (1)
	bool bCastDynamicShadow; // 0x41 (1)
	bool bKeepInstanceBufferCPUCopy; // 0x42 (1)
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject LayerInfoObj; // 0x0 (8)
	struct FName LayerName; // 0x8 (8)
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
struct FLandscapeMaterialTextureStreamingInfo {
	struct FName TextureName; // 0x0 (8)
	float TexelFactor; // 0x8 (4)
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
struct FLandscapeProxyMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x0 (4)
	struct UMaterialInterface Material; // 0x8 (8)
};

// ScriptStruct Landscape.LandscapeLayerStruct
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject LayerInfoObj; // 0x0 (8)
};

// ScriptStruct Landscape.LandscapeSplineConnection
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment Segment; // 0x0 (8)
	char End : 1; // 0x8 (1)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh Mesh; // 0x0 (8)
	struct TArray<struct UMaterialInterface> MaterialOverrides; // 0x8 (16)
	char bCenterH : 1; // 0x18 (1)
	char pad_18_1 : 7; // 0x18 (1)
	struct FVector2D CenterAdjust; // 0x1C (8)
	char bScaleToWidth : 1; // 0x24 (1)
	char pad_21_1 : 7; // 0x21 (1)
	struct FVector Scale; // 0x28 (12)
	enum class LandscapeSplineMeshOrientation Orientation; // 0x34 (1)
	enum class ESplineMeshAxis ForwardAxis; // 0x35 (1)
	enum class ESplineMeshAxis UpAxis; // 0x36 (1)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint ControlPoint; // 0x0 (8)
	float TangentLen; // 0x8 (4)
	struct FName SocketName; // 0xC (8)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
struct FLandscapeSplineInterpPoint {
	struct FVector Center; // 0x0 (12)
	struct FVector Left; // 0xC (12)
	struct FVector Right; // 0x18 (12)
	struct FVector FalloffLeft; // 0x24 (12)
	struct FVector FalloffRight; // 0x30 (12)
	struct FVector LayerLeft; // 0x3C (12)
	struct FVector LayerRight; // 0x48 (12)
	struct FVector LayerFalloffLeft; // 0x54 (12)
	struct FVector LayerFalloffRight; // 0x60 (12)
	float StartEndFalloff; // 0x6C (4)
};

// ScriptStruct Landscape.GrassInput
struct FGrassInput {
	struct FName Name; // 0x0 (8)
	struct ULandscapeGrassType GrassType; // 0x8 (8)
	struct FExpressionInput Input; // 0x10 (12)
};

// ScriptStruct Landscape.LayerBlendInput
struct FLayerBlendInput {
	struct FName LayerName; // 0x0 (8)
	enum class ELandscapeLayerBlendType BlendType; // 0x8 (1)
	struct FExpressionInput LayerInput; // 0xC (12)
	struct FExpressionInput HeightInput; // 0x20 (12)
	float PreviewWeight; // 0x34 (4)
	struct FVector ConstLayerInput; // 0x38 (12)
	float ConstHeightInput; // 0x44 (4)
};

// Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
inline void ALandscapeProxy::SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue");

	struct SetLandscapeMaterialVectorParameterValue_Params {
		struct FName ParameterName;
		struct FLinearColor Value;
	}; SetLandscapeMaterialVectorParameterValue_Params Params;

	Params.ParameterName = ParameterName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
inline void ALandscapeProxy::SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue");

	struct SetLandscapeMaterialTextureParameterValue_Params {
		struct FName ParameterName;
		struct UTexture Value;
	}; SetLandscapeMaterialTextureParameterValue_Params Params;

	Params.ParameterName = ParameterName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
inline void ALandscapeProxy::SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue");

	struct SetLandscapeMaterialScalarParameterValue_Params {
		struct FName ParameterName;
		float Value;
	}; SetLandscapeMaterialScalarParameterValue_Params Params;

	Params.ParameterName = ParameterName;
	Params.Value = Value;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial
inline void ALandscapeProxy::EditorSetLandscapeMaterial(struct UMaterialInterface NewLandscapeMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial");

	struct EditorSetLandscapeMaterial_Params {
		struct UMaterialInterface NewLandscapeMaterial;
	}; EditorSetLandscapeMaterial_Params Params;

	Params.NewLandscapeMaterial = NewLandscapeMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.EditorApplySpline
inline void ALandscapeProxy::EditorApplySpline(struct USplineComponent InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject PaintLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.EditorApplySpline");

	struct EditorApplySpline_Params {
		struct USplineComponent InSplineComponent;
		float StartWidth;
		float EndWidth;
		float StartSideFalloff;
		float EndSideFalloff;
		float StartRoll;
		float EndRoll;
		int32_t NumSubdivisions;
		bool bRaiseHeights;
		bool bLowerHeights;
		struct ULandscapeLayerInfoObject PaintLayer;
	}; EditorApplySpline_Params Params;

	Params.InSplineComponent = InSplineComponent;
	Params.StartWidth = StartWidth;
	Params.EndWidth = EndWidth;
	Params.StartSideFalloff = StartSideFalloff;
	Params.EndSideFalloff = EndSideFalloff;
	Params.StartRoll = StartRoll;
	Params.EndRoll = EndRoll;
	Params.NumSubdivisions = NumSubdivisions;
	Params.bRaiseHeights = bRaiseHeights;
	Params.bLowerHeights = bLowerHeights;
	Params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff
inline void ALandscapeProxy::ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff");

	struct ChangeUseTessellationComponentScreenSizeFalloff_Params {
		bool InComponentScreenSizeToUseSubSections;
	}; ChangeUseTessellationComponentScreenSizeFalloff_Params Params;

	Params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff
inline void ALandscapeProxy::ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff");

	struct ChangeTessellationComponentScreenSizeFalloff_Params {
		float InUseTessellationComponentScreenSizeFalloff;
	}; ChangeTessellationComponentScreenSizeFalloff_Params Params;

	Params.InUseTessellationComponentScreenSizeFalloff = InUseTessellationComponentScreenSizeFalloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize
inline void ALandscapeProxy::ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize");

	struct ChangeTessellationComponentScreenSize_Params {
		float InTessellationComponentScreenSize;
	}; ChangeTessellationComponentScreenSize_Params Params;

	Params.InTessellationComponentScreenSize = InTessellationComponentScreenSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeLODDistanceFactor
inline void ALandscapeProxy::ChangeLODDistanceFactor(float InLODDistanceFactor) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeLODDistanceFactor");

	struct ChangeLODDistanceFactor_Params {
		float InLODDistanceFactor;
	}; ChangeLODDistanceFactor_Params Params;

	Params.InLODDistanceFactor = InLODDistanceFactor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
inline void ALandscapeProxy::ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections");

	struct ChangeComponentScreenSizeToUseSubSections_Params {
		float InComponentScreenSizeToUseSubSections;
	}; ChangeComponentScreenSizeToUseSubSections_Params Params;

	Params.InComponentScreenSizeToUseSubSections = InComponentScreenSizeToUseSubSections;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic
inline struct UMaterialInstanceDynamic ULandscapeComponent::GetMaterialInstanceDynamic(int32_t InIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic");

	struct GetMaterialInstanceDynamic_Params {
		int32_t InIndex;
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetMaterialInstanceDynamic_Params Params;

	Params.InIndex = InIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
inline float ULandscapeComponent::EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName InPaintLayerName) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation");

	struct EditorGetPaintLayerWeightByNameAtLocation_Params {
		struct FVector& InLocation;
		struct FName InPaintLayerName;
		float ReturnValue;

	}; EditorGetPaintLayerWeightByNameAtLocation_Params Params;

	Params.InPaintLayerName = InPaintLayerName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLocation = Params.InLocation;


	return params.ReturnValue;
}

// Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
inline float ULandscapeComponent::EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, struct ULandscapeLayerInfoObject PaintLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation");

	struct EditorGetPaintLayerWeightAtLocation_Params {
		struct FVector& InLocation;
		struct ULandscapeLayerInfoObject PaintLayer;
		float ReturnValue;

	}; EditorGetPaintLayerWeightAtLocation_Params Params;

	Params.PaintLayer = PaintLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLocation = Params.InLocation;


	return params.ReturnValue;
}

// Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
inline struct ULandscapeComponent ULandscapeHeightfieldCollisionComponent::GetRenderComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent");

	struct GetRenderComponent_Params {
		
		struct ULandscapeComponent ReturnValue;

	}; GetRenderComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
inline struct TArray<struct USplineMeshComponent> ULandscapeSplinesComponent::GetSplineMeshComponents() {
	static auto fn = UObject::FindObject<UFunction>("Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents");

	struct GetSplineMeshComponents_Params {
		
		struct TArray<struct USplineMeshComponent> ReturnValue;

	}; GetSplineMeshComponents_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

