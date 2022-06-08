// WidgetBlueprintGeneratedClass RoundResult_Keyplayer.RoundResult_Keyplayer_C
class URoundResult_Keyplayer_C : public UPDRoundReview {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390 (8)
	struct UWidgetAnimation AniKeyplayer; // 0x398 (8)
	struct UImage IMG_KEY_FoeTextBack; // 0x3A0 (8)
	struct UImage IMG_Line; // 0x3A8 (8)
	struct UImage IMG_Line_2; // 0x3B0 (8)
	struct UImage IMG_MapOutline; // 0x3B8 (8)
	struct UImage IMG_MVP_RText; // 0x3C0 (8)

	void Construct(); // Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_RoundResult_Keyplayer(int32_t EntryPoint); // Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.ExecuteUbergraph_RoundResult_Keyplayer(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.Construct
inline void URoundResult_Keyplayer_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.ExecuteUbergraph_RoundResult_Keyplayer
inline void URoundResult_Keyplayer_C::ExecuteUbergraph_RoundResult_Keyplayer(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResult_Keyplayer.RoundResult_Keyplayer_C.ExecuteUbergraph_RoundResult_Keyplayer");

	struct ExecuteUbergraph_RoundResult_Keyplayer_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_RoundResult_Keyplayer_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

