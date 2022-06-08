// Class WebBrowserWidget.WebBrowser
class UWebBrowser : public UWidget {

public:

	struct FMulticastInlineDelegate OnUrlChanged; // 0x108 (16)
	struct FMulticastInlineDelegate OnBeforePopup; // 0x118 (16)
	struct FString InitialURL; // 0x128 (16)
	bool bSupportsTransparency; // 0x138 (1)

	void OnUrlChanged__DelegateSignature(struct FText& Text); // DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame); // DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature(MulticastDelegate|Public|Delegate) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void LoadURL(struct FString NewURL); // Function WebBrowserWidget.WebBrowser.LoadURL(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD01710>
	void LoadString(struct FString Contents, struct FString DummyURL); // Function WebBrowserWidget.WebBrowser.LoadString(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD015A0>
	struct FString GetUrl(); // Function WebBrowserWidget.WebBrowser.GetUrl(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xD01520>
	struct FText GetTitleText(); // Function WebBrowserWidget.WebBrowser.GetTitleText(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xD01480>
	void ExecuteJavascript(struct FString ScriptText); // Function WebBrowserWidget.WebBrowser.ExecuteJavascript(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD013E0>
};

// Class WebBrowserWidget.WebBrowserAssetManager
class UWebBrowserAssetManager : public Object {

public:

	struct TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28 (40)
};

// DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature
inline void UWebBrowser::OnUrlChanged__DelegateSignature(struct FText& Text) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnUrlChanged__DelegateSignature");

	struct OnUrlChanged__DelegateSignature_Params {
		struct FText& Text;
	}; OnUrlChanged__DelegateSignature_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Text = Params.Text;

}

// DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature
inline void UWebBrowser::OnBeforePopup__DelegateSignature(struct FString URL, struct FString Frame) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction WebBrowserWidget.WebBrowser.OnBeforePopup__DelegateSignature");

	struct OnBeforePopup__DelegateSignature_Params {
		struct FString URL;
		struct FString Frame;
	}; OnBeforePopup__DelegateSignature_Params Params;

	Params.URL = URL;
	Params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebBrowserWidget.WebBrowser.LoadURL
inline void UWebBrowser::LoadURL(struct FString NewURL) {
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadURL");

	struct LoadURL_Params {
		struct FString NewURL;
	}; LoadURL_Params Params;

	Params.NewURL = NewURL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebBrowserWidget.WebBrowser.LoadString
inline void UWebBrowser::LoadString(struct FString Contents, struct FString DummyURL) {
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.LoadString");

	struct LoadString_Params {
		struct FString Contents;
		struct FString DummyURL;
	}; LoadString_Params Params;

	Params.Contents = Contents;
	Params.DummyURL = DummyURL;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function WebBrowserWidget.WebBrowser.GetUrl
inline struct FString UWebBrowser::GetUrl() {
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetUrl");

	struct GetUrl_Params {
		
		struct FString ReturnValue;

	}; GetUrl_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function WebBrowserWidget.WebBrowser.GetTitleText
inline struct FText UWebBrowser::GetTitleText() {
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.GetTitleText");

	struct GetTitleText_Params {
		
		struct FText ReturnValue;

	}; GetTitleText_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function WebBrowserWidget.WebBrowser.ExecuteJavascript
inline void UWebBrowser::ExecuteJavascript(struct FString ScriptText) {
	static auto fn = UObject::FindObject<UFunction>("Function WebBrowserWidget.WebBrowser.ExecuteJavascript");

	struct ExecuteJavascript_Params {
		struct FString ScriptText;
	}; ExecuteJavascript_Params Params;

	Params.ScriptText = ScriptText;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

