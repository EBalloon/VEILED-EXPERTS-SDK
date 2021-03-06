// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t {
	NoCap = 0,
	CreateNewSectionForCap = 1,
	UseLastSectionForCap = 2,
	EProcMeshSliceCapOption_MAX = 3,
};

// Class ProceduralMeshComponent.ProceduralMeshComponent
class UProceduralMeshComponent : public UMeshComponent {

public:

	bool bUseComplexAsSimpleCollision; // 0x438 (1)
	bool bUseAsyncCooking; // 0x439 (1)
	struct UBodySetup ProcMeshBodySetup; // 0x440 (8)
	struct TArray<struct FProcMeshSection> ProcMeshSections; // 0x448 (16)
	struct TArray<struct FKConvexElem> CollisionConvexElems; // 0x458 (16)
	struct FBoxSphereBounds LocalBounds; // 0x468 (28)
	struct TArray<struct UBodySetup> AsyncBodySetupQueue; // 0x488 (16)

	void UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD1B4D0>
	void UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents); // Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD1B210>
	void SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility); // Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD1AF20>
	bool IsMeshSectionVisible(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xD1AE90>
	int32_t GetNumSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0xD1A8C0>
	void CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD1A1C0>
	void CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision); // Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection(Final|Native|Public|HasOutParms|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD19E70>
	void ClearMeshSection(int32_t SectionIndex); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD19510>
	void ClearCollisionConvexMeshes(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD194F0>
	void ClearAllMeshSections(); // Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD194D0>
	void AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts); // Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0xD191A0>
};

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
struct FProcMeshSection {
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x0 (16)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10 (16)
	struct FBox SectionLocalBox; // 0x20 (28)
	bool bEnableCollision; // 0x3C (1)
	bool bSectionVisible; // 0x3D (1)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
struct FProcMeshVertex {
	struct FVector Position; // 0x0 (12)
	struct FVector Normal; // 0xC (12)
	struct FProcMeshTangent Tangent; // 0x18 (16)
	struct FColor Color; // 0x28 (4)
	struct FVector2D UV0; // 0x2C (8)
	struct FVector2D UV1; // 0x34 (8)
	struct FVector2D UV2; // 0x3C (8)
	struct FVector2D UV3; // 0x44 (8)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
struct FProcMeshTangent {
	struct FVector TangentX; // 0x0 (12)
	bool bFlipTangentY; // 0xC (1)
};

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor
inline void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection_LinearColor");

	struct UpdateMeshSection_LinearColor_Params {
		int32_t SectionIndex;
		struct TArray<struct FVector>& Vertices;
		struct TArray<struct FVector>& Normals;
		struct TArray<struct FVector2D>& UV0;
		struct TArray<struct FVector2D>& UV1;
		struct TArray<struct FVector2D>& UV2;
		struct TArray<struct FVector2D>& UV3;
		struct TArray<struct FLinearColor>& VertexColors;
		struct TArray<struct FProcMeshTangent>& Tangents;
	}; UpdateMeshSection_LinearColor_Params Params;

	Params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Normals = Params.Normals;
	UV0 = Params.UV0;
	UV1 = Params.UV1;
	UV2 = Params.UV2;
	UV3 = Params.UV3;
	VertexColors = Params.VertexColors;
	Tangents = Params.Tangents;

}

// Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection
inline void UProceduralMeshComponent::UpdateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.UpdateMeshSection");

	struct UpdateMeshSection_Params {
		int32_t SectionIndex;
		struct TArray<struct FVector>& Vertices;
		struct TArray<struct FVector>& Normals;
		struct TArray<struct FVector2D>& UV0;
		struct TArray<struct FColor>& VertexColors;
		struct TArray<struct FProcMeshTangent>& Tangents;
	}; UpdateMeshSection_Params Params;

	Params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Normals = Params.Normals;
	UV0 = Params.UV0;
	VertexColors = Params.VertexColors;
	Tangents = Params.Tangents;

}

// Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible
inline void UProceduralMeshComponent::SetMeshSectionVisible(int32_t SectionIndex, bool bNewVisibility) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.SetMeshSectionVisible");

	struct SetMeshSectionVisible_Params {
		int32_t SectionIndex;
		bool bNewVisibility;
	}; SetMeshSectionVisible_Params Params;

	Params.SectionIndex = SectionIndex;
	Params.bNewVisibility = bNewVisibility;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible
