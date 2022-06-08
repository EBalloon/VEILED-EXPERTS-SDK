// WidgetBlueprintGeneratedClass StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C
class UStatusBoardPlayerInfo_Ally_C : public UPDStatusBoardPlayerInfo_Ally {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3F8 (8)
	struct UImage IMG_Death; // 0x400 (8)
	struct UImage IMG_Idle; // 0x408 (8)
	struct UImage IMG_Muted; // 0x410 (8)
	struct UImage IMG_NoAudio; // 0x418 (8)
	struct UImage IMG_Ping_Bg; // 0x420 (8)
	struct UImage IMG_Rescue; // 0x428 (8)
	struct UImage IMG_Speaking; // 0x430 (8)
	struct UImage IMG_SpeakingAnim; // 0x438 (8)
	struct UImage Img_TopLine; // 0x440 (8)

	void Construct(); // Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_StatusBoardPlayerInfo_Ally(int32_t EntryPoint); // Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_StatusBoardPlayerInfo_Ally(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.Construct
inline void UStatusBoardPlayerInfo_Ally_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_StatusBoardPlayerInfo_Ally
inline void UStatusBoardPlayerInfo_Ally_C::ExecuteUbergraph_StatusBoardPlayerInfo_Ally(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function StatusBoardPlayerInfo_Ally.StatusBoardPlayerInfo_Ally_C.ExecuteUbergraph_StatusBoardPlayerInfo_Ally");

	struct ExecuteUbergraph_StatusBoardPlayerInfo_Ally_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_StatusBoardPlayerInfo_Ally_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

