// Enum MRMesh.EMeshTrackerVertexColorMode
enum class EMeshTrackerVertexColorMode : uint8_t {
	None = 0,
	Confidence = 1,
	Block = 2,
	EMeshTrackerVertexColorMode_MAX = 3,
};

// Class MRMesh.MockDataMeshTrackerComponent
class UMockDataMeshTrackerComponent : public USceneComponent {

public:

	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1F0 (16)
	bool ScanWorld; // 0x200 (1)
	bool RequestNormals; // 0x201 (1)
	bool RequestVertexConfidence; // 0x202 (1)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x203 (1)
	struct TArray<struct FColor> BlockVertexColors; // 0x208 (16)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x218 (16)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x228 (16)
	float UpdateInterval; // 0x238 (4)
	struct UMRMeshComponent MRMesh; // 0x240 (8)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature(MulticastDelegate|Public|Delegate|HasOutParms) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void DisconnectMRMesh(struct UMRMeshComponent InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25D72B0>
	void ConnectMRMesh(struct UMRMeshComponent InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25D7210>
};

// Class MRMesh.MRMeshComponent
class UMRMeshComponent : public UPrimitiveComponent {

public:

	struct UMaterialInterface Material; // 0x410 (8)
	bool bCreateMeshProxySections; // 0x418 (1)
	bool bUpdateNavMeshOnMeshUpdate; // 0x419 (1)
	bool bNeverCreateCollisionMesh; // 0x41A (1)
	struct UBodySetup CachedBodySetup; // 0x420 (8)
	struct TArray<struct UBodySetup> BodySetups; // 0x428 (16)
	struct UMaterialInterface WireframeMaterial; // 0x438 (8)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected(Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // <VeiledExperts-Win64-Shipping.exe+0x25D7350>
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25D7330>
	void Clear(); // Function MRMesh.MRMeshComponent.Clear(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x25D7150>
};

// DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature
inline void UMockDataMeshTrackerComponent::OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector>& Vertices, struct TArray<int32_t>& Triangles, struct TArray<struct FVector>& Normals, struct TArray<float>& Confidence) {
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature");

	struct OnMockDataMeshTrackerUpdated__DelegateSignature_Params {
		int32_t Index;
		struct TArray<struct FVector>& Vertices;
		struct TArray<int32_t>& Triangles;
		struct TArray<struct FVector>& Normals;
		struct TArray<float>& Confidence;
	}; OnMockDataMeshTrackerUpdated__DelegateSignature_Params Params;

	Params.Index = Index;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	Vertices = Params.Vertices;
	Triangles = Params.Triangles;
	Normals = Params.Normals;
	Confidence = Params.Confidence;

}

// Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh
inline void UMockDataMeshTrackerComponent::DisconnectMRMesh(struct UMRMeshComponent InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh");

	struct DisconnectMRMesh_Params {
		struct UMRMeshComponent InMRMeshPtr;
	}; DisconnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh
inline void UMockDataMeshTrackerComponent::ConnectMRMesh(struct UMRMeshComponent InMRMeshPtr) {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh");

	struct ConnectMRMesh_Params {
		struct UMRMeshComponent InMRMeshPtr;
	}; ConnectMRMesh_Params Params;

	Params.InMRMeshPtr = InMRMeshPtr;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MRMeshComponent.IsConnected
inline bool UMRMeshComponent::IsConnected() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.IsConnected");

	struct IsConnected_Params {
		
		bool ReturnValue;

	}; IsConnected_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function MRMesh.MRMeshComponent.ForceNavMeshUpdate
inline void UMRMeshComponent::ForceNavMeshUpdate() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.ForceNavMeshUpdate");

	struct ForceNavMeshUpdate_Params {
		
	}; ForceNavMeshUpdate_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function MRMesh.MRMeshComponent.Clear
inline void UMRMeshComponent::Clear() {
	static auto fn = UObject::FindObject<UFunction>("Function MRMesh.MRMeshComponent.Clear");

	struct Clear_Params {
		
	}; Clear_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

