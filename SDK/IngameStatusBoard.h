// WidgetBlueprintGeneratedClass IngameStatusBoard.IngameStatusBoard_C
class UIngameStatusBoard_C : public UPDIngameStatusBoardUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x538 (8)
	struct UWidgetAnimation Anim_Replay; // 0x540 (8)
	struct UImage IMG_AllyTeamCoinIcon; // 0x548 (8)
	struct UImage IMG_EnemyTeamCoinIcon; // 0x550 (8)
	struct UImage IMG_PlayerInfo_Bg_Ally; // 0x558 (8)
	struct UImage IMG_PlayerInfo_Bg_Enemy; // 0x560 (8)
	struct UImage IMG_PlayerInfo_Outglow_Ally; // 0x568 (8)
	struct UImage IMG_PlayerInfo_Outglow_Enemy; // 0x570 (8)
	struct UImage IMG_PlayerInfo_Outline_Ally; // 0x578 (8)
	struct UImage IMG_PlayerInfo_Outline_Enemy; // 0x580 (8)
	struct UInvalidationBox InvalidationBox_Anemy; // 0x588 (8)
	struct UUnKnownMarketTooltip_C TeamBuffTooltip; // 0x590 (8)

	void Construct(); // Function IngameStatusBoard.IngameStatusBoard_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_IngameStatusBoard(int32_t EntryPoint); // Function IngameStatusBoard.IngameStatusBoard_C.ExecuteUbergraph_IngameStatusBoard(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function IngameStatusBoard.IngameStatusBoard_C.Construct
inline void UIngameStatusBoard_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function IngameStatusBoard.IngameStatusBoard_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameStatusBoard.IngameStatusBoard_C.ExecuteUbergraph_IngameStatusBoard
inline void UIngameStatusBoard_C::ExecuteUbergraph_IngameStatusBoard(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameStatusBoard.IngameStatusBoard_C.ExecuteUbergraph_IngameStatusBoard");

	struct ExecuteUbergraph_IngameStatusBoard_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_IngameStatusBoard_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

