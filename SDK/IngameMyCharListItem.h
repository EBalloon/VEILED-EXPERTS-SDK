// WidgetBlueprintGeneratedClass IngameMyCharListItem.IngameMyCharListItem_C
class UIngameMyCharListItem_C : public UPDIngameMyCharListItem {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C8 (8)
	struct UWidgetAnimation Anim_Selected; // 0x2D0 (8)
	struct UImage IMG_NotOwned_Outline; // 0x2D8 (8)
	struct UImage IMG_Owned_Outline; // 0x2E0 (8)
	struct UImage IMG_SLotBg; // 0x2E8 (8)

	void BP_OnEntryReleased(); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnEntryReleased(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemExpansionChanged(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemSelectionChanged(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_IngameMyCharListItem(int32_t EntryPoint); // Function IngameMyCharListItem.IngameMyCharListItem_C.ExecuteUbergraph_IngameMyCharListItem(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnEntryReleased
inline void UIngameMyCharListItem_C::BP_OnEntryReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnEntryReleased");

	struct BP_OnEntryReleased_Params {
		
	}; BP_OnEntryReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemExpansionChanged
inline void UIngameMyCharListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemExpansionChanged");

	struct BP_OnItemExpansionChanged_Params {
		bool bIsExpanded;
	}; BP_OnItemExpansionChanged_Params Params;

	Params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemSelectionChanged
inline void UIngameMyCharListItem_C::BP_OnItemSelectionChanged(bool bIsSelected) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMyCharListItem.IngameMyCharListItem_C.BP_OnItemSelectionChanged");

	struct BP_OnItemSelectionChanged_Params {
		bool bIsSelected;
	}; BP_OnItemSelectionChanged_Params Params;

	Params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameMyCharListItem.IngameMyCharListItem_C.ExecuteUbergraph_IngameMyCharListItem
inline void UIngameMyCharListItem_C::ExecuteUbergraph_IngameMyCharListItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameMyCharListItem.IngameMyCharListItem_C.ExecuteUbergraph_IngameMyCharListItem");

	struct ExecuteUbergraph_IngameMyCharListItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_IngameMyCharListItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

