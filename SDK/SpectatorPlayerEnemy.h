// WidgetBlueprintGeneratedClass SpectatorPlayerEnemy.SpectatorPlayerEnemy_C
class USpectatorPlayerEnemy_C : public UPDSpectatorPlayerEntry {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498 (8)
	struct UImage IMG_NameBG; // 0x4A0 (8)
	struct UImage IMG_PlayerNameBg; // 0x4A8 (8)
	struct UImage IMG_PlayerNameBg_Dead; // 0x4B0 (8)
	struct UImage IMG_PlayerPicBlind_Dead; // 0x4B8 (8)
	struct UImage IMG_PlayerState; // 0x4C0 (8)
	struct UImage IMG_PlayerState_Dead; // 0x4C8 (8)
	struct UImage IMG_SlotBG01_Dead; // 0x4D0 (8)
	struct UImage IMG_SlotBG02_Dead; // 0x4D8 (8)
	struct UImage IMG_SlotBG03_Dead; // 0x4E0 (8)
	struct UImage IMG_SlotBGMelee_Dead; // 0x4E8 (8)
	struct UImage IMG_SlotOutline; // 0x4F0 (8)

	void Construct(); // Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_SpectatorPlayerEnemy(int32_t EntryPoint); // Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.ExecuteUbergraph_SpectatorPlayerEnemy(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.Construct
inline void USpectatorPlayerEnemy_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.ExecuteUbergraph_SpectatorPlayerEnemy
inline void USpectatorPlayerEnemy_C::ExecuteUbergraph_SpectatorPlayerEnemy(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function SpectatorPlayerEnemy.SpectatorPlayerEnemy_C.ExecuteUbergraph_SpectatorPlayerEnemy");

	struct ExecuteUbergraph_SpectatorPlayerEnemy_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_SpectatorPlayerEnemy_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

