// WidgetBlueprintGeneratedClass Start.Start_C
class UStart_C : public UPDStartUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2C0 (8)
	struct UWidgetAnimation Anim_Show; // 0x2C8 (8)
	struct UImage IMG_AnimIndicator_A; // 0x2D0 (8)
	struct UImage IMG_AnimIndicator_B; // 0x2D8 (8)
	struct UImage Img_Bg; // 0x2E0 (8)
	struct UImage IMG_LoadingBg; // 0x2E8 (8)
	struct UImage IMG_PDLogo; // 0x2F0 (8)
	struct UImage IMG_Rating_01; // 0x2F8 (8)
	struct UImage IMG_Rating_02; // 0x300 (8)
	struct UImage IMG_Rating_03; // 0x308 (8)
	struct UWidgetSwitcher WS_AnimIndicator; // 0x310 (8)

	void OnInitMediaPlayer(); // Function Start.Start_C.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MovieEnd(); // Function Start.Start_C.MovieEnd(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MovieStart(struct FString OpenedUrl); // Function Start.Start_C.MovieStart(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_Start(int32_t EntryPoint); // Function Start.Start_C.ExecuteUbergraph_Start(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function Start.Start_C.OnInitMediaPlayer
inline void UStart_C::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Start.Start_C.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Start.Start_C.MovieEnd
inline void UStart_C::MovieEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function Start.Start_C.MovieEnd");

	struct MovieEnd_Params {
		
	}; MovieEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Start.Start_C.MovieStart
inline void UStart_C::MovieStart(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function Start.Start_C.MovieStart");

	struct MovieStart_Params {
		struct FString OpenedUrl;
	}; MovieStart_Params Params;

	Params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Start.Start_C.ExecuteUbergraph_Start
inline void UStart_C::ExecuteUbergraph_Start(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Start.Start_C.ExecuteUbergraph_Start");

	struct ExecuteUbergraph_Start_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Start_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

