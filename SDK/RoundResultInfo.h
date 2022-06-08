// WidgetBlueprintGeneratedClass RoundResultInfo.RoundResultInfo_C
class URoundResultInfo_C : public UPDRoundResult {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338 (8)
	struct UWidgetAnimation 10_AniSwitch; // 0x340 (8)
	struct UWidgetAnimation 08_AniKeyPlayer; // 0x348 (8)
	struct UWidgetAnimation 061_AniTeamRecordEnd; // 0x350 (8)
	struct UWidgetAnimation 06_AniTeamRecordStart; // 0x358 (8)
	struct UWidgetAnimation 07_AniKeyPlayerBack; // 0x360 (8)
	struct UWidgetAnimation 05_AniSwitch; // 0x368 (8)
	struct UWidgetAnimation 041_AniMVPEnd; // 0x370 (8)
	struct UWidgetAnimation 031_AniPlayerNotiEnd; // 0x378 (8)
	struct UWidgetAnimation 04_AniMVPStart; // 0x380 (8)
	struct UWidgetAnimation 03_AniPlayerNotiStart; // 0x388 (8)
	struct UWidgetAnimation 01_AniRoundResult; // 0x390 (8)
	struct UWidgetAnimation 02_Result_Round; // 0x398 (8)
	struct UWidgetAnimation 00_AniRoundEnd; // 0x3A0 (8)
	struct UImage Img_Bg; // 0x3A8 (8)
	struct FLinearColor TeamColorBlue; // 0x3B0 (16)
	struct FLinearColor TeamColorOrange; // 0x3C0 (16)
	struct FLinearColor ResultColorLose; // 0x3D0 (16)
	struct FLinearColor ResultColorDraw; // 0x3E0 (16)
	struct FLinearColor SetTeamColor; // 0x3F0 (16)
	struct FLinearColor SetfoeColor; // 0x400 (16)
	struct FLinearColor SetMVPColor; // 0x410 (16)

	struct FLinearColor FoeColorSet(); // Function RoundResultInfo.RoundResultInfo_C.FoeColorSet(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	struct FLinearColor TeamColorSet(); // Function RoundResultInfo.RoundResultInfo_C.TeamColorSet(Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void OrangeTeam(); // Function RoundResultInfo.RoundResultInfo_C.OrangeTeam(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MVP_Orage(); // Function RoundResultInfo.RoundResultInfo_C.MVP_Orage(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void MVP_Blue(); // Function RoundResultInfo.RoundResultInfo_C.MVP_Blue(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void BlueTeam(); // Function RoundResultInfo.RoundResultInfo_C.BlueTeam(BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_RoundResultInfo(int32_t EntryPoint); // Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function RoundResultInfo.RoundResultInfo_C.FoeColorSet
inline struct FLinearColor URoundResultInfo_C::FoeColorSet() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.FoeColorSet");

	struct FoeColorSet_Params {
		
		struct FLinearColor ReturnValue;

	}; FoeColorSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function RoundResultInfo.RoundResultInfo_C.TeamColorSet
inline struct FLinearColor URoundResultInfo_C::TeamColorSet() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.TeamColorSet");

	struct TeamColorSet_Params {
		
		struct FLinearColor ReturnValue;

	}; TeamColorSet_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function RoundResultInfo.RoundResultInfo_C.OrangeTeam
inline void URoundResultInfo_C::OrangeTeam() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.OrangeTeam");

	struct OrangeTeam_Params {
		
	}; OrangeTeam_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoundResultInfo.RoundResultInfo_C.MVP_Orage
inline void URoundResultInfo_C::MVP_Orage() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.MVP_Orage");

	struct MVP_Orage_Params {
		
	}; MVP_Orage_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoundResultInfo.RoundResultInfo_C.MVP_Blue
inline void URoundResultInfo_C::MVP_Blue() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.MVP_Blue");

	struct MVP_Blue_Params {
		
	}; MVP_Blue_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoundResultInfo.RoundResultInfo_C.BlueTeam
inline void URoundResultInfo_C::BlueTeam() {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.BlueTeam");

	struct BlueTeam_Params {
		
	}; BlueTeam_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo
inline void URoundResultInfo_C::ExecuteUbergraph_RoundResultInfo(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function RoundResultInfo.RoundResultInfo_C.ExecuteUbergraph_RoundResultInfo");

	struct ExecuteUbergraph_RoundResultInfo_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_RoundResultInfo_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

