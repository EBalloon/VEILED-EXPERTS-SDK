// Enum Paper2D.EFlipbookCollisionMode
enum class EFlipbookCollisionMode : uint8_t {
	NoCollision = 0,
	FirstFrameCollision = 1,
	EachFrameCollision = 2,
	EFlipbookCollisionMode_MAX = 3,
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class EPaperSpriteAtlasPadding : uint8_t {
	DilateBorder = 0,
	PadWithZero = 1,
	EPaperSpriteAtlasPadding_MAX = 2,
};

// Enum Paper2D.ETileMapProjectionMode
enum class ETileMapProjectionMode : uint8_t {
	Orthogonal = 0,
	IsometricDiamond = 1,
	IsometricStaggered = 2,
	HexagonalStaggered = 3,
	ETileMapProjectionMode_MAX = 4,
};

// Enum Paper2D.ESpritePivotMode
enum class ESpritePivotMode : uint8_t {
	Top_Left = 0,
	Top_Center = 1,
	Top_Right = 2,
	Center_Left = 3,
	Center_Center = 4,
	Center_Right = 5,
	Bottom_Left = 6,
	Bottom_Center = 7,
	Bottom_Right = 8,
	Custom = 9,
	ESpritePivotMode_MAX = 10,
};

// Enum Paper2D.ESpritePolygonMode
enum class ESpritePolygonMode : uint8_t {
	SourceBoundingBox = 0,
	TightBoundingBox = 1,
	ShrinkWrapped = 2,
	FullyCustom = 3,
	Diced = 4,
	ESpritePolygonMode_MAX = 5,
};

// Enum Paper2D.ESpriteShapeType
enum class ESpriteShapeType : uint8_t {
	Box = 0,
	Circle = 1,
	Polygon = 2,
	ESpriteShapeType_MAX = 3,
};

// Enum Paper2D.ESpriteCollisionMode
enum class ESpriteCollisionMode : uint8_t {
	None = 0,
	Use2DPhysics = 1,
	Use3DPhysics = 2,
	ESpriteCollisionMode_MAX = 3,
};

// Class Paper2D.MaterialExpressionSpriteTextureSampler
class UMaterialExpressionSpriteTextureSampler : public UMaterialExpressionTextureSampleParameter2D {

public:

	bool bSampleAdditionalTextures; // 0xF0 (1)
	int32_t AdditionalSlotIndex; // 0xF4 (4)
	struct FText SlotDisplayName; // 0xF8 (24)
};

// Class Paper2D.PaperCharacter
class APaperCharacter : public ACharacter {

public:

	struct UPaperFlipbookComponent Sprite; // 0x4B8 (8)
};

// Class Paper2D.PaperFlipbook
class UPaperFlipbook : public Object {

public:

	float FramesPerSecond; // 0x28 (4)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x30 (16)
	struct UMaterialInterface DefaultMaterial; // 0x40 (8)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48 (1)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEED360>
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEED2A0>
	struct UPaperSprite GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECAA0>
	struct UPaperSprite GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECA10>
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC960>
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC930>
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC680>
};

// Class Paper2D.PaperFlipbookActor
class APaperFlipbookActor : public UActor {

public:

	struct UPaperFlipbookComponent RenderComponent; // 0x220 (8)
};

// Class Paper2D.PaperFlipbookComponent
class UPaperFlipbookComponent : public UMeshComponent {

public:

