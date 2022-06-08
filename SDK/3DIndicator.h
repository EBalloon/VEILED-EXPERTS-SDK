// WidgetBlueprintGeneratedClass 3DIndicator.3DIndicator_C
class U3DIndicator_C : public UPD3DIndicatorUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2E8 (8)

	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function 3DIndicator.3DIndicator_C.Tick(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_3DIndicator(int32_t EntryPoint); // Function 3DIndicator.3DIndicator_C.ExecuteUbergraph_3DIndicator(Final|UbergraphFunction|HasDefaults) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function 3DIndicator.3DIndicator_C.Tick
inline void U3DIndicator_C::Tick(struct FGeometry MyGeometry, float InDeltaTime) {
	static auto fn = UObject::FindObject<UFunction>("Function 3DIndicator.3DIndicator_C.Tick");

	struct Tick_Params {
		struct FGeometry MyGeometry;
		float InDeltaTime;
	}; Tick_Params Params;

	Params.MyGeometry = MyGeometry;
	Params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function 3DIndicator.3DIndicator_C.ExecuteUbergraph_3DIndicator
inline void U3DIndicator_C::ExecuteUbergraph_3DIndicator(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function 3DIndicator.3DIndicator_C.ExecuteUbergraph_3DIndicator");

	struct ExecuteUbergraph_3DIndicator_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_3DIndicator_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

