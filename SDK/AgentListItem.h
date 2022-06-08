// WidgetBlueprintGeneratedClass AgentListItem.AgentListItem_C
class UAgentListItem_C : public UPDAgentListItemUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2D0 (8)
	struct UWidgetAnimation Anim_Selected; // 0x2D8 (8)
	struct UImage IMG_HoldingBg; // 0x2E0 (8)
	struct UImage IMG_Lock; // 0x2E8 (8)
	struct UImage IMG_PremiumLock; // 0x2F0 (8)
	struct UImage IMG_Selected_InnerBox; // 0x2F8 (8)
	struct UImage IMG_Selected_LB; // 0x300 (8)
	struct UImage IMG_Selected_LT; // 0x308 (8)
	struct UImage IMG_Selected_RB; // 0x310 (8)
	struct UImage IMG_Selected_RT; // 0x318 (8)
	struct UImage IMG_TopBar; // 0x320 (8)

	void BP_OnEntryReleased(); // Function AgentListItem.AgentListItem_C.BP_OnEntryReleased(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function AgentListItem.AgentListItem_C.BP_OnItemExpansionChanged(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function AgentListItem.AgentListItem_C.BP_OnItemSelectionChanged(Event|Protected|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_AgentListItem(int32_t EntryPoint); // Function AgentListItem.AgentListItem_C.ExecuteUbergraph_AgentListItem(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function AgentListItem.AgentListItem_C.BP_OnEntryReleased
inline void UAgentListItem_C::BP_OnEntryReleased() {
	static auto fn = UObject::FindObject<UFunction>("Function AgentListItem.AgentListItem_C.BP_OnEntryReleased");

	struct BP_OnEntryReleased_Params {
		
	}; BP_OnEntryReleased_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentListItem.AgentListItem_C.BP_OnItemExpansionChanged
inline void UAgentListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentListItem.AgentListItem_C.BP_OnItemExpansionChanged");

	struct BP_OnItemExpansionChanged_Params {
		bool bIsExpanded;
	}; BP_OnItemExpansionChanged_Params Params;

	Params.bIsExpanded = bIsExpanded;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentListItem.AgentListItem_C.BP_OnItemSelectionChanged
inline void UAgentListItem_C::BP_OnItemSelectionChanged(bool bIsSelected) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentListItem.AgentListItem_C.BP_OnItemSelectionChanged");

	struct BP_OnItemSelectionChanged_Params {
		bool bIsSelected;
	}; BP_OnItemSelectionChanged_Params Params;

	Params.bIsSelected = bIsSelected;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentListItem.AgentListItem_C.ExecuteUbergraph_AgentListItem
inline void UAgentListItem_C::ExecuteUbergraph_AgentListItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentListItem.AgentListItem_C.ExecuteUbergraph_AgentListItem");

	struct ExecuteUbergraph_AgentListItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_AgentListItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

