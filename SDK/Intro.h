// WidgetBlueprintGeneratedClass Intro.Intro_C
class UIntro_C : public UPDIntroUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E8 (8)
	struct UImage IMG_AnimIndicator_A; // 0x2F0 (8)
	struct UImage IMG_AnimIndicator_B; // 0x2F8 (8)
	struct UImage Img_Indicator; // 0x300 (8)
	struct UImage IMG_PDLogo; // 0x308 (8)
	struct UWidgetSwitcher WS_AnimIndicator; // 0x310 (8)

	void MovieEnd(); // Function Intro.Intro_C.MovieEnd(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnInitMediaPlayer(); // Function Intro.Intro_C.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MovieOpen(struct FString OpenedUrl); // Function Intro.Intro_C.MovieOpen(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_Intro(int32_t EntryPoint); // Function Intro.Intro_C.ExecuteUbergraph_Intro(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function Intro.Intro_C.MovieEnd
inline void UIntro_C::MovieEnd() {
	static auto fn = UObject::FindObject<UFunction>("Function Intro.Intro_C.MovieEnd");

	struct MovieEnd_Params {
		
	}; MovieEnd_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Intro.Intro_C.OnInitMediaPlayer
inline void UIntro_C::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function Intro.Intro_C.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Intro.Intro_C.MovieOpen
inline void UIntro_C::MovieOpen(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function Intro.Intro_C.MovieOpen");

	struct MovieOpen_Params {
		struct FString OpenedUrl;
	}; MovieOpen_Params Params;

	Params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Intro.Intro_C.ExecuteUbergraph_Intro
inline void UIntro_C::ExecuteUbergraph_Intro(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Intro.Intro_C.ExecuteUbergraph_Intro");

	struct ExecuteUbergraph_Intro_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Intro_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