	struct UPaperFlipbook SourceFlipbook; // 0x430 (8)
	struct UMaterialInterface Material; // 0x438 (8)
	float PlayRate; // 0x440 (4)
	char bLooping : 1; // 0x444 (1)
	char bReversePlayback : 1; // 0x444 (1)
	char bPlaying : 1; // 0x444 (1)
	char pad_444_3 : 5; // 0x444 (1)
	float AccumulatedTime; // 0x448 (4)
	int32_t CachedFrameIndex; // 0x44C (4)
	struct FLinearColor SpriteColor; // 0x450 (16)
	struct UBodySetup CachedBodySetup; // 0x460 (8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x468 (16)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE580>
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE190>
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDF80>
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE0D0>
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE000>
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDF00>
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDE70>
	bool SetFlipbook(struct UPaperFlipbook NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDAE0>
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED9F0>
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED9D0>
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED830>
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED810>
	void OnRep_SourceFlipbook(struct UPaperFlipbook OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xEED760>
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEED330>
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEED300>
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEED2D0>
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC980>
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC9E0>
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC9B0>
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC4C0>
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC490>
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC460>
	struct UPaperFlipbook GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook(Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xEEC430>
};

// Class Paper2D.PaperGroupedSpriteActor
class APaperGroupedSpriteActor : public UActor {

public:

	struct UPaperGroupedSpriteComponent RenderComponent; // 0x220 (8)
};

// Class Paper2D.PaperGroupedSpriteComponent
class UPaperGroupedSpriteComponent : public UMeshComponent {

public:

	struct TArray<struct UMaterialInterface> InstanceMaterials; // 0x430 (16)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x440 (16)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform(Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE6B0>
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor(Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE5A0>
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE4F0>
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED870>
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC520>
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC4F0>
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEC260>
	int32_t AddInstance(struct FTransform& Transform, struct UPaperSprite Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEBE50>
};

// Class Paper2D.PaperRuntimeSettings
class UPaperRuntimeSettings : public Object {

public:

	bool bEnableSpriteAtlasGroups; // 0x28 (1)
	bool bEnableTerrainSplineEditing; // 0x29 (1)
	bool bResizeSpriteDataToMatchTextures; // 0x2A (1)
};

// Class Paper2D.PaperSprite
class UPaperSprite : public Object {

public:

	struct TArray<struct UTexture> AdditionalSourceTextures; // 0x38 (16)
	struct FVector2D BakedSourceUV; // 0x48 (8)
	struct FVector2D BakedSourceDimension; // 0x50 (8)
	struct UTexture2D BakedSourceTexture; // 0x58 (8)
	struct UMaterialInterface DefaultMaterial; // 0x60 (8)
	struct UMaterialInterface AlternateMaterial; // 0x68 (8)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x70 (16)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x80 (1)
	float PixelsPerUnrealUnit; // 0x84 (4)
	struct UBodySetup BodySetup; // 0x88 (8)
	int32_t AlternateMaterialSplitIndex; // 0x90 (4)
	struct TArray<struct FVector4> BakedRenderData; // 0x98 (16)
};

// Class Paper2D.PaperSpriteActor
class APaperSpriteActor : public UActor {

public:

	struct UPaperSpriteComponent RenderComponent; // 0x220 (8)
};

// Class Paper2D.PaperSpriteComponent
class UPaperSpriteComponent : public UMeshComponent {

public:

	struct UPaperSprite SourceSprite; // 0x430 (8)
	struct UMaterialInterface MaterialOverride; // 0x438 (8)
	struct FLinearColor SpriteColor; // 0x440 (16)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE210>
	bool SetSprite(struct UPaperSprite NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDAE0>
	struct UPaperSprite GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite(Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xEEC430>
};

// Class Paper2D.PaperTerrainActor
class APaperTerrainActor : public UActor {

public:

	struct USceneComponent DummyRoot; // 0x220 (8)
	struct UPaperTerrainSplineComponent SplineComponent; // 0x228 (8)
	struct UPaperTerrainComponent RenderComponent; // 0x230 (8)
};

// Class Paper2D.PaperTerrainComponent
class UPaperTerrainComponent : public UPrimitiveComponent {

public:

	struct UPaperTerrainMaterial TerrainMaterial; // 0x408 (8)
	bool bClosedSpline; // 0x410 (1)
	bool bFilledSpline; // 0x411 (1)
	struct UPaperTerrainSplineComponent AssociatedSpline; // 0x418 (8)
	int32_t RandomSeed; // 0x420 (4)
	float SegmentOverlapAmount; // 0x424 (4)
	struct FLinearColor TerrainColor; // 0x428 (16)
	int32_t ReparamStepsPerSegment; // 0x438 (4)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x43C (1)
	float CollisionThickness; // 0x440 (4)
	struct UBodySetup CachedBodySetup; // 0x448 (8)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE290>
};

// Class Paper2D.PaperTerrainMaterial
class UPaperTerrainMaterial : public UDataAsset {

public:

	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x30 (16)
	struct UPaperSprite InteriorFill; // 0x40 (8)
};

// Class Paper2D.PaperTileLayer
class UPaperTileLayer : public Object {

public:

	struct FText LayerName; // 0x28 (24)
	int32_t LayerWidth; // 0x40 (4)
	int32_t LayerHeight; // 0x44 (4)
	char bHiddenInGame : 1; // 0x48 (1)
	char bLayerCollides : 1; // 0x48 (1)
	char bOverrideCollisionThickness : 1; // 0x48 (1)
	char bOverrideCollisionOffset : 1; // 0x48 (1)
	char pad_48_4 : 4; // 0x48 (1)
	float CollisionThicknessOverride; // 0x4C (4)
	float CollisionOffsetOverride; // 0x50 (4)
	struct FLinearColor LayerColor; // 0x54 (16)
	int32_t AllocatedWidth; // 0x64 (4)
	int32_t AllocatedHeight; // 0x68 (4)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70 (16)
	struct UPaperTileSet TileSet; // 0x80 (8)
	struct TArray<int32_t> AllocatedGrid; // 0x88 (16)
};

// Class Paper2D.PaperTileMap
class UPaperTileMap : public Object {

public:

	int32_t MapWidth; // 0x28 (4)
	int32_t MapHeight; // 0x2C (4)
	int32_t TileWidth; // 0x30 (4)
	int32_t TileHeight; // 0x34 (4)
	float PixelsPerUnrealUnit; // 0x38 (4)
	float SeparationPerTileX; // 0x3C (4)
	float SeparationPerTileY; // 0x40 (4)
	float SeparationPerLayer; // 0x44 (4)
	struct TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48 (40)
	struct UMaterialInterface Material; // 0x70 (8)
	struct TArray<struct UPaperTileLayer> TileLayers; // 0x78 (16)
	float CollisionThickness; // 0x88 (4)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8C (1)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8D (1)
	int32_t HexSideLength; // 0x90 (4)
	struct UBodySetup BodySetup; // 0x98 (8)
	int32_t LayerNameIndex; // 0xA0 (4)
};

// Class Paper2D.PaperTileMapActor
class APaperTileMapActor : public UActor {

public:

	struct UPaperTileMapComponent RenderComponent; // 0x220 (8)
};

// Class Paper2D.PaperTileMapComponent
class UPaperTileMapComponent : public UMeshComponent {

public:

	int32_t MapWidth; // 0x430 (4)
	int32_t MapHeight; // 0x434 (4)
	int32_t TileWidth; // 0x438 (4)
	int32_t TileHeight; // 0x43C (4)
	struct UPaperTileSet DefaultLayerTileSet; // 0x440 (8)
	struct UMaterialInterface Material; // 0x448 (8)
	struct TArray<struct UPaperTileLayer> TileLayers; // 0x450 (16)
	struct FLinearColor TileMapColor; // 0x460 (16)
	int32_t UseSingleLayerIndex; // 0x470 (4)
	bool bUseSingleLayer; // 0x474 (1)
	struct UPaperTileMap TileMap; // 0x478 (8)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE470>
	bool SetTileMap(struct UPaperTileMap NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDAE0>
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEE310>
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDDA0>
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDB80>
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEDA10>
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED910>
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED850>
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEED7E0>
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEED740>
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon(Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECF80>
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECF40>
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECDE0>
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECC80>
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEECB70>
	void GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEC7F0>
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xEEC750>
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEC280>
	struct UPaperTileLayer AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xEEC010>
};

// Class Paper2D.PaperTileSet
class UPaperTileSet : public Object {

public:

	struct FIntPoint TileSize; // 0x28 (8)
	struct UTexture2D TileSheet; // 0x30 (8)
	struct TArray<struct UTexture> AdditionalSourceTextures; // 0x38 (16)
	struct FIntMargin BorderMargin; // 0x48 (16)
	struct FIntPoint PerTileSpacing; // 0x58 (8)
	struct FIntPoint DrawingOffset; // 0x60 (8)
	int32_t WidthInTiles; // 0x68 (4)
	int32_t HeightInTiles; // 0x6C (4)
	int32_t AllocatedWidth; // 0x70 (4)
	int32_t AllocatedHeight; // 0x74 (4)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78 (16)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88 (16)
	int32_t TileWidth; // 0x98 (4)
	int32_t TileHeight; // 0x9C (4)
	int32_t Margin; // 0xA0 (4)
	int32_t Spacing; // 0xA4 (4)
};

// ScriptStruct Paper2D.IntMargin
struct FIntMargin {
	int32_t Left; // 0x0 (4)
	int32_t Top; // 0x4 (4)
	int32_t Right; // 0x8 (4)
	int32_t Bottom; // 0xC (4)
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
struct FPaperFlipbookKeyFrame {
	struct UPaperSprite Sprite; // 0x0 (8)
	int32_t FrameRun; // 0x8 (4)
};

// ScriptStruct Paper2D.SpriteInstanceData
struct FSpriteInstanceData {
	struct FMatrix Transform; // 0x0 (64)
	struct UPaperSprite SourceSprite; // 0x40 (8)
	struct FColor VertexColor; // 0x48 (4)
	int32_t MaterialIndex; // 0x4C (4)
};

// ScriptStruct Paper2D.PaperSpriteSocket
struct FPaperSpriteSocket {
	struct FTransform LocalTransform; // 0x0 (48)
	struct FName SocketName; // 0x30 (8)
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
struct FPaperSpriteAtlasSlot {
	struct TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0 (40)
	int32_t AtlasIndex; // 0x28 (4)
	int32_t X; // 0x2C (4)
	int32_t Y; // 0x30 (4)
	int32_t Width; // 0x34 (4)
	int32_t Height; // 0x38 (4)
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
struct FPaperTerrainMaterialRule {
	struct UPaperSprite StartCap; // 0x0 (8)
	struct TArray<struct UPaperSprite> Body; // 0x8 (16)
	struct UPaperSprite EndCap; // 0x18 (8)
	float MinimumAngle; // 0x20 (4)
	float MaximumAngle; // 0x24 (4)
	bool bEnableCollision; // 0x28 (1)
	float CollisionOffset; // 0x2C (4)
	int32_t DrawOrder; // 0x30 (4)
};

// ScriptStruct Paper2D.PaperTileInfo
struct FPaperTileInfo {
	struct UPaperTileSet TileSet; // 0x0 (8)
	int32_t PackedTileIndex; // 0x8 (4)
};

// ScriptStruct Paper2D.PaperTileSetTerrain
struct FPaperTileSetTerrain {
	struct FString TerrainName; // 0x0 (16)
	int32_t CenterTileIndex; // 0x10 (4)
};

// ScriptStruct Paper2D.PaperTileMetadata
struct FPaperTileMetadata {
	struct FName UserDataName; // 0x0 (8)
	struct FSpriteGeometryCollection CollisionData; // 0x8 (48)
	char TerrainMembership[0x4]; // 0x38 (4)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x0 (16)
	enum class ESpritePolygonMode GeometryType; // 0x10 (1)
	int32_t PixelsPerSubdivisionX; // 0x14 (4)
	int32_t PixelsPerSubdivisionY; // 0x18 (4)
	bool bAvoidVertexMerging; // 0x1C (1)
	float AlphaThreshold; // 0x20 (4)
	float DetailAmount; // 0x24 (4)
	float SimplifyEpsilon; // 0x28 (4)
};

// ScriptStruct Paper2D.SpriteGeometryShape
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x0 (1)
	struct TArray<struct FVector2D> Vertices; // 0x8 (16)
	struct FVector2D BoxSize; // 0x18 (8)
	struct FVector2D BoxPosition; // 0x20 (8)
	float Rotation; // 0x28 (4)
	bool bNegativeWinding; // 0x2C (1)
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
struct FSpriteDrawCallRecord {
	struct FVector Destination; // 0x0 (12)
	struct UTexture BaseTexture; // 0x10 (8)
	struct FColor Color; // 0x48 (4)
};

// Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex
inline bool UPaperFlipbook::IsValidKeyFrameIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex");

	struct IsValidKeyFrameIndex_Params {
		int32_t Index;
		bool ReturnValue;

	}; IsValidKeyFrameIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetTotalDuration
inline float UPaperFlipbook::GetTotalDuration() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetTotalDuration");

	struct GetTotalDuration_Params {
		
		float ReturnValue;

	}; GetTotalDuration_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetSpriteAtTime
inline struct UPaperSprite UPaperFlipbook::GetSpriteAtTime(float Time, bool bClampToEnds) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtTime");

	struct GetSpriteAtTime_Params {
		float Time;
		bool bClampToEnds;
		struct UPaperSprite ReturnValue;

	}; GetSpriteAtTime_Params Params;

	Params.Time = Time;
	Params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetSpriteAtFrame
inline struct UPaperSprite UPaperFlipbook::GetSpriteAtFrame(int32_t FrameIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetSpriteAtFrame");

	struct GetSpriteAtFrame_Params {
		int32_t FrameIndex;
		struct UPaperSprite ReturnValue;

	}; GetSpriteAtFrame_Params Params;

	Params.FrameIndex = FrameIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetNumKeyFrames
inline int32_t UPaperFlipbook::GetNumKeyFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumKeyFrames");

	struct GetNumKeyFrames_Params {
		
		int32_t ReturnValue;

	}; GetNumKeyFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetNumFrames
inline int32_t UPaperFlipbook::GetNumFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetNumFrames");

	struct GetNumFrames_Params {
		
		int32_t ReturnValue;

	}; GetNumFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime
inline int32_t UPaperFlipbook::GetKeyFrameIndexAtTime(float Time, bool bClampToEnds) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime");

	struct GetKeyFrameIndexAtTime_Params {
		float Time;
		bool bClampToEnds;
		int32_t ReturnValue;

	}; GetKeyFrameIndexAtTime_Params Params;

	Params.Time = Time;
	Params.bClampToEnds = bClampToEnds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.Stop
inline void UPaperFlipbookComponent::Stop() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Stop");

	struct Stop_Params {
		
	}; Stop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetSpriteColor
inline void UPaperFlipbookComponent::SetSpriteColor(struct FLinearColor NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetSpriteColor");

	struct SetSpriteColor_Params {
		struct FLinearColor NewColor;
	}; SetSpriteColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetPlayRate
inline void UPaperFlipbookComponent::SetPlayRate(float NewRate) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlayRate");

	struct SetPlayRate_Params {
		float NewRate;
	}; SetPlayRate_Params Params;

	Params.NewRate = NewRate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames
inline void UPaperFlipbookComponent::SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames");

	struct SetPlaybackPositionInFrames_Params {
		int32_t NewFramePosition;
		bool bFireEvents;
	}; SetPlaybackPositionInFrames_Params Params;

	Params.NewFramePosition = NewFramePosition;
	Params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition
inline void UPaperFlipbookComponent::SetPlaybackPosition(float NewPosition, bool bFireEvents) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition");

	struct SetPlaybackPosition_Params {
		float NewPosition;
		bool bFireEvents;
	}; SetPlaybackPosition_Params Params;

	Params.NewPosition = NewPosition;
	Params.bFireEvents = bFireEvents;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetNewTime
inline void UPaperFlipbookComponent::SetNewTime(float NewTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetNewTime");

	struct SetNewTime_Params {
		float NewTime;
	}; SetNewTime_Params Params;

	Params.NewTime = NewTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetLooping
inline void UPaperFlipbookComponent::SetLooping(bool bNewLooping) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetLooping");

	struct SetLooping_Params {
		bool bNewLooping;
	}; SetLooping_Params Params;

	Params.bNewLooping = bNewLooping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.SetFlipbook
inline bool UPaperFlipbookComponent::SetFlipbook(struct UPaperFlipbook NewFlipbook) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.SetFlipbook");

	struct SetFlipbook_Params {
		struct UPaperFlipbook NewFlipbook;
		bool ReturnValue;

	}; SetFlipbook_Params Params;

	Params.NewFlipbook = NewFlipbook;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.ReverseFromEnd
inline void UPaperFlipbookComponent::ReverseFromEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.ReverseFromEnd");

	struct ReverseFromEnd_Params {
		
	}; ReverseFromEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.Reverse
inline void UPaperFlipbookComponent::Reverse() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Reverse");

	struct Reverse_Params {
		
	}; Reverse_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.PlayFromStart
inline void UPaperFlipbookComponent::PlayFromStart() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.PlayFromStart");

	struct PlayFromStart_Params {
		
	}; PlayFromStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.Play
inline void UPaperFlipbookComponent::Play() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.Play");

	struct Play_Params {
		
	}; Play_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook
inline void UPaperFlipbookComponent::OnRep_SourceFlipbook(struct UPaperFlipbook OldFlipbook) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook");

	struct OnRep_SourceFlipbook_Params {
		struct UPaperFlipbook OldFlipbook;
	}; OnRep_SourceFlipbook_Params Params;

	Params.OldFlipbook = OldFlipbook;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperFlipbookComponent.IsReversing
inline bool UPaperFlipbookComponent::IsReversing() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsReversing");

	struct IsReversing_Params {
		
		bool ReturnValue;

	}; IsReversing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.IsPlaying
inline bool UPaperFlipbookComponent::IsPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsPlaying");

	struct IsPlaying_Params {
		
		bool ReturnValue;

	}; IsPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.IsLooping
inline bool UPaperFlipbookComponent::IsLooping() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.IsLooping");

	struct IsLooping_Params {
		
		bool ReturnValue;

	}; IsLooping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetPlayRate
inline float UPaperFlipbookComponent::GetPlayRate() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlayRate");

	struct GetPlayRate_Params {
		
		float ReturnValue;

	}; GetPlayRate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames
inline int32_t UPaperFlipbookComponent::GetPlaybackPositionInFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames");

	struct GetPlaybackPositionInFrames_Params {
		
		int32_t ReturnValue;

	}; GetPlaybackPositionInFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition
inline float UPaperFlipbookComponent::GetPlaybackPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition");

	struct GetPlaybackPosition_Params {
		
		float ReturnValue;

	}; GetPlaybackPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames
inline int32_t UPaperFlipbookComponent::GetFlipbookLengthInFrames() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames");

	struct GetFlipbookLengthInFrames_Params {
		
		int32_t ReturnValue;

	}; GetFlipbookLengthInFrames_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbookLength
inline float UPaperFlipbookComponent::GetFlipbookLength() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookLength");

	struct GetFlipbookLength_Params {
		
		float ReturnValue;

	}; GetFlipbookLength_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate
inline float UPaperFlipbookComponent::GetFlipbookFramerate() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate");

	struct GetFlipbookFramerate_Params {
		
		float ReturnValue;

	}; GetFlipbookFramerate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperFlipbookComponent.GetFlipbook
inline struct UPaperFlipbook UPaperFlipbookComponent::GetFlipbook() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperFlipbookComponent.GetFlipbook");

	struct GetFlipbook_Params {
		
		struct UPaperFlipbook ReturnValue;

	}; GetFlipbook_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform
inline bool UPaperGroupedSpriteComponent::UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform");

	struct UpdateInstanceTransform_Params {
		int32_t InstanceIndex;
		struct FTransform& NewInstanceTransform;
		bool bWorldSpace;
		bool bMarkRenderStateDirty;
		bool bTeleport;
		bool ReturnValue;

	}; UpdateInstanceTransform_Params Params;

	Params.InstanceIndex = InstanceIndex;
	Params.bWorldSpace = bWorldSpace;
	Params.bMarkRenderStateDirty = bMarkRenderStateDirty;
	Params.bTeleport = bTeleport;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewInstanceTransform = Params.NewInstanceTransform;


	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor
inline bool UPaperGroupedSpriteComponent::UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor");

	struct UpdateInstanceColor_Params {
		int32_t InstanceIndex;
		struct FLinearColor NewInstanceColor;
		bool bMarkRenderStateDirty;
		bool ReturnValue;

	}; UpdateInstanceColor_Params Params;

	Params.InstanceIndex = InstanceIndex;
	Params.NewInstanceColor = NewInstanceColor;
	Params.bMarkRenderStateDirty = bMarkRenderStateDirty;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis
inline void UPaperGroupedSpriteComponent::SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis");

	struct SortInstancesAlongAxis_Params {
		struct FVector WorldSpaceSortAxis;
	}; SortInstancesAlongAxis_Params Params;

	Params.WorldSpaceSortAxis = WorldSpaceSortAxis;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance
inline bool UPaperGroupedSpriteComponent::RemoveInstance(int32_t InstanceIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance");

	struct RemoveInstance_Params {
		int32_t InstanceIndex;
		bool ReturnValue;

	}; RemoveInstance_Params Params;

	Params.InstanceIndex = InstanceIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform
inline bool UPaperGroupedSpriteComponent::GetInstanceTransform(int32_t InstanceIndex, struct FTransform& OutInstanceTransform, bool bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform");

	struct GetInstanceTransform_Params {
		int32_t InstanceIndex;
		struct FTransform& OutInstanceTransform;
		bool bWorldSpace;
		bool ReturnValue;

	}; GetInstanceTransform_Params Params;

	Params.InstanceIndex = InstanceIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	OutInstanceTransform = Params.OutInstanceTransform;


	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount
inline int32_t UPaperGroupedSpriteComponent::GetInstanceCount() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount");

	struct GetInstanceCount_Params {
		
		int32_t ReturnValue;

	}; GetInstanceCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperGroupedSpriteComponent.ClearInstances
inline void UPaperGroupedSpriteComponent::ClearInstances() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.ClearInstances");

	struct ClearInstances_Params {
		
	}; ClearInstances_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperGroupedSpriteComponent.AddInstance
inline int32_t UPaperGroupedSpriteComponent::AddInstance(struct FTransform& Transform, struct UPaperSprite Sprite, bool bWorldSpace, struct FLinearColor Color) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperGroupedSpriteComponent.AddInstance");

	struct AddInstance_Params {
		struct FTransform& Transform;
		struct UPaperSprite Sprite;
		bool bWorldSpace;
		struct FLinearColor Color;
		int32_t ReturnValue;

	}; AddInstance_Params Params;

	Params.Sprite = Sprite;
	Params.bWorldSpace = bWorldSpace;
	Params.Color = Color;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Transform = Params.Transform;


	return params.ReturnValue;
}

// Function Paper2D.PaperSpriteComponent.SetSpriteColor
inline void UPaperSpriteComponent::SetSpriteColor(struct FLinearColor NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSpriteColor");

	struct SetSpriteColor_Params {
		struct FLinearColor NewColor;
	}; SetSpriteColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperSpriteComponent.SetSprite
inline bool UPaperSpriteComponent::SetSprite(struct UPaperSprite NewSprite) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.SetSprite");

	struct SetSprite_Params {
		struct UPaperSprite NewSprite;
		bool ReturnValue;

	}; SetSprite_Params Params;

	Params.NewSprite = NewSprite;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperSpriteComponent.GetSprite
inline struct UPaperSprite UPaperSpriteComponent::GetSprite() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperSpriteComponent.GetSprite");

	struct GetSprite_Params {
		
		struct UPaperSprite ReturnValue;

	}; GetSprite_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTerrainComponent.SetTerrainColor
inline void UPaperTerrainComponent::SetTerrainColor(struct FLinearColor NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTerrainComponent.SetTerrainColor");

	struct SetTerrainColor_Params {
		struct FLinearColor NewColor;
	}; SetTerrainColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetTileMapColor
inline void UPaperTileMapComponent::SetTileMapColor(struct FLinearColor NewColor) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMapColor");

	struct SetTileMapColor_Params {
		struct FLinearColor NewColor;
	}; SetTileMapColor_Params Params;

	Params.NewColor = NewColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetTileMap
inline bool UPaperTileMapComponent::SetTileMap(struct UPaperTileMap NewTileMap) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTileMap");

	struct SetTileMap_Params {
		struct UPaperTileMap NewTileMap;
		bool ReturnValue;

	}; SetTileMap_Params Params;

	Params.NewTileMap = NewTileMap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.SetTile
inline void UPaperTileMapComponent::SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetTile");

	struct SetTile_Params {
		int32_t X;
		int32_t Y;
		int32_t Layer;
		struct FPaperTileInfo NewValue;
	}; SetTile_Params Params;

	Params.X = X;
	Params.Y = Y;
	Params.Layer = Layer;
	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetLayerColor
inline void UPaperTileMapComponent::SetLayerColor(struct FLinearColor NewColor, int32_t Layer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerColor");

	struct SetLayerColor_Params {
		struct FLinearColor NewColor;
		int32_t Layer;
	}; SetLayerColor_Params Params;

	Params.NewColor = NewColor;
	Params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetLayerCollision
inline void UPaperTileMapComponent::SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetLayerCollision");

	struct SetLayerCollision_Params {
		int32_t Layer;
		bool bHasCollision;
		bool bOverrideThickness;
		float CustomThickness;
		bool bOverrideOffset;
		float CustomOffset;
		bool bRebuildCollision;
	}; SetLayerCollision_Params Params;

	Params.Layer = Layer;
	Params.bHasCollision = bHasCollision;
	Params.bOverrideThickness = bOverrideThickness;
	Params.CustomThickness = CustomThickness;
	Params.bOverrideOffset = bOverrideOffset;
	Params.CustomOffset = CustomOffset;
	Params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness
inline void UPaperTileMapComponent::SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness");

	struct SetDefaultCollisionThickness_Params {
		float Thickness;
		bool bRebuildCollision;
	}; SetDefaultCollisionThickness_Params Params;

	Params.Thickness = Thickness;
	Params.bRebuildCollision = bRebuildCollision;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.ResizeMap
inline void UPaperTileMapComponent::ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.ResizeMap");

	struct ResizeMap_Params {
		int32_t NewWidthInTiles;
		int32_t NewHeightInTiles;
	}; ResizeMap_Params Params;

	Params.NewWidthInTiles = NewWidthInTiles;
	Params.NewHeightInTiles = NewHeightInTiles;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.RebuildCollision
inline void UPaperTileMapComponent::RebuildCollision() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.RebuildCollision");

	struct RebuildCollision_Params {
		
	}; RebuildCollision_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.OwnsTileMap
inline bool UPaperTileMapComponent::OwnsTileMap() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.OwnsTileMap");

	struct OwnsTileMap_Params {
		
		bool ReturnValue;

	}; OwnsTileMap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.MakeTileMapEditable
inline void UPaperTileMapComponent::MakeTileMapEditable() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.MakeTileMapEditable");

	struct MakeTileMapEditable_Params {
		
	}; MakeTileMapEditable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.GetTilePolygon
inline void UPaperTileMapComponent::GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector>& Points, int32_t LayerIndex, bool bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTilePolygon");

	struct GetTilePolygon_Params {
		int32_t TileX;
		int32_t TileY;
		struct TArray<struct FVector>& Points;
		int32_t LayerIndex;
		bool bWorldSpace;
	}; GetTilePolygon_Params Params;

	Params.TileX = TileX;
	Params.TileY = TileY;
	Params.LayerIndex = LayerIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Points = Params.Points;

}

// Function Paper2D.PaperTileMapComponent.GetTileMapColor
inline struct FLinearColor UPaperTileMapComponent::GetTileMapColor() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileMapColor");

	struct GetTileMapColor_Params {
		
		struct FLinearColor ReturnValue;

	}; GetTileMapColor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetTileCornerPosition
inline struct FVector UPaperTileMapComponent::GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCornerPosition");

	struct GetTileCornerPosition_Params {
		int32_t TileX;
		int32_t TileY;
		int32_t LayerIndex;
		bool bWorldSpace;
		struct FVector ReturnValue;

	}; GetTileCornerPosition_Params Params;

	Params.TileX = TileX;
	Params.TileY = TileY;
	Params.LayerIndex = LayerIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetTileCenterPosition
inline struct FVector UPaperTileMapComponent::GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTileCenterPosition");

	struct GetTileCenterPosition_Params {
		int32_t TileX;
		int32_t TileY;
		int32_t LayerIndex;
		bool bWorldSpace;
		struct FVector ReturnValue;

	}; GetTileCenterPosition_Params Params;

	Params.TileX = TileX;
	Params.TileY = TileY;
	Params.LayerIndex = LayerIndex;
	Params.bWorldSpace = bWorldSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetTile
inline struct FPaperTileInfo UPaperTileMapComponent::GetTile(int32_t X, int32_t Y, int32_t Layer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetTile");

	struct GetTile_Params {
		int32_t X;
		int32_t Y;
		int32_t Layer;
		struct FPaperTileInfo ReturnValue;

	}; GetTile_Params Params;

	Params.X = X;
	Params.Y = Y;
	Params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.GetMapSize
inline void UPaperTileMapComponent::GetMapSize(int32_t& MapWidth, int32_t& MapHeight, int32_t& NumLayers) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetMapSize");

	struct GetMapSize_Params {
		int32_t& MapWidth;
		int32_t& MapHeight;
		int32_t& NumLayers;
	}; GetMapSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MapWidth = Params.MapWidth;
	MapHeight = Params.MapHeight;
	NumLayers = Params.NumLayers;

}

// Function Paper2D.PaperTileMapComponent.GetLayerColor
inline struct FLinearColor UPaperTileMapComponent::GetLayerColor(int32_t Layer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.GetLayerColor");

	struct GetLayerColor_Params {
		int32_t Layer;
		struct FLinearColor ReturnValue;

	}; GetLayerColor_Params Params;

	Params.Layer = Layer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function Paper2D.PaperTileMapComponent.CreateNewTileMap
inline void UPaperTileMapComponent::CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.CreateNewTileMap");

	struct CreateNewTileMap_Params {
		int32_t MapWidth;
		int32_t MapHeight;
		int32_t TileWidth;
		int32_t TileHeight;
		float PixelsPerUnrealUnit;
		bool bCreateLayer;
	}; CreateNewTileMap_Params Params;

	Params.MapWidth = MapWidth;
	Params.MapHeight = MapHeight;
	Params.TileWidth = TileWidth;
	Params.TileHeight = TileHeight;
	Params.PixelsPerUnrealUnit = PixelsPerUnrealUnit;
	Params.bCreateLayer = bCreateLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Paper2D.PaperTileMapComponent.AddNewLayer
inline struct UPaperTileLayer UPaperTileMapComponent::AddNewLayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Paper2D.PaperTileMapComponent.AddNewLayer");

	struct AddNewLayer_Params {
		
		struct UPaperTileLayer ReturnValue;

	}; AddNewLayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

