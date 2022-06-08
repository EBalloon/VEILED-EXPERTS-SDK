// WidgetBlueprintGeneratedClass UnKnownMarketListItem.UnKnownMarketListItem_C
class UUnKnownMarketListItem_C : public UPDUnKnownMarketListItem {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4E8 (8)
	struct UWidgetAnimation Hover; // 0x4F0 (8)
	struct UImage IMG_Activate_Bg; // 0x4F8 (8)
	struct UImage IMG_Activate_Fx; // 0x500 (8)
	struct UImage IMG_Activate_FxBg; // 0x508 (8)
	struct UImage IMG_Activate_Outline; // 0x510 (8)
	struct UImage IMG_Blink; // 0x518 (8)
	struct UImage IMG_BuyBtnBg; // 0x520 (8)
	struct UImage IMG_Cancel; // 0x528 (8)
	struct UImage IMG_EmptyBg; // 0x530 (8)
	struct UImage IMG_Lock_Bg; // 0x538 (8)
	struct UImage IMG_Owned_Bg; // 0x540 (8)
	struct UImage IMG_Sell_Bg; // 0x548 (8)
	struct UImage IMG_SoldOut_Bg; // 0x550 (8)
	struct UImage IMG_VXLogo; // 0x558 (8)
	struct URetainerBox RB_ItemSlot; // 0x560 (8)

	void Construct(); // Function UnKnownMarketListItem.UnKnownMarketListItem_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_UnKnownMarketListItem(int32_t EntryPoint); // Function UnKnownMarketListItem.UnKnownMarketListItem_C.ExecuteUbergraph_UnKnownMarketListItem(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function UnKnownMarketListItem.UnKnownMarketListItem_C.Construct
inline void UUnKnownMarketListItem_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketListItem.UnKnownMarketListItem_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function UnKnownMarketListItem.UnKnownMarketListItem_C.ExecuteUbergraph_UnKnownMarketListItem
inline void UUnKnownMarketListItem_C::ExecuteUbergraph_UnKnownMarketListItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function UnKnownMarketListItem.UnKnownMarketListItem_C.ExecuteUbergraph_UnKnownMarketListItem");

	struct ExecuteUbergraph_UnKnownMarketListItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_UnKnownMarketListItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

