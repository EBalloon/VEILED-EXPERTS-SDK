// WidgetBlueprintGeneratedClass WebPopup.WebPopup_C
class UWebPopup_C : public UPDWebPopupUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2F8 (8)
	struct UWidgetAnimation Anim_SceneOut; // 0x300 (8)
	struct UWidgetAnimation Anim_SceneShowUp; // 0x308 (8)
	struct UImage IMG_ActiveBarDeco; // 0x310 (8)
	struct UImage IMG_Blinder; // 0x318 (8)
	struct UImage IMG_BottomBar; // 0x320 (8)
	struct UImage IMG_BoxGlow; // 0x328 (8)
	struct UImage IMG_Deco_BL; // 0x330 (8)
	struct UImage IMG_Deco_BR; // 0x338 (8)
	struct UImage IMG_Deco_TL; // 0x340 (8)
	struct UImage IMG_Deco_TR; // 0x348 (8)
	struct UImage IMG_Outglow_Agent; // 0x350 (8)
	struct UImage IMG_PopupBg; // 0x358 (8)
	struct UImage IMG_TitleActiveBar; // 0x360 (8)
	struct UImage IMG_TopBar; // 0x368 (8)

	void OpenWebPage(); // Function WebPopup.WebPopup_C.OpenWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void CloseWebPage(); // Function WebPopup.WebPopup_C.CloseWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_WebPopup(int32_t EntryPoint); // Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function WebPopup.WebPopup_C.OpenWebPage
inline void UWebPopup_C::OpenWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.OpenWebPage");

	struct OpenWebPage_Params {
		
	}; OpenWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebPopup.WebPopup_C.CloseWebPage
inline void UWebPopup_C::CloseWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.CloseWebPage");

	struct CloseWebPage_Params {
		
	}; CloseWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup
inline void UWebPopup_C::ExecuteUbergraph_WebPopup(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WebPopup.WebPopup_C.ExecuteUbergraph_WebPopup");

	struct ExecuteUbergraph_WebPopup_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WebPopup_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

