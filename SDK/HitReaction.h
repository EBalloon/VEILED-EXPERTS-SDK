// AnimBlueprintGeneratedClass HitReaction.HitReaction_C
class UHitReaction_C : public UPDHitReactionAnimInstance {

public:

	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2D0 (8)
	struct FAnimNode_Root AnimGraphNode_Root; // 0x2D8 (48)
	struct FAnimNode_LinkedInputPose AnimGraphNode_SubInput; // 0x308 (120)
	struct FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x380 (264)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x488 (32)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x4A8 (32)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x4C8 (184)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x580 (184)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x638 (192)
	struct FAnimNode_Slot AnimGraphNode_Slot_3; // 0x6F8 (72)
	struct FAnimNode_Slot AnimGraphNode_Slot_2; // 0x740 (72)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x788 (192)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x848 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x870 (40)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x898 (184)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x950 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x978 (40)
	struct FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x9A0 (160)
	struct FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0xA40 (192)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xB00 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xB28 (40)
	struct FAnimNode_Slot AnimGraphNode_Slot; // 0xB50 (72)
	struct FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xB98 (184)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xC50 (40)
	struct FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xC78 (40)

	void AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph); // Function HitReaction.HitReaction_C.AnimGraph(HasOutParms|BlueprintCallable|BlueprintEvent) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
	void ExecuteUbergraph_HitReaction(int32_t EntryPoint); // Function HitReaction.HitReaction_C.ExecuteUbergraph_HitReaction(Final|UbergraphFunction) // <VeiledExperts-Win64-Shipping.exe+0x1B72D40>
};

// Function HitReaction.HitReaction_C.AnimGraph
inline void UHitReaction_C::AnimGraph(struct FPoseLink InPose, struct FPoseLink& AnimGraph) {
	static auto fn = UObject::FindObject<UFunction>("Function HitReaction.HitReaction_C.AnimGraph");

	struct AnimGraph_Params {
		struct FPoseLink InPose;
		struct FPoseLink& AnimGraph;
	}; AnimGraph_Params Params;

	Params.InPose = InPose;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	AnimGraph = Params.AnimGraph;

}

// Function HitReaction.HitReaction_C.ExecuteUbergraph_HitReaction
inline void UHitReaction_C::ExecuteUbergraph_HitReaction(int32_t EntryPoint) {
	static auto fn = UObject::FindObject<UFunction>("Function HitReaction.HitReaction_C.ExecuteUbergraph_HitReaction");

	struct ExecuteUbergraph_HitReaction_Params {
		int32_t EntryPoint;
	}; ExecuteUbergraph_HitReaction_Params Params;

	Params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

