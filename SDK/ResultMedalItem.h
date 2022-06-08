// WidgetBlueprintGeneratedClass ResultMedalItem.ResultMedalItem_C
class UResultMedalItem_C : public UPDResultMedalItem {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E0 (8)
	struct UWidgetAnimation Anim_ShowUp; // 0x2E8 (8)
	struct UWidgetAnimation Anim_Glow; // 0x2F0 (8)

	void PlayAnim(); // Function ResultMedalItem.ResultMedalItem_C.PlayAnim(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void PreConstruct(bool IsDesignTime); // Function ResultMedalItem.ResultMedalItem_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Construct(); // Function ResultMedalItem.ResultMedalItem_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_ResultMedalItem(int32_t EntryPoint); // Function ResultMedalItem.ResultMedalItem_C.ExecuteUbergraph_ResultMedalItem(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function ResultMedalItem.ResultMedalItem_C.PlayAnim
inline void UResultMedalItem_C::PlayAnim() {
	static auto fn = UObject::FindObject<UFunction>("Function ResultMedalItem.ResultMedalItem_C.PlayAnim");

	struct PlayAnim_Params {
		
	}; PlayAnim_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ResultMedalItem.ResultMedalItem_C.PreConstruct
inline void UResultMedalItem_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function ResultMedalItem.ResultMedalItem_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ResultMedalItem.ResultMedalItem_C.Construct
inline void UResultMedalItem_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function ResultMedalItem.ResultMedalItem_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ResultMedalItem.ResultMedalItem_C.ExecuteUbergraph_ResultMedalItem
inline void UResultMedalItem_C::ExecuteUbergraph_ResultMedalItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ResultMedalItem.ResultMedalItem_C.ExecuteUbergraph_ResultMedalItem");

	struct ExecuteUbergraph_ResultMedalItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ResultMedalItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

