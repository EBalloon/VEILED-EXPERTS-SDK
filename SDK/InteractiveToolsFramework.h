// Enum InteractiveToolsFramework.EInputCaptureState
enum class EInputCaptureState : uint8_t {
	Begin = 1,
	Continue = 2,
	End = 3,
	Ignore = 4,
	EInputCaptureState_MAX = 5,
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class EInputCaptureRequestType : uint8_t {
	Begin = 1,
	Ignore = 2,
	EInputCaptureRequestType_MAX = 3,
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class EInputCaptureSide : uint8_t {
	None = 0,
	Left = 1,
	Right = 2,
	Both = 3,
	Any = 99,
	EInputCaptureSide_MAX = 100,
};

// Enum InteractiveToolsFramework.EInputDevices
enum class EInputDevices : int32_t {
	None = 0,
	Keyboard = 1,
	Mouse = 2,
	Gamepad = 4,
	OculusTouch = 8,
	HTCViveWands = 16,
	AnySpatialDevice = 24,
	TabletFingers = 1024,
	EInputDevices_MAX = 1025,
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class ETransformGizmoSubElements : int32_t {
	None = 0,
	TranslateAxisX = 2,
	TranslateAxisY = 4,
	TranslateAxisZ = 8,
	TranslateAllAxes = 14,
	TranslatePlaneXY = 16,
	TranslatePlaneXZ = 32,
	TranslatePlaneYZ = 64,
	TranslateAllPlanes = 112,
	RotateAxisX = 128,
	RotateAxisY = 256,
	RotateAxisZ = 512,
	RotateAllAxes = 896,
	ScaleAxisX = 1024,
	ScaleAxisY = 2048,
	ScaleAxisZ = 4096,
	ScaleAllAxes = 7168,
	ScalePlaneYZ = 8192,
	ScalePlaneXZ = 16384,
	ScalePlaneXY = 32768,
	ScaleAllPlanes = 57344,
	ScaleUniform = 65536,
	StandardTranslateRotate = 1022,
	TranslateRotateUniformScale = 66558,
	FullTranslateRotateScale = 131070,
	ETransformGizmoSubElements_MAX = 131071,
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class EToolChangeTrackingMode : uint8_t {
	NoChangeTracking = 1,
	UndoToExit = 2,
	FullUndoRedo = 3,
	EToolChangeTrackingMode_MAX = 4,
};

// Enum InteractiveToolsFramework.EToolSide
enum class EToolSide : uint8_t {
	Left = 1,
	Mouse = 1,
	Right = 2,
	EToolSide_MAX = 3,
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class ESelectedObjectsModificationType : uint8_t {
	Replace = 0,
	Add = 1,
	Remove = 2,
	Clear = 3,
	ESelectedObjectsModificationType_MAX = 4,
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class EToolMessageLevel : uint8_t {
	Internal = 0,
	UserMessage = 1,
	UserNotification = 2,
	UserWarning = 3,
	UserError = 4,
	EToolMessageLevel_MAX = 5,
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class EToolContextCoordinateSystem : uint8_t {
	World = 0,
	Local = 1,
	EToolContextCoordinateSystem_MAX = 2,
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class EStandardToolContextMaterials : uint8_t {
	VertexColorMaterial = 1,
	EStandardToolContextMaterials_MAX = 2,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class ESceneSnapQueryTargetType : uint8_t {
	None = 0,
	MeshVertex = 1,
	MeshEdge = 2,
	Grid = 4,
	All = 7,
	ESceneSnapQueryTargetType_MAX = 8,
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class ESceneSnapQueryType : uint8_t {
	Position = 1,
	ESceneSnapQueryType_MAX = 2,
};

// Class InteractiveToolsFramework.InteractiveGizmo
class UInteractiveGizmo : public Object {

public:

	struct UInputBehaviorSet InputBehaviors; // 0x30 (8)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
class UAxisAngleGizmo : public UInteractiveGizmo {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48 (16)
	struct TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58 (16)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68 (16)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78 (16)
	bool bInInteraction; // 0x88 (1)
	struct FVector RotationOrigin; // 0x8C (12)
	struct FVector RotationAxis; // 0x98 (12)
	struct FVector RotationPlaneX; // 0xA4 (12)
	struct FVector RotationPlaneY; // 0xB0 (12)
	struct FVector InteractionStartPoint; // 0xBC (12)
	struct FVector InteractionCurPoint; // 0xC8 (12)
	float InteractionStartAngle; // 0xD4 (4)
	float InteractionCurAngle; // 0xD8 (4)
};

// Class InteractiveToolsFramework.AxisPositionGizmo
class UAxisPositionGizmo : public UInteractiveGizmo {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48 (16)
	struct TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58 (16)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68 (16)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78 (16)
	bool bEnableSignedAxis; // 0x88 (1)
	bool bInInteraction; // 0x89 (1)
	struct FVector InteractionOrigin; // 0x8C (12)
	struct FVector InteractionAxis; // 0x98 (12)
	struct FVector InteractionStartPoint; // 0xA4 (12)
	struct FVector InteractionCurPoint; // 0xB0 (12)
	float InteractionStartParameter; // 0xBC (4)
	float InteractionCurParameter; // 0xC0 (4)
	float ParameterSign; // 0xC4 (4)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
class UGizmoConstantAxisSource : public Object {

public:

	struct FVector Origin; // 0x30 (12)
	struct FVector Direction; // 0x3C (12)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
class UGizmoConstantFrameAxisSource : public Object {

public:

	struct FVector Origin; // 0x30 (12)
	struct FVector Direction; // 0x3C (12)
	struct FVector TangentX; // 0x48 (12)
	struct FVector TangentY; // 0x54 (12)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
class UGizmoWorldAxisSource : public Object {

public:

	struct FVector Origin; // 0x30 (12)
	int32_t AxisIndex; // 0x3C (4)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
class UGizmoComponentAxisSource : public Object {

public:

	struct USceneComponent Component; // 0x30 (8)
	int32_t AxisIndex; // 0x38 (4)
	bool bLocalAxes; // 0x3C (1)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
class UInteractiveToolPropertySet : public Object {

public:

	struct Object CachedProperties; // 0x40 (8)
	bool bIsPropertySetEnabled; // 0x48 (1)
};

// Class InteractiveToolsFramework.BrushBaseProperties
class UBrushBaseProperties : public UInteractiveToolPropertySet {

public:

	float BrushSize; // 0x50 (4)
	bool bSpecifyRadius; // 0x54 (1)
	float BrushRadius; // 0x58 (4)
	float BrushStrength; // 0x5C (4)
	float BrushFalloffAmount; // 0x60 (4)
	bool bShowStrength; // 0x64 (1)
	bool bShowFalloff; // 0x65 (1)
};

// Class InteractiveToolsFramework.InteractiveTool
class UInteractiveTool : public Object {

public:

	struct UInputBehaviorSet InputBehaviors; // 0x48 (8)
	struct TArray<struct Object> ToolPropertyObjects; // 0x50 (16)
};

// Class InteractiveToolsFramework.BaseBrushTool
class UBaseBrushTool : public UMeshSurfacePointTool {

public:

	struct UBrushBaseProperties BrushProperties; // 0xC0 (8)
	bool bInBrushStroke; // 0xC8 (1)
	struct FBrushStampData LastBrushStamp; // 0xCC (168)
	struct TSoftClassPtr<UObject> PropertyClass; // 0x188 (40)
	struct UBrushStampIndicator BrushStampIndicator; // 0x1B0 (8)
};

// Class InteractiveToolsFramework.BrushStampIndicator
class UBrushStampIndicator : public UInteractiveGizmo {

public:

	float BrushRadius; // 0x38 (4)
	float BrushFalloff; // 0x3C (4)
	struct FVector BrushPosition; // 0x40 (12)
	struct FVector BrushNormal; // 0x4C (12)
	bool bDrawIndicatorLines; // 0x58 (1)
	bool bDrawRadiusCircle; // 0x59 (1)
	bool bDrawFalloffCircle; // 0x5A (1)
	int32_t SampleStepCount; // 0x5C (4)
	struct FLinearColor LineColor; // 0x60 (16)
	float LineThickness; // 0x70 (4)
	bool bDepthTested; // 0x74 (1)
	bool bDrawSecondaryLines; // 0x75 (1)
	float SecondaryLineThickness; // 0x78 (4)
	struct FLinearColor SecondaryLineColor; // 0x7C (16)
	struct UPrimitiveComponent AttachedComponent; // 0x90 (8)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
class UClickDragInputBehavior : public UAnyButtonInputBehavior {

public:

	bool bUpdateModifiersDuringDrag; // 0x120 (1)
};

// Class InteractiveToolsFramework.GizmoBaseComponent
class UGizmoBaseComponent : public UPrimitiveComponent {

public:

	struct FLinearColor Color; // 0x408 (16)
	float HoverSizeMultiplier; // 0x418 (4)
	float PixelHitDistanceThreshold; // 0x41C (4)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x3500C20>
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x3500B90>
};

// Class InteractiveToolsFramework.GizmoArrowComponent
class UGizmoArrowComponent : public UGizmoBaseComponent {

public:

	struct FVector Direction; // 0x428 (12)
	float Gap; // 0x434 (4)
	float Length; // 0x438 (4)
	float Thickness; // 0x43C (4)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
class UGizmoBoxComponent : public UGizmoBaseComponent {

public:

	struct FVector Origin; // 0x428 (12)
	struct FQuat Rotation; // 0x440 (16)
	struct FVector Dimensions; // 0x450 (12)
	float LineThickness; // 0x45C (4)
	bool bRemoveHiddenLines; // 0x460 (1)
	bool bEnableAxisFlip; // 0x461 (1)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
class UGizmoCircleComponent : public UGizmoBaseComponent {

public:

	struct FVector Normal; // 0x428 (12)
	float Radius; // 0x434 (4)
	float Thickness; // 0x438 (4)
	int32_t NumSides; // 0x43C (4)
	bool bViewAligned; // 0x440 (1)
	bool bOnlyAllowFrontFacingHits; // 0x441 (1)
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
class UGizmoLineHandleComponent : public UGizmoBaseComponent {

public:

	struct FVector Normal; // 0x428 (12)
	float HandleSize; // 0x434 (4)
	float Thickness; // 0x438 (4)
	struct FVector Direction; // 0x43C (12)
	float Length; // 0x448 (4)
	bool bImageScale; // 0x44C (1)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
class UGizmoRectangleComponent : public UGizmoBaseComponent {

public:

	struct FVector DirectionX; // 0x428 (12)
	struct FVector DirectionY; // 0x434 (12)
	float OffsetX; // 0x440 (4)
	float OffsetY; // 0x444 (4)
	float LengthX; // 0x448 (4)
	float LengthY; // 0x44C (4)
	float Thickness; // 0x450 (4)
	char SegmentFlags; // 0x454 (1)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
class UGizmoComponentHitTarget : public Object {

public:

	struct UPrimitiveComponent Component; // 0x30 (8)
};

// Class InteractiveToolsFramework.InputBehaviorSet
class UInputBehaviorSet : public Object {

public:

	struct TArray<struct FBehaviorInfo> Behaviors; // 0x28 (16)
};

// Class InteractiveToolsFramework.InputRouter
class UInputRouter : public Object {

public:

	bool bAutoInvalidateOnHover; // 0x28 (1)
	bool bAutoInvalidateOnCapture; // 0x29 (1)
	struct UInputBehaviorSet ActiveInputBehaviors; // 0x38 (8)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
class UInteractiveGizmoManager : public Object {

public:

	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x30 (16)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder> GizmoBuilders; // 0x58 (80)
};

// Class InteractiveToolsFramework.InteractiveToolManager
class UInteractiveToolManager : public Object {

public:

	struct UInteractiveTool ActiveLeftTool; // 0x30 (8)
	struct UInteractiveTool ActiveRightTool; // 0x38 (8)
	struct TMap<struct FString, struct UInteractiveToolBuilder> ToolBuilders; // 0x90 (80)
};

// Class InteractiveToolsFramework.InteractiveToolsContext
class UInteractiveToolsContext : public Object {

public:

	struct UInputRouter InputRouter; // 0x58 (8)
	struct UInteractiveToolManager ToolManager; // 0x60 (8)
	struct UInteractiveGizmoManager GizmoManager; // 0x68 (8)
	struct TSoftClassPtr<UObject> ToolManagerClass; // 0x70 (40)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
class AIntervalGizmoActor : public AGizmoActor {

public:

	struct UGizmoLineHandleComponent UpIntervalComponent; // 0x220 (8)
	struct UGizmoLineHandleComponent DownIntervalComponent; // 0x228 (8)
	struct UGizmoLineHandleComponent ForwardIntervalComponent; // 0x230 (8)
};

// Class InteractiveToolsFramework.IntervalGizmo
class UIntervalGizmo : public UInteractiveGizmo {

public:

	struct UGizmoTransformChangeStateTarget StateTarget; // 0x38 (8)
	struct UTransformProxy TransformProxy; // 0x50 (8)
	struct TArray<struct UPrimitiveComponent> ActiveComponents; // 0x58 (16)
	struct TArray<struct UInteractiveGizmo> ActiveGizmos; // 0x68 (16)
	struct UGizmoComponentAxisSource AxisYSource; // 0x90 (8)
	struct UGizmoComponentAxisSource AxisZSource; // 0x98 (8)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48 (16)
	float MinParameter; // 0x58 (4)
	float MaxParameter; // 0x5C (4)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {

public:

	float Value; // 0x48 (4)
	struct FGizmoFloatParameterChange LastChange; // 0x4C (8)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct FVector2D Value; // 0x48 (8)
	struct FGizmoVec2ParameterChange LastChange; // 0x50 (16)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90 (16)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0 (16)
	float Parameter; // 0xB0 (4)
	struct FGizmoFloatParameterChange LastChange; // 0xB4 (8)
	struct FVector CurTranslationAxis; // 0xBC (12)
	struct FVector CurTranslationOrigin; // 0xC8 (12)
	struct FTransform InitialTransform; // 0xE0 (48)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90 (16)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0 (16)
	struct FVector2D Parameter; // 0xB0 (8)
	struct FGizmoVec2ParameterChange LastChange; // 0xB8 (16)
	struct FVector CurTranslationOrigin; // 0xC8 (12)
	struct FVector CurTranslationNormal; // 0xD4 (12)
	struct FVector CurTranslationAxisX; // 0xE0 (12)
	struct FVector CurTranslationAxisY; // 0xEC (12)
	struct FTransform InitialTransform; // 0x100 (48)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48 (16)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58 (16)
	float Angle; // 0x68 (4)
	struct FGizmoFloatParameterChange LastChange; // 0x6C (8)
	struct FVector CurRotationAxis; // 0x74 (12)
	struct FVector CurRotationOrigin; // 0x80 (12)
	struct FTransform InitialTransform; // 0x90 (48)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48 (16)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58 (16)
	float ScaleMultiplier; // 0x68 (4)
	struct FVector2D Parameter; // 0x6C (8)
	struct FGizmoVec2ParameterChange LastChange; // 0x74 (16)
	struct FVector CurScaleOrigin; // 0x84 (12)
	struct FVector CurScaleNormal; // 0x90 (12)
	struct FVector CurScaleAxisX; // 0x9C (12)
	struct FVector CurScaleAxisY; // 0xA8 (12)
	struct FTransform InitialTransform; // 0xC0 (48)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48 (16)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58 (16)
	float ScaleMultiplier; // 0x68 (4)
	float Parameter; // 0x6C (4)
	struct FGizmoFloatParameterChange LastChange; // 0x70 (8)
	struct FVector CurScaleAxis; // 0x78 (12)
	struct FVector CurScaleOrigin; // 0x84 (12)
	struct FTransform InitialTransform; // 0x90 (48)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90 (16)
	struct TScriptInterface<IGizmoTransformSource> TransformSource; // 0xA0 (16)
	float ScaleMultiplier; // 0xB0 (4)
	struct FVector2D Parameter; // 0xB4 (8)
	struct FGizmoVec2ParameterChange LastChange; // 0xBC (16)
	struct FVector CurScaleOrigin; // 0xCC (12)
	struct FVector CurScaleNormal; // 0xD8 (12)
	struct FVector CurScaleAxisX; // 0xE4 (12)
	struct FVector CurScaleAxisY; // 0xF0 (12)
	struct FTransform InitialTransform; // 0x100 (48)
};

// Class InteractiveToolsFramework.PlanePositionGizmo
class UPlanePositionGizmo : public UInteractiveGizmo {

public:

	struct TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48 (16)
	struct TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58 (16)
	struct TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68 (16)
	struct TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78 (16)
	bool bEnableSignedAxis; // 0x88 (1)
	bool bFlipX; // 0x89 (1)
	bool bFlipY; // 0x8A (1)
	bool bInInteraction; // 0x8B (1)
	struct FVector InteractionOrigin; // 0x8C (12)
	struct FVector InteractionNormal; // 0x98 (12)
	struct FVector InteractionAxisX; // 0xA4 (12)
	struct FVector InteractionAxisY; // 0xB0 (12)
	struct FVector InteractionStartPoint; // 0xBC (12)
	struct FVector InteractionCurPoint; // 0xC8 (12)
	struct FVector2D InteractionStartParameter; // 0xD4 (8)
	struct FVector2D InteractionCurParameter; // 0xDC (8)
	struct FVector2D ParameterSigns; // 0xE4 (8)
};

// Class InteractiveToolsFramework.MeshSelectionSet
class UMeshSelectionSet : public USelectionSet {

public:

	struct TArray<int32_t> Vertices; // 0x40 (16)
	struct TArray<int32_t> Edges; // 0x50 (16)
	struct TArray<int32_t> Faces; // 0x60 (16)
	struct TArray<int32_t> Groups; // 0x70 (16)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
class USingleClickInputBehavior : public UAnyButtonInputBehavior {

public:

	bool HitTestOnRelease; // 0xC0 (1)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
class UGizmoTransformChangeStateTarget : public Object {

public:

	struct TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50 (16)
};

// Class InteractiveToolsFramework.TransformGizmoActor
class ATransformGizmoActor : public AGizmoActor {

public:

	struct UPrimitiveComponent TranslateX; // 0x220 (8)
	struct UPrimitiveComponent TranslateY; // 0x228 (8)
	struct UPrimitiveComponent TranslateZ; // 0x230 (8)
	struct UPrimitiveComponent TranslateYZ; // 0x238 (8)
	struct UPrimitiveComponent TranslateXZ; // 0x240 (8)
	struct UPrimitiveComponent TranslateXY; // 0x248 (8)
	struct UPrimitiveComponent RotateX; // 0x250 (8)
	struct UPrimitiveComponent RotateY; // 0x258 (8)
	struct UPrimitiveComponent RotateZ; // 0x260 (8)
	struct UPrimitiveComponent UniformScale; // 0x268 (8)
	struct UPrimitiveComponent AxisScaleX; // 0x270 (8)
	struct UPrimitiveComponent AxisScaleY; // 0x278 (8)
	struct UPrimitiveComponent AxisScaleZ; // 0x280 (8)
	struct UPrimitiveComponent PlaneScaleYZ; // 0x288 (8)
	struct UPrimitiveComponent PlaneScaleXZ; // 0x290 (8)
	struct UPrimitiveComponent PlaneScaleXY; // 0x298 (8)
};

// Class InteractiveToolsFramework.TransformGizmo
class UTransformGizmo : public UInteractiveGizmo {

public:

	struct UTransformProxy ActiveTarget; // 0x40 (8)
	bool bSnapToWorldGrid; // 0x48 (1)
	bool bUseContextCoordinateSystem; // 0x49 (1)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x4C (4)
	struct TArray<struct UPrimitiveComponent> ActiveComponents; // 0xE0 (16)
	struct TArray<struct UPrimitiveComponent> NonuniformScaleComponents; // 0xF0 (16)
	struct TArray<struct UInteractiveGizmo> ActiveGizmos; // 0x100 (16)
	struct UGizmoConstantFrameAxisSource CameraAxisSource; // 0x120 (8)
	struct UGizmoComponentAxisSource AxisXSource; // 0x128 (8)
	struct UGizmoComponentAxisSource AxisYSource; // 0x130 (8)
	struct UGizmoComponentAxisSource AxisZSource; // 0x138 (8)
	struct UGizmoComponentAxisSource UnitAxisXSource; // 0x140 (8)
	struct UGizmoComponentAxisSource UnitAxisYSource; // 0x148 (8)
	struct UGizmoComponentAxisSource UnitAxisZSource; // 0x150 (8)
	struct UGizmoTransformChangeStateTarget StateTarget; // 0x158 (8)
	struct UGizmoScaledTransformSource ScaledTransformSource; // 0x160 (8)
};

// Class InteractiveToolsFramework.TransformProxy
class UTransformProxy : public Object {

public:

	bool bRotatePerObject; // 0x70 (1)
	bool bSetPivotMode; // 0x71 (1)
	struct FTransform SharedTransform; // 0x90 (48)
	struct FTransform InitialSharedTransform; // 0xC0 (48)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource {

public:

	struct USceneComponent Component; // 0x48 (8)
	bool bModifyComponentOnTransform; // 0x50 (1)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource {

public:

	struct TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48 (16)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource {

public:

	struct UTransformProxy Proxy; // 0x48 (8)
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
struct FBehaviorInfo {
	struct UInputBehavior Behavior; // 0x0 (8)
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0 (4)
	float CurrentValue; // 0x4 (4)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
struct FGizmoVec2ParameterChange {
	struct FVector2D InitialValue; // 0x0 (8)
	struct FVector2D CurrentValue; // 0x8 (8)
};

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
inline void UGizmoBaseComponent::UpdateWorldLocalState(bool bWorldIn) {
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState");

	struct UpdateWorldLocalState_Params {
		bool bWorldIn;
	}; UpdateWorldLocalState_Params Params;

	Params.bWorldIn = bWorldIn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
inline void UGizmoBaseComponent::UpdateHoverState(bool bHoveringIn) {
	static auto fn = UObject::FindObject<UFunction>("Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState");

	struct UpdateHoverState_Params {
		bool bHoveringIn;
	}; UpdateHoverState_Params Params;

	Params.bHoveringIn = bHoveringIn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

