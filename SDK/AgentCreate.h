// WidgetBlueprintGeneratedClass AgentCreate.AgentCreate_C
class UAgentCreate_C : public UPDAgentCreateUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340 (8)
	struct UWidgetAnimation Anim_SceneOut; // 0x348 (8)
	struct UWidgetAnimation Anim_SceneShowUp; // 0x350 (8)
	struct UImage IMG_ActiveBarDeco; // 0x358 (8)
	struct UImage IMG_BottomBg; // 0x360 (8)
	struct UImage IMG_Clipboard; // 0x368 (8)
	struct UImage IMG_DescIcon; // 0x370 (8)
	struct UImage IMG_Divider; // 0x378 (8)
	struct UImage IMG_Mouse_W; // 0x380 (8)
	struct UImage IMG_Outglow; // 0x388 (8)
	struct UImage IMG_Outglow_Agent; // 0x390 (8)
	struct UImage IMG_Outline; // 0x398 (8)
	struct UImage IMG_PerkPreview; // 0x3A0 (8)
	struct UImage IMG_TitleActiveBar; // 0x3A8 (8)
	struct UImage IMG_ToolTipBg; // 0x3B0 (8)

	void OnBP_OnGetItemChildren_1(struct Object Item, struct TArray<struct Object>& Children); // Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1(Public|HasOutParms|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MovieEnd(); // Function AgentCreate.AgentCreate_C.MovieEnd(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MovieOpen(struct FString OpenedUrl); // Function AgentCreate.AgentCreate_C.MovieOpen(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnInitMediaPlayer(); // Function AgentCreate.AgentCreate_C.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_AgentCreate(int32_t EntryPoint); // Function AgentCreate.AgentCreate_C.ExecuteUbergraph_AgentCreate(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1
inline void UAgentCreate_C::OnBP_OnGetItemChildren_1(struct Object Item, struct TArray<struct Object>& Children) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentCreate.AgentCreate_C.OnBP_OnGetItemChildren_1");

	struct OnBP_OnGetItemChildren_1_Params {
		struct Object Item;
		struct TArray<struct Object>& Children;
	}; OnBP_OnGetItemChildren_1_Params Params;

	Params.Item = Item;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Children = Params.Children;

}

// Function AgentCreate.AgentCreate_C.MovieEnd
inline void UAgentCreate_C::MovieEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function AgentCreate.AgentCreate_C.MovieEnd");

	struct MovieEnd_Params {
		
	}; MovieEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentCreate.AgentCreate_C.MovieOpen
inline void UAgentCreate_C::MovieOpen(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentCreate.AgentCreate_C.MovieOpen");

	struct MovieOpen_Params {
		struct FString OpenedUrl;
	}; MovieOpen_Params Params;

	Params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentCreate.AgentCreate_C.OnInitMediaPlayer
inline void UAgentCreate_C::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function AgentCreate.AgentCreate_C.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function AgentCreate.AgentCreate_C.ExecuteUbergraph_AgentCreate
inline void UAgentCreate_C::ExecuteUbergraph_AgentCreate(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function AgentCreate.AgentCreate_C.ExecuteUbergraph_AgentCreate");

	struct ExecuteUbergraph_AgentCreate_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_AgentCreate_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

