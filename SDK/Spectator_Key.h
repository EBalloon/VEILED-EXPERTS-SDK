// WidgetBlueprintGeneratedClass Spectator_Key.Spectator_Key_C
class USpectator_Key_C : public UUserWidget {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230 (8)
	struct UCanvasPanel CP_Key; // 0x238 (8)
	struct UImage IMG_KeyBack; // 0x240 (8)
	struct UImage IMG_KeyFill; // 0x248 (8)
	struct UImage IMG_Line; // 0x250 (8)
	struct UPDTextBlock TB_Key; // 0x258 (8)
	struct FText Key; // 0x260 (24)
	struct FVector2D Size; // 0x278 (8)

	void PreConstruct(bool IsDesignTime); // Function Spectator_Key.Spectator_Key_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_Spectator_Key(int32_t EntryPoint); // Function Spectator_Key.Spectator_Key_C.ExecuteUbergraph_Spectator_Key(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function Spectator_Key.Spectator_Key_C.PreConstruct
inline void USpectator_Key_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function Spectator_Key.Spectator_Key_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function Spectator_Key.Spectator_Key_C.ExecuteUbergraph_Spectator_Key
inline void USpectator_Key_C::ExecuteUbergraph_Spectator_Key(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function Spectator_Key.Spectator_Key_C.ExecuteUbergraph_Spectator_Key");

	struct ExecuteUbergraph_Spectator_Key_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_Spectator_Key_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

