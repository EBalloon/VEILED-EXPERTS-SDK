// WidgetBlueprintGeneratedClass ResultScoreItem.ResultScoreItem_C
class UResultScoreItem_C : public UPDResultScoreItem {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2B8 (8)
	struct UWidgetAnimation Anim_Appear; // 0x2C0 (8)
	struct UImage IMG_TitleBg; // 0x2C8 (8)

	void PreConstruct(bool IsDesignTime); // Function ResultScoreItem.ResultScoreItem_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_ResultScoreItem(int32_t EntryPoint); // Function ResultScoreItem.ResultScoreItem_C.ExecuteUbergraph_ResultScoreItem(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function ResultScoreItem.ResultScoreItem_C.PreConstruct
inline void UResultScoreItem_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function ResultScoreItem.ResultScoreItem_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ResultScoreItem.ResultScoreItem_C.ExecuteUbergraph_ResultScoreItem
inline void UResultScoreItem_C::ExecuteUbergraph_ResultScoreItem(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ResultScoreItem.ResultScoreItem_C.ExecuteUbergraph_ResultScoreItem");

	struct ExecuteUbergraph_ResultScoreItem_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ResultScoreItem_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

