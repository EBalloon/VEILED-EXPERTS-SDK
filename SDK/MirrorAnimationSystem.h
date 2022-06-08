// Class MirrorAnimationSystem.ExtCharacterMovementComponent
class UExtCharacterMovementComponent : public UCharacterMovementComponent {

public:

	bool MirrorRootMotion; // 0x610 (1)
	enum class EAxis MirrorAxis; // 0x611 (1)
	enum class EAxis FlipAxis; // 0x612 (1)
};

// Class MirrorAnimationSystem.MirrorTable
class UMirrorTable : public UDataAsset {

public:

	struct TArray<struct FMirrorBone> MirrorBones; // 0x30 (16)
};

// ScriptStruct MirrorAnimationSystem.AnimNode_Mirror
struct FAnimNode_Mirror : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10 (16)
	struct UMirrorTable MirrorTable; // 0x20 (8)
};

// ScriptStruct MirrorAnimationSystem.AnimNode_MirrorCS
struct FAnimNode_MirrorCS : FAnimNode_SkeletalControlBase {
	enum class EAxis MirrorAxis; // 0xC8 (1)
	bool CompletlySymmetrical; // 0xC9 (1)
	struct FString Substring_A; // 0xD0 (16)
	struct FString Substring_B; // 0xE0 (16)
};

// ScriptStruct MirrorAnimationSystem.MirrorBone
struct FMirrorBone {
	struct FName BoneName; // 0x0 (8)
	enum class EAxis MirrorAxis; // 0x8 (1)
	enum class EAxis FlipAxis; // 0x9 (1)
	bool IsTwinBone; // 0xA (1)
	struct FName TwinBoneName; // 0xC (8)
	bool MirrorTranslation; // 0x14 (1)
	struct FRotator RotationOffset; // 0x18 (12)
	bool InvertTwinRotationX; // 0x24 (1)
	bool InvertTwinRotationY; // 0x25 (1)
	bool InvertTwinRotationZ; // 0x26 (1)
};

