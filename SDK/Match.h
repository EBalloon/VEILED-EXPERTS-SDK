// WidgetBlueprintGeneratedClass Match.Match_C
class UMatch_C : public UPDMatchUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E8 (8)
	struct UImage IMG_AnimIndicator_A; // 0x2F0 (8)
	struct UImage IMG_AnimIndicator_B; // 0x2F8 (8)
	struct UImage IMG_BgCase_Bridge; // 0x300 (8)
	struct UImage IMG_BgCase_Derail; // 0x308 (8)
	struct UImage IMG_BgCase_Dmitry; // 0x310 (8)
	struct UImage IMG_BgCase_Jack; // 0x318 (8)
	struct UImage IMG_BgCase_Luna; // 0x320 (8)
	struct UImage IMG_BgCase_Nicki; // 0x328 (8)
	struct UImage IMG_BgCase_Rose; // 0x330 (8)
	struct UImage IMG_BgCase_Shipyard; // 0x338 (8)
	struct UImage IMG_BgCase_Simon; // 0x340 (8)
	struct UImage IMG_BgCase_Soy; // 0x348 (8)
	struct UImage IMG_BgCase_Tutorial; // 0x350 (8)
	struct UImage IMG_BgCase_Tyrone; // 0x358 (8)
	struct UImage IMG_BgCase_Vignetting; // 0x360 (8)
	struct UImage IMG_BgCase_WindFarm; // 0x368 (8)
	struct UImage IMG_BgCase_YoungSik; // 0x370 (8)
	struct UImage IMG_Black; // 0x378 (8)
	struct UImage IMG_DescriptionShade_01; // 0x380 (8)
	struct UImage IMG_Divider; // 0x388 (8)
	struct UImage IMG_Mode_Outline; // 0x390 (8)

	void PreConstruct(bool IsDesignTime); // Function Match.Match_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_Match(int32_t EntryPoint); // Function Match.Match_C.ExecuteUbergraph_Match(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function Match.Match_C.PreConstruct
inline void UMatch_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Match.Match_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Match.Match_C.ExecuteUbergraph_Match
inline void UMatch_C::ExecuteUbergraph_Match(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Match.Match_C.ExecuteUbergraph_Match");

	struct ExecuteUbergraph_Match_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Match_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

