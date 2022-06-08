// Class VaTexAtlasPlugin.VtaSlateTexture
class UVtaSlateTexture : public Object {

public:

	struct UTexture AtlasTexture; // 0x30 (8)
	struct FVector2D StartUV; // 0x38 (8)
	struct FVector2D SizeUV; // 0x40 (8)

	struct FVector2D GetDimensions(); // Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xD29160>
	struct UVtaSlateTexture CreateRegion(struct FMargin& Margin); // Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD28710>
};

// ScriptStruct VaTexAtlasPlugin.VtaAsset
struct FVtaAsset : FTableRowBase {
	struct TSoftObjectPtr<UMaterialInstanceConstant> Material; // 0x8 (40)
	struct TSoftObjectPtr<UVtaSlateTexture> SlateTexture; // 0x30 (40)
};

// Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions
inline struct FVector2D UVtaSlateTexture::GetDimensions() {
	static auto fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaSlateTexture.GetDimensions");

	struct GetDimensions_Params {
		
		struct FVector2D ReturnValue;

	}; GetDimensions_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion
inline struct UVtaSlateTexture UVtaSlateTexture::CreateRegion(struct FMargin& Margin) {
	static auto fn = UObject::FindObject<UFunction>("Function VaTexAtlasPlugin.VtaSlateTexture.CreateRegion");

	struct CreateRegion_Params {
		struct FMargin& Margin;
		struct UVtaSlateTexture ReturnValue;

	}; CreateRegion_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Margin = Params.Margin;


	return params.ReturnValue;
}

