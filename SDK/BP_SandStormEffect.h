// BlueprintGeneratedClass BP_SandStormEffect.BP_SandStormEffect_C
class ABP_SandStormEffect_C : public APDEnvEffect {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528 (8)
	struct UParticleSystemComponent Speck; // 0x530 (8)
	struct UParticleSystemComponent Dust; // 0x538 (8)
	struct UParticleSystemComponent FogVolume; // 0x540 (8)

	void ReceiveTick(float DeltaSeconds); // Function BP_SandStormEffect.BP_SandStormEffect_C.ReceiveTick(Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_BP_SandStormEffect(int32_t EntryPoint); // Function BP_SandStormEffect.BP_SandStormEffect_C.ExecuteUbergraph_BP_SandStormEffect(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function BP_SandStormEffect.BP_SandStormEffect_C.ReceiveTick
inline void ABP_SandStormEffect_C::ReceiveTick(float DeltaSeconds) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStormEffect.BP_SandStormEffect_C.ReceiveTick");

	struct ReceiveTick_Params {
		float DeltaSeconds;
	}; ReceiveTick_Params Params;

	Params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function BP_SandStormEffect.BP_SandStormEffect_C.ExecuteUbergraph_BP_SandStormEffect
inline void ABP_SandStormEffect_C::ExecuteUbergraph_BP_SandStormEffect(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function BP_SandStormEffect.BP_SandStormEffect_C.ExecuteUbergraph_BP_SandStormEffect");

	struct ExecuteUbergraph_BP_SandStormEffect_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_BP_SandStormEffect_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

