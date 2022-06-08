// WidgetBlueprintGeneratedClass Minimap.Minimap_C
class UMinimap_C : public UPDMinimapUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300 (8)
	struct UWidgetAnimation AllyPing_Old; // 0x308 (8)
	struct UWidgetAnimation MissionPing_Old; // 0x310 (8)
	struct UWidgetAnimation MapScale; // 0x318 (8)
	struct UWidgetAnimation AllyPing; // 0x320 (8)
	struct UWidgetAnimation MissionPing; // 0x328 (8)
	struct UPDButton_C Btn_DeleteAllLine; // 0x330 (8)
	struct UCheckBox CB_ToggleBoard; // 0x338 (8)
	struct UImage IMG_AlertAnim_01; // 0x340 (8)
	struct UImage IMG_AlertAnim_02; // 0x348 (8)
	struct UImage IMG_AlertAnim_03; // 0x350 (8)
	struct UImage IMG_Back; // 0x358 (8)
	struct UImage IMG_BadgeBg; // 0x360 (8)
	struct UImage IMG_BadgeOutline; // 0x368 (8)
	struct UPDImage IMG_Deco; // 0x370 (8)
	struct UImage IMG_MapShadow; // 0x378 (8)
	struct UImage IMG_Mouse_C; // 0x380 (8)
	struct UImage IMG_Mouse_C_2; // 0x388 (8)
	struct UImage IMG_Mouse_L; // 0x390 (8)
	struct UImage IMG_Mouse_WD; // 0x398 (8)
	struct UImage IMG_Mouse_WU; // 0x3A0 (8)
	struct URetainerBox RetainerBox_1; // 0x3A8 (8)
	struct UWidgetSwitcher WS_Menu; // 0x3B0 (8)

	void Construct(); // Function Minimap.Minimap_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function Minimap.Minimap_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_Minimap(int32_t EntryPoint); // Function Minimap.Minimap_C.ExecuteUbergraph_Minimap(Final|UbergraphFunction|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function Minimap.Minimap_C.Construct
inline void UMinimap_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Minimap.Minimap_C.Tick
inline void UMinimap_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.Tick");

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

// Function Minimap.Minimap_C.ExecuteUbergraph_Minimap
inline void UMinimap_C::ExecuteUbergraph_Minimap(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Minimap.Minimap_C.ExecuteUbergraph_Minimap");

	struct ExecuteUbergraph_Minimap_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Minimap_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

