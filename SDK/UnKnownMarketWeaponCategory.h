// WidgetBlueprintGeneratedClass UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C
class UUnKnownMarketWeaponCategory_C : public UPDUnKnownMarketWeaponCategory {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C0 (8)
	struct UCanvasPanel CP_TextGlow; // 0x2C8 (8)
	struct UImage IMG_Notification; // 0x2D0 (8)

	void Construct(); // Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_UnKnownMarketWeaponCategory(int32_t EntryPoint); // Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.ExecuteUbergraph_UnKnownMarketWeaponCategory(Final|UbergraphFunction|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Construct
inline void UUnKnownMarketWeaponCategory_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Tick
inline void UUnKnownMarketWeaponCategory_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.Tick");

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

// Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.ExecuteUbergraph_UnKnownMarketWeaponCategory
inline void UUnKnownMarketWeaponCategory_C::ExecuteUbergraph_UnKnownMarketWeaponCategory(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketWeaponCategory.UnKnownMarketWeaponCategory_C.ExecuteUbergraph_UnKnownMarketWeaponCategory");

	struct ExecuteUbergraph_UnKnownMarketWeaponCategory_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UnKnownMarketWeaponCategory_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

