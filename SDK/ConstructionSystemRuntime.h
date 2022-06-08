// Enum ConstructionSystemRuntime.EConstructionSystemToolType
enum class EConstructionSystemToolType : uint8_t {
	BuildTool = 0,
	RemoveTool = 1,
	EConstructionSystemToolType_MAX = 2,
};

// Enum ConstructionSystemRuntime.EConstructionSystemCursorVisiblity
enum class EConstructionSystemCursorVisiblity : uint8_t {
	Visible = 0,
	VisibleInvalid = 1,
	Hidden = 2,
	EConstructionSystemCursorVisiblity_MAX = 3,
};

// Enum ConstructionSystemRuntime.EPrefabricatorConstructionSnapType
enum class EPrefabricatorConstructionSnapType : uint8_t {
	Floor = 0,
	Wall = 1,
	Object = 2,
	EPrefabricatorConstructionSnapType_MAX = 3,
};

// Class ConstructionSystemRuntime.ConstructionSystemBuildTool
class UConstructionSystemBuildTool : public UConstructionSystemTool {

public:

	float TraceDistance; // 0x30 (4)
	float CursorRotationStepAngle; // 0x34 (4)
	struct UConstructionSystemCursor Cursor; // 0x38 (8)
	struct UPrefabricatorAssetInterface ActivePrefabAsset; // 0x40 (8)

