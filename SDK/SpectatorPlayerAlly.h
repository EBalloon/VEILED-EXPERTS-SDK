// WidgetBlueprintGeneratedClass SpectatorPlayerAlly.SpectatorPlayerAlly_C
class USpectatorPlayerAlly_C : public UPDSpectatorEntryAlly {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5A0 (8)
	struct UWidgetAnimation HealthAlert; // 0x5A8 (8)
	struct UWidgetAnimation Damage; // 0x5B0 (8)
	struct UImage IMG_ArmorBg; // 0x5B8 (8)
	struct UImage IMG_NameBG; // 0x5C0 (8)
	struct UImage IMG_PlayerNameBg; // 0x5C8 (8)
	struct UImage IMG_PlayerNameBg_Dead; // 0x5D0 (8)
	struct UImage IMG_PlayerPicBlind_Dead; // 0x5D8 (8)
	struct UImage IMG_PlayerState_Dead; // 0x5E0 (8)
	struct UImage IMG_SlotBG01_Dead; // 0x5E8 (8)
	struct UImage IMG_SlotBG02_Dead; // 0x5F0 (8)
	struct UImage IMG_SlotBG03_Dead; // 0x5F8 (8)
	struct UImage IMG_SlotBG04_Dead; // 0x600 (8)
	struct UImage IMG_SlotBG05_Dead; // 0x608 (8)
	struct UImage IMG_SlotBG06_Dead; // 0x610 (8)
	struct UImage IMG_SlotBG07_Dead; // 0x618 (8)
	struct UImage IMG_SlotBGAgent_Dead; // 0x620 (8)
	struct UImage IMG_SlotBGMelee_Dead; // 0x628 (8)
	struct UImage IMG_SlotBGRevival_Dead; // 0x630 (8)
	struct UImage IMG_SlotBGSeed_Dead; // 0x638 (8)
	struct UImage IMG_SlotOutline; // 0x640 (8)

	void Construct(); // Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_SpectatorPlayerAlly(int32_t EntryPoint); // Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.ExecuteUbergraph_SpectatorPlayerAlly(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.Construct
inline void USpectatorPlayerAlly_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.ExecuteUbergraph_SpectatorPlayerAlly
inline void USpectatorPlayerAlly_C::ExecuteUbergraph_SpectatorPlayerAlly(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerAlly.SpectatorPlayerAlly_C.ExecuteUbergraph_SpectatorPlayerAlly");

	struct ExecuteUbergraph_SpectatorPlayerAlly_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SpectatorPlayerAlly_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

