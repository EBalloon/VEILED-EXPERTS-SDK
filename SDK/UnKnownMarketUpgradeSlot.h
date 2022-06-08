// WidgetBlueprintGeneratedClass UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C
class UUnKnownMarketUpgradeSlot_C : public UPDUnKnownMarketUpgradeSlot {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3E0 (8)
	struct UWidgetAnimation Anim_InvestCall; // 0x3E8 (8)
	struct UImage IMG_Call; // 0x3F0 (8)
	struct UImage IMG_CallBg; // 0x3F8 (8)
	struct UImage IMG_CallLine; // 0x400 (8)

	void Construct(); // Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_UnKnownMarketUpgradeSlot(int32_t EntryPoint); // Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.ExecuteUbergraph_UnKnownMarketUpgradeSlot(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.Construct
inline void UUnKnownMarketUpgradeSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.ExecuteUbergraph_UnKnownMarketUpgradeSlot
inline void UUnKnownMarketUpgradeSlot_C::ExecuteUbergraph_UnKnownMarketUpgradeSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketUpgradeSlot.UnKnownMarketUpgradeSlot_C.ExecuteUbergraph_UnKnownMarketUpgradeSlot");

	struct ExecuteUbergraph_UnKnownMarketUpgradeSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UnKnownMarketUpgradeSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