	void SetActivePrefab(struct UPrefabricatorAssetInterface InActivePrefabAsset); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF3F90>
	void HandleInput_RotateCursorStep(float NumSteps); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xCF3C00>
	void HandleInput_CursorMovePrev(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xCF3BC0>
	void HandleInput_CursorMoveNext(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xCF3BA0>
	void HandleInput_ConstructAtCursor(); // Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor(Final|Native|Private) // <VeiledExperts-Win64-Shipping.exe+0xCF3B80>
};

// Class ConstructionSystemRuntime.ConstructionSystemComponent
class UConstructionSystemComponent : public UActorComponent {

public:

	struct UMaterialInterface CursorMaterial; // 0xB0 (8)
	struct UMaterialInterface CursorInvalidMaterial; // 0xB8 (8)
	float TraceStartDistance; // 0xC0 (4)
	float TraceSweepRadius; // 0xC4 (4)
	struct UActor ConstructionCameraActor; // 0xC8 (8)
	float ConstructionCameraTransitionTime; // 0xD0 (4)
	float ConstructionCameraTransitionExp; // 0xD4 (4)
	struct UClass* BuildMenuUI; // 0xD8 (8)
	struct UConstructionSystemUIAsset BuildMenuData; // 0xE0 (8)
	struct UUserWidget BuildMenuUIInstance; // 0xE8 (8)
	enum class EConstructionSystemToolType ActiveToolType; // 0xF0 (1)
	struct TMap<enum class EConstructionSystemToolType, struct UConstructionSystemTool> Tools; // 0xF8 (80)

	void ToggleConstructionSystem(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF40B0>
	void ShowBuildMenu(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF4090>
	void SetActiveTool(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF4010>
	void HideBuildMenu(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF3C80>
	struct UConstructionSystemTool GetTool(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xCF3A80>
	enum class EConstructionSystemToolType GetActiveToolType(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xCF3A60>
	struct UConstructionSystemTool GetActiveTool(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0xCF3A30>
	void EnableConstructionSystem(enum class EConstructionSystemToolType InToolType); // Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF39B0>
	void DisableConstructionSystem(); // Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xCF3990>
};

// Class ConstructionSystemRuntime.ConstructionSystemItemUserData
class UConstructionSystemItemUserData : public UAssetUserData {

public:

	int32_t Seed; // 0x28 (4)
};

// Class ConstructionSystemRuntime.ConstructionSystemCursor
class UConstructionSystemCursor : public Object {

public:

	struct APrefabActor CursorGhostActor; // 0x28 (8)
	int32_t CursorSeed; // 0x30 (4)
	struct UMaterialInterface CursorMaterial; // 0x38 (8)
	struct UMaterialInterface CursorInvalidMaterial; // 0x40 (8)
	struct TArray<struct UPrefabricatorConstructionSnapComponent> SnapComponents; // 0x48 (16)
	int32_t ActiveSnapComponentIndex; // 0x58 (4)
};

// Class ConstructionSystemRuntime.ConstructionSystemRemoveTool
class UConstructionSystemRemoveTool : public UConstructionSystemTool {

public:

	float TraceDistance; // 0x30 (4)
	struct TWeakObjectPtr<struct APrefabActor> FocusedActor; // 0x34 (8)

	void HandleInput_RemoveAtCursor(); // Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor(Final|Native|Protected) // <VeiledExperts-Win64-Shipping.exe+0xCF3BE0>
};

// Class ConstructionSystemRuntime.ConstructionSystemSaveGame
class UConstructionSystemSaveGame : public USaveGame {

public:

	struct FString SaveSlotName; // 0x28 (16)
	uint32_t UserIndex; // 0x38 (4)
	struct FConstructionSystemSavePlayerInfo PlayerInfo; // 0x40 (80)
	struct TArray<struct FConstructionSystemSaveConstructedItem> ConstructedItems; // 0x90 (16)
};

// Class ConstructionSystemRuntime.PrefabricatorConstructionSnapComponent
class UPrefabricatorConstructionSnapComponent : public UBoxComponent {

public:

	enum class EPrefabricatorConstructionSnapType SnapType; // 0x430 (1)
	struct FPCSnapConstraintFloor FloorConstraint; // 0x431 (6)
	struct FPCSnapConstraintWall WallConstraint; // 0x437 (4)
	bool bAlignToGroundSlope; // 0x43B (1)
	bool bUseMaxGroundSlopeConstraint; // 0x43C (1)
	float MaxGroundPlacementSlope; // 0x440 (4)
};

// Class ConstructionSystemRuntime.PrefabricatorConstructionSnap
class APrefabricatorConstructionSnap : public UActor {

public:

	struct UPrefabricatorConstructionSnapComponent ConstructionSnapComponent; // 0x220 (8)
};

// Class ConstructionSystemRuntime.ConstructionSystemUIAsset
class UConstructionSystemUIAsset : public UDataAsset {

public:

	struct FText MenuTitle; // 0x30 (24)
	struct TArray<struct FConstructionSystemUICategory> Categories; // 0x48 (16)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSavePlayerInfo
struct FConstructionSystemSavePlayerInfo {
	bool bRestorePlayerInfo; // 0x0 (1)
	struct FTransform Transform; // 0x10 (48)
	struct FRotator ControlRotation; // 0x40 (12)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemSaveConstructedItem
struct FConstructionSystemSaveConstructedItem {
	struct UPrefabricatorAssetInterface PrefabAsset; // 0x0 (8)
	int32_t Seed; // 0x8 (4)
	struct FTransform Transform; // 0x10 (48)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintWall
struct FPCSnapConstraintWall {
	bool AttachTop; // 0x0 (1)
	bool AttachBottom; // 0x1 (1)
	bool AttachLeft; // 0x2 (1)
	bool AttachRight; // 0x3 (1)
};

// ScriptStruct ConstructionSystemRuntime.PCSnapConstraintFloor
struct FPCSnapConstraintFloor {
	bool AttachX; // 0x0 (1)
	bool AttachXNegative; // 0x1 (1)
	bool AttachY; // 0x2 (1)
	bool AttachYNegative; // 0x3 (1)
	bool AttachZ; // 0x4 (1)
	bool AttachZNegative; // 0x5 (1)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUICategory
struct FConstructionSystemUICategory {
	struct FText DisplayName; // 0x0 (24)
	struct UTexture2D Icon; // 0x18 (8)
	struct TArray<struct FConstructionSystemUIPrefabEntry> PrefabEntries; // 0x20 (16)
};

// ScriptStruct ConstructionSystemRuntime.ConstructionSystemUIPrefabEntry
struct FConstructionSystemUIPrefabEntry {
	struct FText DisplayName; // 0x0 (24)
	struct FText Tooltip; // 0x18 (24)
	struct UTexture2D Icon; // 0x30 (8)
	struct UPrefabricatorAssetInterface Prefab; // 0x38 (8)
};

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab
inline void UConstructionSystemBuildTool::SetActivePrefab(struct UPrefabricatorAssetInterface InActivePrefabAsset) {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.SetActivePrefab");

	struct SetActivePrefab_Params {
		struct UPrefabricatorAssetInterface InActivePrefabAsset;
	}; SetActivePrefab_Params Params;

	Params.InActivePrefabAsset = InActivePrefabAsset;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep
inline void UConstructionSystemBuildTool::HandleInput_RotateCursorStep(float NumSteps) {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_RotateCursorStep");

	struct HandleInput_RotateCursorStep_Params {
		float NumSteps;
	}; HandleInput_RotateCursorStep_Params Params;

	Params.NumSteps = NumSteps;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev
inline void UConstructionSystemBuildTool::HandleInput_CursorMovePrev() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMovePrev");

	struct HandleInput_CursorMovePrev_Params {
		
	}; HandleInput_CursorMovePrev_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext
inline void UConstructionSystemBuildTool::HandleInput_CursorMoveNext() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_CursorMoveNext");

	struct HandleInput_CursorMoveNext_Params {
		
	}; HandleInput_CursorMoveNext_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor
inline void UConstructionSystemBuildTool::HandleInput_ConstructAtCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemBuildTool.HandleInput_ConstructAtCursor");

	struct HandleInput_ConstructAtCursor_Params {
		
	}; HandleInput_ConstructAtCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem
inline void UConstructionSystemComponent::ToggleConstructionSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.ToggleConstructionSystem");

	struct ToggleConstructionSystem_Params {
		
	}; ToggleConstructionSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu
inline void UConstructionSystemComponent::ShowBuildMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.ShowBuildMenu");

	struct ShowBuildMenu_Params {
		
	}; ShowBuildMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool
inline void UConstructionSystemComponent::SetActiveTool(enum class EConstructionSystemToolType InToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.SetActiveTool");

	struct SetActiveTool_Params {
		enum class EConstructionSystemToolType InToolType;
	}; SetActiveTool_Params Params;

	Params.InToolType = InToolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu
inline void UConstructionSystemComponent::HideBuildMenu() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.HideBuildMenu");

	struct HideBuildMenu_Params {
		
	}; HideBuildMenu_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool
inline struct UConstructionSystemTool UConstructionSystemComponent::GetTool(enum class EConstructionSystemToolType InToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetTool");

	struct GetTool_Params {
		enum class EConstructionSystemToolType InToolType;
		struct UConstructionSystemTool ReturnValue;

	}; GetTool_Params Params;

	Params.InToolType = InToolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType
inline enum class EConstructionSystemToolType UConstructionSystemComponent::GetActiveToolType() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveToolType");

	struct GetActiveToolType_Params {
		
		enum class EConstructionSystemToolType ReturnValue;

	}; GetActiveToolType_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool
inline struct UConstructionSystemTool UConstructionSystemComponent::GetActiveTool() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.GetActiveTool");

	struct GetActiveTool_Params {
		
		struct UConstructionSystemTool ReturnValue;

	}; GetActiveTool_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem
inline void UConstructionSystemComponent::EnableConstructionSystem(enum class EConstructionSystemToolType InToolType) {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.EnableConstructionSystem");

	struct EnableConstructionSystem_Params {
		enum class EConstructionSystemToolType InToolType;
	}; EnableConstructionSystem_Params Params;

	Params.InToolType = InToolType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem
inline void UConstructionSystemComponent::DisableConstructionSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemComponent.DisableConstructionSystem");

	struct DisableConstructionSystem_Params {
		
	}; DisableConstructionSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor
inline void UConstructionSystemRemoveTool::HandleInput_RemoveAtCursor() {
	static auto fn = UObject::FindObject<UFunction>("Function ConstructionSystemRuntime.ConstructionSystemRemoveTool.HandleInput_RemoveAtCursor");

	struct HandleInput_RemoveAtCursor_Params {
		
	}; HandleInput_RemoveAtCursor_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

