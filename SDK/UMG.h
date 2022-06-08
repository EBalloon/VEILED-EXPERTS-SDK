// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t {
	NotAccessible = 0,
	Auto = 1,
	Summary = 2,
	Custom = 3,
	ToolTip = 4,
	ESlateAccessibleBehavior_MAX = 5,
};

// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t {
	Visible = 0,
	Collapsed = 1,
	Hidden = 2,
	HitTestInvisible = 3,
	SelfHitTestInvisible = 4,
	ESlateVisibility_MAX = 5,
};

// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t {
	Default = 0,
	Number = 1,
	Web = 2,
	Email = 3,
	Password = 4,
	AlphaNumeric = 5,
	EVirtualKeyboardType_MAX = 6,
};

// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t {
	MouseDown = 0,
	TopLeft = 1,
	TopCenter = 2,
	TopRight = 3,
	CenterLeft = 4,
	CenterCenter = 5,
	CenterRight = 6,
	BottomLeft = 7,
	BottomCenter = 8,
	BottomRight = 9,
	EDragPivot_MAX = 10,
};

// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t {
	Horizontal = 0,
	Vertical = 1,
	Wrap = 2,
	Overlay = 3,
	EDynamicBoxType_MAX = 4,
};

// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t {
	Automatic = 0,
	Fill = 1,
	ESlateSizeRule_MAX = 2,
};

// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t {
	Forward = 0,
	Reverse = 1,
	PingPong = 2,
	EUMGSequencePlayMode_MAX = 3,
};

// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t {
	Started = 0,
	Finished = 1,
	EWidgetAnimationEvent_MAX = 2,
};

// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t {
	Never = 0,
	Auto = 1,
	EWidgetTickFrequency_MAX = 2,
};

// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t {
	None = 0,
	Designing = 1,
	ShowOutline = 2,
	ExecutePreConstruct = 4,
	EWidgetDesignFlags_MAX = 5,
};

// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t {
	Function = 0,
	Property = 1,
	EBindingKind_MAX = 2,
};

// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t {
	Visible = 0,
	SelfHitTestInvisible = 1,
	EWindowVisibility_MAX = 2,
};

// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t {
	Plane = 0,
	Cylinder = 1,
	EWidgetGeometryMode_MAX = 2,
};

// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t {
	Opaque = 0,
	Masked = 1,
	Transparent = 2,
	EWidgetBlendMode_MAX = 3,
};

// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t {
	RealTime = 0,
	GameTime = 1,
	EWidgetTimingPolicy_MAX = 2,
};

// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t {
	World = 0,
	Screen = 1,
	EWidgetSpace_MAX = 2,
};

// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t {
	World = 0,
	Mouse = 1,
	CenterScreen = 2,
	Custom = 3,
	EWidgetInteractionSource_MAX = 4,
};

// Class UMG.Widget
class UWidget : public UVisual {

public:

