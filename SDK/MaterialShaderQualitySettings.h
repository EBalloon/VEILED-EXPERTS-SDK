// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t {
	NoFiltering = 0,
	PCF_1x1 = 1,
	PCF_2x2 = 2,
	PCF_3x3 = 3,
	EMobileCSMQuality_MAX = 4,
};

// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
class UMaterialShaderQualitySettings : public Object {

public:

	struct TMap<struct FName, struct UShaderPlatformQualitySettings> ForwardSettingMap; // 0x28 (80)
};

// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
class UShaderPlatformQualitySettings : public Object {

public:

	struct FMaterialQualityOverrides QualityOverrides[0x3]; // 0x28 (27)
};

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x0 (1)
	bool bEnableOverride; // 0x1 (1)
	bool bForceFullyRough; // 0x2 (1)
	bool bForceNonMetal; // 0x3 (1)
	bool bForceDisableLMDirectionality; // 0x4 (1)
	bool bForceLQReflections; // 0x5 (1)
	bool bForceDisablePreintegratedGF; // 0x6 (1)
	bool bDisableMaterialNormalCalculation; // 0x7 (1)
	enum class EMobileCSMQuality MobileCSMQuality; // 0x8 (1)
};

