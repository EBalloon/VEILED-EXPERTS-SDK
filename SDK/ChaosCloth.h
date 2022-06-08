// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8_t {
	None = 0,
	MaxDistance = 1,
	BackstopDistance = 2,
	BackstopRadius = 3,
	AnimDriveMultiplier = 4,
	EChaosWeightMapTarget_MAX = 5,
};

// Class ChaosCloth.ChaosClothConfig
class UChaosClothConfig : public UClothConfigCommon {

public:

	enum class EClothMassMode MassMode; // 0x28 (1)
	float UniformMass; // 0x2C (4)
	float TotalMass; // 0x30 (4)
	float Density; // 0x34 (4)
	float MinPerParticleMass; // 0x38 (4)
	float EdgeStiffness; // 0x3C (4)
	float BendingStiffness; // 0x40 (4)
	float AreaStiffness; // 0x44 (4)
	float VolumeStiffness; // 0x48 (4)
	float StrainLimitingStiffness; // 0x4C (4)
	float LimitScale; // 0x50 (4)
	bool bUseGeodesicDistance; // 0x54 (1)
	float ShapeTargetStiffness; // 0x58 (4)
	float CollisionThickness; // 0x5C (4)
	float FrictionCoefficient; // 0x60 (4)
	float DampingCoefficient; // 0x64 (4)
	float DragCoefficient; // 0x68 (4)
	float AnimDriveSpringStiffness; // 0x6C (4)
	bool bUseBendingElements; // 0x70 (1)
	bool bUseTetrahedralConstraints; // 0x71 (1)
	bool bUseThinShellVolumeConstraints; // 0x72 (1)
	bool bUseSelfCollisions; // 0x73 (1)
	bool bUseContinuousCollisionDetection; // 0x74 (1)
	struct FVector LinearVelocityScale; // 0x78 (12)
	float AngularVelocityScale; // 0x84 (4)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
class UChaosClothSharedSimConfig : public UClothSharedConfigCommon {

public:

	int32_t IterationCount; // 0x28 (4)
	int32_t SubdivisionCount; // 0x2C (4)
	float SelfCollisionThickness; // 0x30 (4)
	float CollisionThickness; // 0x34 (4)
	bool bUseDampingOverride; // 0x38 (1)
	float Damping; // 0x3C (4)
	bool bUseGravityOverride; // 0x40 (1)
	float GravityScale; // 0x44 (4)
	struct FVector Gravity; // 0x48 (12)
	bool bUseLocalSpaceSimulation; // 0x54 (1)
	bool bUseXPBDConstraints; // 0x55 (1)
};

