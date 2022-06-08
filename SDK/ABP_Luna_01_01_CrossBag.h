// AnimBlueprintGeneratedClass ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C
class UABP_Luna_01_01_CrossBag_C : public UAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x270 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x278 (48)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2B0 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x6F0 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0xB30 (1088)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xF70 (32)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xF90 (160)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1030 (224)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1110 (32)
	struct FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1130 (224)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1210 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1650 (1088)
	struct FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1A90 (1088)
	struct FVector WindVelocity; // 0x1ED0 (12)
	bool UseAnimDynamics; // 0x1EDC (1)

	void AnimGraph(struct FPoseLink& AnimGraph); // Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_ABP_Luna_01_01_CrossBag(int32_t EntryPoint); // Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.ExecuteUbergraph_ABP_Luna_01_01_CrossBag(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.AnimGraph
inline void UABP_Luna_01_01_CrossBag_C::AnimGraph(struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.ExecuteUbergraph_ABP_Luna_01_01_CrossBag
inline void UABP_Luna_01_01_CrossBag_C::ExecuteUbergraph_ABP_Luna_01_01_CrossBag(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function ABP_Luna_01_01_CrossBag.ABP_Luna_01_01_CrossBag_C.ExecuteUbergraph_ABP_Luna_01_01_CrossBag");

	struct ExecuteUbergraph_ABP_Luna_01_01_CrossBag_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_ABP_Luna_01_01_CrossBag_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

