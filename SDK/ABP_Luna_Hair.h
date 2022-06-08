// AnimBlueprintGeneratedClass ABP_Luna_Hair.ABP_Luna_Hair_C
class UABP_Luna_Hair_C : public UPDAnimDynamicsInstBase {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2B0 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2B8 (48)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2E8 (224)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3C8 (32)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3E8 (32)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x410 (1088)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x850 (160)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x8F0 (224)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x9D0 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xE10 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1250 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1690 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1AD0 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1F10 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2350 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2790 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2BD0 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3010 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3450 (1088)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Luna_Hair.ABP_Luna_Hair_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_ABP_Luna_Hair(int32_t EntryPoint); // Function ABP_Luna_Hair.ABP_Luna_Hair_C.ExecuteUbergraph_ABP_Luna_Hair(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function ABP_Luna_Hair.ABP_Luna_Hair_C.AnimGraph
inline void UABP_Luna_Hair_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Luna_Hair.ABP_Luna_Hair_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP_Luna_Hair.ABP_Luna_Hair_C.ExecuteUbergraph_ABP_Luna_Hair
inline void UABP_Luna_Hair_C::ExecuteUbergraph_ABP_Luna_Hair(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Luna_Hair.ABP_Luna_Hair_C.ExecuteUbergraph_ABP_Luna_Hair");

	struct ExecuteUbergraph_ABP_Luna_Hair_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP_Luna_Hair_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

