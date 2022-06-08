// WidgetBlueprintGeneratedClass AgentLobby.AgentLobby_C
class UAgentLobby_C : public UPDLobbyUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390 (8)
	struct UWidgetAnimation Anim_SceneOut; // 0x398 (8)
	struct UWidgetAnimation Anim_SceneShowUp; // 0x3A0 (8)
	struct UImage IMG_BtnBg_Disabled; // 0x3A8 (8)
	struct UImage IMG_BtnBg_Hover; // 0x3B0 (8)
	struct UImage IMG_BtnBg_Matching; // 0x3B8 (8)
	struct UImage IMG_BtnBg_Normal; // 0x3C0 (8)
	struct UImage IMG_BtnDeco_Matching01; // 0x3C8 (8)
	struct UImage IMG_BtnDeco_Matching02; // 0x3D0 (8)
	struct UImage IMG_BtnDeco_Matching03; // 0x3D8 (8)
	struct UImage IMG_BtnDeco_Matching04; // 0x3E0 (8)
	struct UImage IMG_BtnDeco_Matching05; // 0x3E8 (8)
	struct UImage IMG_BtnDeco_Matching06; // 0x3F0 (8)
	struct UImage IMG_BtnDeco_Matching07; // 0x3F8 (8)
	struct UImage IMG_BtnDeco_Matching08; // 0x400 (8)
	struct UImage IMG_BtnDeco_Matching09; // 0x408 (8)
	struct UImage IMG_BtnDeco_Matching10; // 0x410 (8)
	struct UImage IMG_BtnDeco_Matching11; // 0x418 (8)
	struct UImage IMG_BtnDeco_PlayBtn01_Disabled; // 0x420 (8)
	struct UImage IMG_BtnDeco_PlayBtn01_Hover; // 0x428 (8)
	struct UImage IMG_BtnDeco_PlayBtn01_Normal; // 0x430 (8)
	struct UImage IMG_BtnDeco_PlayBtn02_Disabled; // 0x438 (8)
	struct UImage IMG_BtnDeco_PlayBtn02_Hover; // 0x440 (8)
	struct UImage IMG_BtnDeco_PlayBtn02_Normal; // 0x448 (8)
	struct UImage IMG_BtnDeco_PlayBtn03_Disabled; // 0x450 (8)
	struct UImage IMG_BtnDeco_PlayBtn03_Hover; // 0x458 (8)
	struct UImage IMG_BtnDeco_PlayBtn03_Normal; // 0x460 (8)
	struct UImage IMG_BtnDeco_PlayBtn04_Disabled; // 0x468 (8)
	struct UImage IMG_BtnDeco_PlayBtn04_Hover; // 0x470 (8)
	struct UImage IMG_BtnDeco_PlayBtn04_Normal; // 0x478 (8)
	struct UImage IMG_BtnDeco_PlayBtn05_Disabled; // 0x480 (8)
	struct UImage IMG_BtnDeco_PlayBtn05_Hover; // 0x488 (8)
	struct UImage IMG_BtnDeco_PlayBtn05_Normal; // 0x490 (8)
	struct UImage IMG_BtnDeco_PlayBtn06_Disabled; // 0x498 (8)
	struct UImage IMG_BtnDeco_PlayBtn06_Hover; // 0x4A0 (8)
	struct UImage IMG_BtnDeco_PlayBtn06_Normal; // 0x4A8 (8)
	struct UImage IMG_BtnDeco_PlayBtn07_Disabled; // 0x4B0 (8)
	struct UImage IMG_BtnDeco_PlayBtn07_Hover; // 0x4B8 (8)
	struct UImage IMG_BtnDeco_PlayBtn07_Normal; // 0x4C0 (8)
	struct UImage IMG_BtnDeco_PlayBtn08_Disabled; // 0x4C8 (8)
	struct UImage IMG_BtnDeco_PlayBtn08_Hover; // 0x4D0 (8)
	struct UImage IMG_BtnDeco_PlayBtn08_Normal; // 0x4D8 (8)
	struct UImage IMG_BtnDeco_PlayBtn09_Disabled; // 0x4E0 (8)
	struct UImage IMG_BtnDeco_PlayBtn09_Hover; // 0x4E8 (8)
	struct UImage IMG_BtnDeco_PlayBtn09_Normal; // 0x4F0 (8)
	struct UImage IMG_BtnDeco_PlayBtn10_Disabled; // 0x4F8 (8)
	struct UImage IMG_BtnDeco_PlayBtn10_Hover; // 0x500 (8)
	struct UImage IMG_BtnDeco_PlayBtn10_Normal; // 0x508 (8)
	struct UImage IMG_BtnDeco_PlayBtn11_Disabled; // 0x510 (8)
	struct UImage IMG_BtnDeco_PlayBtn11_Hover; // 0x518 (8)
	struct UImage IMG_BtnDeco_PlayBtn11_Normal; // 0x520 (8)
	struct UImage IMG_BtnDot_Matching; // 0x528 (8)
	struct UImage IMG_BtnDot_PlayBtn_Disabled; // 0x530 (8)
	struct UImage IMG_BtnDot_PlayBtn_Hover; // 0x538 (8)
	struct UImage IMG_BtnDot_PlayBtn_Normal; // 0x540 (8)
	struct UImage IMG_Disabled_ReasonBg; // 0x548 (8)
	struct UImage IMG_Glow_Matching; // 0x550 (8)
	struct UImage IMG_Glow_Matching2; // 0x558 (8)
	struct UImage IMG_Glow_Matching3; // 0x560 (8)
	struct UImage IMG_Glow_Matching4; // 0x568 (8)
	struct UImage IMG_Glow_PlayBtn_Hover; // 0x570 (8)
	struct UImage IMG_Glow_PlayBtn_Hover2; // 0x578 (8)
	struct UImage IMG_Glow_PlayBtn_Hover3; // 0x580 (8)
	struct UImage IMG_Glow_PlayBtn_Hover4; // 0x588 (8)
	struct UImage IMG_Glow_PlayBtn_Normal; // 0x590 (8)
	struct UImage IMG_Glow_PlayBtn_Normal2; // 0x598 (8)
	struct UImage IMG_Glow_PlayBtn_Normal3; // 0x5A0 (8)
	struct UImage IMG_Glow_PlayBtn_Normal4; // 0x5A8 (8)
	struct UImage IMG_Idle; // 0x5B0 (8)
	struct UImage IMG_Marching_Bg; // 0x5B8 (8)
	struct UImage IMG_Muted; // 0x5C0 (8)
	struct UImage IMG_NoAudio; // 0x5C8 (8)
	struct UImage IMG_NotJoined; // 0x5D0 (8)
	struct UImage IMG_QR_Discord; // 0x5D8 (8)
	struct UImage IMG_QR_Domestic; // 0x5E0 (8)
	struct UImage IMG_QR_Global; // 0x5E8 (8)
	struct UImage IMG_Speaking; // 0x5F0 (8)
	struct URetainerBox RB_Matching_Mask; // 0x5F8 (8)
	struct URetainerBox RB_PlayBtn_Mask; // 0x600 (8)

	void PreConstruct(bool IsDesignTime); // Function AgentLobby.AgentLobby_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_AgentLobby(int32_t EntryPoint); // Function AgentLobby.AgentLobby_C.ExecuteUbergraph_AgentLobby(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function AgentLobby.AgentLobby_C.PreConstruct
inline void UAgentLobby_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentLobby.AgentLobby_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentLobby.AgentLobby_C.ExecuteUbergraph_AgentLobby
inline void UAgentLobby_C::ExecuteUbergraph_AgentLobby(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentLobby.AgentLobby_C.ExecuteUbergraph_AgentLobby");

	struct ExecuteUbergraph_AgentLobby_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_AgentLobby_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

