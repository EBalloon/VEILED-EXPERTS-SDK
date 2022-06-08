// WidgetBlueprintGeneratedClass WebTermsOfServicePopup.WebTermsOfServicePopup_C
class UWebTermsOfServicePopup_C : public UPDWebTermsOfServicePopupUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330 (8)
	struct UWidgetAnimation Anim_SceneOut; // 0x338 (8)
	struct UWidgetAnimation Anim_SceneShowUp; // 0x340 (8)
	struct UImage IMG_Blinder; // 0x348 (8)
	struct UImage IMG_PopupLine; // 0x350 (8)

	void OpenTermsWebPage(); // Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void CloseTermaWebPage(); // Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_WebTermsOfServicePopup(int32_t EntryPoint); // Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage
inline void UWebTermsOfServicePopup_C::OpenTermsWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.OpenTermsWebPage");

	struct OpenTermsWebPage_Params {
		
	}; OpenTermsWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage
inline void UWebTermsOfServicePopup_C::CloseTermaWebPage() {
	static auto fn = UObject::FindObject<UFunction>("Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.CloseTermaWebPage");

	struct CloseTermaWebPage_Params {
		
	}; CloseTermaWebPage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup
inline void UWebTermsOfServicePopup_C::ExecuteUbergraph_WebTermsOfServicePopup(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function WebTermsOfServicePopup.WebTermsOfServicePopup_C.ExecuteUbergraph_WebTermsOfServicePopup");

	struct ExecuteUbergraph_WebTermsOfServicePopup_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_WebTermsOfServicePopup_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

