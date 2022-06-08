// Enum PDAnimRuntime.EPDCaptureSpace
enum class EPDCaptureSpace : uint8_t {
	World = 0,
	Actor = 1,
	Component = 2,
	Target = 3,
	TargetComponent = 4,
	EPDCaptureSpace_MAX = 5,
};

// Enum PDAnimRuntime.EPDIKTargetType
enum class EPDIKTargetType : uint8_t {
	HandL = 0,
	HandR = 1,
	FootL = 2,
	FootR = 3,
	Max = 4,
};

// Class PDAnimRuntime.AnimNotify_SetIKTarget
class UAnimNotify_SetIKTarget : public UAnimNotify {

public:

	enum class EPDIKTargetType IKTargetType; // 0x38 (1)
	struct FPDIKTargetData IKTargetData; // 0x40 (176)
};

// ScriptStruct PDAnimRuntime.IKAnimInstanceProxy
struct FIKAnimInstanceProxy : FAnimInstanceProxy {
	struct FIKTargetBoneArray IKTargetBones; // 0x6E0 (16)
};

// ScriptStruct PDAnimRuntime.IKTargetBoneArray
struct FIKTargetBoneArray {
	struct TArray<struct FBoneReference> Array; // 0x0 (16)
};

// ScriptStruct PDAnimRuntime.PDHandIKData
struct FPDHandIKData {
	char bEnableHandIK : 1; // 0x0 (1)
	char bUseRightShoulder : 1; // 0x0 (1)
	char bEnableTriggerHandOverride : 1; // 0x0 (1)
	char pad_0_3 : 5; // 0x0 (1)
	struct FName HandleAttachedBone; // 0x4 (8)
	struct FName MuzzleBone; // 0xC (8)
	struct UMeshComponent WeaponMeshComponent; // 0x18 (8)
	struct FTransform TriggerHandOffset; // 0x20 (48)
	struct FTransform TriggerHandOverride; // 0x50 (48)
	struct FVector AimingTarget; // 0x80 (12)
	float HandleHandAlpha; // 0x8C (4)
	float TriggerHandAlpha; // 0x90 (4)
	float StockAlpha; // 0x94 (4)
	float MuzzleAlpha; // 0x98 (4)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDAssetPlayerBase
struct FAnimNode_PDAssetPlayerBase : FAnimNode_AssetPlayerBase {
	float BlendTime; // 0x30 (4)
	bool bResetOnActivated; // 0x34 (1)
	bool bPrintDebug; // 0x35 (1)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDBlendSpacePlayer
struct FAnimNode_PDBlendSpacePlayer : FAnimNode_PDAssetPlayerBase {
	float X; // 0x48 (4)
	float Y; // 0x4C (4)
	float Z; // 0x50 (4)
	float PlayRate; // 0x54 (4)
	bool bLoop; // 0x58 (1)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x59 (1)
	float StartPosition; // 0x5C (4)
	struct UBlendSpaceBase BlendSpace; // 0x60 (8)
	struct UBlendSpaceBase PreviousBlendSpace; // 0xE0 (8)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDIK
struct FAnimNode_PDIK : FAnimNode_SkeletalControlBase {
	struct TArray<struct FName> PreHandleSlots; // 0xC8 (16)
	struct FPDHandIKData HandIKData; // 0x100 (160)
	float MaxArmStretchOffset; // 0x1A0 (4)
	struct FPoseLink StancePose; // 0x1A8 (16)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x1B8 (16)
	struct FGuid SkeletonGuid; // 0x1CC (16)
	struct FGuid VirtualBoneGuid; // 0x1DC (16)
	struct FName IK_Handle_Off; // 0x240 (8)
	struct FName IK_Handle_MustOff; // 0x248 (8)
	struct FName IK_Weapon; // 0x250 (8)
	bool bAimingIdleState; // 0x258 (1)
	struct FName IKProfileName; // 0x25C (8)
	struct TMap<struct FName, struct FPDIKProfileData> IKProfiles; // 0x268 (80)
	struct FBoneReference Hip; // 0x2B8 (16)
};

// ScriptStruct PDAnimRuntime.PDIKProfileData
struct FPDIKProfileData {
	struct FBoneReference TriggerHand; // 0x0 (16)
	struct FBoneReference HandleHand; // 0x10 (16)
	struct FBoneReference RightShoulder; // 0x20 (16)
	struct FBoneReference LeftShoulder; // 0x30 (16)
	struct FBoneReference RightWeaponAttached; // 0x40 (16)
	struct FBoneReference LeftWeaponAttached; // 0x50 (16)
	struct FBoneReference HandleHandPalm; // 0x60 (16)
	struct FBoneReference TriggerHandPalm; // 0x70 (16)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequenceEvaluator
struct FAnimNode_PDSequenceEvaluator : FAnimNode_PDAssetPlayerBase {
	struct UAnimSequenceBase Sequence; // 0x48 (8)
	float ExplicitTime; // 0x50 (4)
	bool bShouldLoop; // 0x54 (1)
	bool bTeleportToExplicitTime; // 0x55 (1)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x56 (1)
	float StartPosition; // 0x58 (4)
};

// ScriptStruct PDAnimRuntime.AnimNode_PDSequencePlayer
struct FAnimNode_PDSequencePlayer : FAnimNode_PDAssetPlayerBase {
	struct UAnimSequenceBase Sequence; // 0x48 (8)
	float PlayRateBasis; // 0x50 (4)
	float PlayRate; // 0x54 (4)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x58 (48)
	float StartPosition; // 0x88 (4)
	bool bLoopAnimation; // 0x8C (1)
	struct UAnimSequenceBase PreviousSequence; // 0x1C0 (8)
};

// ScriptStruct PDAnimRuntime.PDIKTargetData
struct FPDIKTargetData {
	struct UIKTargetGetter IKTargetGetter; // 0x0 (8)
	char bEnableTranslation : 1; // 0x8 (1)
	char bEnableOrientation : 1; // 0x8 (1)
	char bUseWorldOrientation : 1; // 0x8 (1)
	char bCaptureTarget : 1; // 0x8 (1)
	char pad_8_4 : 4; // 0x8 (1)
	enum class EPDCaptureSpace CaptureSpace; // 0x9 (1)
	struct FName CapturedSocketName; // 0x60 (8)
	struct FTransform TargetOffset; // 0x70 (48)
	enum class EPDCaptureSpace OffsetSpace; // 0xA0 (1)
	struct FName OffsetSocketName; // 0xA4 (8)
	float BlendTime; // 0xAC (4)
};

