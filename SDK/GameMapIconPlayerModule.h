// WidgetBlueprintGeneratedClass GameMapIconPlayerModule.GameMapIconPlayerModule_C
class UGameMapIconPlayerModule_C : public UPDGameMapIconPlayerUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330 (8)
	struct UWidgetAnimation Shooting; // 0x338 (8)
	struct UImage IMG_Bomb; // 0x340 (8)
	struct UImage IMG_Dead; // 0x348 (8)
	struct UImage IMG_Shot00; // 0x350 (8)
	struct UImage IMG_Shot01; // 0x358 (8)
	struct UImage IMG_VeiwArea; // 0x360 (8)

	void Construct(); // Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_GameMapIconPlayerModule(int32_t EntryPoint); // Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.ExecuteUbergraph_GameMapIconPlayerModule(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.Construct
inline void UGameMapIconPlayerModule_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.ExecuteUbergraph_GameMapIconPlayerModule
inline void UGameMapIconPlayerModule_C::ExecuteUbergraph_GameMapIconPlayerModule(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function GameMapIconPlayerModule.GameMapIconPlayerModule_C.ExecuteUbergraph_GameMapIconPlayerModule");

	struct ExecuteUbergraph_GameMapIconPlayerModule_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_GameMapIconPlayerModule_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

