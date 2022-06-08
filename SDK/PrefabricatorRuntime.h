// Enum PrefabricatorRuntime.EPrefabricatorPivotPosition
enum class EPrefabricatorPivotPosition : uint8_t {
	ExtremeLeft = 0,
	ExtremeRight = 1,
	Center = 2,
	EPrefabricatorPivotPosition_MAX = 3,
};

// Class PrefabricatorRuntime.PrefabActor
class APrefabActor : public UActor {

public:

	struct UPrefabComponent PrefabComponent; // 0x220 (8)
	struct FGuid LastUpdateID; // 0x228 (16)
	int32_t Seed; // 0x238 (4)

	void SavePrefab(); // Function PrefabricatorRuntime.PrefabActor.SavePrefab(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCE3960>
	void RandomizeSeed(struct FRandomStream& InRandom, bool bRecursive); // Function PrefabricatorRuntime.PrefabActor.RandomizeSeed(Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCE3890>
	void LoadPrefab(); // Function PrefabricatorRuntime.PrefabActor.LoadPrefab(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCE36A0>
	bool IsPrefabOutdated(); // Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xCE3670>
	struct UPrefabricatorAsset GetPrefabAsset(); // Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xCE3640>
};

// Class PrefabricatorRuntime.PrefabComponent
class UPrefabComponent : public USceneComponent {

public:

	struct TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface; // 0x1F0 (40)
};

// Class PrefabricatorRuntime.PrefabDebugActor
class APrefabDebugActor : public UActor {

public:

	struct UActor Actor; // 0x220 (8)
	struct TArray<char> ActorData; // 0x228 (16)
};

// Class PrefabricatorRuntime.PrefabRandomizer
class APrefabRandomizer : public UActor {

public:

	bool bRandomizeOnBeginPlay; // 0x220 (1)
	int32_t SeedOffset; // 0x224 (4)
	float MaxBuildTimePerFrame; // 0x228 (4)
	struct FMulticastInlineDelegate OnRandomizationComplete; // 0x230 (16)
	bool bFastSyncBuild; // 0x240 (1)

	void Randomize(int32_t InSeed); // Function PrefabricatorRuntime.PrefabRandomizer.Randomize(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCE3750>
};

// Class PrefabricatorRuntime.PrefabricatorProperty
class UPrefabricatorProperty : public Object {

public:

	struct FString PropertyName; // 0x28 (16)
	struct FString ExportedValue; // 0x38 (16)
	struct TArray<struct FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x48 (16)
	bool bIsCrossReferencedActor; // 0x58 (1)
	struct FGuid CrossReferencePrefabActorId; // 0x5C (16)
};

// Class PrefabricatorRuntime.PrefabricatorAssetInterface
class UPrefabricatorAssetInterface : public Object {

public:

	struct UClass* EventListener; // 0x28 (8)
	bool bReplicates; // 0x30 (1)
};

// Class PrefabricatorRuntime.PrefabricatorAsset
class UPrefabricatorAsset : public UPrefabricatorAssetInterface {

public:

	struct TArray<struct FPrefabricatorActorData> ActorData; // 0x38 (16)
	enum class EComponentMobility PrefabMobility; // 0x48 (1)
	struct FGuid LastUpdateID; // 0x4C (16)
	struct UThumbnailInfo ThumbnailInfo; // 0x60 (8)
	uint32_t Version; // 0x68 (4)
};

// Class PrefabricatorRuntime.PrefabricatorAssetCollection
class UPrefabricatorAssetCollection : public UPrefabricatorAssetInterface {

public:

	struct TArray<struct FPrefabricatorAssetCollectionItem> Prefabs; // 0x38 (16)
	uint32_t Version; // 0x48 (4)
};

// Class PrefabricatorRuntime.PrefabricatorAssetUserData
class UPrefabricatorAssetUserData : public UAssetUserData {

public:

	struct TWeakObjectPtr<struct APrefabActor> PrefabActor; // 0x28 (8)
	struct FGuid ItemId; // 0x30 (16)
};

// Class PrefabricatorRuntime.PrefabricatorSettings
class UPrefabricatorSettings : public UDeveloperSettings {

public:

	enum class EPrefabricatorPivotPosition PivotPosition; // 0x38 (1)
	bool bAllowDynamicUpdate; // 0x39 (1)
	float DefaultThumbnailPitch; // 0x3C (4)
	float DefaultThumbnailYaw; // 0x40 (4)
	float DefaultThumbnailZoom; // 0x44 (4)
};

// Class PrefabricatorRuntime.PrefabSeedLinker
class APrefabSeedLinker : public UActor {

public:

	struct TArray<struct TWeakObjectPtr<struct APrefabActor>> LinkedActors; // 0x220 (16)
	struct UPrefabSeedLinkerComponent SeedLinkerComponent; // 0x230 (8)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorAssetCollectionItem
struct FPrefabricatorAssetCollectionItem {
	struct TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset; // 0x0 (40)
	float Weight; // 0x28 (4)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorActorData
struct FPrefabricatorActorData {
	struct FGuid PrefabItemID; // 0x0 (16)
	struct FTransform RelativeTransform; // 0x10 (48)
	struct FString ClassPath; // 0x40 (16)
	struct FSoftClassPath ClassPathRef; // 0x50 (24)
	struct TArray<struct UPrefabricatorProperty> Properties; // 0x68 (16)
	struct TArray<struct FPrefabricatorComponentData> Components; // 0x78 (16)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorComponentData
struct FPrefabricatorComponentData {
	struct FTransform RelativeTransform; // 0x0 (48)
	struct FString ComponentName; // 0x30 (16)
	struct TArray<struct UPrefabricatorProperty> Properties; // 0x40 (16)
};

// ScriptStruct PrefabricatorRuntime.PrefabricatorPropertyAssetMapping
struct FPrefabricatorPropertyAssetMapping {
	struct FSoftObjectPath AssetReference; // 0x0 (24)
	struct FString AssetClassName; // 0x18 (16)
	struct FName AssetObjectPath; // 0x28 (8)
	bool bUseQuotes; // 0x30 (1)
};

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
inline void APrefabActor::SavePrefab() {
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.SavePrefab");

	struct SavePrefab_Params {
		
	}; SavePrefab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
inline void APrefabActor::RandomizeSeed(struct FRandomStream& InRandom, bool bRecursive) {
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.RandomizeSeed");

	struct RandomizeSeed_Params {
		struct FRandomStream& InRandom;
		bool bRecursive;
	}; RandomizeSeed_Params Params;

	Params.bRecursive = bRecursive;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	InRandom = Params.InRandom;

}

// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
inline void APrefabActor::LoadPrefab() {
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.LoadPrefab");

	struct LoadPrefab_Params {
		
	}; LoadPrefab_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
inline bool APrefabActor::IsPrefabOutdated() {
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated");

	struct IsPrefabOutdated_Params {
		
		bool ReturnValue;

	}; IsPrefabOutdated_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
inline struct UPrefabricatorAsset APrefabActor::GetPrefabAsset() {
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset");

	struct GetPrefabAsset_Params {
		
		struct UPrefabricatorAsset ReturnValue;

	}; GetPrefabAsset_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
inline void APrefabRandomizer::Randomize(int32_t InSeed) {
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabRandomizer.Randomize");

	struct Randomize_Params {
		int32_t InSeed;
	}; Randomize_Params Params;

	Params.InSeed = InSeed;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