	struct UPanelSlot Slot; // 0x28 (8)
	struct FDelegate bIsEnabledDelegate; // 0x30 (16)
	struct FText ToolTipText; // 0x40 (24)
	struct FDelegate ToolTipTextDelegate; // 0x58 (16)
	struct UWidget ToolTipWidget; // 0x68 (8)
	struct FDelegate ToolTipWidgetDelegate; // 0x70 (16)
	struct FDelegate VisibilityDelegate; // 0x80 (16)
	struct FWidgetTransform RenderTransform; // 0x90 (28)
	struct FVector2D RenderTransformPivot; // 0xAC (8)
	char bIsVariable : 1; // 0xB4 (1)
	char bCreatedByConstructionScript : 1; // 0xB4 (1)
	char bIsEnabled : 1; // 0xB4 (1)
	char bOverride_Cursor : 1; // 0xB4 (1)
	char pad_B4_4 : 4; // 0xB4 (1)
	struct USlateAccessibleWidgetData AccessibleWidgetData; // 0xB8 (8)
	char bIsVolatile : 1; // 0xC0 (1)
	char pad_BD_1 : 7; // 0xBD (1)
	enum class EMouseCursor Cursor; // 0xC1 (1)
	enum class EWidgetClipping Clipping; // 0xC2 (1)
	enum class ESlateVisibility Visibility; // 0xC3 (1)
	float RenderOpacity; // 0xC4 (4)
	struct UWidgetNavigation Navigation; // 0xC8 (8)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xD0 (1)
	struct TArray<struct UPropertyBinding> NativeBindings; // 0xF8 (16)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14290>
	void SetUserFocus(struct APlayerController PlayerController); // Function UMG.Widget.SetUserFocus(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14070>
	void SetToolTipText(struct FText& InToolTipText); // Function UMG.Widget.SetToolTipText(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13FA0>
	void SetToolTip(struct UWidget Widget); // Function UMG.Widget.SetToolTip(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13F20>
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13E10>
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13D90>
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13D10>
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13C30>
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13BB0>
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13B30>
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13AB0>
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget InWidget); // Function UMG.Widget.SetNavigationRuleExplicit(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13960>
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13880>
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A137A0>
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A136E0>
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A135D0>
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A135B0>
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13520>
	void SetFocus(); // Function UMG.Widget.SetFocus(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13480>
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13400>
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13380>
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A132C0>
	void ResetCursor(); // Function UMG.Widget.ResetCursor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A132A0>
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13280>
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature(Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsVisible(); // Function UMG.Widget.IsVisible(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A13250>
	bool IsHovered(); // Function UMG.Widget.IsHovered(Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25D73C0>
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13230>
	bool HasUserFocusedDescendants(struct APlayerController PlayerController); // Function UMG.Widget.HasUserFocusedDescendants(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A131A0>
	bool HasUserFocus(struct APlayerController PlayerController); // Function UMG.Widget.HasUserFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A13110>
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A13050>
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A13020>
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12FF0>
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12FC0>
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12F90>
	struct UWidget GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12F60>
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12E40>
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12DE0>
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12DB0>
	struct UPanelWidget GetParent(); // Function UMG.Widget.GetParent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12D80>
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12D40>
	struct APlayerController GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer(BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12D10>
	struct ULocalPlayer GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer(BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12CE0>
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature(Public|Delegate|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12CB0>
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct UGameInstance GetGameInstance(); // Function UMG.Widget.GetGameInstance(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12C80>
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12C10>
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12BE0>
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12BA0>
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct UWidget GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct UWidget GenerateWidgetForObject__DelegateSignature(struct Object Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature(Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A12B10>
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A12AF0>
};

// Class UMG.PanelWidget
class UPanelWidget : public UWidget {

public:

	struct TArray<struct UPanelSlot> Slots; // 0x108 (16)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01110>
	bool RemoveChild(struct UWidget Content); // Function UMG.PanelWidget.RemoveChild(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01080>
	bool HasChild(struct UWidget Content); // Function UMG.PanelWidget.HasChild(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00FF0>
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00FC0>
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00B80>
	int32_t GetChildIndex(struct UWidget Content); // Function UMG.PanelWidget.GetChildIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00AF0>
	struct UWidget GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00A60>
	struct TArray<struct UWidget> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A009E0>
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A009C0>
	struct UPanelSlot AddChild(struct UWidget Content); // Function UMG.PanelWidget.AddChild(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A00880>
};

// Class UMG.UserWidget
class UUserWidget : public UWidget {

public:

	struct FLinearColor ColorAndOpacity; // 0x110 (16)
	struct FDelegate ColorAndOpacityDelegate; // 0x120 (16)
	struct FSlateColor ForegroundColor; // 0x130 (40)
	struct FDelegate ForegroundColorDelegate; // 0x158 (16)
	struct FMargin Padding; // 0x168 (16)
	struct TArray<struct UUMGSequencePlayer> ActiveSequencePlayers; // 0x178 (16)
	struct TArray<struct UUMGSequencePlayer> StoppedSequencePlayers; // 0x188 (16)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x198 (16)
	struct UWidgetTree WidgetTree; // 0x1A8 (8)
	int32_t Priority; // 0x1B0 (4)
	char bSupportsKeyboardFocus : 1; // 0x1B4 (1)
	char pad_1AC_1 : 7; // 0x1AC (1)
	char pad_1AD_0 : 1; // 0x1AD (1)
	char bIsFocusable : 1; // 0x1B4 (1)
	char pad_1AD_2 : 6; // 0x1AD (1)
	char pad_1AE_0 : 2; // 0x1AE (1)
	char bStopAction : 1; // 0x1B4 (1)
	char pad_1AE_3 : 5; // 0x1AE (1)
	char pad_1AF_0 : 3; // 0x1AF (1)
	char bHasScriptImplementedTick : 1; // 0x1B4 (1)
	char pad_1AF_4 : 4; // 0x1AF (1)
	char pad_1B0_0 : 4; // 0x1B0 (1)
	char bHasScriptImplementedPaint : 1; // 0x1B4 (1)
	char pad_1B0_5 : 3; // 0x1B0 (1)
	char pad_1B1_0 : 7; // 0x1B1 (1)
	char bCookedWidgetTree : 1; // 0x1B4 (1)
	enum class EWidgetTickFrequency TickFrequency; // 0x1C0 (1)
	struct UInputComponent InputComponent; // 0x1C8 (8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x1D0 (16)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10C20>
	void UnbindFromAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10B40>
	void UnbindFromAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10A60>
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A109E0>
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10960>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A108A0>
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10880>
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10860>
	void StopAnimation(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.StopAnimation(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A107E0>
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A107C0>
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A104F0>
	void SetPlaybackSpeed(struct UWidgetAnimation InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10420>
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10390>
	void SetOwningPlayer(struct APlayerController LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10310>
	void SetNumLoopsToPlay(struct UWidgetAnimation InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10250>
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A100D0>
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10040>
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FED0>
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FE50>
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FD50>
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FCC0>
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FC40>
	void ReverseAnimation(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.ReverseAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FBC0>
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FBA0>
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FB80>
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void PlaySound(struct USoundBase SoundToPlay); // Function UMG.UserWidget.PlaySound(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FB00>
	struct UUMGSequencePlayer PlayAnimationTimeRange(struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F910>
	struct UUMGSequencePlayer PlayAnimationReverse(struct UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F800>
	struct UUMGSequencePlayer PlayAnimationForward(struct UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F6F0>
	struct UUMGSequencePlayer PlayAnimation(struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F530>
	float PauseAnimation(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.PauseAnimation(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F490>
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchStarted(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchMoved(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent); // Function UMG.UserWidget.OnTouchGesture(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent); // Function UMG.UserWidget.OnTouchEnded(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnPaint(struct FPaintContext& Context); // Function UMG.UserWidget.OnPaint(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseWheel(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseMove(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseLeave(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseEnter(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDrop(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragOver(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragLeave(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragEnter(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation); // Function UMG.UserWidget.OnDragDetected(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation Operation); // Function UMG.UserWidget.OnDragCancelled(BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnAnimationStarted(struct UWidgetAnimation Animation); // Function UMG.UserWidget.OnAnimationStarted(BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x2A0F400>
	void OnAnimationFinished(struct UWidgetAnimation Animation); // Function UMG.UserWidget.OnAnimationFinished(BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x2A0F370>
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction(Final|Native|Protected|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F1F0>
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0F1C0>
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction(Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0F130>
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EF60>
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable(BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0F100>
	bool IsAnimationPlayingForward(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0F070>
	bool IsAnimationPlaying(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.IsAnimationPlaying(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EFE0>
	struct APawn GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EF90>
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EF60>
	float GetAnimationCurrentTime(struct UWidgetAnimation InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EEC0>
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EE80>
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport(Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EE40>
	void Destruct(); // Function UMG.UserWidget.Destruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Construct(); // Function UMG.UserWidget.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0EE20>
	void BindToAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0ED40>
	void BindToAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0EC60>
	void BindToAnimationEvent(struct UWidgetAnimation Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0EAF0>
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0EA70>
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen(Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0E9E0>
};

// Class UMG.Button
class UButton : public UContentWidget {

public:

	struct USlateWidgetStyleAsset Style; // 0x120 (8)
	struct FButtonStyle WidgetStyle; // 0x128 (632)
	struct FLinearColor ColorAndOpacity; // 0x3A0 (16)
	struct FLinearColor BackgroundColor; // 0x3B0 (16)
	enum class EButtonClickMethod ClickMethod; // 0x3C0 (1)
	enum class EButtonTouchMethod TouchMethod; // 0x3C1 (1)
	enum class EButtonPressMethod PressMethod; // 0x3C2 (1)
	bool IsFocusable; // 0x3C3 (1)
	struct FMulticastInlineDelegate OnClicked; // 0x3C8 (16)
	struct FMulticastInlineDelegate OnPressed; // 0x3D8 (16)
	struct FMulticastInlineDelegate OnReleased; // 0x3E8 (16)
	struct FMulticastInlineDelegate OnHovered; // 0x3F8 (16)
	struct FMulticastInlineDelegate OnUnHovered; // 0x408 (16)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4820>
	void SetStyle(struct FButtonStyle& InStyle); // Function UMG.Button.SetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4740>
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F45C0>
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3930>
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F38B0>
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F33B0>
	bool IsPressed(); // Function UMG.Button.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F3120>
};

// Class UMG.Slider
class USlider : public UWidget {

public:

	float Value; // 0x108 (4)
	struct FDelegate ValueDelegate; // 0x10C (16)
	float MinValue; // 0x11C (4)
	float MaxValue; // 0x120 (4)
	struct FSliderStyle WidgetStyle; // 0x128 (832)
	enum class EOrientation Orientation; // 0x468 (1)
	struct FLinearColor SliderBarColor; // 0x46C (16)
	struct FLinearColor SliderHandleColor; // 0x47C (16)
	bool IndentHandle; // 0x48C (1)
	bool Locked; // 0x48D (1)
	bool MouseUsesStep; // 0x48E (1)
	bool RequiresControllerLock; // 0x48F (1)
	float StepSize; // 0x490 (4)
	bool IsFocusable; // 0x494 (1)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498 (16)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4A8 (16)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4B8 (16)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4C8 (16)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4D8 (16)

	void SetValue(float InValue); // Function UMG.Slider.SetValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A920>
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A640>
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A5C0>
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A540>
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A1C0>
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09F40>
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09DB0>
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09BD0>
	float GetValue(); // Function UMG.Slider.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09410>
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09220>
};

// Class UMG.Image
class UImage : public UWidget {

public:

	struct FSlateBrush Brush; // 0x108 (136)
	struct FDelegate BrushDelegate; // 0x190 (16)
	struct FLinearColor ColorAndOpacity; // 0x1A0 (16)
	struct FDelegate ColorAndOpacityDelegate; // 0x1B0 (16)
	bool bFlipForRightToLeftFlowDirection; // 0x1C0 (1)
	struct FDelegate OnMouseButtonDownEvent; // 0x1C4 (16)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCE30>
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCA80>
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC900>
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC880>
	void SetBrushResourceObject(struct Object ResourceObject); // Function UMG.Image.SetBrushResourceObject(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC800>
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC730>
	void SetBrushFromTexture(struct UTexture2D Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC660>
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC530>
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC440>
	void SetBrushFromMaterial(struct UMaterialInterface Material); // Function UMG.Image.SetBrushFromMaterial(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC3B0>
	void SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC2C0>
	void SetBrushFromAsset(struct USlateBrushAsset Asset); // Function UMG.Image.SetBrushFromAsset(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC230>
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Image.SetBrush(Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC0B0>
	struct UMaterialInstanceDynamic GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB7A0>
};

// Class UMG.TextLayoutWidget
class UTextLayoutWidget : public UWidget {

public:

	struct FShapedTextOptions ShapedTextOptions; // 0x108 (3)
	enum class ETextJustify Justification; // 0x10B (1)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x10C (1)
	char AutoWrapText : 1; // 0x10D (1)
	char pad_10D_1 : 7; // 0x10D (1)
	float WrapTextAt; // 0x110 (4)
	struct FMargin Margin; // 0x114 (16)
	float LineHeightPercentage; // 0x124 (4)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09D30>
};

// Class UMG.TextBlock
class UTextBlock : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FDelegate TextDelegate; // 0x140 (16)
	struct FSlateColor ColorAndOpacity; // 0x150 (40)
	struct FDelegate ColorAndOpacityDelegate; // 0x178 (16)
	struct FSlateFontInfo Font; // 0x188 (80)
	struct FSlateBrush StrikeBrush; // 0x1D8 (136)
	struct FVector2D ShadowOffset; // 0x260 (8)
	struct FLinearColor ShadowColorAndOpacity; // 0x268 (16)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x278 (16)
	float MinDesiredWidth; // 0x288 (4)
	bool bWrapWithInvalidationPanel; // 0x28C (1)
	bool bAutoWrapText; // 0x28D (1)
	bool bSimpleTextMode; // 0x28E (1)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A840>
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A6C0>
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A440>
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A3C0>
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A340>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A040>
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A099B0>
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09740>
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A096B0>
	struct FText GetText(); // Function UMG.TextBlock.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A092D0>
	struct UMaterialInstanceDynamic GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A090D0>
	struct UMaterialInstanceDynamic GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A090A0>
};

// Class UMG.AsyncTaskDownloadImage
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase {

public:

	struct FMulticastInlineDelegate OnSuccess; // 0x30 (16)
	struct FMulticastInlineDelegate OnFail; // 0x40 (16)

	struct UAsyncTaskDownloadImage DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage(Final|Native|Static|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F2B20>
};

// Class UMG.BackgroundBlur
class UBackgroundBlur : public UContentWidget {

public:

	struct FMargin Padding; // 0x120 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x130 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x131 (1)
	bool bApplyAlphaToBlur; // 0x132 (1)
	float BlurStrength; // 0x134 (4)
	bool bOverrideAutoRadiusCalculation; // 0x138 (1)
	int32_t BlurRadius; // 0x13C (4)
	struct FSlateBrush LowQualityFallbackBrush; // 0x140 (136)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F48A0>
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F41F0>
	void SetLowQualityFallbackBrush(struct FSlateBrush& InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3E60>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3AB0>
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F34B0>
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3430>
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3290>
};

// Class UMG.PanelSlot
class UPanelSlot : public UVisual {

public:

	struct UPanelWidget Parent; // 0x28 (8)
	struct UWidget Content; // 0x30 (8)
};

// Class UMG.BackgroundBlurSlot
class UBackgroundBlurSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4920>
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4280>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3B30>
};

// Class UMG.PropertyBinding
class UPropertyBinding : public Object {

public:

	struct TWeakObjectPtr<struct Object> SourceObject; // 0x28 (8)
	struct FDynamicPropertyPath SourcePath; // 0x30 (40)
	struct FName DestinationProperty; // 0x58 (8)
};

// Class UMG.Border
class UBorder : public UContentWidget {

public:

	enum class EHorizontalAlignment HorizontalAlignment; // 0x120 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x121 (1)
	char bShowEffectWhenDisabled : 1; // 0x122 (1)
	char pad_122_1 : 7; // 0x122 (1)
	struct FLinearColor ContentColorAndOpacity; // 0x124 (16)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x134 (16)
	struct FMargin Padding; // 0x144 (16)
	struct FSlateBrush Background; // 0x158 (136)
	struct FDelegate BackgroundDelegate; // 0x1E0 (16)
	struct FLinearColor BrushColor; // 0x1F0 (16)
	struct FDelegate BrushColorDelegate; // 0x200 (16)
	struct FVector2D DesiredSizeScale; // 0x210 (8)
	bool bFlipForRightToLeftFlowDirection; // 0x218 (1)
	struct FDelegate OnMouseButtonDownEvent; // 0x21C (16)
	struct FDelegate OnMouseButtonUpEvent; // 0x22C (16)
	struct FDelegate OnMouseMoveEvent; // 0x23C (16)
	struct FDelegate OnMouseDoubleClickEvent; // 0x24C (16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F49A0>
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4310>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3BB0>
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3A30>
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F39B0>
	void SetBrushFromTexture(struct UTexture2D Texture); // Function UMG.Border.SetBrushFromTexture(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F37B0>
	void SetBrushFromMaterial(struct UMaterialInterface Material); // Function UMG.Border.SetBrushFromMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F37B0>
	void SetBrushFromAsset(struct USlateBrushAsset Asset); // Function UMG.Border.SetBrushFromAsset(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3730>
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F36B0>
	void SetBrush(struct FSlateBrush& InBrush); // Function UMG.Border.SetBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3530>
	struct UMaterialInstanceDynamic GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F2CE0>
};

// Class UMG.BorderSlot
class UBorderSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4A20>
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F43A0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3C30>
};

// Class UMG.ButtonSlot
class UButtonSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4AA0>
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4430>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3CB0>
};

// Class UMG.CanvasPanelSlot
class UCanvasPanelSlot : public UPanelSlot {

public:

	struct FAnchorData LayoutData; // 0x38 (40)
	bool bAutoSize; // 0x60 (1)
	int32_t ZOrder; // 0x64 (4)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4B20>
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F46C0>
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4540>
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4160>
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum(Final|Native|Public|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x29F4060>
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum(Final|Native|Public|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x29F3FE0>
	void SetLayout(struct FAnchorData& InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3DC0>
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3320>
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3200>
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3180>
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F30C0>
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2E20>
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2DE0>
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2DA0>
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2D10>
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2C80>
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2C40>
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2C00>
};

// Class UMG.CheckBox
class UCheckBox : public UContentWidget {

public:

	enum class ECheckBoxState CheckedState; // 0x120 (1)
	struct FDelegate CheckedStateDelegate; // 0x124 (16)
	struct FCheckBoxStyle WidgetStyle; // 0x138 (1408)
	struct USlateWidgetStyleAsset Style; // 0x6B8 (8)
	struct USlateBrushAsset UncheckedImage; // 0x6C0 (8)
	struct USlateBrushAsset UncheckedHoveredImage; // 0x6C8 (8)
	struct USlateBrushAsset UncheckedPressedImage; // 0x6D0 (8)
	struct USlateBrushAsset CheckedImage; // 0x6D8 (8)
	struct USlateBrushAsset CheckedHoveredImage; // 0x6E0 (8)
	struct USlateBrushAsset CheckedPressedImage; // 0x6E8 (8)
	struct USlateBrushAsset UndeterminedImage; // 0x6F0 (8)
	struct USlateBrushAsset UndeterminedHoveredImage; // 0x6F8 (8)
	struct USlateBrushAsset UndeterminedPressedImage; // 0x700 (8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x708 (1)
	struct FMargin Padding; // 0x70C (16)
	struct FSlateColor BorderBackgroundColor; // 0x720 (40)
	bool IsFocusable; // 0x748 (1)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x750 (16)

	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3D30>
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3830>
	bool IsPressed(); // Function UMG.CheckBox.IsPressed(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F3150>
	bool IsChecked(); // Function UMG.CheckBox.IsChecked(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F30F0>
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F2CB0>
};

// Class UMG.CircularThrobber
class UCircularThrobber : public UWidget {

public:

	int32_t NumberOfPieces; // 0x108 (4)
	float Period; // 0x10C (4)
	float Radius; // 0x110 (4)
	struct USlateBrushAsset PieceImage; // 0x118 (8)
	struct FSlateBrush Image; // 0x120 (136)
	bool bEnableRadius; // 0x1A8 (1)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4640>
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F44C0>
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F40E0>
};

// Class UMG.ComboBox
class UComboBox : public UWidget {

public:

	struct TArray<struct Object> Items; // 0x108 (16)
	struct FDelegate OnGenerateWidgetEvent; // 0x118 (16)
	bool bIsFocusable; // 0x128 (1)
};

// Class UMG.ComboBoxString
class UComboBoxString : public UWidget {

public:

	struct TArray<struct FString> DefaultOptions; // 0x108 (16)
	struct FString SelectedOption; // 0x118 (16)
	struct FComboBoxStyle WidgetStyle; // 0x128 (1008)
	struct FTableRowStyle ItemStyle; // 0x518 (1992)
	struct FMargin ContentPadding; // 0xCE0 (16)
	float MaxListHeight; // 0xCF0 (4)
	bool HasDownArrow; // 0xCF4 (1)
	bool EnableGamepadNavigationMode; // 0xCF5 (1)
	struct FSlateFontInfo Font; // 0xCF8 (80)
	struct FSlateColor ForegroundColor; // 0xD48 (40)
	bool bIsFocusable; // 0xD70 (1)
	struct FDelegate OnGenerateWidgetEvent; // 0xD74 (16)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xD88 (16)
	struct FMulticastInlineDelegate OnOpening; // 0xD98 (16)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8950>
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F88D0>
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F79C0>
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7920>
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F78F0>
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F76D0>
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F76A0>
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F7670>
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F75A0>
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F73A0>
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6FF0>
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6FD0>
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6E50>
};

// Class UMG.DragDropOperation
class UDragDropOperation : public Object {

public:

	struct FString Tag; // 0x28 (16)
	struct Object Payload; // 0x38 (8)
	struct UWidget DefaultDragVisual; // 0x40 (8)
	enum class EDragPivot Pivot; // 0x48 (1)
	struct FVector2D Offset; // 0x4C (8)
	struct FMulticastInlineDelegate OnDrop; // 0x58 (16)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68 (16)
	struct FMulticastInlineDelegate OnDragged; // 0x78 (16)

	void Drop(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Drop(Native|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x29F7270>
	void Dragged(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.Dragged(Native|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x29F7140>
	void DragCancelled(struct FPointerEvent& PointerEvent); // Function UMG.DragDropOperation.DragCancelled(Native|Event|Public|HasOutParms|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x29F7010>
};

// Class UMG.DynamicEntryBoxBase
class UDynamicEntryBoxBase : public UWidget {

public:

	enum class EDynamicBoxType EntryBoxType; // 0x108 (1)
	struct FVector2D EntrySpacing; // 0x10C (8)
	struct TArray<struct FVector2D> SpacingPattern; // 0x118 (16)
	struct FSlateChildSize EntrySizeRule; // 0x128 (8)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x130 (1)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x131 (1)
	int32_t MaxElementSize; // 0x134 (4)
	struct FUserWidgetPool EntryWidgetPool; // 0x148 (128)

	void SetEntrySpacing(struct FVector2D& InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7D60>
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F7570>
	struct TArray<struct UUserWidget> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F7450>
};

// Class UMG.DynamicEntryBox
class UDynamicEntryBox : public UDynamicEntryBoxBase {

public:

	struct UClass* EntryWidgetClass; // 0x1C8 (8)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7A70>
	void RemoveEntry(struct UUserWidget EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7940>
	struct UUserWidget BP_CreateEntryOfClass(struct UClass* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6F20>
	struct UUserWidget BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6EF0>
};

// Class UMG.EditableText
class UEditableText : public UWidget {

public:

	struct FText Text; // 0x108 (24)
	struct FDelegate TextDelegate; // 0x120 (16)
	struct FText HintText; // 0x130 (24)
	struct FDelegate HintTextDelegate; // 0x148 (16)
	struct FEditableTextStyle WidgetStyle; // 0x158 (536)
	struct USlateWidgetStyleAsset Style; // 0x370 (8)
	struct USlateBrushAsset BackgroundImageSelected; // 0x378 (8)
	struct USlateBrushAsset BackgroundImageComposing; // 0x380 (8)
	struct USlateBrushAsset CaretImage; // 0x388 (8)
	struct FSlateFontInfo Font; // 0x390 (80)
	struct FSlateColor ColorAndOpacity; // 0x3E0 (40)
	bool IsReadOnly; // 0x408 (1)
	bool IsPassword; // 0x409 (1)
	float MinimumDesiredWidth; // 0x40C (4)
	bool IsCaretMovedWhenGainFocus; // 0x410 (1)
	bool SelectAllTextWhenFocused; // 0x411 (1)
	bool RevertTextOnEscape; // 0x412 (1)
	bool ClearKeyboardFocusOnCommit; // 0x413 (1)
	bool SelectAllTextOnCommit; // 0x414 (1)
	bool AllowContextMenu; // 0x415 (1)
	enum class EVirtualKeyboardType KeyboardType; // 0x416 (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x417 (1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x418 (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x419 (1)
	enum class ETextJustify Justification; // 0x41A (1)
	struct FShapedTextOptions ShapedTextOptions; // 0x41B (3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x420 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x430 (16)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8A30>
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8470>
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8350>
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8230>
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7ED0>
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FText GetText(); // Function UMG.EditableText.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F7750>
};

// Class UMG.EditableTextBox
class UEditableTextBox : public UWidget {

public:

	struct FText Text; // 0x108 (24)
	struct FDelegate TextDelegate; // 0x120 (16)
	struct FEditableTextBoxStyle WidgetStyle; // 0x130 (2032)
	struct USlateWidgetStyleAsset Style; // 0x920 (8)
	struct FText HintText; // 0x928 (24)
	struct FDelegate HintTextDelegate; // 0x940 (16)
	struct FSlateFontInfo Font; // 0x950 (80)
	struct FLinearColor ForegroundColor; // 0x9A0 (16)
	struct FLinearColor BackgroundColor; // 0x9B0 (16)
	struct FLinearColor ReadOnlyForegroundColor; // 0x9C0 (16)
	bool IsReadOnly; // 0x9D0 (1)
	bool IsPassword; // 0x9D1 (1)
	float MinimumDesiredWidth; // 0x9D4 (4)
	struct FMargin Padding; // 0x9D8 (16)
	bool IsCaretMovedWhenGainFocus; // 0x9E8 (1)
	bool SelectAllTextWhenFocused; // 0x9E9 (1)
	bool RevertTextOnEscape; // 0x9EA (1)
	bool ClearKeyboardFocusOnCommit; // 0x9EB (1)
	bool SelectAllTextOnCommit; // 0x9EC (1)
	bool AllowContextMenu; // 0x9ED (1)
	enum class EVirtualKeyboardType KeyboardType; // 0x9EE (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9EF (1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9F0 (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9F1 (1)
	enum class ETextJustify Justification; // 0x9F2 (1)
	struct FShapedTextOptions ShapedTextOptions; // 0x9F3 (3)
	struct FMulticastInlineDelegate OnTextChanged; // 0x9F8 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xA08 (16)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8B10>
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F84F0>
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F83E0>
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F82C0>
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7FB0>
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7DF0>
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool HasError(); // Function UMG.EditableTextBox.HasError(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F78C0>
	struct FText GetText(); // Function UMG.EditableTextBox.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F77F0>
	void ClearError(); // Function UMG.EditableTextBox.ClearError(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6FB0>
};

// Class UMG.ExpandableArea
class UExpandableArea : public UWidget {

public:

	struct FExpandableAreaStyle Style; // 0x110 (288)
	struct FSlateBrush BorderBrush; // 0x230 (136)
	struct FSlateColor BorderColor; // 0x2B8 (40)
	bool bIsExpanded; // 0x2E0 (1)
	float MaxHeight; // 0x2E4 (4)
	struct FMargin HeaderPadding; // 0x2E8 (16)
	struct FMargin AreaPadding; // 0x2F8 (16)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x308 (16)
	struct UWidget HeaderContent; // 0x318 (8)
	struct UWidget BodyContent; // 0x320 (8)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F81A0>
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8110>
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29F7540>
};

// Class UMG.GridPanel
class UGridPanel : public UPanelWidget {

public:

	struct TArray<float> ColumnFill; // 0x120 (16)
	struct TArray<float> RowFill; // 0x130 (16)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8780>
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7B80>
	struct UGridSlot AddChildToGrid(struct UWidget Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F6D50>
};

// Class UMG.GridSlot
class UGridSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)
	int32_t Row; // 0x4C (4)
	int32_t RowSpan; // 0x50 (4)
	int32_t Column; // 0x54 (4)
	int32_t ColumnSpan; // 0x58 (4)
	int32_t Layer; // 0x5C (4)
	struct FVector2D Nudge; // 0x60 (8)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8BF0>
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8850>
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8700>
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8670>
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F85F0>
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8570>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F8090>
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7C50>
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F7B00>
};

// Class UMG.HorizontalBoxSlot
class UHorizontalBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x40 (16)
	struct FSlateChildSize Size; // 0x50 (8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD3C0>
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD2B0>
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCEB0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCBF0>
};

// Class UMG.InputKeySelector
class UInputKeySelector : public UWidget {

public:

	struct FButtonStyle WidgetStyle; // 0x108 (632)
	struct FTextBlockStyle TextStyle; // 0x380 (616)
	struct FInputChord SelectedKey; // 0x5E8 (32)
	struct FSlateFontInfo Font; // 0x608 (80)
	struct FMargin Margin; // 0x658 (16)
	struct FLinearColor ColorAndOpacity; // 0x668 (16)
	struct FText KeySelectionText; // 0x678 (24)
	struct FText NoKeySpecifiedText; // 0x690 (24)
	bool bAllowModifierKeys; // 0x6A8 (1)
	bool bAllowGamepadKeys; // 0x6A9 (1)
	struct TArray<struct FKey> EscapeKeys; // 0x6B0 (16)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6C0 (16)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6D0 (16)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD340>
	void SetSelectedKey(struct FInputChord& InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD140>
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCD50>
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCC70>
	void SetEscapeKeys(struct TArray<struct FKey>& InKeys); // Function UMG.InputKeySelector.SetEscapeKeys(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCB00>
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC020>
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBF90>
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB860>
};

// Class UMG.InvalidationBox
class UInvalidationBox : public UContentWidget {

public:

	bool bCanCache; // 0x120 (1)
	bool CacheRelativeTransforms; // 0x121 (1)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC9F0>
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xFBCF20>
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB6E0>
};

// Class UMG.ListViewBase
class UListViewBase : public UWidget {

public:

	struct UClass* EntryWidgetClass; // 0x108 (8)
	float WheelScrollMultiplier; // 0x110 (4)
	bool bEnableScrollAnimation; // 0x114 (1)
	bool bEnableFixedLineOffset; // 0x115 (1)
	float FixedLineScrollOffset; // 0x118 (4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120 (16)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x130 (16)
	struct FUserWidgetPool EntryWidgetPool; // 0x140 (128)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD440>
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCFC0>
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD040>
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBF70>
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBF50>
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBEB0>
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBE10>
	struct TArray<struct UUserWidget> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB710>
};

// Class UMG.ListView
class UListView : public UListViewBase {

public:

	enum class EOrientation Orientation; // 0x2D8 (1)
	enum class ESelectionMode SelectionMode; // 0x2D9 (1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2DA (1)
	bool bClearSelectionOnClick; // 0x2DB (1)
	bool bIsFocusable; // 0x2DC (1)
	float EntrySpacing; // 0x2E0 (4)
	bool bReturnFocusToSelection; // 0x2E4 (1)
	struct TArray<struct Object> ListItems; // 0x2E8 (16)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308 (16)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x318 (16)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328 (16)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338 (16)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348 (16)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358 (16)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD230>
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD0C0>
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBED0>
	void RemoveItem(struct Object Item); // Function UMG.ListView.RemoveItem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBE30>
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBD00>
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FBCD0>
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FBA30>
	struct TArray<struct Object> GetListItems(); // Function UMG.ListView.GetListItems(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB9C0>
	struct Object GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB890>
	int32_t GetIndexForItem(struct Object Item); // Function UMG.ListView.GetIndexForItem(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB7D0>
	void ClearListItems(); // Function UMG.ListView.ClearListItems(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB610>
	void BP_SetSelectedItem(struct Object Item); // Function UMG.ListView.BP_SetSelectedItem(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB590>
	void BP_SetListItems(struct TArray<struct Object>& InListItems); // Function UMG.ListView.BP_SetListItems(Final|Native|Private|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB4E0>
	void BP_SetItemSelection(struct Object Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB410>
	void BP_ScrollItemIntoView(struct Object Item); // Function UMG.ListView.BP_ScrollItemIntoView(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB390>
	void BP_NavigateToItem(struct Object Item); // Function UMG.ListView.BP_NavigateToItem(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB310>
	bool BP_IsItemVisible(struct Object Item); // Function UMG.ListView.BP_IsItemVisible(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB280>
	bool BP_GetSelectedItems(struct TArray<struct Object>& Items); // Function UMG.ListView.BP_GetSelectedItems(Final|Native|Private|HasOutParms|BlueprintCallable|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB1C0>
	struct Object BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB190>
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected(Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB160>
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB140>
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView(Final|Native|Private|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB120>
	void AddItem(struct Object Item); // Function UMG.ListView.AddItem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB0A0>
};

// Class UMG.MenuAnchor
class UMenuAnchor : public UContentWidget {

public:

	struct UClass* MenuClass; // 0x120 (8)
	struct FDelegate OnGetMenuContentEvent; // 0x128 (16)
	enum class EMenuPlacement Placement; // 0x138 (1)
	bool bFitInWindow; // 0x139 (1)
	bool ShouldDeferPaintingAfterWindowContent; // 0x13A (1)
	bool UseApplicationMenuStack; // 0x13B (1)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x140 (16)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FD4F0>
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FD4C0>
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FCF40>
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FBD80>
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FBCA0>
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FBB30>
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x29FB9F0>
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB650>
	void Close(); // Function UMG.MenuAnchor.Close(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FB630>
};

// Class UMG.MovieScene2DTransformSection
class UMovieScene2DTransformSection : public UMovieSceneSection {

public:

	struct FMovieScene2DTransformMask TransformMask; // 0xE0 (4)
	struct FMovieSceneFloatChannel Translation[0x2]; // 0xE8 (320)
	struct FMovieSceneFloatChannel Rotation; // 0x228 (160)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x2C8 (320)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x408 (320)
};

// Class UMG.MovieSceneMarginSection
class UMovieSceneMarginSection : public UMovieSceneSection {

public:

	struct FMovieSceneFloatChannel TopCurve; // 0xE0 (160)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180 (160)
	struct FMovieSceneFloatChannel RightCurve; // 0x220 (160)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2C0 (160)
};

// Class UMG.MovieSceneWidgetMaterialTrack
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack {

public:

	struct TArray<struct FName> BrushPropertyNamePath; // 0x68 (16)
	struct FName TrackName; // 0x78 (8)
};

// Class UMG.MultiLineEditableText
class UMultiLineEditableText : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FText HintText; // 0x140 (24)
	struct FDelegate HintTextDelegate; // 0x158 (16)
	struct FTextBlockStyle WidgetStyle; // 0x168 (616)
	bool bIsReadOnly; // 0x3D0 (1)
	struct FSlateFontInfo Font; // 0x3D8 (80)
	bool SelectAllTextWhenFocused; // 0x428 (1)
	bool ClearTextSelectionOnFocusLoss; // 0x429 (1)
	bool RevertTextOnEscape; // 0x42A (1)
	bool ClearKeyboardFocusOnCommit; // 0x42B (1)
	bool AllowContextMenu; // 0x42C (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42D (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42E (1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x430 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x440 (16)

	void SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A02480>
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01FC0>
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01C50>
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01980>
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00DB0>
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00C70>
};

// Class UMG.MultiLineEditableTextBox
class UMultiLineEditableTextBox : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct FText HintText; // 0x140 (24)
	struct FDelegate HintTextDelegate; // 0x158 (16)
	struct FEditableTextBoxStyle WidgetStyle; // 0x168 (2032)
	struct FTextBlockStyle TextStyle; // 0x958 (616)
	bool bIsReadOnly; // 0xBC0 (1)
	bool AllowContextMenu; // 0xBC1 (1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xBC2 (1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xBC3 (1)
	struct USlateWidgetStyleAsset Style; // 0xBC8 (8)
	struct FSlateFontInfo Font; // 0xBD0 (80)
	struct FLinearColor ForegroundColor; // 0xC20 (16)
	struct FLinearColor BackgroundColor; // 0xC30 (16)
	struct FLinearColor ReadOnlyForegroundColor; // 0xC40 (16)
	struct FMulticastInlineDelegate OnTextChanged; // 0xC50 (16)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xC60 (16)

	void SetTextStyle(struct FTextBlockStyle& InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A02250>
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A020A0>
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01CE0>
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01A60>
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01820>
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00E50>
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00D10>
};

// Class UMG.OverlaySlot
class UOverlaySlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x40 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A02400>
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01DF0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01B40>
};

// Class UMG.ProgressBar
class UProgressBar : public UWidget {

public:

	struct FProgressBarStyle WidgetStyle; // 0x108 (416)
	struct USlateWidgetStyleAsset Style; // 0x2A8 (8)
	struct USlateBrushAsset BackgroundImage; // 0x2B0 (8)
	struct USlateBrushAsset FillImage; // 0x2B8 (8)
	struct USlateBrushAsset MarqueeImage; // 0x2C0 (8)
	float Percent; // 0x2C8 (4)
	enum class EProgressBarFillType BarFillType; // 0x2CC (1)
	bool bIsMarquee; // 0x2CD (1)
	struct FVector2D BorderPadding; // 0x2D0 (8)
	struct FDelegate PercentDelegate; // 0x2D8 (16)
	struct FLinearColor FillColorAndOpacity; // 0x2E8 (16)
	struct FDelegate FillColorAndOpacityDelegate; // 0x2F8 (16)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01E80>
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01BC0>
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01900>
};

// Class UMG.RetainerBox
class URetainerBox : public UContentWidget {

public:

	bool RenderOnInvalidation; // 0x120 (1)
	bool RenderOnPhase; // 0x121 (1)
	int32_t Phase; // 0x124 (4)
	int32_t PhaseCount; // 0x128 (4)
	struct UMaterialInterface EffectMaterial; // 0x130 (8)
	struct FName TextureParameter; // 0x138 (8)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A02380>
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01F00>
	void SetEffectMaterial(struct UMaterialInterface EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A017A0>
	void RequestRender(); // Function UMG.RetainerBox.RequestRender(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A011A0>
	struct UMaterialInstanceDynamic GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00C40>
};

// Class UMG.RichTextBlock
class URichTextBlock : public UTextLayoutWidget {

public:

	struct FText Text; // 0x128 (24)
	struct UDataTable TextStyleSet; // 0x140 (8)
	struct TArray<struct UClass*> DecoratorClasses; // 0x148 (16)
	bool bOverrideDefaultStyle; // 0x158 (1)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x160 (616)
	float MinDesiredWidth; // 0x3C8 (4)
	struct TArray<struct URichTextBlockDecorator> InstanceDecorators; // 0x638 (16)

	void SetTextStyleSet(struct UDataTable NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A02300>
	void SetText(struct FText& InText); // Function UMG.RichTextBlock.SetText(Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A02180>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01D70>
	void SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A016F0>
	void SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01570>
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A014F0>
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01470>
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01340>
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01250>
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A011C0>
	struct FText GetText(); // Function UMG.RichTextBlock.GetText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A00EF0>
	struct URichTextBlockDecorator GetDecoratorByClass(struct UClass* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A00BB0>
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides(Final|Native|Public) // <VeiledExperts-Win64-Shipping.exe+0x2A009A0>
};

// Class UMG.RichTextBlockImageDecorator
class URichTextBlockImageDecorator : public URichTextBlockDecorator {

public:

	struct UDataTable ImageSet; // 0x28 (8)
};

// Class UMG.SafeZone
class USafeZone : public UContentWidget {

public:

	bool PadLeft; // 0x120 (1)
	bool PadRight; // 0x121 (1)
	bool PadTop; // 0x122 (1)
	bool PadBottom; // 0x123 (1)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06410>
};

// Class UMG.SafeZoneSlot
class USafeZoneSlot : public UPanelSlot {

public:

	bool bIsTitleSafe; // 0x38 (1)
	struct FMargin SafeAreaScale; // 0x3C (16)
	enum class EHorizontalAlignment HAlign; // 0x4C (1)
	enum class EVerticalAlignment VAlign; // 0x4D (1)
	struct FMargin Padding; // 0x50 (16)
};

// Class UMG.ScaleBox
class UScaleBox : public UContentWidget {

public:

	enum class EStretch Stretch; // 0x120 (1)
	enum class EStretchDirection StretchDirection; // 0x121 (1)
	float UserSpecifiedScale; // 0x124 (4)
	bool IgnoreInheritedScale; // 0x128 (1)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06740>
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A066C0>
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06640>
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05C20>
};

// Class UMG.ScaleBoxSlot
class UScaleBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F4AA0>
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06030>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29F3CB0>
};

// Class UMG.ScrollBar
class UScrollBar : public UWidget {

public:

	struct FScrollBarStyle WidgetStyle; // 0x108 (1232)
	struct USlateWidgetStyleAsset Style; // 0x5D8 (8)
	bool bAlwaysShowScrollbar; // 0x5E0 (1)
	bool bAlwaysShowScrollbarTrack; // 0x5E1 (1)
	enum class EOrientation Orientation; // 0x5E2 (1)
	struct FVector2D Thickness; // 0x5E4 (8)
	struct FMargin Padding; // 0x5EC (16)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06580>
};

// Class UMG.ScrollBox
class UScrollBox : public UPanelWidget {

public:

	struct FScrollBoxStyle WidgetStyle; // 0x120 (552)
	struct FScrollBarStyle WidgetBarStyle; // 0x348 (1232)
	struct USlateWidgetStyleAsset Style; // 0x818 (8)
	struct USlateWidgetStyleAsset BarStyle; // 0x820 (8)
	enum class EOrientation Orientation; // 0x828 (1)
	enum class ESlateVisibility ScrollBarVisibility; // 0x829 (1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x82A (1)
	struct FVector2D ScrollbarThickness; // 0x82C (8)
	struct FMargin ScrollbarPadding; // 0x834 (16)
	bool AlwaysShowScrollbar; // 0x844 (1)
	bool AlwaysShowScrollbarTrack; // 0x845 (1)
	bool AllowOverscroll; // 0x846 (1)
	bool bAnimateWheelScrolling; // 0x847 (1)
	enum class EDescendantScrollDestination NavigationDestination; // 0x848 (1)
	float NavigationScrollPadding; // 0x84C (4)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850 (1)
	bool bAllowRightClickDragScrolling; // 0x851 (1)
	float WheelScrollMultiplier; // 0x854 (4)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x858 (16)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A068C0>
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06260>
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A061E0>
	void SetScrollbarThickness(struct FVector2D& NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06380>
	void SetScrollbarPadding(struct FMargin& NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A062E0>
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05FB0>
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05A20>
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05990>
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05900>
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05870>
	void ScrollWidgetIntoView(struct UWidget WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05720>
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05700>
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A056E0>
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A04EB0>
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A04E80>
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A04E50>
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A04940>
};

// Class UMG.ScrollBoxSlot
class UScrollBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A067C0>
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A060C0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05B20>
};

// Class UMG.SizeBox
class USizeBox : public UContentWidget {

public:

	float WidthOverride; // 0x130 (4)
	float HeightOverride; // 0x134 (4)
	float MinDesiredWidth; // 0x138 (4)
	float MinDesiredHeight; // 0x13C (4)
	float MaxDesiredWidth; // 0x140 (4)
	float MaxDesiredHeight; // 0x144 (4)
	float MinAspectRatio; // 0x148 (4)
	float MaxAspectRatio; // 0x14C (4)
	char bOverride_WidthOverride : 1; // 0x150 (1)
	char pad_140_1 : 7; // 0x140 (1)
	char pad_141_0 : 1; // 0x141 (1)
	char bOverride_HeightOverride : 1; // 0x150 (1)
	char pad_141_2 : 6; // 0x141 (1)
	char pad_142_0 : 2; // 0x142 (1)
	char bOverride_MinDesiredWidth : 1; // 0x150 (1)
	char pad_142_3 : 5; // 0x142 (1)
	char pad_143_0 : 3; // 0x143 (1)
	char bOverride_MinDesiredHeight : 1; // 0x150 (1)
	char pad_143_4 : 4; // 0x143 (1)
	char pad_144_0 : 4; // 0x144 (1)
	char bOverride_MaxDesiredWidth : 1; // 0x150 (1)
	char pad_144_5 : 3; // 0x144 (1)
	char pad_145_0 : 5; // 0x145 (1)
	char bOverride_MaxDesiredHeight : 1; // 0x150 (1)
	char pad_145_6 : 2; // 0x145 (1)
	char pad_146_0 : 6; // 0x146 (1)
	char bOverride_MinAspectRatio : 1; // 0x150 (1)
	char pad_146_7 : 1; // 0x146 (1)
	char pad_147_0 : 7; // 0x147 (1)
	char bOverride_MaxAspectRatio : 1; // 0x150 (1)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06940>
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05F30>
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05EB0>
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05E30>
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05DB0>
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05D30>
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05CB0>
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05AA0>
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A04920>
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A04900>
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A048E0>
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A048C0>
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A048A0>
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A04880>
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A04860>
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A04840>
};

// Class UMG.SizeBoxSlot
class USizeBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06840>
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A06150>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A05BA0>
};

// Class UMG.SlateVectorArtData
class USlateVectorArtData : public Object {

public:

	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28 (16)
	struct TArray<uint32_t> IndexData; // 0x38 (16)
	struct UMaterialInterface Material; // 0x48 (8)
	struct FVector2D ExtentMin; // 0x50 (8)
	struct FVector2D ExtentMax; // 0x58 (8)
};

// Class UMG.SlateAccessibleWidgetData
class USlateAccessibleWidgetData : public Object {

public:

	bool bCanChildrenBeAccessible; // 0x28 (1)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29 (1)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A (1)
	struct FText AccessibleText; // 0x30 (24)
	struct FDelegate AccessibleTextDelegate; // 0x48 (16)
	struct FText AccessibleSummaryText; // 0x58 (24)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70 (16)
};

// Class UMG.Spacer
class USpacer : public UWidget {

public:

	struct FVector2D Size; // 0x108 (8)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A4C0>
};

// Class UMG.SpinBox
class USpinBox : public UWidget {

public:

	float Value; // 0x108 (4)
	struct FDelegate ValueDelegate; // 0x10C (16)
	struct FSpinBoxStyle WidgetStyle; // 0x120 (744)
	struct USlateWidgetStyleAsset Style; // 0x408 (8)
	int32_t MinFractionalDigits; // 0x410 (4)
	int32_t MaxFractionalDigits; // 0x414 (4)
	bool bAlwaysUsesDeltaSnap; // 0x418 (1)
	float Delta; // 0x41C (4)
	float SliderExponent; // 0x420 (4)
	struct FSlateFontInfo Font; // 0x428 (80)
	enum class ETextJustify Justification; // 0x478 (1)
	float MinDesiredWidth; // 0x47C (4)
	bool ClearKeyboardFocusOnCommit; // 0x480 (1)
	bool SelectAllTextOnCommit; // 0x481 (1)
	struct FSlateColor ForegroundColor; // 0x488 (40)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4B0 (16)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x4C0 (16)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x4D0 (16)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x4E0 (16)
	char bOverride_MinValue : 1; // 0x4F0 (1)
	char pad_4DC_1 : 7; // 0x4DC (1)
	char pad_4DD_0 : 1; // 0x4DD (1)
	char bOverride_MaxValue : 1; // 0x4F0 (1)
	char pad_4DD_2 : 6; // 0x4DD (1)
	char pad_4DE_0 : 2; // 0x4DE (1)
	char bOverride_MinSliderValue : 1; // 0x4F0 (1)
	char pad_4DE_3 : 5; // 0x4DE (1)
	char pad_4DF_0 : 3; // 0x4DF (1)
	char bOverride_MaxSliderValue : 1; // 0x4F0 (1)
	char pad_4DF_4 : 4; // 0x4DF (1)
	float MinValue; // 0x4F4 (4)
	float MaxValue; // 0x4F8 (4)
	float MinSliderValue; // 0x4FC (4)
	float MaxSliderValue; // 0x500 (4)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A9A0>
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A240>
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A140>
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A0C0>
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09FC0>
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09EC0>
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09E40>
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09AE0>
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09830>
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09470>
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	float GetValue(); // Function UMG.SpinBox.GetValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09440>
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A091F0>
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A091C0>
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09190>
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09160>
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09130>
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09100>
	float GetDelta(); // Function UMG.SpinBox.GetDelta(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09070>
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A09040>
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A08FE0>
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A08FC0>
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A08FA0>
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A08F80>
};

// Class UMG.Throbber
class UThrobber : public UWidget {

public:

	int32_t NumberOfPieces; // 0x108 (4)
	bool bAnimateHorizontally; // 0x10C (1)
	bool bAnimateVertically; // 0x10D (1)
	bool bAnimateOpacity; // 0x10E (1)
	struct USlateBrushAsset PieceImage; // 0x110 (8)
	struct FSlateBrush Image; // 0x118 (136)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0A2C0>
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09620>
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09590>
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09500>
};

// Class UMG.TileView
class UTileView : public UListView {

public:

	float EntryHeight; // 0x368 (4)
	float EntryWidth; // 0x36C (4)
	enum class EListItemAlignment TileAlignment; // 0x370 (1)
	bool bWrapHorizontalNavigation; // 0x371 (1)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09930>
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A098B0>
};

// Class UMG.TreeView
class UTreeView : public UListView {

public:

	struct FDelegate BP_OnGetItemChildren; // 0x378 (16)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388 (16)

	void SetItemExpansion(struct Object Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09C60>
	void ExpandAll(); // Function UMG.TreeView.ExpandAll(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09020>
	void CollapseAll(); // Function UMG.TreeView.CollapseAll(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A09000>
};

// Class UMG.UMGSequencePlayer
class UUMGSequencePlayer : public Object {

public:

	struct UWidgetAnimation Animation; // 0x408 (8)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A106C0>
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A0EFC0>
};

// Class UMG.UniformGridPanel
class UUniformGridPanel : public UPanelWidget {

public:

	struct FMargin SlotPadding; // 0x120 (16)
	float MinDesiredSlotWidth; // 0x130 (4)
	float MinDesiredSlotHeight; // 0x134 (4)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10630>
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A101D0>
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10150>
	struct UUniformGridSlot AddChildToUniformGrid(struct UWidget Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0E8E0>
};

// Class UMG.UniformGridSlot
class UUniformGridSlot : public UPanelSlot {

public:

	enum class EHorizontalAlignment HorizontalAlignment; // 0x38 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x39 (1)
	int32_t Row; // 0x3C (4)
	int32_t Column; // 0x40 (4)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A10740>
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A105B0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FFC0>
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A0FDD0>
};

// Class UMG.VerticalBoxSlot
class UVerticalBoxSlot : public UPanelSlot {

public:

	struct FSlateChildSize Size; // 0x38 (8)
	struct FMargin Padding; // 0x40 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x59 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A140F0>
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13E90>
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A13A20>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A134A0>
};

// Class UMG.Viewport
class UViewport : public UContentWidget {

public:

	struct FLinearColor BackgroundColor; // 0x120 (16)

	struct UActor Spawn(struct UClass* ActorClass); // Function UMG.Viewport.Spawn(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14310>
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14200>
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14170>
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12EF0>
	struct UWorld GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12F30>
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12EB0>
};

// Class UMG.WidgetAnimation
class UWidgetAnimation : public UMovieSceneSequence {

public:

	struct UMovieScene MovieScene; // 0x348 (8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350 (16)
	bool bLegacyFinishOnStop; // 0x360 (1)
	struct FString DisplayLabel; // 0x368 (16)

	void UnbindFromAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14580>
	void UnbindFromAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A144A0>
	void UnbindAllFromAnimationStarted(struct UUserWidget Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A14420>
	void UnbindAllFromAnimationFinished(struct UUserWidget Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A143A0>
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12E10>
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime(Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A12C50>
	void BindToAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A12A10>
	void BindToAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A12930>
};

// Class UMG.WidgetAnimationDelegateBinding
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding {

public:

	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28 (16)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
class UWidgetAnimationPlayCallbackProxy : public Object {

public:

	struct FMulticastInlineDelegate Finished; // 0x28 (16)

	struct UWidgetAnimationPlayCallbackProxy CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A16570>
	struct UWidgetAnimationPlayCallbackProxy CreatePlayAnimationProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject(Final|Native|Static|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A16370>
};

// Class UMG.WidgetBlueprintGeneratedClass
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass {

public:

	struct UWidgetTree WidgetTree; // 0x328 (8)
	char bAllowTemplate : 1; // 0x330 (1)
	char bAllowDynamicCreation : 1; // 0x330 (1)
	char bValidTemplate : 1; // 0x330 (1)
	char bTemplateInitialized : 1; // 0x330 (1)
	char bCookedTemplate : 1; // 0x330 (1)
	char bClassRequiresNativeTick : 1; // 0x330 (1)
	char pad_330_6 : 2; // 0x330 (1)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x338 (16)
	struct TArray<struct UWidgetAnimation> Animations; // 0x348 (16)
	struct TArray<struct FName> NamedSlots; // 0x358 (16)
	struct TSoftObjectPtr<UUserWidget> TemplateAsset; // 0x368 (40)
	struct UUserWidget Template; // 0x390 (8)
};

// Class UMG.WidgetComponent
class UWidgetComponent : public UMeshComponent {

public:

	enum class EWidgetSpace Space; // 0x430 (1)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x431 (1)
	struct UClass* WidgetClass; // 0x438 (8)
	struct FIntPoint DrawSize; // 0x440 (8)
	bool bManuallyRedraw; // 0x448 (1)
	bool bRedrawRequested; // 0x449 (1)
	float RedrawTime; // 0x44C (4)
	struct FIntPoint CurrentDrawSize; // 0x458 (8)
	bool bDrawAtDesiredSize; // 0x460 (1)
	struct FVector2D Pivot; // 0x464 (8)
	bool bReceiveHardwareInput; // 0x46C (1)
	bool bWindowFocusable; // 0x46D (1)
	enum class EWindowVisibility WindowVisibility; // 0x46E (1)
	bool bApplyGammaCorrection; // 0x46F (1)
	struct ULocalPlayer OwnerPlayer; // 0x470 (8)
	struct FLinearColor BackgroundColor; // 0x478 (16)
	struct FLinearColor TintColorAndOpacity; // 0x488 (16)
	float OpacityFromTexture; // 0x498 (4)
	enum class EWidgetBlendMode BlendMode; // 0x49C (1)
	bool bIsTwoSided; // 0x49D (1)
	bool TickWhenOffscreen; // 0x49E (1)
	struct UUserWidget Widget; // 0x4A0 (8)
	struct UBodySetup BodySetup; // 0x4C8 (8)
	struct UMaterialInterface TranslucentMaterial; // 0x4D0 (8)
	struct UMaterialInterface TranslucentMaterial_OneSided; // 0x4D8 (8)
	struct UMaterialInterface OpaqueMaterial; // 0x4E0 (8)
	struct UMaterialInterface OpaqueMaterial_OneSided; // 0x4E8 (8)
	struct UMaterialInterface MaskedMaterial; // 0x4F0 (8)
	struct UMaterialInterface MaskedMaterial_OneSided; // 0x4F8 (8)
	struct UTextureRenderTarget2D RenderTarget; // 0x500 (8)
	struct UMaterialInstanceDynamic MaterialInstance; // 0x508 (8)
	bool bAddedToScreen; // 0x510 (1)
	bool bEditTimeUsable; // 0x511 (1)
	struct FName SharedLayerName; // 0x514 (8)
	int32_t LayerZOrder; // 0x51C (4)
	enum class EWidgetGeometryMode GeometryMode; // 0x520 (1)
	float CylinderArcAngle; // 0x524 (4)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1D320>
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1D290>
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1D210>
	void SetWidget(struct UUserWidget Widget); // Function UMG.WidgetComponent.SetWidget(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1D180>
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1D0F0>
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1D070>
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CFF0>
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CF70>
	void SetPivot(struct FVector2D& InPivot); // Function UMG.WidgetComponent.SetPivot(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CEE0>
	void SetOwnerPlayer(struct ULocalPlayer LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CE60>
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CDD0>
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CD50>
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CC50>
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CBD0>
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CB50>
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CA10>
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C830>
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1C0B0>
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1C090>
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1C070>
	struct UUserWidget GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BE70>
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BE50>
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BE30>
	struct UTextureRenderTarget2D GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BE00>
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BDE0>
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BD00>
	struct ULocalPlayer GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BCD0>
	struct UMaterialInstanceDynamic GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BAB0>
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25FB4A0>
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1B9E0>
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1B9A0>
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1B980>
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1B960>
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1B920>
};

// Class UMG.WidgetInteractionComponent
class UWidgetInteractionComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1F0 (16)
	int32_t VirtualUserIndex; // 0x210 (4)
	float PointerIndex; // 0x214 (4)
	enum class ECollisionChannel TraceChannel; // 0x218 (1)
	float InteractionDistance; // 0x21C (4)
	enum class EWidgetInteractionSource InteractionSource; // 0x220 (1)
	bool bEnableHitTesting; // 0x221 (1)
	bool bShowDebug; // 0x222 (1)
	struct FLinearColor DebugColor; // 0x224 (16)
	struct FHitResult CustomHitResult; // 0x2B0 (136)
	struct FVector2D LocalHitLocation; // 0x338 (8)
	struct FVector2D LastLocalHitLocation; // 0x340 (8)
	struct UWidgetComponent HoveredWidgetComponent; // 0x348 (8)
	struct FHitResult LastHitResult; // 0x350 (136)
	bool bIsHoveredWidgetInteractable; // 0x3D8 (1)
	bool bIsHoveredWidgetFocusable; // 0x3D9 (1)
	bool bIsHoveredWidgetHitTestVisible; // 0x3DA (1)

	void SetFocus(struct UWidget FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CCD0>
	void SetCustomHitResult(struct FHitResult& HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1CA90>
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C8D0>
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C850>
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C6E0>
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C5E0>
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C3A0>
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C260>
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1C160>
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1C130>
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1C100>
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1C0D0>
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BA30>
	struct UWidgetComponent GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1BA00>
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1B8E0>
};

// Class UMG.WidgetNavigation
class UWidgetNavigation : public Object {

public:

	struct FWidgetNavigationData Up; // 0x28 (36)
	struct FWidgetNavigationData Down; // 0x4C (36)
	struct FWidgetNavigationData Left; // 0x70 (36)
	struct FWidgetNavigationData Right; // 0x94 (36)
	struct FWidgetNavigationData Next; // 0xB8 (36)
	struct FWidgetNavigationData Previous; // 0xDC (36)
};

// Class UMG.WidgetSwitcher
class UWidgetSwitcher : public UPanelWidget {

public:

	int32_t ActiveWidgetIndex; // 0x120 (4)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1ECC0>
	void SetActiveWidget(struct UWidget Widget); // Function UMG.WidgetSwitcher.SetActiveWidget(Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x29FC3B0>
	struct UWidget GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1EC30>
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1EC00>
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1EBD0>
	struct UWidget GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x2A1EBA0>
};

// Class UMG.WidgetSwitcherSlot
class UWidgetSwitcherSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x40 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F290>
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A01DF0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1EE60>
};

// Class UMG.WidgetTree
class UWidgetTree : public Object {

public:

	struct UWidget RootWidget; // 0x28 (8)
};

// Class UMG.WindowTitleBarArea
class UWindowTitleBarArea : public UContentWidget {

public:

	bool bWindowButtonsEnabled; // 0x120 (1)
	bool bDoubleClickTogglesFullscreen; // 0x121 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F310>
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F0E0>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1EEE0>
};

// Class UMG.WindowTitleBarAreaSlot
class UWindowTitleBarAreaSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F390>
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F170>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1EF60>
};

// Class UMG.WrapBox
class UWrapBox : public UPanelWidget {

public:

	struct FVector2D InnerSlotPadding; // 0x120 (8)
	float WrapWidth; // 0x128 (4)
	bool bExplicitWrapWidth; // 0x12C (1)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F060>
	struct UWrapBoxSlot AddChildToWrapBox(struct UWidget Content); // Function UMG.WrapBox.AddChildToWrapBox(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1EB10>
};

// Class UMG.WrapBoxSlot
class UWrapBoxSlot : public UPanelSlot {

public:

	struct FMargin Padding; // 0x38 (16)
	bool bFillEmptySpace; // 0x48 (1)
	float FillSpanWhenLessThan; // 0x4C (4)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50 (1)
	enum class EVerticalAlignment VerticalAlignment; // 0x51 (1)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F410>
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1F200>
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1EFE0>
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1EDE0>
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x2A1ED50>
};

// ScriptStruct UMG.WidgetTransform
struct FWidgetTransform {
	struct FVector2D Translation; // 0x0 (8)
	struct FVector2D Scale; // 0x8 (8)
	struct FVector2D Shear; // 0x10 (8)
	float Angle; // 0x18 (4)
};

// ScriptStruct UMG.ShapedTextOptions
struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0 (1)
	char bOverride_TextFlowDirection : 1; // 0x0 (1)
	char pad_0_2 : 6; // 0x0 (1)
	enum class ETextShapingMethod TextShapingMethod; // 0x1 (1)
	enum class ETextFlowDirection TextFlowDirection; // 0x2 (1)
};

// ScriptStruct UMG.AnchorData
struct FAnchorData {
	struct FMargin Offsets; // 0x0 (16)
	struct FAnchors Anchors; // 0x10 (16)
	struct FVector2D Alignment; // 0x20 (8)
};

// ScriptStruct UMG.MovieScene2DTransformMask
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0 (4)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Translation[0x2]; // 0x48 (320)
	struct FMovieSceneFloatChannel Rotation; // 0x188 (160)
	struct FMovieSceneFloatChannel Scale[0x2]; // 0x228 (320)
	struct FMovieSceneFloatChannel Shear[0x2]; // 0x368 (320)
	enum class EMovieSceneBlendType BlendType; // 0x4A8 (1)
	struct FMovieScene2DTransformMask Mask; // 0x4AC (4)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel TopCurve; // 0x48 (160)
	struct FMovieSceneFloatChannel LeftCurve; // 0xE8 (160)
	struct FMovieSceneFloatChannel RightCurve; // 0x188 (160)
	struct FMovieSceneFloatChannel BottomCurve; // 0x228 (160)
	enum class EMovieSceneBlendType BlendType; // 0x2C8 (1)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x80 (16)
};

// ScriptStruct UMG.RichTextStyleRow
struct FRichTextStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x8 (616)
};

// ScriptStruct UMG.RichImageRow
struct FRichImageRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x8 (136)
};

// ScriptStruct UMG.SlateMeshVertex
struct FSlateMeshVertex {
	struct FVector2D Position; // 0x0 (8)
	struct FColor Color; // 0x8 (4)
	struct FVector2D UV0; // 0xC (8)
	struct FVector2D UV1; // 0x14 (8)
	struct FVector2D UV2; // 0x1C (8)
	struct FVector2D UV3; // 0x24 (8)
	struct FVector2D UV4; // 0x2C (8)
	struct FVector2D UV5; // 0x34 (8)
};

// ScriptStruct UMG.SlateChildSize
struct FSlateChildSize {
	float Value; // 0x0 (4)
	enum class ESlateSizeRule SizeRule; // 0x4 (1)
};

// ScriptStruct UMG.NamedSlotBinding
struct FNamedSlotBinding {
	struct FName Name; // 0x0 (8)
	struct UWidget Content; // 0x8 (8)
};

// ScriptStruct UMG.AnimationEventBinding
struct FAnimationEventBinding {
	struct UWidgetAnimation Animation; // 0x0 (8)
	struct FDelegate Delegate; // 0x8 (16)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18 (1)
	struct FName UserTag; // 0x1C (8)
};

// ScriptStruct UMG.UserWidgetPool
struct FUserWidgetPool {
	struct TArray<struct UUserWidget> ActiveWidgets; // 0x0 (16)
	struct TArray<struct UUserWidget> InactiveWidgets; // 0x10 (16)
};

// ScriptStruct UMG.WidgetAnimationBinding
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x0 (8)
	struct FName SlotWidgetName; // 0x8 (8)
	struct FGuid AnimationGuid; // 0x10 (16)
	bool bIsRootWidget; // 0x20 (1)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x0 (1)
	struct FName AnimationToBind; // 0x4 (8)
	struct FName FunctionNameToBind; // 0xC (8)
	struct FName UserTag; // 0x14 (8)
};

// ScriptStruct UMG.DelegateRuntimeBinding
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x0 (16)
	struct FName PropertyName; // 0x10 (8)
	struct FName FunctionName; // 0x18 (8)
	struct FDynamicPropertyPath SourcePath; // 0x20 (40)
	enum class EBindingKind Kind; // 0x48 (1)
};

// ScriptStruct UMG.WidgetNavigationData
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x0 (1)
	struct FName WidgetToFocus; // 0x4 (8)
	struct TWeakObjectPtr<struct UWidget> Widget; // 0xC (8)
	struct FDelegate CustomDelegate; // 0x14 (16)
};

// Function UMG.Widget.SetVisibility
inline void UWidget::SetVisibility(enum class ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetVisibility");

	struct SetVisibility_Params {
		enum class ESlateVisibility InVisibility;
	}; SetVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetUserFocus
inline void UWidget::SetUserFocus(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetUserFocus");

	struct SetUserFocus_Params {
		struct APlayerController PlayerController;
	}; SetUserFocus_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetToolTipText
inline void UWidget::SetToolTipText(struct FText& InToolTipText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTipText");

	struct SetToolTipText_Params {
		struct FText& InToolTipText;
	}; SetToolTipText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InToolTipText = Params.InToolTipText;

}

// Function UMG.Widget.SetToolTip
inline void UWidget::SetToolTip(struct UWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetToolTip");

	struct SetToolTip_Params {
		struct UWidget Widget;
	}; SetToolTip_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTranslation
inline void UWidget::SetRenderTranslation(struct FVector2D Translation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTranslation");

	struct SetRenderTranslation_Params {
		struct FVector2D Translation;
	}; SetRenderTranslation_Params Params;

	Params.Translation = Translation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTransformPivot
inline void UWidget::SetRenderTransformPivot(struct FVector2D Pivot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformPivot");

	struct SetRenderTransformPivot_Params {
		struct FVector2D Pivot;
	}; SetRenderTransformPivot_Params Params;

	Params.Pivot = Pivot;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTransformAngle
inline void UWidget::SetRenderTransformAngle(float Angle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransformAngle");

	struct SetRenderTransformAngle_Params {
		float Angle;
	}; SetRenderTransformAngle_Params Params;

	Params.Angle = Angle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderTransform
inline void UWidget::SetRenderTransform(struct FWidgetTransform InTransform) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderTransform");

	struct SetRenderTransform_Params {
		struct FWidgetTransform InTransform;
	}; SetRenderTransform_Params Params;

	Params.InTransform = InTransform;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderShear
inline void UWidget::SetRenderShear(struct FVector2D Shear) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderShear");

	struct SetRenderShear_Params {
		struct FVector2D Shear;
	}; SetRenderShear_Params Params;

	Params.Shear = Shear;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderScale
inline void UWidget::SetRenderScale(struct FVector2D Scale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderScale");

	struct SetRenderScale_Params {
		struct FVector2D Scale;
	}; SetRenderScale_Params Params;

	Params.Scale = Scale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetRenderOpacity
inline void UWidget::SetRenderOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetRenderOpacity");

	struct SetRenderOpacity_Params {
		float InOpacity;
	}; SetRenderOpacity_Params Params;

	Params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleExplicit
inline void UWidget::SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget InWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleExplicit");

	struct SetNavigationRuleExplicit_Params {
		enum class EUINavigation Direction;
		struct UWidget InWidget;
	}; SetNavigationRuleExplicit_Params Params;

	Params.Direction = Direction;
	Params.InWidget = InWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleCustomBoundary
inline void UWidget::SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustomBoundary");

	struct SetNavigationRuleCustomBoundary_Params {
		enum class EUINavigation Direction;
		struct FDelegate InCustomDelegate;
	}; SetNavigationRuleCustomBoundary_Params Params;

	Params.Direction = Direction;
	Params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleCustom
inline void UWidget::SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleCustom");

	struct SetNavigationRuleCustom_Params {
		enum class EUINavigation Direction;
		struct FDelegate InCustomDelegate;
	}; SetNavigationRuleCustom_Params Params;

	Params.Direction = Direction;
	Params.InCustomDelegate = InCustomDelegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRuleBase
inline void UWidget::SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRuleBase");

	struct SetNavigationRuleBase_Params {
		enum class EUINavigation Direction;
		enum class EUINavigationRule Rule;
	}; SetNavigationRuleBase_Params Params;

	Params.Direction = Direction;
	Params.Rule = Rule;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetNavigationRule
inline void UWidget::SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetNavigationRule");

	struct SetNavigationRule_Params {
		enum class EUINavigation Direction;
		enum class EUINavigationRule Rule;
		struct FName WidgetToFocus;
	}; SetNavigationRule_Params Params;

	Params.Direction = Direction;
	Params.Rule = Rule;
	Params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetKeyboardFocus
inline void UWidget::SetKeyboardFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetKeyboardFocus");

	struct SetKeyboardFocus_Params {
		
	}; SetKeyboardFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetIsEnabled
inline void UWidget::SetIsEnabled(bool bInIsEnabled) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetIsEnabled");

	struct SetIsEnabled_Params {
		bool bInIsEnabled;
	}; SetIsEnabled_Params Params;

	Params.bInIsEnabled = bInIsEnabled;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetFocus
inline void UWidget::SetFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetFocus");

	struct SetFocus_Params {
		
	}; SetFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetCursor
inline void UWidget::SetCursor(enum class EMouseCursor InCursor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetCursor");

	struct SetCursor_Params {
		enum class EMouseCursor InCursor;
	}; SetCursor_Params Params;

	Params.InCursor = InCursor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetClipping
inline void UWidget::SetClipping(enum class EWidgetClipping InClipping) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetClipping");

	struct SetClipping_Params {
		enum class EWidgetClipping InClipping;
	}; SetClipping_Params Params;

	Params.InClipping = InClipping;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.SetAllNavigationRules
inline void UWidget::SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.SetAllNavigationRules");

	struct SetAllNavigationRules_Params {
		enum class EUINavigationRule Rule;
		struct FName WidgetToFocus;
	}; SetAllNavigationRules_Params Params;

	Params.Rule = Rule;
	Params.WidgetToFocus = WidgetToFocus;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.ResetCursor
inline void UWidget::ResetCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ResetCursor");

	struct ResetCursor_Params {
		
	}; ResetCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.RemoveFromParent
inline void UWidget::RemoveFromParent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.RemoveFromParent");

	struct RemoveFromParent_Params {
		
	}; RemoveFromParent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.Widget.OnReply__DelegateSignature
inline struct FEventReply UWidget::OnReply__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnReply__DelegateSignature");

	struct OnReply__DelegateSignature_Params {
		
		struct FEventReply ReturnValue;

	}; OnReply__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature
inline struct FEventReply UWidget::OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature");

	struct OnPointerEvent__DelegateSignature_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnPointerEvent__DelegateSignature_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.Widget.IsVisible
inline bool UWidget::IsVisible() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsVisible");

	struct IsVisible_Params {
		
		bool ReturnValue;

	}; IsVisible_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.IsHovered
inline bool UWidget::IsHovered() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.IsHovered");

	struct IsHovered_Params {
		
		bool ReturnValue;

	}; IsHovered_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.InvalidateLayoutAndVolatility
inline void UWidget::InvalidateLayoutAndVolatility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.InvalidateLayoutAndVolatility");

	struct InvalidateLayoutAndVolatility_Params {
		
	}; InvalidateLayoutAndVolatility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.HasUserFocusedDescendants
inline bool UWidget::HasUserFocusedDescendants(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocusedDescendants");

	struct HasUserFocusedDescendants_Params {
		struct APlayerController PlayerController;
		bool ReturnValue;

	}; HasUserFocusedDescendants_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasUserFocus
inline bool UWidget::HasUserFocus(struct APlayerController PlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasUserFocus");

	struct HasUserFocus_Params {
		struct APlayerController PlayerController;
		bool ReturnValue;

	}; HasUserFocus_Params Params;

	Params.PlayerController = PlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasMouseCaptureByUser
inline bool UWidget::HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCaptureByUser");

	struct HasMouseCaptureByUser_Params {
		int32_t UserIndex;
		int32_t PointerIndex;
		bool ReturnValue;

	}; HasMouseCaptureByUser_Params Params;

	Params.UserIndex = UserIndex;
	Params.PointerIndex = PointerIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasMouseCapture
inline bool UWidget::HasMouseCapture() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasMouseCapture");

	struct HasMouseCapture_Params {
		
		bool ReturnValue;

	}; HasMouseCapture_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasKeyboardFocus
inline bool UWidget::HasKeyboardFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasKeyboardFocus");

	struct HasKeyboardFocus_Params {
		
		bool ReturnValue;

	}; HasKeyboardFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasFocusedDescendants
inline bool UWidget::HasFocusedDescendants() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasFocusedDescendants");

	struct HasFocusedDescendants_Params {
		
		bool ReturnValue;

	}; HasFocusedDescendants_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.HasAnyUserFocus
inline bool UWidget::HasAnyUserFocus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.HasAnyUserFocus");

	struct HasAnyUserFocus_Params {
		
		bool ReturnValue;

	}; HasAnyUserFocus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetWidget__DelegateSignature
inline struct UWidget UWidget::GetWidget__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetWidget__DelegateSignature");

	struct GetWidget__DelegateSignature_Params {
		
		struct UWidget ReturnValue;

	}; GetWidget__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetVisibility
inline enum class ESlateVisibility UWidget::GetVisibility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetVisibility");

	struct GetVisibility_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; GetVisibility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetTickSpaceGeometry
inline struct FGeometry UWidget::GetTickSpaceGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetTickSpaceGeometry");

	struct GetTickSpaceGeometry_Params {
		
		struct FGeometry ReturnValue;

	}; GetTickSpaceGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetText__DelegateSignature
inline struct FText UWidget::GetText__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetText__DelegateSignature");

	struct GetText__DelegateSignature_Params {
		
		struct FText ReturnValue;

	}; GetText__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature
inline enum class ESlateVisibility UWidget::GetSlateVisibility__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature");

	struct GetSlateVisibility__DelegateSignature_Params {
		
		enum class ESlateVisibility ReturnValue;

	}; GetSlateVisibility__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature
inline struct FSlateColor UWidget::GetSlateColor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature");

	struct GetSlateColor__DelegateSignature_Params {
		
		struct FSlateColor ReturnValue;

	}; GetSlateColor__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature
inline struct FSlateBrush UWidget::GetSlateBrush__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature");

	struct GetSlateBrush__DelegateSignature_Params {
		
		struct FSlateBrush ReturnValue;

	}; GetSlateBrush__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetRenderTransformAngle
inline float UWidget::GetRenderTransformAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderTransformAngle");

	struct GetRenderTransformAngle_Params {
		
		float ReturnValue;

	}; GetRenderTransformAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetRenderOpacity
inline float UWidget::GetRenderOpacity() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetRenderOpacity");

	struct GetRenderOpacity_Params {
		
		float ReturnValue;

	}; GetRenderOpacity_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetParent
inline struct UPanelWidget UWidget::GetParent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetParent");

	struct GetParent_Params {
		
		struct UPanelWidget ReturnValue;

	}; GetParent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetPaintSpaceGeometry
inline struct FGeometry UWidget::GetPaintSpaceGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetPaintSpaceGeometry");

	struct GetPaintSpaceGeometry_Params {
		
		struct FGeometry ReturnValue;

	}; GetPaintSpaceGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetOwningPlayer
inline struct APlayerController UWidget::GetOwningPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningPlayer");

	struct GetOwningPlayer_Params {
		
		struct APlayerController ReturnValue;

	}; GetOwningPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetOwningLocalPlayer
inline struct ULocalPlayer UWidget::GetOwningLocalPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetOwningLocalPlayer");

	struct GetOwningLocalPlayer_Params {
		
		struct ULocalPlayer ReturnValue;

	}; GetOwningLocalPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature
inline enum class EMouseCursor UWidget::GetMouseCursor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature");

	struct GetMouseCursor__DelegateSignature_Params {
		
		enum class EMouseCursor ReturnValue;

	}; GetMouseCursor__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature
inline struct FLinearColor UWidget::GetLinearColor__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature");

	struct GetLinearColor__DelegateSignature_Params {
		
		struct FLinearColor ReturnValue;

	}; GetLinearColor__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetIsEnabled
inline bool UWidget::GetIsEnabled() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetIsEnabled");

	struct GetIsEnabled_Params {
		
		bool ReturnValue;

	}; GetIsEnabled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetInt32__DelegateSignature
inline int32_t UWidget::GetInt32__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetInt32__DelegateSignature");

	struct GetInt32__DelegateSignature_Params {
		
		int32_t ReturnValue;

	}; GetInt32__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetGameInstance
inline struct UGameInstance UWidget::GetGameInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetGameInstance");

	struct GetGameInstance_Params {
		
		struct UGameInstance ReturnValue;

	}; GetGameInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetFloat__DelegateSignature
inline float UWidget::GetFloat__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetFloat__DelegateSignature");

	struct GetFloat__DelegateSignature_Params {
		
		float ReturnValue;

	}; GetFloat__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetDesiredSize
inline struct FVector2D UWidget::GetDesiredSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetDesiredSize");

	struct GetDesiredSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetDesiredSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetClipping
inline enum class EWidgetClipping UWidget::GetClipping() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetClipping");

	struct GetClipping_Params {
		
		enum class EWidgetClipping ReturnValue;

	}; GetClipping_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature
inline enum class ECheckBoxState UWidget::GetCheckBoxState__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature");

	struct GetCheckBoxState__DelegateSignature_Params {
		
		enum class ECheckBoxState ReturnValue;

	}; GetCheckBoxState__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.GetCachedGeometry
inline struct FGeometry UWidget::GetCachedGeometry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.GetCachedGeometry");

	struct GetCachedGeometry_Params {
		
		struct FGeometry ReturnValue;

	}; GetCachedGeometry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GetBool__DelegateSignature
inline bool UWidget::GetBool__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GetBool__DelegateSignature");

	struct GetBool__DelegateSignature_Params {
		
		bool ReturnValue;

	}; GetBool__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature
inline struct UWidget UWidget::GenerateWidgetForString__DelegateSignature(struct FString Item) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature");

	struct GenerateWidgetForString__DelegateSignature_Params {
		struct FString Item;
		struct UWidget ReturnValue;

	}; GenerateWidgetForString__DelegateSignature_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature
inline struct UWidget UWidget::GenerateWidgetForObject__DelegateSignature(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature");

	struct GenerateWidgetForObject__DelegateSignature_Params {
		struct Object Item;
		struct UWidget ReturnValue;

	}; GenerateWidgetForObject__DelegateSignature_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Widget.ForceVolatile
inline void UWidget::ForceVolatile(bool bForce) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceVolatile");

	struct ForceVolatile_Params {
		bool bForce;
	}; ForceVolatile_Params Params;

	Params.bForce = bForce;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Widget.ForceLayoutPrepass
inline void UWidget::ForceLayoutPrepass() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Widget.ForceLayoutPrepass");

	struct ForceLayoutPrepass_Params {
		
	}; ForceLayoutPrepass_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.PanelWidget.RemoveChildAt
inline bool UPanelWidget::RemoveChildAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChildAt");

	struct RemoveChildAt_Params {
		int32_t Index;
		bool ReturnValue;

	}; RemoveChildAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.RemoveChild
inline bool UPanelWidget::RemoveChild(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.RemoveChild");

	struct RemoveChild_Params {
		struct UWidget Content;
		bool ReturnValue;

	}; RemoveChild_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.HasChild
inline bool UPanelWidget::HasChild(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasChild");

	struct HasChild_Params {
		struct UWidget Content;
		bool ReturnValue;

	}; HasChild_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.HasAnyChildren
inline bool UPanelWidget::HasAnyChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.HasAnyChildren");

	struct HasAnyChildren_Params {
		
		bool ReturnValue;

	}; HasAnyChildren_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetChildrenCount
inline int32_t UPanelWidget::GetChildrenCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildrenCount");

	struct GetChildrenCount_Params {
		
		int32_t ReturnValue;

	}; GetChildrenCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetChildIndex
inline int32_t UPanelWidget::GetChildIndex(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildIndex");

	struct GetChildIndex_Params {
		struct UWidget Content;
		int32_t ReturnValue;

	}; GetChildIndex_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetChildAt
inline struct UWidget UPanelWidget::GetChildAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetChildAt");

	struct GetChildAt_Params {
		int32_t Index;
		struct UWidget ReturnValue;

	}; GetChildAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.GetAllChildren
inline struct TArray<struct UWidget> UPanelWidget::GetAllChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.GetAllChildren");

	struct GetAllChildren_Params {
		
		struct TArray<struct UWidget> ReturnValue;

	}; GetAllChildren_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.PanelWidget.ClearChildren
inline void UPanelWidget::ClearChildren() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.ClearChildren");

	struct ClearChildren_Params {
		
	}; ClearChildren_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.PanelWidget.AddChild
inline struct UPanelSlot UPanelWidget::AddChild(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.PanelWidget.AddChild");

	struct AddChild_Params {
		struct UWidget Content;
		struct UPanelSlot ReturnValue;

	}; AddChild_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.UnregisterInputComponent
inline void UUserWidget::UnregisterInputComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnregisterInputComponent");

	struct UnregisterInputComponent_Params {
		
	}; UnregisterInputComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindFromAnimationStarted
inline void UUserWidget::UnbindFromAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationStarted");

	struct UnbindFromAnimationStarted_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; UnbindFromAnimationStarted_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindFromAnimationFinished
inline void UUserWidget::UnbindFromAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindFromAnimationFinished");

	struct UnbindFromAnimationFinished_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; UnbindFromAnimationFinished_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindAllFromAnimationStarted
inline void UUserWidget::UnbindAllFromAnimationStarted(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationStarted");

	struct UnbindAllFromAnimationStarted_Params {
		struct UWidgetAnimation Animation;
	}; UnbindAllFromAnimationStarted_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.UnbindAllFromAnimationFinished
inline void UUserWidget::UnbindAllFromAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.UnbindAllFromAnimationFinished");

	struct UnbindAllFromAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; UnbindAllFromAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.Tick
inline void UUserWidget::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopListeningForInputAction
inline void UUserWidget::StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForInputAction");

	struct StopListeningForInputAction_Params {
		struct FName ActionName;
		enum class EInputEvent EventType;
	}; StopListeningForInputAction_Params Params;

	Params.ActionName = ActionName;
	Params.EventType = EventType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopListeningForAllInputActions
inline void UUserWidget::StopListeningForAllInputActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopListeningForAllInputActions");

	struct StopListeningForAllInputActions_Params {
		
	}; StopListeningForAllInputActions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopAnimationsAndLatentActions
inline void UUserWidget::StopAnimationsAndLatentActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimationsAndLatentActions");

	struct StopAnimationsAndLatentActions_Params {
		
	}; StopAnimationsAndLatentActions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopAnimation
inline void UUserWidget::StopAnimation(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAnimation");

	struct StopAnimation_Params {
		struct UWidgetAnimation InAnimation;
	}; StopAnimation_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.StopAllAnimations
inline void UUserWidget::StopAllAnimations() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.StopAllAnimations");

	struct StopAllAnimations_Params {
		
	}; StopAllAnimations_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetPositionInViewport
inline void UUserWidget::SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPositionInViewport");

	struct SetPositionInViewport_Params {
		struct FVector2D Position;
		bool bRemoveDPIScale;
	}; SetPositionInViewport_Params Params;

	Params.Position = Position;
	Params.bRemoveDPIScale = bRemoveDPIScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetPlaybackSpeed
inline void UUserWidget::SetPlaybackSpeed(struct UWidgetAnimation InAnimation, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPlaybackSpeed");

	struct SetPlaybackSpeed_Params {
		struct UWidgetAnimation InAnimation;
		float PlaybackSpeed;
	}; SetPlaybackSpeed_Params Params;

	Params.InAnimation = InAnimation;
	Params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetPadding
inline void UUserWidget::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetOwningPlayer
inline void UUserWidget::SetOwningPlayer(struct APlayerController LocalPlayerController) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetOwningPlayer");

	struct SetOwningPlayer_Params {
		struct APlayerController LocalPlayerController;
	}; SetOwningPlayer_Params Params;

	Params.LocalPlayerController = LocalPlayerController;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetNumLoopsToPlay
inline void UUserWidget::SetNumLoopsToPlay(struct UWidgetAnimation InAnimation, int32_t NumLoopsToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetNumLoopsToPlay");

	struct SetNumLoopsToPlay_Params {
		struct UWidgetAnimation InAnimation;
		int32_t NumLoopsToPlay;
	}; SetNumLoopsToPlay_Params Params;

	Params.InAnimation = InAnimation;
	Params.NumLoopsToPlay = NumLoopsToPlay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetInputActionPriority
inline void UUserWidget::SetInputActionPriority(int32_t NewPriority) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionPriority");

	struct SetInputActionPriority_Params {
		int32_t NewPriority;
	}; SetInputActionPriority_Params Params;

	Params.NewPriority = NewPriority;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetInputActionBlocking
inline void UUserWidget::SetInputActionBlocking(bool bShouldBlock) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetInputActionBlocking");

	struct SetInputActionBlocking_Params {
		bool bShouldBlock;
	}; SetInputActionBlocking_Params Params;

	Params.bShouldBlock = bShouldBlock;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetForegroundColor
inline void UUserWidget::SetForegroundColor(struct FSlateColor InForegroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetForegroundColor");

	struct SetForegroundColor_Params {
		struct FSlateColor InForegroundColor;
	}; SetForegroundColor_Params Params;

	Params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetDesiredSizeInViewport
inline void UUserWidget::SetDesiredSizeInViewport(struct FVector2D Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetDesiredSizeInViewport");

	struct SetDesiredSizeInViewport_Params {
		struct FVector2D Size;
	}; SetDesiredSizeInViewport_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetColorAndOpacity
inline void UUserWidget::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetAnchorsInViewport
inline void UUserWidget::SetAnchorsInViewport(struct FAnchors Anchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAnchorsInViewport");

	struct SetAnchorsInViewport_Params {
		struct FAnchors Anchors;
	}; SetAnchorsInViewport_Params Params;

	Params.Anchors = Anchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.SetAlignmentInViewport
inline void UUserWidget::SetAlignmentInViewport(struct FVector2D Alignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.SetAlignmentInViewport");

	struct SetAlignmentInViewport_Params {
		struct FVector2D Alignment;
	}; SetAlignmentInViewport_Params Params;

	Params.Alignment = Alignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.ReverseAnimation
inline void UUserWidget::ReverseAnimation(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ReverseAnimation");

	struct ReverseAnimation_Params {
		struct UWidgetAnimation InAnimation;
	}; ReverseAnimation_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.RemoveFromViewport
inline void UUserWidget::RemoveFromViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RemoveFromViewport");

	struct RemoveFromViewport_Params {
		
	}; RemoveFromViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.RegisterInputComponent
inline void UUserWidget::RegisterInputComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.RegisterInputComponent");

	struct RegisterInputComponent_Params {
		
	}; RegisterInputComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.PreConstruct
inline void UUserWidget::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.PlaySound
inline void UUserWidget::PlaySound(struct USoundBase SoundToPlay) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlaySound");

	struct PlaySound_Params {
		struct USoundBase SoundToPlay;
	}; PlaySound_Params Params;

	Params.SoundToPlay = SoundToPlay;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.PlayAnimationTimeRange
inline struct UUMGSequencePlayer UUserWidget::PlayAnimationTimeRange(struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationTimeRange");

	struct PlayAnimationTimeRange_Params {
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		float EndAtTime;
		int32_t NumLoopsToPlay;
		enum class EUMGSequencePlayMode PlayMode;
		float PlaybackSpeed;
		bool bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimationTimeRange_Params Params;

	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.EndAtTime = EndAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PlayAnimationReverse
inline struct UUMGSequencePlayer UUserWidget::PlayAnimationReverse(struct UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationReverse");

	struct PlayAnimationReverse_Params {
		struct UWidgetAnimation InAnimation;
		float PlaybackSpeed;
		bool bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimationReverse_Params Params;

	Params.InAnimation = InAnimation;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PlayAnimationForward
inline struct UUMGSequencePlayer UUserWidget::PlayAnimationForward(struct UWidgetAnimation InAnimation, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimationForward");

	struct PlayAnimationForward_Params {
		struct UWidgetAnimation InAnimation;
		float PlaybackSpeed;
		bool bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimationForward_Params Params;

	Params.InAnimation = InAnimation;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PlayAnimation
inline struct UUMGSequencePlayer UUserWidget::PlayAnimation(struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PlayAnimation");

	struct PlayAnimation_Params {
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		int32_t NumLoopsToPlay;
		enum class EUMGSequencePlayMode PlayMode;
		float PlaybackSpeed;
		bool bRestoreState;
		struct UUMGSequencePlayer ReturnValue;

	}; PlayAnimation_Params Params;

	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;
	Params.bRestoreState = bRestoreState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.PauseAnimation
inline float UUserWidget::PauseAnimation(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.PauseAnimation");

	struct PauseAnimation_Params {
		struct UWidgetAnimation InAnimation;
		float ReturnValue;

	}; PauseAnimation_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchStarted
inline struct FEventReply UUserWidget::OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchStarted");

	struct OnTouchStarted_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchStarted_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchMoved
inline struct FEventReply UUserWidget::OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchMoved");

	struct OnTouchMoved_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchMoved_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchGesture
inline struct FEventReply UUserWidget::OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent& GestureEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchGesture");

	struct OnTouchGesture_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& GestureEvent;
		struct FEventReply ReturnValue;

	}; OnTouchGesture_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	GestureEvent = Params.GestureEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchForceChanged
inline struct FEventReply UUserWidget::OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchForceChanged");

	struct OnTouchForceChanged_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchForceChanged_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnTouchEnded
inline struct FEventReply UUserWidget::OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent& InTouchEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnTouchEnded");

	struct OnTouchEnded_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& InTouchEvent;
		struct FEventReply ReturnValue;

	}; OnTouchEnded_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTouchEvent = Params.InTouchEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnRemovedFromFocusPath
inline void UUserWidget::OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnRemovedFromFocusPath");

	struct OnRemovedFromFocusPath_Params {
		struct FFocusEvent InFocusEvent;
	}; OnRemovedFromFocusPath_Params Params;

	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnPreviewMouseButtonDown
inline struct FEventReply UUserWidget::OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewMouseButtonDown");

	struct OnPreviewMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnPreviewMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnPreviewKeyDown
inline struct FEventReply UUserWidget::OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPreviewKeyDown");

	struct OnPreviewKeyDown_Params {
		struct FGeometry MyGeometry;
		struct FKeyEvent InKeyEvent;
		struct FEventReply ReturnValue;

	}; OnPreviewKeyDown_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnPaint
inline void UUserWidget::OnPaint(struct FPaintContext& Context) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnPaint");

	struct OnPaint_Params {
		struct FPaintContext& Context;
	}; OnPaint_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Context = Params.Context;

}

// Function UMG.UserWidget.OnMouseWheel
inline struct FEventReply UUserWidget::OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseWheel");

	struct OnMouseWheel_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseWheel_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseMove
inline struct FEventReply UUserWidget::OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseMove");

	struct OnMouseMove_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseMove_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseLeave
inline void UUserWidget::OnMouseLeave(struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseLeave");

	struct OnMouseLeave_Params {
		struct FPointerEvent& MouseEvent;
	}; OnMouseLeave_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UMG.UserWidget.OnMouseEnter
inline void UUserWidget::OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseEnter");

	struct OnMouseEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
	}; OnMouseEnter_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;

}

// Function UMG.UserWidget.OnMouseCaptureLost
inline void UUserWidget::OnMouseCaptureLost() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseCaptureLost");

	struct OnMouseCaptureLost_Params {
		
	}; OnMouseCaptureLost_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnMouseButtonUp
inline struct FEventReply UUserWidget::OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonUp");

	struct OnMouseButtonUp_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonUp_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseButtonDown
inline struct FEventReply UUserWidget::OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent& MouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDown");

	struct OnMouseButtonDown_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& MouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDown_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	MouseEvent = Params.MouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMouseButtonDoubleClick
inline struct FEventReply UUserWidget::OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent& InMouseEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMouseButtonDoubleClick");

	struct OnMouseButtonDoubleClick_Params {
		struct FGeometry InMyGeometry;
		struct FPointerEvent& InMouseEvent;
		struct FEventReply ReturnValue;

	}; OnMouseButtonDoubleClick_Params Params;

	Params.InMyGeometry = InMyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InMouseEvent = Params.InMouseEvent;


	return params.ReturnValue;
}

// Function UMG.UserWidget.OnMotionDetected
inline struct FEventReply UUserWidget::OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnMotionDetected");

	struct OnMotionDetected_Params {
		struct FGeometry MyGeometry;
		struct FMotionEvent InMotionEvent;
		struct FEventReply ReturnValue;

	}; OnMotionDetected_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InMotionEvent = InMotionEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnKeyUp
inline struct FEventReply UUserWidget::OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyUp");

	struct OnKeyUp_Params {
		struct FGeometry MyGeometry;
		struct FKeyEvent InKeyEvent;
		struct FEventReply ReturnValue;

	}; OnKeyUp_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnKeyDown
inline struct FEventReply UUserWidget::OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyDown");

	struct OnKeyDown_Params {
		struct FGeometry MyGeometry;
		struct FKeyEvent InKeyEvent;
		struct FEventReply ReturnValue;

	}; OnKeyDown_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnKeyChar
inline struct FEventReply UUserWidget::OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnKeyChar");

	struct OnKeyChar_Params {
		struct FGeometry MyGeometry;
		struct FCharacterEvent InCharacterEvent;
		struct FEventReply ReturnValue;

	}; OnKeyChar_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InCharacterEvent = InCharacterEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnInitialized
inline void UUserWidget::OnInitialized() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnInitialized");

	struct OnInitialized_Params {
		
	}; OnInitialized_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnFocusReceived
inline struct FEventReply UUserWidget::OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusReceived");

	struct OnFocusReceived_Params {
		struct FGeometry MyGeometry;
		struct FFocusEvent InFocusEvent;
		struct FEventReply ReturnValue;

	}; OnFocusReceived_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnFocusLost
inline void UUserWidget::OnFocusLost(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnFocusLost");

	struct OnFocusLost_Params {
		struct FFocusEvent InFocusEvent;
	}; OnFocusLost_Params Params;

	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnDrop
inline bool UUserWidget::OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDrop");

	struct OnDrop_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		bool ReturnValue;

	}; OnDrop_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnDragOver
inline bool UUserWidget::OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragOver");

	struct OnDragOver_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
		bool ReturnValue;

	}; OnDragOver_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnDragLeave
inline void UUserWidget::OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragLeave");

	struct OnDragLeave_Params {
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragLeave_Params Params;

	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnDragEnter
inline void UUserWidget::OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragEnter");

	struct OnDragEnter_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragEnter_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.PointerEvent = PointerEvent;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnDragDetected
inline void UUserWidget::OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent& PointerEvent, struct UDragDropOperation& Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragDetected");

	struct OnDragDetected_Params {
		struct FGeometry MyGeometry;
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation& Operation;
	}; OnDragDetected_Params Params;

	Params.MyGeometry = MyGeometry;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;
	Operation = Params.Operation;

}

// Function UMG.UserWidget.OnDragCancelled
inline void UUserWidget::OnDragCancelled(struct FPointerEvent& PointerEvent, struct UDragDropOperation Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnDragCancelled");

	struct OnDragCancelled_Params {
		struct FPointerEvent& PointerEvent;
		struct UDragDropOperation Operation;
	}; OnDragCancelled_Params Params;

	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.UserWidget.OnAnimationStarted
inline void UUserWidget::OnAnimationStarted(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationStarted");

	struct OnAnimationStarted_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationStarted_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnAnimationFinished
inline void UUserWidget::OnAnimationFinished(struct UWidgetAnimation Animation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnimationFinished");

	struct OnAnimationFinished_Params {
		struct UWidgetAnimation Animation;
	}; OnAnimationFinished_Params Params;

	Params.Animation = Animation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.OnAnalogValueChanged
inline struct FEventReply UUserWidget::OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAnalogValueChanged");

	struct OnAnalogValueChanged_Params {
		struct FGeometry MyGeometry;
		struct FAnalogInputEvent InAnalogInputEvent;
		struct FEventReply ReturnValue;

	}; OnAnalogValueChanged_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InAnalogInputEvent = InAnalogInputEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.OnAddedToFocusPath
inline void UUserWidget::OnAddedToFocusPath(struct FFocusEvent InFocusEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.OnAddedToFocusPath");

	struct OnAddedToFocusPath_Params {
		struct FFocusEvent InFocusEvent;
	}; OnAddedToFocusPath_Params Params;

	Params.InFocusEvent = InFocusEvent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.ListenForInputAction
inline void UUserWidget::ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.ListenForInputAction");

	struct ListenForInputAction_Params {
		struct FName ActionName;
		enum class EInputEvent EventType;
		bool bConsume;
		struct FDelegate Callback;
	}; ListenForInputAction_Params Params;

	Params.ActionName = ActionName;
	Params.EventType = EventType;
	Params.bConsume = bConsume;
	Params.Callback = Callback;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.IsPlayingAnimation
inline bool UUserWidget::IsPlayingAnimation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsPlayingAnimation");

	struct IsPlayingAnimation_Params {
		
		bool ReturnValue;

	}; IsPlayingAnimation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsListeningForInputAction
inline bool UUserWidget::IsListeningForInputAction(struct FName ActionName) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsListeningForInputAction");

	struct IsListeningForInputAction_Params {
		struct FName ActionName;
		bool ReturnValue;

	}; IsListeningForInputAction_Params Params;

	Params.ActionName = ActionName;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsInViewport
inline bool UUserWidget::IsInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInViewport");

	struct IsInViewport_Params {
		
		bool ReturnValue;

	}; IsInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsInteractable
inline bool UUserWidget::IsInteractable() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsInteractable");

	struct IsInteractable_Params {
		
		bool ReturnValue;

	}; IsInteractable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsAnyAnimationPlaying
inline bool UUserWidget::IsAnyAnimationPlaying() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnyAnimationPlaying");

	struct IsAnyAnimationPlaying_Params {
		
		bool ReturnValue;

	}; IsAnyAnimationPlaying_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsAnimationPlayingForward
inline bool UUserWidget::IsAnimationPlayingForward(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlayingForward");

	struct IsAnimationPlayingForward_Params {
		struct UWidgetAnimation InAnimation;
		bool ReturnValue;

	}; IsAnimationPlayingForward_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.IsAnimationPlaying
inline bool UUserWidget::IsAnimationPlaying(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.IsAnimationPlaying");

	struct IsAnimationPlaying_Params {
		struct UWidgetAnimation InAnimation;
		bool ReturnValue;

	}; IsAnimationPlaying_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetOwningPlayerPawn
inline struct APawn UUserWidget::GetOwningPlayerPawn() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetOwningPlayerPawn");

	struct GetOwningPlayerPawn_Params {
		
		struct APawn ReturnValue;

	}; GetOwningPlayerPawn_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetIsVisible
inline bool UUserWidget::GetIsVisible() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetIsVisible");

	struct GetIsVisible_Params {
		
		bool ReturnValue;

	}; GetIsVisible_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetAnimationCurrentTime
inline float UUserWidget::GetAnimationCurrentTime(struct UWidgetAnimation InAnimation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnimationCurrentTime");

	struct GetAnimationCurrentTime_Params {
		struct UWidgetAnimation InAnimation;
		float ReturnValue;

	}; GetAnimationCurrentTime_Params Params;

	Params.InAnimation = InAnimation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetAnchorsInViewport
inline struct FAnchors UUserWidget::GetAnchorsInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAnchorsInViewport");

	struct GetAnchorsInViewport_Params {
		
		struct FAnchors ReturnValue;

	}; GetAnchorsInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.GetAlignmentInViewport
inline struct FVector2D UUserWidget::GetAlignmentInViewport() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.GetAlignmentInViewport");

	struct GetAlignmentInViewport_Params {
		
		struct FVector2D ReturnValue;

	}; GetAlignmentInViewport_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UserWidget.Destruct
inline void UUserWidget::Destruct() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Destruct");

	struct Destruct_Params {
		
	}; Destruct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.Construct
inline void UUserWidget::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.CancelLatentActions
inline void UUserWidget::CancelLatentActions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.CancelLatentActions");

	struct CancelLatentActions_Params {
		
	}; CancelLatentActions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.BindToAnimationStarted
inline void UUserWidget::BindToAnimationStarted(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationStarted");

	struct BindToAnimationStarted_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; BindToAnimationStarted_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.BindToAnimationFinished
inline void UUserWidget::BindToAnimationFinished(struct UWidgetAnimation Animation, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationFinished");

	struct BindToAnimationFinished_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
	}; BindToAnimationFinished_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.BindToAnimationEvent
inline void UUserWidget::BindToAnimationEvent(struct UWidgetAnimation Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.BindToAnimationEvent");

	struct BindToAnimationEvent_Params {
		struct UWidgetAnimation Animation;
		struct FDelegate Delegate;
		enum class EWidgetAnimationEvent AnimationEvent;
		struct FName UserTag;
	}; BindToAnimationEvent_Params Params;

	Params.Animation = Animation;
	Params.Delegate = Delegate;
	Params.AnimationEvent = AnimationEvent;
	Params.UserTag = UserTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.AddToViewport
inline void UUserWidget::AddToViewport(int32_t ZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToViewport");

	struct AddToViewport_Params {
		int32_t ZOrder;
	}; AddToViewport_Params Params;

	Params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UserWidget.AddToPlayerScreen
inline bool UUserWidget::AddToPlayerScreen(int32_t ZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UserWidget.AddToPlayerScreen");

	struct AddToPlayerScreen_Params {
		int32_t ZOrder;
		bool ReturnValue;

	}; AddToPlayerScreen_Params Params;

	Params.ZOrder = ZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Button.SetTouchMethod
inline void UButton::SetTouchMethod(enum class EButtonTouchMethod InTouchMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetTouchMethod");

	struct SetTouchMethod_Params {
		enum class EButtonTouchMethod InTouchMethod;
	}; SetTouchMethod_Params Params;

	Params.InTouchMethod = InTouchMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetStyle
inline void UButton::SetStyle(struct FButtonStyle& InStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetStyle");

	struct SetStyle_Params {
		struct FButtonStyle& InStyle;
	}; SetStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InStyle = Params.InStyle;

}

// Function UMG.Button.SetPressMethod
inline void UButton::SetPressMethod(enum class EButtonPressMethod InPressMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetPressMethod");

	struct SetPressMethod_Params {
		enum class EButtonPressMethod InPressMethod;
	}; SetPressMethod_Params Params;

	Params.InPressMethod = InPressMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetColorAndOpacity
inline void UButton::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetClickMethod
inline void UButton::SetClickMethod(enum class EButtonClickMethod InClickMethod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetClickMethod");

	struct SetClickMethod_Params {
		enum class EButtonClickMethod InClickMethod;
	}; SetClickMethod_Params Params;

	Params.InClickMethod = InClickMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.SetBackgroundColor
inline void UButton::SetBackgroundColor(struct FLinearColor InBackgroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.SetBackgroundColor");

	struct SetBackgroundColor_Params {
		struct FLinearColor InBackgroundColor;
	}; SetBackgroundColor_Params Params;

	Params.InBackgroundColor = InBackgroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Button.IsPressed
inline bool UButton::IsPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Button.IsPressed");

	struct IsPressed_Params {
		
		bool ReturnValue;

	}; IsPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Slider.SetValue
inline void USlider::SetValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetValue");

	struct SetValue_Params {
		float InValue;
	}; SetValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetStepSize
inline void USlider::SetStepSize(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetStepSize");

	struct SetStepSize_Params {
		float InValue;
	}; SetStepSize_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetSliderHandleColor
inline void USlider::SetSliderHandleColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderHandleColor");

	struct SetSliderHandleColor_Params {
		struct FLinearColor InValue;
	}; SetSliderHandleColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetSliderBarColor
inline void USlider::SetSliderBarColor(struct FLinearColor InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetSliderBarColor");

	struct SetSliderBarColor_Params {
		struct FLinearColor InValue;
	}; SetSliderBarColor_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetMinValue
inline void USlider::SetMinValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMinValue");

	struct SetMinValue_Params {
		float InValue;
	}; SetMinValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetMaxValue
inline void USlider::SetMaxValue(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetMaxValue");

	struct SetMaxValue_Params {
		float InValue;
	}; SetMaxValue_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetLocked
inline void USlider::SetLocked(bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetLocked");

	struct SetLocked_Params {
		bool InValue;
	}; SetLocked_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.SetIndentHandle
inline void USlider::SetIndentHandle(bool InValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.SetIndentHandle");

	struct SetIndentHandle_Params {
		bool InValue;
	}; SetIndentHandle_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Slider.GetValue
inline float USlider::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetValue");

	struct GetValue_Params {
		
		float ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Slider.GetNormalizedValue
inline float USlider::GetNormalizedValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Slider.GetNormalizedValue");

	struct GetNormalizedValue_Params {
		
		float ReturnValue;

	}; GetNormalizedValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Image.SetOpacity
inline void UImage::SetOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetOpacity");

	struct SetOpacity_Params {
		float InOpacity;
	}; SetOpacity_Params Params;

	Params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetColorAndOpacity
inline void UImage::SetColorAndOpacity(struct FLinearColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FLinearColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushTintColor
inline void UImage::SetBrushTintColor(struct FSlateColor TintColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushTintColor");

	struct SetBrushTintColor_Params {
		struct FSlateColor TintColor;
	}; SetBrushTintColor_Params Params;

	Params.TintColor = TintColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushSize
inline void UImage::SetBrushSize(struct FVector2D DesiredSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushSize");

	struct SetBrushSize_Params {
		struct FVector2D DesiredSize;
	}; SetBrushSize_Params Params;

	Params.DesiredSize = DesiredSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushResourceObject
inline void UImage::SetBrushResourceObject(struct Object ResourceObject) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushResourceObject");

	struct SetBrushResourceObject_Params {
		struct Object ResourceObject;
	}; SetBrushResourceObject_Params Params;

	Params.ResourceObject = ResourceObject;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromTextureDynamic
inline void UImage::SetBrushFromTextureDynamic(struct UTexture2DDynamic Texture, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTextureDynamic");

	struct SetBrushFromTextureDynamic_Params {
		struct UTexture2DDynamic Texture;
		bool bMatchSize;
	}; SetBrushFromTextureDynamic_Params Params;

	Params.Texture = Texture;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromTexture
inline void UImage::SetBrushFromTexture(struct UTexture2D Texture, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromTexture");

	struct SetBrushFromTexture_Params {
		struct UTexture2D Texture;
		bool bMatchSize;
	}; SetBrushFromTexture_Params Params;

	Params.Texture = Texture;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromSoftTexture
inline void UImage::SetBrushFromSoftTexture(struct TSoftObjectPtr<UTexture2D> SoftTexture, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftTexture");

	struct SetBrushFromSoftTexture_Params {
		struct TSoftObjectPtr<UTexture2D> SoftTexture;
		bool bMatchSize;
	}; SetBrushFromSoftTexture_Params Params;

	Params.SoftTexture = SoftTexture;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromSoftMaterial
inline void UImage::SetBrushFromSoftMaterial(struct TSoftObjectPtr<UMaterialInterface> SoftMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromSoftMaterial");

	struct SetBrushFromSoftMaterial_Params {
		struct TSoftObjectPtr<UMaterialInterface> SoftMaterial;
	}; SetBrushFromSoftMaterial_Params Params;

	Params.SoftMaterial = SoftMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromMaterial
inline void UImage::SetBrushFromMaterial(struct UMaterialInterface Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromMaterial");

	struct SetBrushFromMaterial_Params {
		struct UMaterialInterface Material;
	}; SetBrushFromMaterial_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromAtlasInterface
inline void UImage::SetBrushFromAtlasInterface(struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion, bool bMatchSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAtlasInterface");

	struct SetBrushFromAtlasInterface_Params {
		struct TScriptInterface<ISlateTextureAtlasInterface> AtlasRegion;
		bool bMatchSize;
	}; SetBrushFromAtlasInterface_Params Params;

	Params.AtlasRegion = AtlasRegion;
	Params.bMatchSize = bMatchSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrushFromAsset
inline void UImage::SetBrushFromAsset(struct USlateBrushAsset Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrushFromAsset");

	struct SetBrushFromAsset_Params {
		struct USlateBrushAsset Asset;
	}; SetBrushFromAsset_Params Params;

	Params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Image.SetBrush
inline void UImage::SetBrush(struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.SetBrush");

	struct SetBrush_Params {
		struct FSlateBrush& InBrush;
	}; SetBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBrush = Params.InBrush;

}

// Function UMG.Image.GetDynamicMaterial
inline struct UMaterialInstanceDynamic UImage::GetDynamicMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Image.GetDynamicMaterial");

	struct GetDynamicMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.TextLayoutWidget.SetJustification
inline void UTextLayoutWidget::SetJustification(enum class ETextJustify InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextLayoutWidget.SetJustification");

	struct SetJustification_Params {
		enum class ETextJustify InJustification;
	}; SetJustification_Params Params;

	Params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetText
inline void UTextBlock::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetStrikeBrush
inline void UTextBlock::SetStrikeBrush(struct FSlateBrush InStrikeBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetStrikeBrush");

	struct SetStrikeBrush_Params {
		struct FSlateBrush InStrikeBrush;
	}; SetStrikeBrush_Params Params;

	Params.InStrikeBrush = InStrikeBrush;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetShadowOffset
inline void UTextBlock::SetShadowOffset(struct FVector2D InShadowOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowOffset");

	struct SetShadowOffset_Params {
		struct FVector2D InShadowOffset;
	}; SetShadowOffset_Params Params;

	Params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetShadowColorAndOpacity
inline void UTextBlock::SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetShadowColorAndOpacity");

	struct SetShadowColorAndOpacity_Params {
		struct FLinearColor InShadowColorAndOpacity;
	}; SetShadowColorAndOpacity_Params Params;

	Params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetOpacity
inline void UTextBlock::SetOpacity(float InOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetOpacity");

	struct SetOpacity_Params {
		float InOpacity;
	}; SetOpacity_Params Params;

	Params.InOpacity = InOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetMinDesiredWidth
inline void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetMinDesiredWidth");

	struct SetMinDesiredWidth_Params {
		float InMinDesiredWidth;
	}; SetMinDesiredWidth_Params Params;

	Params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetFont
inline void UTextBlock::SetFont(struct FSlateFontInfo InFontInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetFont");

	struct SetFont_Params {
		struct FSlateFontInfo InFontInfo;
	}; SetFont_Params Params;

	Params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetColorAndOpacity
inline void UTextBlock::SetColorAndOpacity(struct FSlateColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetColorAndOpacity");

	struct SetColorAndOpacity_Params {
		struct FSlateColor InColorAndOpacity;
	}; SetColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.SetAutoWrapText
inline void UTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.SetAutoWrapText");

	struct SetAutoWrapText_Params {
		bool InAutoTextWrap;
	}; SetAutoWrapText_Params Params;

	Params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TextBlock.GetText
inline struct FText UTextBlock::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.TextBlock.GetDynamicOutlineMaterial
inline struct UMaterialInstanceDynamic UTextBlock::GetDynamicOutlineMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicOutlineMaterial");

	struct GetDynamicOutlineMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicOutlineMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.TextBlock.GetDynamicFontMaterial
inline struct UMaterialInstanceDynamic UTextBlock::GetDynamicFontMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TextBlock.GetDynamicFontMaterial");

	struct GetDynamicFontMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicFontMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.AsyncTaskDownloadImage.DownloadImage
inline struct UAsyncTaskDownloadImage UAsyncTaskDownloadImage::DownloadImage(struct FString URL) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.AsyncTaskDownloadImage.DownloadImage");

	struct DownloadImage_Params {
		struct FString URL;
		struct UAsyncTaskDownloadImage ReturnValue;

	}; DownloadImage_Params Params;

	Params.URL = URL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.BackgroundBlur.SetVerticalAlignment
inline void UBackgroundBlur::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetPadding
inline void UBackgroundBlur::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetLowQualityFallbackBrush
inline void UBackgroundBlur::SetLowQualityFallbackBrush(struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetLowQualityFallbackBrush");

	struct SetLowQualityFallbackBrush_Params {
		struct FSlateBrush& InBrush;
	}; SetLowQualityFallbackBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBrush = Params.InBrush;

}

// Function UMG.BackgroundBlur.SetHorizontalAlignment
inline void UBackgroundBlur::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetBlurStrength
inline void UBackgroundBlur::SetBlurStrength(float InStrength) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurStrength");

	struct SetBlurStrength_Params {
		float InStrength;
	}; SetBlurStrength_Params Params;

	Params.InStrength = InStrength;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetBlurRadius
inline void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetBlurRadius");

	struct SetBlurRadius_Params {
		int32_t InBlurRadius;
	}; SetBlurRadius_Params Params;

	Params.InBlurRadius = InBlurRadius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlur.SetApplyAlphaToBlur
inline void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlur.SetApplyAlphaToBlur");

	struct SetApplyAlphaToBlur_Params {
		bool bInApplyAlphaToBlur;
	}; SetApplyAlphaToBlur_Params Params;

	Params.bInApplyAlphaToBlur = bInApplyAlphaToBlur;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlurSlot.SetVerticalAlignment
inline void UBackgroundBlurSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlurSlot.SetPadding
inline void UBackgroundBlurSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BackgroundBlurSlot.SetHorizontalAlignment
inline void UBackgroundBlurSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BackgroundBlurSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetVerticalAlignment
inline void UBorder::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetPadding
inline void UBorder::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetHorizontalAlignment
inline void UBorder::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetDesiredSizeScale
inline void UBorder::SetDesiredSizeScale(struct FVector2D InScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetDesiredSizeScale");

	struct SetDesiredSizeScale_Params {
		struct FVector2D InScale;
	}; SetDesiredSizeScale_Params Params;

	Params.InScale = InScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetContentColorAndOpacity
inline void UBorder::SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetContentColorAndOpacity");

	struct SetContentColorAndOpacity_Params {
		struct FLinearColor InContentColorAndOpacity;
	}; SetContentColorAndOpacity_Params Params;

	Params.InContentColorAndOpacity = InContentColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushFromTexture
inline void UBorder::SetBrushFromTexture(struct UTexture2D Texture) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromTexture");

	struct SetBrushFromTexture_Params {
		struct UTexture2D Texture;
	}; SetBrushFromTexture_Params Params;

	Params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushFromMaterial
inline void UBorder::SetBrushFromMaterial(struct UMaterialInterface Material) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromMaterial");

	struct SetBrushFromMaterial_Params {
		struct UMaterialInterface Material;
	}; SetBrushFromMaterial_Params Params;

	Params.Material = Material;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushFromAsset
inline void UBorder::SetBrushFromAsset(struct USlateBrushAsset Asset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushFromAsset");

	struct SetBrushFromAsset_Params {
		struct USlateBrushAsset Asset;
	}; SetBrushFromAsset_Params Params;

	Params.Asset = Asset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrushColor
inline void UBorder::SetBrushColor(struct FLinearColor InBrushColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrushColor");

	struct SetBrushColor_Params {
		struct FLinearColor InBrushColor;
	}; SetBrushColor_Params Params;

	Params.InBrushColor = InBrushColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Border.SetBrush
inline void UBorder::SetBrush(struct FSlateBrush& InBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.SetBrush");

	struct SetBrush_Params {
		struct FSlateBrush& InBrush;
	}; SetBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InBrush = Params.InBrush;

}

// Function UMG.Border.GetDynamicMaterial
inline struct UMaterialInstanceDynamic UBorder::GetDynamicMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Border.GetDynamicMaterial");

	struct GetDynamicMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetDynamicMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.BorderSlot.SetVerticalAlignment
inline void UBorderSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BorderSlot.SetPadding
inline void UBorderSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.BorderSlot.SetHorizontalAlignment
inline void UBorderSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.BorderSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ButtonSlot.SetVerticalAlignment
inline void UButtonSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ButtonSlot.SetPadding
inline void UButtonSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ButtonSlot.SetHorizontalAlignment
inline void UButtonSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ButtonSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetZOrder
inline void UCanvasPanelSlot::SetZOrder(int32_t InZOrder) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetZOrder");

	struct SetZOrder_Params {
		int32_t InZOrder;
	}; SetZOrder_Params Params;

	Params.InZOrder = InZOrder;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetSize
inline void UCanvasPanelSlot::SetSize(struct FVector2D InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetSize");

	struct SetSize_Params {
		struct FVector2D InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetPosition
inline void UCanvasPanelSlot::SetPosition(struct FVector2D InPosition) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetPosition");

	struct SetPosition_Params {
		struct FVector2D InPosition;
	}; SetPosition_Params Params;

	Params.InPosition = InPosition;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetOffsets
inline void UCanvasPanelSlot::SetOffsets(struct FMargin InOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetOffsets");

	struct SetOffsets_Params {
		struct FMargin InOffset;
	}; SetOffsets_Params Params;

	Params.InOffset = InOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetMinimum
inline void UCanvasPanelSlot::SetMinimum(struct FVector2D InMinimumAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMinimum");

	struct SetMinimum_Params {
		struct FVector2D InMinimumAnchors;
	}; SetMinimum_Params Params;

	Params.InMinimumAnchors = InMinimumAnchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetMaximum
inline void UCanvasPanelSlot::SetMaximum(struct FVector2D InMaximumAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetMaximum");

	struct SetMaximum_Params {
		struct FVector2D InMaximumAnchors;
	}; SetMaximum_Params Params;

	Params.InMaximumAnchors = InMaximumAnchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetLayout
inline void UCanvasPanelSlot::SetLayout(struct FAnchorData& InLayoutData) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetLayout");

	struct SetLayout_Params {
		struct FAnchorData& InLayoutData;
	}; SetLayout_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InLayoutData = Params.InLayoutData;

}

// Function UMG.CanvasPanelSlot.SetAutoSize
inline void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAutoSize");

	struct SetAutoSize_Params {
		bool InbAutoSize;
	}; SetAutoSize_Params Params;

	Params.InbAutoSize = InbAutoSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetAnchors
inline void UCanvasPanelSlot::SetAnchors(struct FAnchors InAnchors) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAnchors");

	struct SetAnchors_Params {
		struct FAnchors InAnchors;
	}; SetAnchors_Params Params;

	Params.InAnchors = InAnchors;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.SetAlignment
inline void UCanvasPanelSlot::SetAlignment(struct FVector2D InAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.SetAlignment");

	struct SetAlignment_Params {
		struct FVector2D InAlignment;
	}; SetAlignment_Params Params;

	Params.InAlignment = InAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CanvasPanelSlot.GetZOrder
inline int32_t UCanvasPanelSlot::GetZOrder() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetZOrder");

	struct GetZOrder_Params {
		
		int32_t ReturnValue;

	}; GetZOrder_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetSize
inline struct FVector2D UCanvasPanelSlot::GetSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetSize");

	struct GetSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetPosition
inline struct FVector2D UCanvasPanelSlot::GetPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetPosition");

	struct GetPosition_Params {
		
		struct FVector2D ReturnValue;

	}; GetPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetOffsets
inline struct FMargin UCanvasPanelSlot::GetOffsets() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetOffsets");

	struct GetOffsets_Params {
		
		struct FMargin ReturnValue;

	}; GetOffsets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetLayout
inline struct FAnchorData UCanvasPanelSlot::GetLayout() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetLayout");

	struct GetLayout_Params {
		
		struct FAnchorData ReturnValue;

	}; GetLayout_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetAutoSize
inline bool UCanvasPanelSlot::GetAutoSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAutoSize");

	struct GetAutoSize_Params {
		
		bool ReturnValue;

	}; GetAutoSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetAnchors
inline struct FAnchors UCanvasPanelSlot::GetAnchors() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAnchors");

	struct GetAnchors_Params {
		
		struct FAnchors ReturnValue;

	}; GetAnchors_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CanvasPanelSlot.GetAlignment
inline struct FVector2D UCanvasPanelSlot::GetAlignment() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CanvasPanelSlot.GetAlignment");

	struct GetAlignment_Params {
		
		struct FVector2D ReturnValue;

	}; GetAlignment_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CheckBox.SetIsChecked
inline void UCheckBox::SetIsChecked(bool InIsChecked) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetIsChecked");

	struct SetIsChecked_Params {
		bool InIsChecked;
	}; SetIsChecked_Params Params;

	Params.InIsChecked = InIsChecked;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CheckBox.SetCheckedState
inline void UCheckBox::SetCheckedState(enum class ECheckBoxState InCheckedState) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.SetCheckedState");

	struct SetCheckedState_Params {
		enum class ECheckBoxState InCheckedState;
	}; SetCheckedState_Params Params;

	Params.InCheckedState = InCheckedState;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CheckBox.IsPressed
inline bool UCheckBox::IsPressed() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsPressed");

	struct IsPressed_Params {
		
		bool ReturnValue;

	}; IsPressed_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CheckBox.IsChecked
inline bool UCheckBox::IsChecked() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.IsChecked");

	struct IsChecked_Params {
		
		bool ReturnValue;

	}; IsChecked_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CheckBox.GetCheckedState
inline enum class ECheckBoxState UCheckBox::GetCheckedState() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CheckBox.GetCheckedState");

	struct GetCheckedState_Params {
		
		enum class ECheckBoxState ReturnValue;

	}; GetCheckedState_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.CircularThrobber.SetRadius
inline void UCircularThrobber::SetRadius(float InRadius) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetRadius");

	struct SetRadius_Params {
		float InRadius;
	}; SetRadius_Params Params;

	Params.InRadius = InRadius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CircularThrobber.SetPeriod
inline void UCircularThrobber::SetPeriod(float InPeriod) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetPeriod");

	struct SetPeriod_Params {
		float InPeriod;
	}; SetPeriod_Params Params;

	Params.InPeriod = InPeriod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.CircularThrobber.SetNumberOfPieces
inline void UCircularThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.CircularThrobber.SetNumberOfPieces");

	struct SetNumberOfPieces_Params {
		int32_t InNumberOfPieces;
	}; SetNumberOfPieces_Params Params;

	Params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.SetSelectedOption
inline void UComboBoxString::SetSelectedOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedOption");

	struct SetSelectedOption_Params {
		struct FString Option;
	}; SetSelectedOption_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.SetSelectedIndex
inline void UComboBoxString::SetSelectedIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.SetSelectedIndex");

	struct SetSelectedIndex_Params {
		int32_t Index;
	}; SetSelectedIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.RemoveOption
inline bool UComboBoxString::RemoveOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RemoveOption");

	struct RemoveOption_Params {
		struct FString Option;
		bool ReturnValue;

	}; RemoveOption_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.RefreshOptions
inline void UComboBoxString::RefreshOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.RefreshOptions");

	struct RefreshOptions_Params {
		
	}; RefreshOptions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature
inline void UComboBoxString::OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature");

	struct OnSelectionChangedEvent__DelegateSignature_Params {
		struct FString SelectedItem;
		enum class ESelectInfo SelectionType;
	}; OnSelectionChangedEvent__DelegateSignature_Params Params;

	Params.SelectedItem = SelectedItem;
	Params.SelectionType = SelectionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature
inline void UComboBoxString::OnOpeningEvent__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature");

	struct OnOpeningEvent__DelegateSignature_Params {
		
	}; OnOpeningEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.IsOpen
inline bool UComboBoxString::IsOpen() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.IsOpen");

	struct IsOpen_Params {
		
		bool ReturnValue;

	}; IsOpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetSelectedOption
inline struct FString UComboBoxString::GetSelectedOption() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedOption");

	struct GetSelectedOption_Params {
		
		struct FString ReturnValue;

	}; GetSelectedOption_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetSelectedIndex
inline int32_t UComboBoxString::GetSelectedIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetSelectedIndex");

	struct GetSelectedIndex_Params {
		
		int32_t ReturnValue;

	}; GetSelectedIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetOptionCount
inline int32_t UComboBoxString::GetOptionCount() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionCount");

	struct GetOptionCount_Params {
		
		int32_t ReturnValue;

	}; GetOptionCount_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.GetOptionAtIndex
inline struct FString UComboBoxString::GetOptionAtIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.GetOptionAtIndex");

	struct GetOptionAtIndex_Params {
		int32_t Index;
		struct FString ReturnValue;

	}; GetOptionAtIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.FindOptionIndex
inline int32_t UComboBoxString::FindOptionIndex(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.FindOptionIndex");

	struct FindOptionIndex_Params {
		struct FString Option;
		int32_t ReturnValue;

	}; FindOptionIndex_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ComboBoxString.ClearSelection
inline void UComboBoxString::ClearSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearSelection");

	struct ClearSelection_Params {
		
	}; ClearSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.ClearOptions
inline void UComboBoxString::ClearOptions() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.ClearOptions");

	struct ClearOptions_Params {
		
	}; ClearOptions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ComboBoxString.AddOption
inline void UComboBoxString::AddOption(struct FString Option) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ComboBoxString.AddOption");

	struct AddOption_Params {
		struct FString Option;
	}; AddOption_Params Params;

	Params.Option = Option;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.DragDropOperation.Drop
inline void UDragDropOperation::Drop(struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Drop");

	struct Drop_Params {
		struct FPointerEvent& PointerEvent;
	}; Drop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.DragDropOperation.Dragged
inline void UDragDropOperation::Dragged(struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.Dragged");

	struct Dragged_Params {
		struct FPointerEvent& PointerEvent;
	}; Dragged_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.DragDropOperation.DragCancelled
inline void UDragDropOperation::DragCancelled(struct FPointerEvent& PointerEvent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DragDropOperation.DragCancelled");

	struct DragCancelled_Params {
		struct FPointerEvent& PointerEvent;
	}; DragCancelled_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	PointerEvent = Params.PointerEvent;

}

// Function UMG.DynamicEntryBoxBase.SetEntrySpacing
inline void UDynamicEntryBoxBase::SetEntrySpacing(struct FVector2D& InEntrySpacing) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.SetEntrySpacing");

	struct SetEntrySpacing_Params {
		struct FVector2D& InEntrySpacing;
	}; SetEntrySpacing_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InEntrySpacing = Params.InEntrySpacing;

}

// Function UMG.DynamicEntryBoxBase.GetNumEntries
inline int32_t UDynamicEntryBoxBase::GetNumEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetNumEntries");

	struct GetNumEntries_Params {
		
		int32_t ReturnValue;

	}; GetNumEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.DynamicEntryBoxBase.GetAllEntries
inline struct TArray<struct UUserWidget> UDynamicEntryBoxBase::GetAllEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBoxBase.GetAllEntries");

	struct GetAllEntries_Params {
		
		struct TArray<struct UUserWidget> ReturnValue;

	}; GetAllEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.DynamicEntryBox.Reset
inline void UDynamicEntryBox::Reset(bool bDeleteWidgets) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.Reset");

	struct Reset_Params {
		bool bDeleteWidgets;
	}; Reset_Params Params;

	Params.bDeleteWidgets = bDeleteWidgets;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.DynamicEntryBox.RemoveEntry
inline void UDynamicEntryBox::RemoveEntry(struct UUserWidget EntryWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.RemoveEntry");

	struct RemoveEntry_Params {
		struct UUserWidget EntryWidget;
	}; RemoveEntry_Params Params;

	Params.EntryWidget = EntryWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.DynamicEntryBox.BP_CreateEntryOfClass
inline struct UUserWidget UDynamicEntryBox::BP_CreateEntryOfClass(struct UClass* EntryClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntryOfClass");

	struct BP_CreateEntryOfClass_Params {
		struct UClass* EntryClass;
		struct UUserWidget ReturnValue;

	}; BP_CreateEntryOfClass_Params Params;

	Params.EntryClass = EntryClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.DynamicEntryBox.BP_CreateEntry
inline struct UUserWidget UDynamicEntryBox::BP_CreateEntry() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.DynamicEntryBox.BP_CreateEntry");

	struct BP_CreateEntry_Params {
		
		struct UUserWidget ReturnValue;

	}; BP_CreateEntry_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableText.SetText
inline void UEditableText::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetJustification
inline void UEditableText::SetJustification(enum class ETextJustify InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetJustification");

	struct SetJustification_Params {
		enum class ETextJustify InJustification;
	}; SetJustification_Params Params;

	Params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetIsReadOnly
inline void UEditableText::SetIsReadOnly(bool InbIsReadyOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		bool InbIsReadyOnly;
	}; SetIsReadOnly_Params Params;

	Params.InbIsReadyOnly = InbIsReadyOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetIsPassword
inline void UEditableText::SetIsPassword(bool InbIsPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetIsPassword");

	struct SetIsPassword_Params {
		bool InbIsPassword;
	}; SetIsPassword_Params Params;

	Params.InbIsPassword = InbIsPassword;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableText.SetHintText
inline void UEditableText::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.SetHintText");

	struct SetHintText_Params {
		struct FText InHintText;
	}; SetHintText_Params Params;

	Params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature
inline void UEditableText::OnEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature");

	struct OnEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; OnEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature
inline void UEditableText::OnEditableTextChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature");

	struct OnEditableTextChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnEditableTextChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.EditableText.GetText
inline struct FText UEditableText::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableText.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableTextBox.SetText
inline void UEditableTextBox::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetJustification
inline void UEditableTextBox::SetJustification(enum class ETextJustify InJustification) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetJustification");

	struct SetJustification_Params {
		enum class ETextJustify InJustification;
	}; SetJustification_Params Params;

	Params.InJustification = InJustification;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetIsReadOnly
inline void UEditableTextBox::SetIsReadOnly(bool bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		bool bReadOnly;
	}; SetIsReadOnly_Params Params;

	Params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetIsPassword
inline void UEditableTextBox::SetIsPassword(bool bIsPassword) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetIsPassword");

	struct SetIsPassword_Params {
		bool bIsPassword;
	}; SetIsPassword_Params Params;

	Params.bIsPassword = bIsPassword;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetHintText
inline void UEditableTextBox::SetHintText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetHintText");

	struct SetHintText_Params {
		struct FText InText;
	}; SetHintText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.EditableTextBox.SetError
inline void UEditableTextBox::SetError(struct FText InError) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.SetError");

	struct SetError_Params {
		struct FText InError;
	}; SetError_Params Params;

	Params.InError = InError;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature
inline void UEditableTextBox::OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature");

	struct OnEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; OnEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature
inline void UEditableTextBox::OnEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature");

	struct OnEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnEditableTextBoxChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.EditableTextBox.HasError
inline bool UEditableTextBox::HasError() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.HasError");

	struct HasError_Params {
		
		bool ReturnValue;

	}; HasError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableTextBox.GetText
inline struct FText UEditableTextBox::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.EditableTextBox.ClearError
inline void UEditableTextBox::ClearError() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.EditableTextBox.ClearError");

	struct ClearError_Params {
		
	}; ClearError_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ExpandableArea.SetIsExpanded_Animated
inline void UExpandableArea::SetIsExpanded_Animated(bool IsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded_Animated");

	struct SetIsExpanded_Animated_Params {
		bool IsExpanded;
	}; SetIsExpanded_Animated_Params Params;

	Params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ExpandableArea.SetIsExpanded
inline void UExpandableArea::SetIsExpanded(bool IsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.SetIsExpanded");

	struct SetIsExpanded_Params {
		bool IsExpanded;
	}; SetIsExpanded_Params Params;

	Params.IsExpanded = IsExpanded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ExpandableArea.GetIsExpanded
inline bool UExpandableArea::GetIsExpanded() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ExpandableArea.GetIsExpanded");

	struct GetIsExpanded_Params {
		
		bool ReturnValue;

	}; GetIsExpanded_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.GridPanel.SetRowFill
inline void UGridPanel::SetRowFill(int32_t ColumnIndex, float Coefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetRowFill");

	struct SetRowFill_Params {
		int32_t ColumnIndex;
		float Coefficient;
	}; SetRowFill_Params Params;

	Params.ColumnIndex = ColumnIndex;
	Params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridPanel.SetColumnFill
inline void UGridPanel::SetColumnFill(int32_t ColumnIndex, float Coefficient) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.SetColumnFill");

	struct SetColumnFill_Params {
		int32_t ColumnIndex;
		float Coefficient;
	}; SetColumnFill_Params Params;

	Params.ColumnIndex = ColumnIndex;
	Params.Coefficient = Coefficient;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridPanel.AddChildToGrid
inline struct UGridSlot UGridPanel::AddChildToGrid(struct UWidget Content, int32_t InRow, int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridPanel.AddChildToGrid");

	struct AddChildToGrid_Params {
		struct UWidget Content;
		int32_t InRow;
		int32_t InColumn;
		struct UGridSlot ReturnValue;

	}; AddChildToGrid_Params Params;

	Params.Content = Content;
	Params.InRow = InRow;
	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.GridSlot.SetVerticalAlignment
inline void UGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetRowSpan
inline void UGridSlot::SetRowSpan(int32_t InRowSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRowSpan");

	struct SetRowSpan_Params {
		int32_t InRowSpan;
	}; SetRowSpan_Params Params;

	Params.InRowSpan = InRowSpan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetRow
inline void UGridSlot::SetRow(int32_t InRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetRow");

	struct SetRow_Params {
		int32_t InRow;
	}; SetRow_Params Params;

	Params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetPadding
inline void UGridSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetNudge
inline void UGridSlot::SetNudge(struct FVector2D InNudge) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetNudge");

	struct SetNudge_Params {
		struct FVector2D InNudge;
	}; SetNudge_Params Params;

	Params.InNudge = InNudge;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetLayer
inline void UGridSlot::SetLayer(int32_t InLayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetLayer");

	struct SetLayer_Params {
		int32_t InLayer;
	}; SetLayer_Params Params;

	Params.InLayer = InLayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetHorizontalAlignment
inline void UGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetColumnSpan
inline void UGridSlot::SetColumnSpan(int32_t InColumnSpan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumnSpan");

	struct SetColumnSpan_Params {
		int32_t InColumnSpan;
	}; SetColumnSpan_Params Params;

	Params.InColumnSpan = InColumnSpan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.GridSlot.SetColumn
inline void UGridSlot::SetColumn(int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.GridSlot.SetColumn");

	struct SetColumn_Params {
		int32_t InColumn;
	}; SetColumn_Params Params;

	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetVerticalAlignment
inline void UHorizontalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetSize
inline void UHorizontalBoxSlot::SetSize(struct FSlateChildSize InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetSize");

	struct SetSize_Params {
		struct FSlateChildSize InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetPadding
inline void UHorizontalBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.HorizontalBoxSlot.SetHorizontalAlignment
inline void UHorizontalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.HorizontalBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetTextBlockVisibility
inline void UInputKeySelector::SetTextBlockVisibility(enum class ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetTextBlockVisibility");

	struct SetTextBlockVisibility_Params {
		enum class ESlateVisibility InVisibility;
	}; SetTextBlockVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetSelectedKey
inline void UInputKeySelector::SetSelectedKey(struct FInputChord& InSelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetSelectedKey");

	struct SetSelectedKey_Params {
		struct FInputChord& InSelectedKey;
	}; SetSelectedKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InSelectedKey = Params.InSelectedKey;

}

// Function UMG.InputKeySelector.SetNoKeySpecifiedText
inline void UInputKeySelector::SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetNoKeySpecifiedText");

	struct SetNoKeySpecifiedText_Params {
		struct FText InNoKeySpecifiedText;
	}; SetNoKeySpecifiedText_Params Params;

	Params.InNoKeySpecifiedText = InNoKeySpecifiedText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetKeySelectionText
inline void UInputKeySelector::SetKeySelectionText(struct FText InKeySelectionText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetKeySelectionText");

	struct SetKeySelectionText_Params {
		struct FText InKeySelectionText;
	}; SetKeySelectionText_Params Params;

	Params.InKeySelectionText = InKeySelectionText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetEscapeKeys
inline void UInputKeySelector::SetEscapeKeys(struct TArray<struct FKey>& InKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetEscapeKeys");

	struct SetEscapeKeys_Params {
		struct TArray<struct FKey>& InKeys;
	}; SetEscapeKeys_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InKeys = Params.InKeys;

}

// Function UMG.InputKeySelector.SetAllowModifierKeys
inline void UInputKeySelector::SetAllowModifierKeys(bool bInAllowModifierKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowModifierKeys");

	struct SetAllowModifierKeys_Params {
		bool bInAllowModifierKeys;
	}; SetAllowModifierKeys_Params Params;

	Params.bInAllowModifierKeys = bInAllowModifierKeys;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.SetAllowGamepadKeys
inline void UInputKeySelector::SetAllowGamepadKeys(bool bInAllowGamepadKeys) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.SetAllowGamepadKeys");

	struct SetAllowGamepadKeys_Params {
		bool bInAllowGamepadKeys;
	}; SetAllowGamepadKeys_Params Params;

	Params.bInAllowGamepadKeys = bInAllowGamepadKeys;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature
inline void UInputKeySelector::OnKeySelected__DelegateSignature(struct FInputChord SelectedKey) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature");

	struct OnKeySelected__DelegateSignature_Params {
		struct FInputChord SelectedKey;
	}; OnKeySelected__DelegateSignature_Params Params;

	Params.SelectedKey = SelectedKey;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature
inline void UInputKeySelector::OnIsSelectingKeyChanged__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature");

	struct OnIsSelectingKeyChanged__DelegateSignature_Params {
		
	}; OnIsSelectingKeyChanged__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InputKeySelector.GetIsSelectingKey
inline bool UInputKeySelector::GetIsSelectingKey() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InputKeySelector.GetIsSelectingKey");

	struct GetIsSelectingKey_Params {
		
		bool ReturnValue;

	}; GetIsSelectingKey_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.InvalidationBox.SetCanCache
inline void UInvalidationBox::SetCanCache(bool CanCache) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.SetCanCache");

	struct SetCanCache_Params {
		bool CanCache;
	}; SetCanCache_Params Params;

	Params.CanCache = CanCache;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InvalidationBox.InvalidateCache
inline void UInvalidationBox::InvalidateCache() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.InvalidateCache");

	struct InvalidateCache_Params {
		
	}; InvalidateCache_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.InvalidationBox.GetCanCache
inline bool UInvalidationBox::GetCanCache() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.InvalidationBox.GetCanCache");

	struct GetCanCache_Params {
		
		bool ReturnValue;

	}; GetCanCache_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListViewBase.SetWheelScrollMultiplier
inline void UListViewBase::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetWheelScrollMultiplier");

	struct SetWheelScrollMultiplier_Params {
		float NewWheelScrollMultiplier;
	}; SetWheelScrollMultiplier_Params Params;

	Params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.SetScrollOffset
inline void UListViewBase::SetScrollOffset(float InScrollOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollOffset");

	struct SetScrollOffset_Params {
		float InScrollOffset;
	}; SetScrollOffset_Params Params;

	Params.InScrollOffset = InScrollOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.SetScrollbarVisibility
inline void UListViewBase::SetScrollbarVisibility(enum class ESlateVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.SetScrollbarVisibility");

	struct SetScrollbarVisibility_Params {
		enum class ESlateVisibility InVisibility;
	}; SetScrollbarVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.ScrollToTop
inline void UListViewBase::ScrollToTop() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToTop");

	struct ScrollToTop_Params {
		
	}; ScrollToTop_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.ScrollToBottom
inline void UListViewBase::ScrollToBottom() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.ScrollToBottom");

	struct ScrollToBottom_Params {
		
	}; ScrollToBottom_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.RequestRefresh
inline void UListViewBase::RequestRefresh() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RequestRefresh");

	struct RequestRefresh_Params {
		
	}; RequestRefresh_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.RegenerateAllEntries
inline void UListViewBase::RegenerateAllEntries() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.RegenerateAllEntries");

	struct RegenerateAllEntries_Params {
		
	}; RegenerateAllEntries_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListViewBase.GetDisplayedEntryWidgets
inline struct TArray<struct UUserWidget> UListViewBase::GetDisplayedEntryWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListViewBase.GetDisplayedEntryWidgets");

	struct GetDisplayedEntryWidgets_Params {
		
		struct TArray<struct UUserWidget> ReturnValue;

	}; GetDisplayedEntryWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.SetSelectionMode
inline void UListView::SetSelectionMode(enum class ESelectionMode SelectionMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectionMode");

	struct SetSelectionMode_Params {
		enum class ESelectionMode SelectionMode;
	}; SetSelectionMode_Params Params;

	Params.SelectionMode = SelectionMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.SetSelectedIndex
inline void UListView::SetSelectedIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.SetSelectedIndex");

	struct SetSelectedIndex_Params {
		int32_t Index;
	}; SetSelectedIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.ScrollIndexIntoView
inline void UListView::ScrollIndexIntoView(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ScrollIndexIntoView");

	struct ScrollIndexIntoView_Params {
		int32_t Index;
	}; ScrollIndexIntoView_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.RemoveItem
inline void UListView::RemoveItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.RemoveItem");

	struct RemoveItem_Params {
		struct Object Item;
	}; RemoveItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.NavigateToIndex
inline void UListView::NavigateToIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.NavigateToIndex");

	struct NavigateToIndex_Params {
		int32_t Index;
	}; NavigateToIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.IsRefreshPending
inline bool UListView::IsRefreshPending() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.IsRefreshPending");

	struct IsRefreshPending_Params {
		
		bool ReturnValue;

	}; IsRefreshPending_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetNumItems
inline int32_t UListView::GetNumItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetNumItems");

	struct GetNumItems_Params {
		
		int32_t ReturnValue;

	}; GetNumItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetListItems
inline struct TArray<struct Object> UListView::GetListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetListItems");

	struct GetListItems_Params {
		
		struct TArray<struct Object> ReturnValue;

	}; GetListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetItemAt
inline struct Object UListView::GetItemAt(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetItemAt");

	struct GetItemAt_Params {
		int32_t Index;
		struct Object ReturnValue;

	}; GetItemAt_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.GetIndexForItem
inline int32_t UListView::GetIndexForItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.GetIndexForItem");

	struct GetIndexForItem_Params {
		struct Object Item;
		int32_t ReturnValue;

	}; GetIndexForItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.ClearListItems
inline void UListView::ClearListItems() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.ClearListItems");

	struct ClearListItems_Params {
		
	}; ClearListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_SetSelectedItem
inline void UListView::BP_SetSelectedItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetSelectedItem");

	struct BP_SetSelectedItem_Params {
		struct Object Item;
	}; BP_SetSelectedItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_SetListItems
inline void UListView::BP_SetListItems(struct TArray<struct Object>& InListItems) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetListItems");

	struct BP_SetListItems_Params {
		struct TArray<struct Object>& InListItems;
	}; BP_SetListItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InListItems = Params.InListItems;

}

// Function UMG.ListView.BP_SetItemSelection
inline void UListView::BP_SetItemSelection(struct Object Item, bool bSelected) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_SetItemSelection");

	struct BP_SetItemSelection_Params {
		struct Object Item;
		bool bSelected;
	}; BP_SetItemSelection_Params Params;

	Params.Item = Item;
	Params.bSelected = bSelected;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_ScrollItemIntoView
inline void UListView::BP_ScrollItemIntoView(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ScrollItemIntoView");

	struct BP_ScrollItemIntoView_Params {
		struct Object Item;
	}; BP_ScrollItemIntoView_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_NavigateToItem
inline void UListView::BP_NavigateToItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_NavigateToItem");

	struct BP_NavigateToItem_Params {
		struct Object Item;
	}; BP_NavigateToItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_IsItemVisible
inline bool UListView::BP_IsItemVisible(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_IsItemVisible");

	struct BP_IsItemVisible_Params {
		struct Object Item;
		bool ReturnValue;

	}; BP_IsItemVisible_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.BP_GetSelectedItems
inline bool UListView::BP_GetSelectedItems(struct TArray<struct Object>& Items) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItems");

	struct BP_GetSelectedItems_Params {
		struct TArray<struct Object>& Items;
		bool ReturnValue;

	}; BP_GetSelectedItems_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Items = Params.Items;


	return params.ReturnValue;
}

// Function UMG.ListView.BP_GetSelectedItem
inline struct Object UListView::BP_GetSelectedItem() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetSelectedItem");

	struct BP_GetSelectedItem_Params {
		
		struct Object ReturnValue;

	}; BP_GetSelectedItem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.BP_GetNumItemsSelected
inline int32_t UListView::BP_GetNumItemsSelected() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_GetNumItemsSelected");

	struct BP_GetNumItemsSelected_Params {
		
		int32_t ReturnValue;

	}; BP_GetNumItemsSelected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ListView.BP_ClearSelection
inline void UListView::BP_ClearSelection() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_ClearSelection");

	struct BP_ClearSelection_Params {
		
	}; BP_ClearSelection_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.BP_CancelScrollIntoView
inline void UListView::BP_CancelScrollIntoView() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.BP_CancelScrollIntoView");

	struct BP_CancelScrollIntoView_Params {
		
	}; BP_CancelScrollIntoView_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ListView.AddItem
inline void UListView::AddItem(struct Object Item) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ListView.AddItem");

	struct AddItem_Params {
		struct Object Item;
	}; AddItem_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.ToggleOpen
inline void UMenuAnchor::ToggleOpen(bool bFocusOnOpen) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ToggleOpen");

	struct ToggleOpen_Params {
		bool bFocusOnOpen;
	}; ToggleOpen_Params Params;

	Params.bFocusOnOpen = bFocusOnOpen;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.ShouldOpenDueToClick
inline bool UMenuAnchor::ShouldOpenDueToClick() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.ShouldOpenDueToClick");

	struct ShouldOpenDueToClick_Params {
		
		bool ReturnValue;

	}; ShouldOpenDueToClick_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.SetPlacement
inline void UMenuAnchor::SetPlacement(enum class EMenuPlacement InPlacement) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.SetPlacement");

	struct SetPlacement_Params {
		enum class EMenuPlacement InPlacement;
	}; SetPlacement_Params Params;

	Params.InPlacement = InPlacement;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.Open
inline void UMenuAnchor::Open(bool bFocusMenu) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Open");

	struct Open_Params {
		bool bFocusMenu;
	}; Open_Params Params;

	Params.bFocusMenu = bFocusMenu;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.IsOpen
inline bool UMenuAnchor::IsOpen() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.IsOpen");

	struct IsOpen_Params {
		
		bool ReturnValue;

	}; IsOpen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.HasOpenSubMenus
inline bool UMenuAnchor::HasOpenSubMenus() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.HasOpenSubMenus");

	struct HasOpenSubMenus_Params {
		
		bool ReturnValue;

	}; HasOpenSubMenus_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.GetMenuPosition
inline struct FVector2D UMenuAnchor::GetMenuPosition() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.GetMenuPosition");

	struct GetMenuPosition_Params {
		
		struct FVector2D ReturnValue;

	}; GetMenuPosition_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MenuAnchor.FitInWindow
inline void UMenuAnchor::FitInWindow(bool bFit) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.FitInWindow");

	struct FitInWindow_Params {
		bool bFit;
	}; FitInWindow_Params Params;

	Params.bFit = bFit;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MenuAnchor.Close
inline void UMenuAnchor::Close() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MenuAnchor.Close");

	struct Close_Params {
		
	}; Close_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableText.SetWidgetStyle
inline void UMultiLineEditableText::SetWidgetStyle(struct FTextBlockStyle& InWidgetStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetWidgetStyle");

	struct SetWidgetStyle_Params {
		struct FTextBlockStyle& InWidgetStyle;
	}; SetWidgetStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InWidgetStyle = Params.InWidgetStyle;

}

// Function UMG.MultiLineEditableText.SetText
inline void UMultiLineEditableText::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableText.SetIsReadOnly
inline void UMultiLineEditableText::SetIsReadOnly(bool bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		bool bReadOnly;
	}; SetIsReadOnly_Params Params;

	Params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableText.SetHintText
inline void UMultiLineEditableText::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.SetHintText");

	struct SetHintText_Params {
		struct FText InHintText;
	}; SetHintText_Params Params;

	Params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature
inline void UMultiLineEditableText::OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature");

	struct OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; OnMultiLineEditableTextCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature
inline void UMultiLineEditableText::OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature");

	struct OnMultiLineEditableTextChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnMultiLineEditableTextChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.MultiLineEditableText.GetText
inline struct FText UMultiLineEditableText::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MultiLineEditableText.GetHintText
inline struct FText UMultiLineEditableText::GetHintText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableText.GetHintText");

	struct GetHintText_Params {
		
		struct FText ReturnValue;

	}; GetHintText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MultiLineEditableTextBox.SetTextStyle
inline void UMultiLineEditableTextBox::SetTextStyle(struct FTextBlockStyle& InTextStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetTextStyle");

	struct SetTextStyle_Params {
		struct FTextBlockStyle& InTextStyle;
	}; SetTextStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InTextStyle = Params.InTextStyle;

}

// Function UMG.MultiLineEditableTextBox.SetText
inline void UMultiLineEditableTextBox::SetText(struct FText InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetText");

	struct SetText_Params {
		struct FText InText;
	}; SetText_Params Params;

	Params.InText = InText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableTextBox.SetIsReadOnly
inline void UMultiLineEditableTextBox::SetIsReadOnly(bool bReadOnly) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetIsReadOnly");

	struct SetIsReadOnly_Params {
		bool bReadOnly;
	}; SetIsReadOnly_Params Params;

	Params.bReadOnly = bReadOnly;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableTextBox.SetHintText
inline void UMultiLineEditableTextBox::SetHintText(struct FText InHintText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetHintText");

	struct SetHintText_Params {
		struct FText InHintText;
	}; SetHintText_Params Params;

	Params.InHintText = InHintText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.MultiLineEditableTextBox.SetError
inline void UMultiLineEditableTextBox::SetError(struct FText InError) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.SetError");

	struct SetError_Params {
		struct FText InError;
	}; SetError_Params Params;

	Params.InError = InError;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature
inline void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText& Text, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature");

	struct OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params {
		struct FText& Text;
		enum class ETextCommit CommitMethod;
	}; OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature_Params Params;

	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature
inline void UMultiLineEditableTextBox::OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature");

	struct OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params {
		struct FText& Text;
	}; OnMultiLineEditableTextBoxChangedEvent__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// Function UMG.MultiLineEditableTextBox.GetText
inline struct FText UMultiLineEditableTextBox::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.MultiLineEditableTextBox.GetHintText
inline struct FText UMultiLineEditableTextBox::GetHintText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.MultiLineEditableTextBox.GetHintText");

	struct GetHintText_Params {
		
		struct FText ReturnValue;

	}; GetHintText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.OverlaySlot.SetVerticalAlignment
inline void UOverlaySlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.OverlaySlot.SetPadding
inline void UOverlaySlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.OverlaySlot.SetHorizontalAlignment
inline void UOverlaySlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.OverlaySlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ProgressBar.SetPercent
inline void UProgressBar::SetPercent(float InPercent) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetPercent");

	struct SetPercent_Params {
		float InPercent;
	}; SetPercent_Params Params;

	Params.InPercent = InPercent;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ProgressBar.SetIsMarquee
inline void UProgressBar::SetIsMarquee(bool InbIsMarquee) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetIsMarquee");

	struct SetIsMarquee_Params {
		bool InbIsMarquee;
	}; SetIsMarquee_Params Params;

	Params.InbIsMarquee = InbIsMarquee;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ProgressBar.SetFillColorAndOpacity
inline void UProgressBar::SetFillColorAndOpacity(struct FLinearColor InColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ProgressBar.SetFillColorAndOpacity");

	struct SetFillColorAndOpacity_Params {
		struct FLinearColor InColor;
	}; SetFillColorAndOpacity_Params Params;

	Params.InColor = InColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.SetTextureParameter
inline void URetainerBox::SetTextureParameter(struct FName TextureParameter) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetTextureParameter");

	struct SetTextureParameter_Params {
		struct FName TextureParameter;
	}; SetTextureParameter_Params Params;

	Params.TextureParameter = TextureParameter;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.SetRenderingPhase
inline void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetRenderingPhase");

	struct SetRenderingPhase_Params {
		int32_t RenderPhase;
		int32_t TotalPhases;
	}; SetRenderingPhase_Params Params;

	Params.RenderPhase = RenderPhase;
	Params.TotalPhases = TotalPhases;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.SetEffectMaterial
inline void URetainerBox::SetEffectMaterial(struct UMaterialInterface EffectMaterial) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.SetEffectMaterial");

	struct SetEffectMaterial_Params {
		struct UMaterialInterface EffectMaterial;
	}; SetEffectMaterial_Params Params;

	Params.EffectMaterial = EffectMaterial;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.RequestRender
inline void URetainerBox::RequestRender() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.RequestRender");

	struct RequestRender_Params {
		
	}; RequestRender_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RetainerBox.GetEffectMaterial
inline struct UMaterialInstanceDynamic URetainerBox::GetEffectMaterial() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RetainerBox.GetEffectMaterial");

	struct GetEffectMaterial_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetEffectMaterial_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.RichTextBlock.SetTextStyleSet
inline void URichTextBlock::SetTextStyleSet(struct UDataTable NewTextStyleSet) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetTextStyleSet");

	struct SetTextStyleSet_Params {
		struct UDataTable NewTextStyleSet;
	}; SetTextStyleSet_Params Params;

	Params.NewTextStyleSet = NewTextStyleSet;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetText
inline void URichTextBlock::SetText(struct FText& InText) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetText");

	struct SetText_Params {
		struct FText& InText;
	}; SetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InText = Params.InText;

}

// Function UMG.RichTextBlock.SetMinDesiredWidth
inline void URichTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetMinDesiredWidth");

	struct SetMinDesiredWidth_Params {
		float InMinDesiredWidth;
	}; SetMinDesiredWidth_Params Params;

	Params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultTextStyle
inline void URichTextBlock::SetDefaultTextStyle(struct FTextBlockStyle& InDefaultTextStyle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultTextStyle");

	struct SetDefaultTextStyle_Params {
		struct FTextBlockStyle& InDefaultTextStyle;
	}; SetDefaultTextStyle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InDefaultTextStyle = Params.InDefaultTextStyle;

}

// Function UMG.RichTextBlock.SetDefaultStrikeBrush
inline void URichTextBlock::SetDefaultStrikeBrush(struct FSlateBrush& InStrikeBrush) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultStrikeBrush");

	struct SetDefaultStrikeBrush_Params {
		struct FSlateBrush& InStrikeBrush;
	}; SetDefaultStrikeBrush_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InStrikeBrush = Params.InStrikeBrush;

}

// Function UMG.RichTextBlock.SetDefaultShadowOffset
inline void URichTextBlock::SetDefaultShadowOffset(struct FVector2D InShadowOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowOffset");

	struct SetDefaultShadowOffset_Params {
		struct FVector2D InShadowOffset;
	}; SetDefaultShadowOffset_Params Params;

	Params.InShadowOffset = InShadowOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity
inline void URichTextBlock::SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity");

	struct SetDefaultShadowColorAndOpacity_Params {
		struct FLinearColor InShadowColorAndOpacity;
	}; SetDefaultShadowColorAndOpacity_Params Params;

	Params.InShadowColorAndOpacity = InShadowColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultFont
inline void URichTextBlock::SetDefaultFont(struct FSlateFontInfo InFontInfo) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultFont");

	struct SetDefaultFont_Params {
		struct FSlateFontInfo InFontInfo;
	}; SetDefaultFont_Params Params;

	Params.InFontInfo = InFontInfo;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetDefaultColorAndOpacity
inline void URichTextBlock::SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetDefaultColorAndOpacity");

	struct SetDefaultColorAndOpacity_Params {
		struct FSlateColor InColorAndOpacity;
	}; SetDefaultColorAndOpacity_Params Params;

	Params.InColorAndOpacity = InColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.SetAutoWrapText
inline void URichTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.SetAutoWrapText");

	struct SetAutoWrapText_Params {
		bool InAutoTextWrap;
	}; SetAutoWrapText_Params Params;

	Params.InAutoTextWrap = InAutoTextWrap;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.RichTextBlock.GetText
inline struct FText URichTextBlock::GetText() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetText");

	struct GetText_Params {
		
		struct FText ReturnValue;

	}; GetText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.RichTextBlock.GetDecoratorByClass
inline struct URichTextBlockDecorator URichTextBlock::GetDecoratorByClass(struct UClass* DecoratorClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.GetDecoratorByClass");

	struct GetDecoratorByClass_Params {
		struct UClass* DecoratorClass;
		struct URichTextBlockDecorator ReturnValue;

	}; GetDecoratorByClass_Params Params;

	Params.DecoratorClass = DecoratorClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides
inline void URichTextBlock::ClearAllDefaultStyleOverrides() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides");

	struct ClearAllDefaultStyleOverrides_Params {
		
	}; ClearAllDefaultStyleOverrides_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SafeZone.SetSidesToPad
inline void USafeZone::SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SafeZone.SetSidesToPad");

	struct SetSidesToPad_Params {
		bool InPadLeft;
		bool InPadRight;
		bool InPadTop;
		bool InPadBottom;
	}; SetSidesToPad_Params Params;

	Params.InPadLeft = InPadLeft;
	Params.InPadRight = InPadRight;
	Params.InPadTop = InPadTop;
	Params.InPadBottom = InPadBottom;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetUserSpecifiedScale
inline void UScaleBox::SetUserSpecifiedScale(float InUserSpecifiedScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetUserSpecifiedScale");

	struct SetUserSpecifiedScale_Params {
		float InUserSpecifiedScale;
	}; SetUserSpecifiedScale_Params Params;

	Params.InUserSpecifiedScale = InUserSpecifiedScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetStretchDirection
inline void UScaleBox::SetStretchDirection(enum class EStretchDirection InStretchDirection) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretchDirection");

	struct SetStretchDirection_Params {
		enum class EStretchDirection InStretchDirection;
	}; SetStretchDirection_Params Params;

	Params.InStretchDirection = InStretchDirection;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetStretch
inline void UScaleBox::SetStretch(enum class EStretch InStretch) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetStretch");

	struct SetStretch_Params {
		enum class EStretch InStretch;
	}; SetStretch_Params Params;

	Params.InStretch = InStretch;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBox.SetIgnoreInheritedScale
inline void UScaleBox::SetIgnoreInheritedScale(bool bInIgnoreInheritedScale) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBox.SetIgnoreInheritedScale");

	struct SetIgnoreInheritedScale_Params {
		bool bInIgnoreInheritedScale;
	}; SetIgnoreInheritedScale_Params Params;

	Params.bInIgnoreInheritedScale = bInIgnoreInheritedScale;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBoxSlot.SetVerticalAlignment
inline void UScaleBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBoxSlot.SetPadding
inline void UScaleBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScaleBoxSlot.SetHorizontalAlignment
inline void UScaleBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScaleBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBar.SetState
inline void UScrollBar::SetState(float InOffsetFraction, float InThumbSizeFraction) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBar.SetState");

	struct SetState_Params {
		float InOffsetFraction;
		float InThumbSizeFraction;
	}; SetState_Params Params;

	Params.InOffsetFraction = InOffsetFraction;
	Params.InThumbSizeFraction = InThumbSizeFraction;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetWheelScrollMultiplier
inline void UScrollBox::SetWheelScrollMultiplier(float NewWheelScrollMultiplier) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetWheelScrollMultiplier");

	struct SetWheelScrollMultiplier_Params {
		float NewWheelScrollMultiplier;
	}; SetWheelScrollMultiplier_Params Params;

	Params.NewWheelScrollMultiplier = NewWheelScrollMultiplier;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetScrollOffset
inline void UScrollBox::SetScrollOffset(float NewScrollOffset) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollOffset");

	struct SetScrollOffset_Params {
		float NewScrollOffset;
	}; SetScrollOffset_Params Params;

	Params.NewScrollOffset = NewScrollOffset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetScrollbarVisibility
inline void UScrollBox::SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarVisibility");

	struct SetScrollbarVisibility_Params {
		enum class ESlateVisibility NewScrollBarVisibility;
	}; SetScrollbarVisibility_Params Params;

	Params.NewScrollBarVisibility = NewScrollBarVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetScrollbarThickness
inline void UScrollBox::SetScrollbarThickness(struct FVector2D& NewScrollbarThickness) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarThickness");

	struct SetScrollbarThickness_Params {
		struct FVector2D& NewScrollbarThickness;
	}; SetScrollbarThickness_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewScrollbarThickness = Params.NewScrollbarThickness;

}

// Function UMG.ScrollBox.SetScrollbarPadding
inline void UScrollBox::SetScrollbarPadding(struct FMargin& NewScrollbarPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetScrollbarPadding");

	struct SetScrollbarPadding_Params {
		struct FMargin& NewScrollbarPadding;
	}; SetScrollbarPadding_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	NewScrollbarPadding = Params.NewScrollbarPadding;

}

// Function UMG.ScrollBox.SetOrientation
inline void UScrollBox::SetOrientation(enum class EOrientation NewOrientation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetOrientation");

	struct SetOrientation_Params {
		enum class EOrientation NewOrientation;
	}; SetOrientation_Params Params;

	Params.NewOrientation = NewOrientation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetConsumeMouseWheel
inline void UScrollBox::SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetConsumeMouseWheel");

	struct SetConsumeMouseWheel_Params {
		enum class EConsumeMouseWheel NewConsumeMouseWheel;
	}; SetConsumeMouseWheel_Params Params;

	Params.NewConsumeMouseWheel = NewConsumeMouseWheel;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetAnimateWheelScrolling
inline void UScrollBox::SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAnimateWheelScrolling");

	struct SetAnimateWheelScrolling_Params {
		bool bShouldAnimateWheelScrolling;
	}; SetAnimateWheelScrolling_Params Params;

	Params.bShouldAnimateWheelScrolling = bShouldAnimateWheelScrolling;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetAlwaysShowScrollbar
inline void UScrollBox::SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAlwaysShowScrollbar");

	struct SetAlwaysShowScrollbar_Params {
		bool NewAlwaysShowScrollbar;
	}; SetAlwaysShowScrollbar_Params Params;

	Params.NewAlwaysShowScrollbar = NewAlwaysShowScrollbar;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.SetAllowOverscroll
inline void UScrollBox::SetAllowOverscroll(bool NewAllowOverscroll) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.SetAllowOverscroll");

	struct SetAllowOverscroll_Params {
		bool NewAllowOverscroll;
	}; SetAllowOverscroll_Params Params;

	Params.NewAllowOverscroll = NewAllowOverscroll;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.ScrollWidgetIntoView
inline void UScrollBox::ScrollWidgetIntoView(struct UWidget WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollWidgetIntoView");

	struct ScrollWidgetIntoView_Params {
		struct UWidget WidgetToFind;
		bool AnimateScroll;
		enum class EDescendantScrollDestination ScrollDestination;
		float Padding;
	}; ScrollWidgetIntoView_Params Params;

	Params.WidgetToFind = WidgetToFind;
	Params.AnimateScroll = AnimateScroll;
	Params.ScrollDestination = ScrollDestination;
	Params.Padding = Padding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.ScrollToStart
inline void UScrollBox::ScrollToStart() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToStart");

	struct ScrollToStart_Params {
		
	}; ScrollToStart_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.ScrollToEnd
inline void UScrollBox::ScrollToEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.ScrollToEnd");

	struct ScrollToEnd_Params {
		
	}; ScrollToEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBox.GetViewOffsetFraction
inline float UScrollBox::GetViewOffsetFraction() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetViewOffsetFraction");

	struct GetViewOffsetFraction_Params {
		
		float ReturnValue;

	}; GetViewOffsetFraction_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ScrollBox.GetScrollOffsetOfEnd
inline float UScrollBox::GetScrollOffsetOfEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffsetOfEnd");

	struct GetScrollOffsetOfEnd_Params {
		
		float ReturnValue;

	}; GetScrollOffsetOfEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ScrollBox.GetScrollOffset
inline float UScrollBox::GetScrollOffset() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.GetScrollOffset");

	struct GetScrollOffset_Params {
		
		float ReturnValue;

	}; GetScrollOffset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.ScrollBox.EndInertialScrolling
inline void UScrollBox::EndInertialScrolling() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBox.EndInertialScrolling");

	struct EndInertialScrolling_Params {
		
	}; EndInertialScrolling_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBoxSlot.SetVerticalAlignment
inline void UScrollBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBoxSlot.SetPadding
inline void UScrollBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.ScrollBoxSlot.SetHorizontalAlignment
inline void UScrollBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.ScrollBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetWidthOverride
inline void USizeBox::SetWidthOverride(float InWidthOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetWidthOverride");

	struct SetWidthOverride_Params {
		float InWidthOverride;
	}; SetWidthOverride_Params Params;

	Params.InWidthOverride = InWidthOverride;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMinDesiredWidth
inline void USizeBox::SetMinDesiredWidth(float InMinDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredWidth");

	struct SetMinDesiredWidth_Params {
		float InMinDesiredWidth;
	}; SetMinDesiredWidth_Params Params;

	Params.InMinDesiredWidth = InMinDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMinDesiredHeight
inline void USizeBox::SetMinDesiredHeight(float InMinDesiredHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinDesiredHeight");

	struct SetMinDesiredHeight_Params {
		float InMinDesiredHeight;
	}; SetMinDesiredHeight_Params Params;

	Params.InMinDesiredHeight = InMinDesiredHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMinAspectRatio
inline void USizeBox::SetMinAspectRatio(float InMinAspectRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMinAspectRatio");

	struct SetMinAspectRatio_Params {
		float InMinAspectRatio;
	}; SetMinAspectRatio_Params Params;

	Params.InMinAspectRatio = InMinAspectRatio;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMaxDesiredWidth
inline void USizeBox::SetMaxDesiredWidth(float InMaxDesiredWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredWidth");

	struct SetMaxDesiredWidth_Params {
		float InMaxDesiredWidth;
	}; SetMaxDesiredWidth_Params Params;

	Params.InMaxDesiredWidth = InMaxDesiredWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMaxDesiredHeight
inline void USizeBox::SetMaxDesiredHeight(float InMaxDesiredHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxDesiredHeight");

	struct SetMaxDesiredHeight_Params {
		float InMaxDesiredHeight;
	}; SetMaxDesiredHeight_Params Params;

	Params.InMaxDesiredHeight = InMaxDesiredHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetMaxAspectRatio
inline void USizeBox::SetMaxAspectRatio(float InMaxAspectRatio) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetMaxAspectRatio");

	struct SetMaxAspectRatio_Params {
		float InMaxAspectRatio;
	}; SetMaxAspectRatio_Params Params;

	Params.InMaxAspectRatio = InMaxAspectRatio;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.SetHeightOverride
inline void USizeBox::SetHeightOverride(float InHeightOverride) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.SetHeightOverride");

	struct SetHeightOverride_Params {
		float InHeightOverride;
	}; SetHeightOverride_Params Params;

	Params.InHeightOverride = InHeightOverride;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearWidthOverride
inline void USizeBox::ClearWidthOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearWidthOverride");

	struct ClearWidthOverride_Params {
		
	}; ClearWidthOverride_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMinDesiredWidth
inline void USizeBox::ClearMinDesiredWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredWidth");

	struct ClearMinDesiredWidth_Params {
		
	}; ClearMinDesiredWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMinDesiredHeight
inline void USizeBox::ClearMinDesiredHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinDesiredHeight");

	struct ClearMinDesiredHeight_Params {
		
	}; ClearMinDesiredHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMinAspectRatio
inline void USizeBox::ClearMinAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMinAspectRatio");

	struct ClearMinAspectRatio_Params {
		
	}; ClearMinAspectRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMaxDesiredWidth
inline void USizeBox::ClearMaxDesiredWidth() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredWidth");

	struct ClearMaxDesiredWidth_Params {
		
	}; ClearMaxDesiredWidth_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMaxDesiredHeight
inline void USizeBox::ClearMaxDesiredHeight() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxDesiredHeight");

	struct ClearMaxDesiredHeight_Params {
		
	}; ClearMaxDesiredHeight_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearMaxAspectRatio
inline void USizeBox::ClearMaxAspectRatio() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearMaxAspectRatio");

	struct ClearMaxAspectRatio_Params {
		
	}; ClearMaxAspectRatio_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBox.ClearHeightOverride
inline void USizeBox::ClearHeightOverride() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBox.ClearHeightOverride");

	struct ClearHeightOverride_Params {
		
	}; ClearHeightOverride_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBoxSlot.SetVerticalAlignment
inline void USizeBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBoxSlot.SetPadding
inline void USizeBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SizeBoxSlot.SetHorizontalAlignment
inline void USizeBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SizeBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Spacer.SetSize
inline void USpacer::SetSize(struct FVector2D InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Spacer.SetSize");

	struct SetSize_Params {
		struct FVector2D InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetValue
inline void USpinBox::SetValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetValue");

	struct SetValue_Params {
		float NewValue;
	}; SetValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMinValue
inline void USpinBox::SetMinValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinValue");

	struct SetMinValue_Params {
		float NewValue;
	}; SetMinValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMinSliderValue
inline void USpinBox::SetMinSliderValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinSliderValue");

	struct SetMinSliderValue_Params {
		float NewValue;
	}; SetMinSliderValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMinFractionalDigits
inline void USpinBox::SetMinFractionalDigits(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMinFractionalDigits");

	struct SetMinFractionalDigits_Params {
		int32_t NewValue;
	}; SetMinFractionalDigits_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMaxValue
inline void USpinBox::SetMaxValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxValue");

	struct SetMaxValue_Params {
		float NewValue;
	}; SetMaxValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMaxSliderValue
inline void USpinBox::SetMaxSliderValue(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxSliderValue");

	struct SetMaxSliderValue_Params {
		float NewValue;
	}; SetMaxSliderValue_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetMaxFractionalDigits
inline void USpinBox::SetMaxFractionalDigits(int32_t NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetMaxFractionalDigits");

	struct SetMaxFractionalDigits_Params {
		int32_t NewValue;
	}; SetMaxFractionalDigits_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetForegroundColor
inline void USpinBox::SetForegroundColor(struct FSlateColor InForegroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetForegroundColor");

	struct SetForegroundColor_Params {
		struct FSlateColor InForegroundColor;
	}; SetForegroundColor_Params Params;

	Params.InForegroundColor = InForegroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetDelta
inline void USpinBox::SetDelta(float NewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetDelta");

	struct SetDelta_Params {
		float NewValue;
	}; SetDelta_Params Params;

	Params.NewValue = NewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.SetAlwaysUsesDeltaSnap
inline void USpinBox::SetAlwaysUsesDeltaSnap(bool bNewValue) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.SetAlwaysUsesDeltaSnap");

	struct SetAlwaysUsesDeltaSnap_Params {
		bool bNewValue;
	}; SetAlwaysUsesDeltaSnap_Params Params;

	Params.bNewValue = bNewValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature
inline void USpinBox::OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature");

	struct OnSpinBoxValueCommittedEvent__DelegateSignature_Params {
		float InValue;
		enum class ETextCommit CommitMethod;
	}; OnSpinBoxValueCommittedEvent__DelegateSignature_Params Params;

	Params.InValue = InValue;
	Params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature
inline void USpinBox::OnSpinBoxValueChangedEvent__DelegateSignature(float InValue) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature");

	struct OnSpinBoxValueChangedEvent__DelegateSignature_Params {
		float InValue;
	}; OnSpinBoxValueChangedEvent__DelegateSignature_Params Params;

	Params.InValue = InValue;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature
inline void USpinBox::OnSpinBoxBeginSliderMovement__DelegateSignature() {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature");

	struct OnSpinBoxBeginSliderMovement__DelegateSignature_Params {
		
	}; OnSpinBoxBeginSliderMovement__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.GetValue
inline float USpinBox::GetValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetValue");

	struct GetValue_Params {
		
		float ReturnValue;

	}; GetValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMinValue
inline float USpinBox::GetMinValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinValue");

	struct GetMinValue_Params {
		
		float ReturnValue;

	}; GetMinValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMinSliderValue
inline float USpinBox::GetMinSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinSliderValue");

	struct GetMinSliderValue_Params {
		
		float ReturnValue;

	}; GetMinSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMinFractionalDigits
inline int32_t USpinBox::GetMinFractionalDigits() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMinFractionalDigits");

	struct GetMinFractionalDigits_Params {
		
		int32_t ReturnValue;

	}; GetMinFractionalDigits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMaxValue
inline float USpinBox::GetMaxValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxValue");

	struct GetMaxValue_Params {
		
		float ReturnValue;

	}; GetMaxValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMaxSliderValue
inline float USpinBox::GetMaxSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxSliderValue");

	struct GetMaxSliderValue_Params {
		
		float ReturnValue;

	}; GetMaxSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetMaxFractionalDigits
inline int32_t USpinBox::GetMaxFractionalDigits() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetMaxFractionalDigits");

	struct GetMaxFractionalDigits_Params {
		
		int32_t ReturnValue;

	}; GetMaxFractionalDigits_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetDelta
inline float USpinBox::GetDelta() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetDelta");

	struct GetDelta_Params {
		
		float ReturnValue;

	}; GetDelta_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.GetAlwaysUsesDeltaSnap
inline bool USpinBox::GetAlwaysUsesDeltaSnap() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.GetAlwaysUsesDeltaSnap");

	struct GetAlwaysUsesDeltaSnap_Params {
		
		bool ReturnValue;

	}; GetAlwaysUsesDeltaSnap_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.SpinBox.ClearMinValue
inline void USpinBox::ClearMinValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinValue");

	struct ClearMinValue_Params {
		
	}; ClearMinValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.ClearMinSliderValue
inline void USpinBox::ClearMinSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMinSliderValue");

	struct ClearMinSliderValue_Params {
		
	}; ClearMinSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.ClearMaxValue
inline void USpinBox::ClearMaxValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxValue");

	struct ClearMaxValue_Params {
		
	}; ClearMaxValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.SpinBox.ClearMaxSliderValue
inline void USpinBox::ClearMaxSliderValue() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.SpinBox.ClearMaxSliderValue");

	struct ClearMaxSliderValue_Params {
		
	}; ClearMaxSliderValue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetNumberOfPieces
inline void UThrobber::SetNumberOfPieces(int32_t InNumberOfPieces) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetNumberOfPieces");

	struct SetNumberOfPieces_Params {
		int32_t InNumberOfPieces;
	}; SetNumberOfPieces_Params Params;

	Params.InNumberOfPieces = InNumberOfPieces;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetAnimateVertically
inline void UThrobber::SetAnimateVertically(bool bInAnimateVertically) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateVertically");

	struct SetAnimateVertically_Params {
		bool bInAnimateVertically;
	}; SetAnimateVertically_Params Params;

	Params.bInAnimateVertically = bInAnimateVertically;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetAnimateOpacity
inline void UThrobber::SetAnimateOpacity(bool bInAnimateOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateOpacity");

	struct SetAnimateOpacity_Params {
		bool bInAnimateOpacity;
	}; SetAnimateOpacity_Params Params;

	Params.bInAnimateOpacity = bInAnimateOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Throbber.SetAnimateHorizontally
inline void UThrobber::SetAnimateHorizontally(bool bInAnimateHorizontally) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Throbber.SetAnimateHorizontally");

	struct SetAnimateHorizontally_Params {
		bool bInAnimateHorizontally;
	}; SetAnimateHorizontally_Params Params;

	Params.bInAnimateHorizontally = bInAnimateHorizontally;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TileView.SetEntryWidth
inline void UTileView::SetEntryWidth(float NewWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryWidth");

	struct SetEntryWidth_Params {
		float NewWidth;
	}; SetEntryWidth_Params Params;

	Params.NewWidth = NewWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TileView.SetEntryHeight
inline void UTileView::SetEntryHeight(float NewHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TileView.SetEntryHeight");

	struct SetEntryHeight_Params {
		float NewHeight;
	}; SetEntryHeight_Params Params;

	Params.NewHeight = NewHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TreeView.SetItemExpansion
inline void UTreeView::SetItemExpansion(struct Object Item, bool bExpandItem) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.SetItemExpansion");

	struct SetItemExpansion_Params {
		struct Object Item;
		bool bExpandItem;
	}; SetItemExpansion_Params Params;

	Params.Item = Item;
	Params.bExpandItem = bExpandItem;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TreeView.ExpandAll
inline void UTreeView::ExpandAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.ExpandAll");

	struct ExpandAll_Params {
		
	}; ExpandAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.TreeView.CollapseAll
inline void UTreeView::CollapseAll() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.TreeView.CollapseAll");

	struct CollapseAll_Params {
		
	}; CollapseAll_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UMGSequencePlayer.SetUserTag
inline void UUMGSequencePlayer::SetUserTag(struct FName InUserTag) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.SetUserTag");

	struct SetUserTag_Params {
		struct FName InUserTag;
	}; SetUserTag_Params Params;

	Params.InUserTag = InUserTag;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UMGSequencePlayer.GetUserTag
inline struct FName UUMGSequencePlayer::GetUserTag() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UMGSequencePlayer.GetUserTag");

	struct GetUserTag_Params {
		
		struct FName ReturnValue;

	}; GetUserTag_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UniformGridPanel.SetSlotPadding
inline void UUniformGridPanel::SetSlotPadding(struct FMargin InSlotPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetSlotPadding");

	struct SetSlotPadding_Params {
		struct FMargin InSlotPadding;
	}; SetSlotPadding_Params Params;

	Params.InSlotPadding = InSlotPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridPanel.SetMinDesiredSlotWidth
inline void UUniformGridPanel::SetMinDesiredSlotWidth(float InMinDesiredSlotWidth) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotWidth");

	struct SetMinDesiredSlotWidth_Params {
		float InMinDesiredSlotWidth;
	}; SetMinDesiredSlotWidth_Params Params;

	Params.InMinDesiredSlotWidth = InMinDesiredSlotWidth;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridPanel.SetMinDesiredSlotHeight
inline void UUniformGridPanel::SetMinDesiredSlotHeight(float InMinDesiredSlotHeight) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.SetMinDesiredSlotHeight");

	struct SetMinDesiredSlotHeight_Params {
		float InMinDesiredSlotHeight;
	}; SetMinDesiredSlotHeight_Params Params;

	Params.InMinDesiredSlotHeight = InMinDesiredSlotHeight;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridPanel.AddChildToUniformGrid
inline struct UUniformGridSlot UUniformGridPanel::AddChildToUniformGrid(struct UWidget Content, int32_t InRow, int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridPanel.AddChildToUniformGrid");

	struct AddChildToUniformGrid_Params {
		struct UWidget Content;
		int32_t InRow;
		int32_t InColumn;
		struct UUniformGridSlot ReturnValue;

	}; AddChildToUniformGrid_Params Params;

	Params.Content = Content;
	Params.InRow = InRow;
	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.UniformGridSlot.SetVerticalAlignment
inline void UUniformGridSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridSlot.SetRow
inline void UUniformGridSlot::SetRow(int32_t InRow) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetRow");

	struct SetRow_Params {
		int32_t InRow;
	}; SetRow_Params Params;

	Params.InRow = InRow;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridSlot.SetHorizontalAlignment
inline void UUniformGridSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.UniformGridSlot.SetColumn
inline void UUniformGridSlot::SetColumn(int32_t InColumn) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.UniformGridSlot.SetColumn");

	struct SetColumn_Params {
		int32_t InColumn;
	}; SetColumn_Params Params;

	Params.InColumn = InColumn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetVerticalAlignment
inline void UVerticalBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetSize
inline void UVerticalBoxSlot::SetSize(struct FSlateChildSize InSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetSize");

	struct SetSize_Params {
		struct FSlateChildSize InSize;
	}; SetSize_Params Params;

	Params.InSize = InSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetPadding
inline void UVerticalBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.VerticalBoxSlot.SetHorizontalAlignment
inline void UVerticalBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.VerticalBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Viewport.Spawn
inline struct UActor UViewport::Spawn(struct UClass* ActorClass) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.Spawn");

	struct Spawn_Params {
		struct UClass* ActorClass;
		struct UActor ReturnValue;

	}; Spawn_Params Params;

	Params.ActorClass = ActorClass;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Viewport.SetViewRotation
inline void UViewport::SetViewRotation(struct FRotator Rotation) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewRotation");

	struct SetViewRotation_Params {
		struct FRotator Rotation;
	}; SetViewRotation_Params Params;

	Params.Rotation = Rotation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Viewport.SetViewLocation
inline void UViewport::SetViewLocation(struct FVector Location) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.SetViewLocation");

	struct SetViewLocation_Params {
		struct FVector Location;
	}; SetViewLocation_Params Params;

	Params.Location = Location;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.Viewport.GetViewRotation
inline struct FRotator UViewport::GetViewRotation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewRotation");

	struct GetViewRotation_Params {
		
		struct FRotator ReturnValue;

	}; GetViewRotation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Viewport.GetViewportWorld
inline struct UWorld UViewport::GetViewportWorld() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewportWorld");

	struct GetViewportWorld_Params {
		
		struct UWorld ReturnValue;

	}; GetViewportWorld_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.Viewport.GetViewLocation
inline struct FVector UViewport::GetViewLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.Viewport.GetViewLocation");

	struct GetViewLocation_Params {
		
		struct FVector ReturnValue;

	}; GetViewLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetAnimation.UnbindFromAnimationStarted
inline void UWidgetAnimation::UnbindFromAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationStarted");

	struct UnbindFromAnimationStarted_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; UnbindFromAnimationStarted_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.UnbindFromAnimationFinished
inline void UWidgetAnimation::UnbindFromAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindFromAnimationFinished");

	struct UnbindFromAnimationFinished_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; UnbindFromAnimationFinished_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted
inline void UWidgetAnimation::UnbindAllFromAnimationStarted(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted");

	struct UnbindAllFromAnimationStarted_Params {
		struct UUserWidget Widget;
	}; UnbindAllFromAnimationStarted_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished
inline void UWidgetAnimation::UnbindAllFromAnimationFinished(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished");

	struct UnbindAllFromAnimationFinished_Params {
		struct UUserWidget Widget;
	}; UnbindAllFromAnimationFinished_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.GetStartTime
inline float UWidgetAnimation::GetStartTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetStartTime");

	struct GetStartTime_Params {
		
		float ReturnValue;

	}; GetStartTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetAnimation.GetEndTime
inline float UWidgetAnimation::GetEndTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.GetEndTime");

	struct GetEndTime_Params {
		
		float ReturnValue;

	}; GetEndTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetAnimation.BindToAnimationStarted
inline void UWidgetAnimation::BindToAnimationStarted(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationStarted");

	struct BindToAnimationStarted_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; BindToAnimationStarted_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimation.BindToAnimationFinished
inline void UWidgetAnimation::BindToAnimationFinished(struct UUserWidget Widget, struct FDelegate Delegate) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimation.BindToAnimationFinished");

	struct BindToAnimationFinished_Params {
		struct UUserWidget Widget;
		struct FDelegate Delegate;
	}; BindToAnimationFinished_Params Params;

	Params.Widget = Widget;
	Params.Delegate = Delegate;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject
inline struct UWidgetAnimationPlayCallbackProxy UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject");

	struct CreatePlayAnimationTimeRangeProxyObject_Params {
		struct UUMGSequencePlayer& Result;
		struct UUserWidget Widget;
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		float EndAtTime;
		int32_t NumLoopsToPlay;
		enum class EUMGSequencePlayMode PlayMode;
		float PlaybackSpeed;
		struct UWidgetAnimationPlayCallbackProxy ReturnValue;

	}; CreatePlayAnimationTimeRangeProxyObject_Params Params;

	Params.Widget = Widget;
	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.EndAtTime = EndAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject
inline struct UWidgetAnimationPlayCallbackProxy UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(struct UUMGSequencePlayer& Result, struct UUserWidget Widget, struct UWidgetAnimation InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject");

	struct CreatePlayAnimationProxyObject_Params {
		struct UUMGSequencePlayer& Result;
		struct UUserWidget Widget;
		struct UWidgetAnimation InAnimation;
		float StartAtTime;
		int32_t NumLoopsToPlay;
		enum class EUMGSequencePlayMode PlayMode;
		float PlaybackSpeed;
		struct UWidgetAnimationPlayCallbackProxy ReturnValue;

	}; CreatePlayAnimationProxyObject_Params Params;

	Params.Widget = Widget;
	Params.InAnimation = InAnimation;
	Params.StartAtTime = StartAtTime;
	Params.NumLoopsToPlay = NumLoopsToPlay;
	Params.PlayMode = PlayMode;
	Params.PlaybackSpeed = PlaybackSpeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Result = Params.Result;


	return params.ReturnValue;
}

// Function UMG.WidgetComponent.SetWindowVisibility
inline void UWidgetComponent::SetWindowVisibility(enum class EWindowVisibility InVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowVisibility");

	struct SetWindowVisibility_Params {
		enum class EWindowVisibility InVisibility;
	}; SetWindowVisibility_Params Params;

	Params.InVisibility = InVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetWindowFocusable
inline void UWidgetComponent::SetWindowFocusable(bool bInWindowFocusable) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWindowFocusable");

	struct SetWindowFocusable_Params {
		bool bInWindowFocusable;
	}; SetWindowFocusable_Params Params;

	Params.bInWindowFocusable = bInWindowFocusable;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetWidgetSpace
inline void UWidgetComponent::SetWidgetSpace(enum class EWidgetSpace NewSpace) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidgetSpace");

	struct SetWidgetSpace_Params {
		enum class EWidgetSpace NewSpace;
	}; SetWidgetSpace_Params Params;

	Params.NewSpace = NewSpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetWidget
inline void UWidgetComponent::SetWidget(struct UUserWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetWidget");

	struct SetWidget_Params {
		struct UUserWidget Widget;
	}; SetWidget_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetTwoSided
inline void UWidgetComponent::SetTwoSided(bool bWantTwoSided) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTwoSided");

	struct SetTwoSided_Params {
		bool bWantTwoSided;
	}; SetTwoSided_Params Params;

	Params.bWantTwoSided = bWantTwoSided;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetTintColorAndOpacity
inline void UWidgetComponent::SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTintColorAndOpacity");

	struct SetTintColorAndOpacity_Params {
		struct FLinearColor NewTintColorAndOpacity;
	}; SetTintColorAndOpacity_Params Params;

	Params.NewTintColorAndOpacity = NewTintColorAndOpacity;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetTickWhenOffscreen
inline void UWidgetComponent::SetTickWhenOffscreen(bool bWantTickWhenOffscreen) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetTickWhenOffscreen");

	struct SetTickWhenOffscreen_Params {
		bool bWantTickWhenOffscreen;
	}; SetTickWhenOffscreen_Params Params;

	Params.bWantTickWhenOffscreen = bWantTickWhenOffscreen;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetRedrawTime
inline void UWidgetComponent::SetRedrawTime(float InRedrawTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetRedrawTime");

	struct SetRedrawTime_Params {
		float InRedrawTime;
	}; SetRedrawTime_Params Params;

	Params.InRedrawTime = InRedrawTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetPivot
inline void UWidgetComponent::SetPivot(struct FVector2D& InPivot) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetPivot");

	struct SetPivot_Params {
		struct FVector2D& InPivot;
	}; SetPivot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InPivot = Params.InPivot;

}

// Function UMG.WidgetComponent.SetOwnerPlayer
inline void UWidgetComponent::SetOwnerPlayer(struct ULocalPlayer LocalPlayer) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetOwnerPlayer");

	struct SetOwnerPlayer_Params {
		struct ULocalPlayer LocalPlayer;
	}; SetOwnerPlayer_Params Params;

	Params.LocalPlayer = LocalPlayer;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetManuallyRedraw
inline void UWidgetComponent::SetManuallyRedraw(bool bUseManualRedraw) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetManuallyRedraw");

	struct SetManuallyRedraw_Params {
		bool bUseManualRedraw;
	}; SetManuallyRedraw_Params Params;

	Params.bUseManualRedraw = bUseManualRedraw;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetGeometryMode
inline void UWidgetComponent::SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetGeometryMode");

	struct SetGeometryMode_Params {
		enum class EWidgetGeometryMode InGeometryMode;
	}; SetGeometryMode_Params Params;

	Params.InGeometryMode = InGeometryMode;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetDrawSize
inline void UWidgetComponent::SetDrawSize(struct FVector2D Size) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawSize");

	struct SetDrawSize_Params {
		struct FVector2D Size;
	}; SetDrawSize_Params Params;

	Params.Size = Size;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetDrawAtDesiredSize
inline void UWidgetComponent::SetDrawAtDesiredSize(bool bInDrawAtDesiredSize) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetDrawAtDesiredSize");

	struct SetDrawAtDesiredSize_Params {
		bool bInDrawAtDesiredSize;
	}; SetDrawAtDesiredSize_Params Params;

	Params.bInDrawAtDesiredSize = bInDrawAtDesiredSize;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetCylinderArcAngle
inline void UWidgetComponent::SetCylinderArcAngle(float InCylinderArcAngle) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetCylinderArcAngle");

	struct SetCylinderArcAngle_Params {
		float InCylinderArcAngle;
	}; SetCylinderArcAngle_Params Params;

	Params.InCylinderArcAngle = InCylinderArcAngle;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.SetBackgroundColor
inline void UWidgetComponent::SetBackgroundColor(struct FLinearColor NewBackgroundColor) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.SetBackgroundColor");

	struct SetBackgroundColor_Params {
		struct FLinearColor NewBackgroundColor;
	}; SetBackgroundColor_Params Params;

	Params.NewBackgroundColor = NewBackgroundColor;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.RequestRedraw
inline void UWidgetComponent::RequestRedraw() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.RequestRedraw");

	struct RequestRedraw_Params {
		
	}; RequestRedraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetComponent.GetWindowVisiblility
inline enum class EWindowVisibility UWidgetComponent::GetWindowVisiblility() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowVisiblility");

	struct GetWindowVisiblility_Params {
		
		enum class EWindowVisibility ReturnValue;

	}; GetWindowVisiblility_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetWindowFocusable
inline bool UWidgetComponent::GetWindowFocusable() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWindowFocusable");

	struct GetWindowFocusable_Params {
		
		bool ReturnValue;

	}; GetWindowFocusable_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetWidgetSpace
inline enum class EWidgetSpace UWidgetComponent::GetWidgetSpace() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetWidgetSpace");

	struct GetWidgetSpace_Params {
		
		enum class EWidgetSpace ReturnValue;

	}; GetWidgetSpace_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetUserWidgetObject
inline struct UUserWidget UWidgetComponent::GetUserWidgetObject() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetUserWidgetObject");

	struct GetUserWidgetObject_Params {
		
		struct UUserWidget ReturnValue;

	}; GetUserWidgetObject_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetTwoSided
inline bool UWidgetComponent::GetTwoSided() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTwoSided");

	struct GetTwoSided_Params {
		
		bool ReturnValue;

	}; GetTwoSided_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetTickWhenOffscreen
inline bool UWidgetComponent::GetTickWhenOffscreen() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetTickWhenOffscreen");

	struct GetTickWhenOffscreen_Params {
		
		bool ReturnValue;

	}; GetTickWhenOffscreen_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetRenderTarget
inline struct UTextureRenderTarget2D UWidgetComponent::GetRenderTarget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRenderTarget");

	struct GetRenderTarget_Params {
		
		struct UTextureRenderTarget2D ReturnValue;

	}; GetRenderTarget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetRedrawTime
inline float UWidgetComponent::GetRedrawTime() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetRedrawTime");

	struct GetRedrawTime_Params {
		
		float ReturnValue;

	}; GetRedrawTime_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetPivot
inline struct FVector2D UWidgetComponent::GetPivot() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetPivot");

	struct GetPivot_Params {
		
		struct FVector2D ReturnValue;

	}; GetPivot_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetOwnerPlayer
inline struct ULocalPlayer UWidgetComponent::GetOwnerPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetOwnerPlayer");

	struct GetOwnerPlayer_Params {
		
		struct ULocalPlayer ReturnValue;

	}; GetOwnerPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetMaterialInstance
inline struct UMaterialInstanceDynamic UWidgetComponent::GetMaterialInstance() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetMaterialInstance");

	struct GetMaterialInstance_Params {
		
		struct UMaterialInstanceDynamic ReturnValue;

	}; GetMaterialInstance_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetManuallyRedraw
inline bool UWidgetComponent::GetManuallyRedraw() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetManuallyRedraw");

	struct GetManuallyRedraw_Params {
		
		bool ReturnValue;

	}; GetManuallyRedraw_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetGeometryMode
inline enum class EWidgetGeometryMode UWidgetComponent::GetGeometryMode() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetGeometryMode");

	struct GetGeometryMode_Params {
		
		enum class EWidgetGeometryMode ReturnValue;

	}; GetGeometryMode_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetDrawSize
inline struct FVector2D UWidgetComponent::GetDrawSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawSize");

	struct GetDrawSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetDrawSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetDrawAtDesiredSize
inline bool UWidgetComponent::GetDrawAtDesiredSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetDrawAtDesiredSize");

	struct GetDrawAtDesiredSize_Params {
		
		bool ReturnValue;

	}; GetDrawAtDesiredSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetCylinderArcAngle
inline float UWidgetComponent::GetCylinderArcAngle() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCylinderArcAngle");

	struct GetCylinderArcAngle_Params {
		
		float ReturnValue;

	}; GetCylinderArcAngle_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetComponent.GetCurrentDrawSize
inline struct FVector2D UWidgetComponent::GetCurrentDrawSize() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetComponent.GetCurrentDrawSize");

	struct GetCurrentDrawSize_Params {
		
		struct FVector2D ReturnValue;

	}; GetCurrentDrawSize_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.SetFocus
inline void UWidgetInteractionComponent::SetFocus(struct UWidget FocusWidget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetFocus");

	struct SetFocus_Params {
		struct UWidget FocusWidget;
	}; SetFocus_Params Params;

	Params.FocusWidget = FocusWidget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.SetCustomHitResult
inline void UWidgetInteractionComponent::SetCustomHitResult(struct FHitResult& HitResult) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SetCustomHitResult");

	struct SetCustomHitResult_Params {
		struct FHitResult& HitResult;
	}; SetCustomHitResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	HitResult = Params.HitResult;

}

// Function UMG.WidgetInteractionComponent.SendKeyChar
inline bool UWidgetInteractionComponent::SendKeyChar(struct FString Characters, bool bRepeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.SendKeyChar");

	struct SendKeyChar_Params {
		struct FString Characters;
		bool bRepeat;
		bool ReturnValue;

	}; SendKeyChar_Params Params;

	Params.Characters = Characters;
	Params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.ScrollWheel
inline void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ScrollWheel");

	struct ScrollWheel_Params {
		float ScrollDelta;
	}; ScrollWheel_Params Params;

	Params.ScrollDelta = ScrollDelta;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.ReleasePointerKey
inline void UWidgetInteractionComponent::ReleasePointerKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleasePointerKey");

	struct ReleasePointerKey_Params {
		struct FKey Key;
	}; ReleasePointerKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.ReleaseKey
inline bool UWidgetInteractionComponent::ReleaseKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.ReleaseKey");

	struct ReleaseKey_Params {
		struct FKey Key;
		bool ReturnValue;

	}; ReleaseKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.PressPointerKey
inline void UWidgetInteractionComponent::PressPointerKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressPointerKey");

	struct PressPointerKey_Params {
		struct FKey Key;
	}; PressPointerKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetInteractionComponent.PressKey
inline bool UWidgetInteractionComponent::PressKey(struct FKey Key, bool bRepeat) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressKey");

	struct PressKey_Params {
		struct FKey Key;
		bool bRepeat;
		bool ReturnValue;

	}; PressKey_Params Params;

	Params.Key = Key;
	Params.bRepeat = bRepeat;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.PressAndReleaseKey
inline bool UWidgetInteractionComponent::PressAndReleaseKey(struct FKey Key) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.PressAndReleaseKey");

	struct PressAndReleaseKey_Params {
		struct FKey Key;
		bool ReturnValue;

	}; PressAndReleaseKey_Params Params;

	Params.Key = Key;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.IsOverInteractableWidget
inline bool UWidgetInteractionComponent::IsOverInteractableWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverInteractableWidget");

	struct IsOverInteractableWidget_Params {
		
		bool ReturnValue;

	}; IsOverInteractableWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget
inline bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget");

	struct IsOverHitTestVisibleWidget_Params {
		
		bool ReturnValue;

	}; IsOverHitTestVisibleWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.IsOverFocusableWidget
inline bool UWidgetInteractionComponent::IsOverFocusableWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.IsOverFocusableWidget");

	struct IsOverFocusableWidget_Params {
		
		bool ReturnValue;

	}; IsOverFocusableWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.GetLastHitResult
inline struct FHitResult UWidgetInteractionComponent::GetLastHitResult() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetLastHitResult");

	struct GetLastHitResult_Params {
		
		struct FHitResult ReturnValue;

	}; GetLastHitResult_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent
inline struct UWidgetComponent UWidgetInteractionComponent::GetHoveredWidgetComponent() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent");

	struct GetHoveredWidgetComponent_Params {
		
		struct UWidgetComponent ReturnValue;

	}; GetHoveredWidgetComponent_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetInteractionComponent.Get2DHitLocation
inline struct FVector2D UWidgetInteractionComponent::Get2DHitLocation() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetInteractionComponent.Get2DHitLocation");

	struct Get2DHitLocation_Params {
		
		struct FVector2D ReturnValue;

	}; Get2DHitLocation_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.SetActiveWidgetIndex
inline void UWidgetSwitcher::SetActiveWidgetIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidgetIndex");

	struct SetActiveWidgetIndex_Params {
		int32_t Index;
	}; SetActiveWidgetIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcher.SetActiveWidget
inline void UWidgetSwitcher::SetActiveWidget(struct UWidget Widget) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.SetActiveWidget");

	struct SetActiveWidget_Params {
		struct UWidget Widget;
	}; SetActiveWidget_Params Params;

	Params.Widget = Widget;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcher.GetWidgetAtIndex
inline struct UWidget UWidgetSwitcher::GetWidgetAtIndex(int32_t Index) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetWidgetAtIndex");

	struct GetWidgetAtIndex_Params {
		int32_t Index;
		struct UWidget ReturnValue;

	}; GetWidgetAtIndex_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.GetNumWidgets
inline int32_t UWidgetSwitcher::GetNumWidgets() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetNumWidgets");

	struct GetNumWidgets_Params {
		
		int32_t ReturnValue;

	}; GetNumWidgets_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.GetActiveWidgetIndex
inline int32_t UWidgetSwitcher::GetActiveWidgetIndex() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidgetIndex");

	struct GetActiveWidgetIndex_Params {
		
		int32_t ReturnValue;

	}; GetActiveWidgetIndex_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcher.GetActiveWidget
inline struct UWidget UWidgetSwitcher::GetActiveWidget() {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcher.GetActiveWidget");

	struct GetActiveWidget_Params {
		
		struct UWidget ReturnValue;

	}; GetActiveWidget_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WidgetSwitcherSlot.SetVerticalAlignment
inline void UWidgetSwitcherSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcherSlot.SetPadding
inline void UWidgetSwitcherSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment
inline void UWidgetSwitcherSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarArea.SetVerticalAlignment
inline void UWindowTitleBarArea::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarArea.SetPadding
inline void UWindowTitleBarArea::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarArea.SetHorizontalAlignment
inline void UWindowTitleBarArea::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarArea.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment
inline void UWindowTitleBarAreaSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarAreaSlot.SetPadding
inline void UWindowTitleBarAreaSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment
inline void UWindowTitleBarAreaSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBox.SetInnerSlotPadding
inline void UWrapBox::SetInnerSlotPadding(struct FVector2D InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.SetInnerSlotPadding");

	struct SetInnerSlotPadding_Params {
		struct FVector2D InPadding;
	}; SetInnerSlotPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBox.AddChildToWrapBox
inline struct UWrapBoxSlot UWrapBox::AddChildToWrapBox(struct UWidget Content) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBox.AddChildToWrapBox");

	struct AddChildToWrapBox_Params {
		struct UWidget Content;
		struct UWrapBoxSlot ReturnValue;

	}; AddChildToWrapBox_Params Params;

	Params.Content = Content;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function UMG.WrapBoxSlot.SetVerticalAlignment
inline void UWrapBoxSlot::SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetVerticalAlignment");

	struct SetVerticalAlignment_Params {
		enum class EVerticalAlignment InVerticalAlignment;
	}; SetVerticalAlignment_Params Params;

	Params.InVerticalAlignment = InVerticalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetPadding
inline void UWrapBoxSlot::SetPadding(struct FMargin InPadding) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetPadding");

	struct SetPadding_Params {
		struct FMargin InPadding;
	}; SetPadding_Params Params;

	Params.InPadding = InPadding;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetHorizontalAlignment
inline void UWrapBoxSlot::SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetHorizontalAlignment");

	struct SetHorizontalAlignment_Params {
		enum class EHorizontalAlignment InHorizontalAlignment;
	}; SetHorizontalAlignment_Params Params;

	Params.InHorizontalAlignment = InHorizontalAlignment;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan
inline void UWrapBoxSlot::SetFillSpanWhenLessThan(float InFillSpanWhenLessThan) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan");

	struct SetFillSpanWhenLessThan_Params {
		float InFillSpanWhenLessThan;
	}; SetFillSpanWhenLessThan_Params Params;

	Params.InFillSpanWhenLessThan = InFillSpanWhenLessThan;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UMG.WrapBoxSlot.SetFillEmptySpace
inline void UWrapBoxSlot::SetFillEmptySpace(bool InbFillEmptySpace) {
	static auto fn = UObject::FindObject<UFunction>("Function UMG.WrapBoxSlot.SetFillEmptySpace");

	struct SetFillEmptySpace_Params {
		bool InbFillEmptySpace;
	}; SetFillEmptySpace_Params Params;

	Params.InbFillEmptySpace = InbFillEmptySpace;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

