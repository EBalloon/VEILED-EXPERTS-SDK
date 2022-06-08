// WidgetBlueprintGeneratedClass PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C
class UPlayerEquipmentCenterSlot_C : public UPDPlayerEquipmentDetail {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x328 (8)
	struct UWidgetAnimation ReloadComp; // 0x330 (8)
	struct UWidgetAnimation ReloadAlert; // 0x338 (8)
	struct UPDImage IMG_CompBack; // 0x340 (8)
	struct UPDImage IMG_Gauge_Back; // 0x348 (8)
	struct UPDImage InfoBackC; // 0x350 (8)
	struct UPDImage InfoBackL; // 0x358 (8)
	struct UPDImage InfoBackR; // 0x360 (8)
	struct UPDImage PDImage; // 0x368 (8)
	struct UPDImage PDImage_3; // 0x370 (8)
	struct UPDImage PDImage_4; // 0x378 (8)
	struct UPDImage PDImage_5; // 0x380 (8)
	struct UPDImage PDImage_332; // 0x388 (8)
	struct URetainerBox RB_Back; // 0x390 (8)
	struct URetainerBox RB_Deco; // 0x398 (8)
	struct URetainerBox RB_ReloadComp; // 0x3A0 (8)
	struct URetainerBox RB_WPInfo; // 0x3A8 (8)

	void PreConstruct(bool IsDesignTime); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Construct(); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_PlayerEquipmentCenterSlot(int32_t EntryPoint); // Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.ExecuteUbergraph_PlayerEquipmentCenterSlot(Final|UbergraphFunction|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.PreConstruct
inline void UPlayerEquipmentCenterSlot_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Construct
inline void UPlayerEquipmentCenterSlot_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Tick
inline void UPlayerEquipmentCenterSlot_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.Tick");

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

// Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.ExecuteUbergraph_PlayerEquipmentCenterSlot
inline void UPlayerEquipmentCenterSlot_C::ExecuteUbergraph_PlayerEquipmentCenterSlot(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function PlayerEquipmentCenterSlot.PlayerEquipmentCenterSlot_C.ExecuteUbergraph_PlayerEquipmentCenterSlot");

	struct ExecuteUbergraph_PlayerEquipmentCenterSlot_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_PlayerEquipmentCenterSlot_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

