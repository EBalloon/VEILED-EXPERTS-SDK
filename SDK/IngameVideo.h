// WidgetBlueprintGeneratedClass IngameVideo.IngameVideo_C
class UIngameVideo_C : public UPDIngameVideoUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x318 (8)
	struct UWidgetAnimation Anim_LineShow; // 0x320 (8)
	struct UImage IMG_MovieD; // 0x328 (8)

	void OnInitMediaPlayer(); // Function IngameVideo.IngameVideo_C.OnInitMediaPlayer(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void IngameMovieOpen(struct FString OpenedUrl); // Function IngameVideo.IngameVideo_C.IngameMovieOpen(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_IngameVideo(int32_t EntryPoint); // Function IngameVideo.IngameVideo_C.ExecuteUbergraph_IngameVideo(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function IngameVideo.IngameVideo_C.OnInitMediaPlayer
inline void UIngameVideo_C::OnInitMediaPlayer() {
	static auto fn = UObject::FindObject<UFunction>("Function IngameVideo.IngameVideo_C.OnInitMediaPlayer");

	struct OnInitMediaPlayer_Params {
		
	}; OnInitMediaPlayer_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameVideo.IngameVideo_C.IngameMovieOpen
inline void UIngameVideo_C::IngameMovieOpen(struct FString OpenedUrl) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameVideo.IngameVideo_C.IngameMovieOpen");

	struct IngameMovieOpen_Params {
		struct FString OpenedUrl;
	}; IngameMovieOpen_Params Params;

	Params.OpenedUrl = OpenedUrl;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function IngameVideo.IngameVideo_C.ExecuteUbergraph_IngameVideo
inline void UIngameVideo_C::ExecuteUbergraph_IngameVideo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function IngameVideo.IngameVideo_C.ExecuteUbergraph_IngameVideo");

	struct ExecuteUbergraph_IngameVideo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_IngameVideo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

