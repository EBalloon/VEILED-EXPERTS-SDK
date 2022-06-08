// WidgetBlueprintGeneratedClass IngameMap.IngameMap_C
class UIngameMap_C : public UPDIngameMapUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4A0 (8)
	struct UWidgetAnimation AllyPing_Old; // 0x4A8 (8)
	struct UWidgetAnimation MissionPing_Old; // 0x4B0 (8)
	struct UWidgetAnimation AllyPing; // 0x4B8 (8)
	struct UWidgetAnimation MissionPing; // 0x4C0 (8)
	struct UImage IMG_AlertAnim_01; // 0x4C8 (8)
	struct UImage IMG_AlertAnim_02; // 0x4D0 (8)
	struct UImage IMG_AlertAnim_03; // 0x4D8 (8)
	struct UImage IMG_Back; // 0x4E0 (8)
	struct UImage IMG_BadgeBg; // 0x4E8 (8)
	struct UImage IMG_BadgeOutline; // 0x4F0 (8)
	struct UPDImage IMG_Deco; // 0x4F8 (8)
	struct UImage IMG_GuideBg; // 0x500 (8)
	struct UImage IMG_Mouse_C; // 0x508 (8)
	struct UImage IMG_Mouse_L; // 0x510 (8)
	struct UImage IMG_Mouse_R; // 0x518 (8)
	struct UImage IMG_Mouse_WD; // 0x520 (8)
	struct URetainerBox RetainerBox_1; // 0x528 (8)

	void Construct(); // Function IngameMap.IngameMap_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function IngameMap.IngameMap_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_IngameMap(int32_t EntryPoint); // Function IngameMap.IngameMap_C.ExecuteUbergraph_IngameMap(Final|UbergraphFunction|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function IngameMap.IngameMap_C.Construct
inline void UIngameMap_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMap.IngameMap_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameMap.IngameMap_C.Tick
inline void UIngameMap_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMap.IngameMap_C.Tick");

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

// Function IngameMap.IngameMap_C.ExecuteUbergraph_IngameMap
inline void UIngameMap_C::ExecuteUbergraph_IngameMap(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMap.IngameMap_C.ExecuteUbergraph_IngameMap");

	struct ExecuteUbergraph_IngameMap_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_IngameMap_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

