// WidgetBlueprintGeneratedClass KillLog.KillLog_C
class UKillLog_C : public UPDKillLogUI {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2A0 (8)
	struct UKillLogModule_C KillLogModule; // 0x2A8 (8)
	struct UKillLogModule_C KillLogModule_2; // 0x2B0 (8)
	struct UKillLogModule_C KillLogModule_3; // 0x2B8 (8)
	struct UKillLogModule_C KillLogModule_4; // 0x2C0 (8)
	struct UKillLogModule_C KillLogModule_5; // 0x2C8 (8)

	void PreConstruct(bool IsDesignTime); // Function KillLog.KillLog_C.PreConstruct(BlueprintCosmetic|Event|Public|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_KillLog(int32_t EntryPoint); // Function KillLog.KillLog_C.ExecuteUbergraph_KillLog(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function KillLog.KillLog_C.PreConstruct
inline void UKillLog_C::PreConstruct(bool IsDesignTime) {
	static auto fn = UObject::FindObject<UFunction>("Function KillLog.KillLog_C.PreConstruct");

	struct PreConstruct_Params {
		bool IsDesignTime;
	}; PreConstruct_Params Params;

	Params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function KillLog.KillLog_C.ExecuteUbergraph_KillLog
inline void UKillLog_C::ExecuteUbergraph_KillLog(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function KillLog.KillLog_C.ExecuteUbergraph_KillLog");

	struct ExecuteUbergraph_KillLog_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_KillLog_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