inline bool UProceduralMeshComponent::IsMeshSectionVisible(int32_t SectionIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.IsMeshSectionVisible");

	struct IsMeshSectionVisible_Params {
		int32_t SectionIndex;
		bool ReturnValue;

	}; IsMeshSectionVisible_Params Params;

	Params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections
inline int32_t UProceduralMeshComponent::GetNumSections() {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.GetNumSections");

	struct GetNumSections_Params {
		
		int32_t ReturnValue;

	}; GetNumSections_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor
inline void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FVector2D>& UV1, struct TArray<struct FVector2D>& UV2, struct TArray<struct FVector2D>& UV3, struct TArray<struct FLinearColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection_LinearColor");

	struct CreateMeshSection_LinearColor_Params {
		int32_t SectionIndex;
		struct TArray<struct FVector>& Vertices;
		struct TArray<int32_t>& Triangles;
		struct TArray<struct FVector>& Normals;
		struct TArray<struct FVector2D>& UV0;
		struct TArray<struct FVector2D>& UV1;
		struct TArray<struct FVector2D>& UV2;
		struct TArray<struct FVector2D>& UV3;
		struct TArray<struct FLinearColor>& VertexColors;
		struct TArray<struct FProcMeshTangent>& Tangents;
		bool bCreateCollision;
	}; CreateMeshSection_LinearColor_Params Params;

	Params.SectionIndex = SectionIndex;
	Params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Triangles = Params.Triangles;
	Normals = Params.Normals;
	UV0 = Params.UV0;
	UV1 = Params.UV1;
	UV2 = Params.UV2;
	UV3 = Params.UV3;
	VertexColors = Params.VertexColors;
	Tangents = Params.Tangents;

}

// Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection
inline void UProceduralMeshComponent::CreateMeshSection(int32_t SectionIndex, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<struct FVector2D>& UV0, struct TArray<struct FColor>& VertexColors, struct TArray<struct FProcMeshTangent>& Tangents, bool bCreateCollision) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.CreateMeshSection");

	struct CreateMeshSection_Params {
		int32_t SectionIndex;
		struct TArray<struct FVector>& Vertices;
		struct TArray<int32_t>& Triangles;
		struct TArray<struct FVector>& Normals;
		struct TArray<struct FVector2D>& UV0;
		struct TArray<struct FColor>& VertexColors;
		struct TArray<struct FProcMeshTangent>& Tangents;
		bool bCreateCollision;
	}; CreateMeshSection_Params Params;

	Params.SectionIndex = SectionIndex;
	Params.bCreateCollision = bCreateCollision;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Triangles = Params.Triangles;
	Normals = Params.Normals;
	UV0 = Params.UV0;
	VertexColors = Params.VertexColors;
	Tangents = Params.Tangents;

}

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection
inline void UProceduralMeshComponent::ClearMeshSection(int32_t SectionIndex) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearMeshSection");

	struct ClearMeshSection_Params {
		int32_t SectionIndex;
	}; ClearMeshSection_Params Params;

	Params.SectionIndex = SectionIndex;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes
inline void UProceduralMeshComponent::ClearCollisionConvexMeshes() {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearCollisionConvexMeshes");

	struct ClearCollisionConvexMeshes_Params {
		
	}; ClearCollisionConvexMeshes_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections
inline void UProceduralMeshComponent::ClearAllMeshSections() {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.ClearAllMeshSections");

	struct ClearAllMeshSections_Params {
		
	}; ClearAllMeshSections_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh
inline void UProceduralMeshComponent::AddCollisionConvexMesh(struct TArray<struct FVector> ConvexVerts) {
	static auto fn = UObject::FindObject<UFunction>("Function ProceduralMeshComponent.ProceduralMeshComponent.AddCollisionConvexMesh");

	struct AddCollisionConvexMesh_Params {
		struct TArray<struct FVector> ConvexVerts;
	}; AddCollisionConvexMesh_Params Params;

	Params.ConvexVerts = ConvexVerts;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

