// Class ArchVisCharacter.ArchVisCharacter
class AArchVisCharacter : public ACharacter {

public:

	struct FString LookUpAxisName; // 0x4B8 (16)
	struct FString LookUpAtRateAxisName; // 0x4C8 (16)
	struct FString TurnAxisName; // 0x4D8 (16)
	struct FString TurnAtRateAxisName; // 0x4E8 (16)
	struct FString MoveForwardAxisName; // 0x4F8 (16)
	struct FString MoveRightAxisName; // 0x508 (16)
	float MouseSensitivityScale_Pitch; // 0x518 (4)
	float MouseSensitivityScale_Yaw; // 0x51C (4)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
class UArchVisCharMovementComponent : public UCharacterMovementComponent {

public:

	struct FRotator RotationalAcceleration; // 0x610 (12)
	struct FRotator RotationalDeceleration; // 0x61C (12)
	struct FRotator MaxRotationalVelocity; // 0x628 (12)
	float MinPitch; // 0x634 (4)
	float MaxPitch; // 0x638 (4)
	float WalkingFriction; // 0x63C (4)
	float WalkingSpeed; // 0x640 (4)
	float WalkingAcceleration; // 0x644 (4)
};

