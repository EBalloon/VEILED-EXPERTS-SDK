// WidgetBlueprintGeneratedClass Spectator_KeyR.Spectator_KeyR_C
class USpectator_KeyR_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230 (8)
	struct UCanvasPanel CP_Key; // 0x238 (8)
	struct UImage IMG_KeyBack; // 0x240 (8)
	struct UImage IMG_KeyFill; // 0x248 (8)
	struct UImage IMG_Line; // 0x250 (8)
	struct UPDTextBlock TB_Key; // 0x258 (8)
	struct FText Key; // 0x260 (24)
	struct FVector2D KeySize; // 0x278 (8)

	void PreConstruct(bool IsDesignTime); // Function Spectator_KeyR.Spectator_KeyR_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void Construct(); // Function Spectator_KeyR.Spectator_KeyR_C.Construct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_Spectator_KeyR(int32_t EntryPoint); // Function Spectator_KeyR.Spectator_KeyR_C.ExecuteUbergraph_Spectator_KeyR(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function Spectator_KeyR.Spectator_KeyR_C.PreConstruct
inline void USpectator_KeyR_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Spectator_KeyR.Spectator_KeyR_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Spectator_KeyR.Spectator_KeyR_C.Construct
inline void USpectator_KeyR_C::Construct() {
	static auto fn = UObject::FindObject<UFunction>("Function Spectator_KeyR.Spectator_KeyR_C.Construct");

	struct Construct_Params {
		
	}; Construct_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Spectator_KeyR.Spectator_KeyR_C.ExecuteUbergraph_Spectator_KeyR
inline void USpectator_KeyR_C::ExecuteUbergraph_Spectator_KeyR(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Spectator_KeyR.Spectator_KeyR_C.ExecuteUbergraph_Spectator_KeyR");

	struct ExecuteUbergraph_Spectator_KeyR_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Spectator_KeyR_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

