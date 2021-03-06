// Enum MagicLeapLightEstimation.EMagicLeapLightEstimationCamera
enum class EMagicLeapLightEstimationCamera : uint8_t {
	Left = 0,
	Right = 1,
	FarLeft = 2,
	FarRight = 3,
	EMagicLeapLightEstimationCamera_MAX = 4,
};

// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
class UMagicLeapLightingTrackingComponent : public UActorComponent {

public:

	bool UseGlobalAmbience; // 0xB0 (1)
	bool UseColorTemp; // 0xB1 (1)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0 (4)
	struct FLinearColor AmbientColor; // 0x4 (16)
	struct FTimespan Timestamp; // 0x18 (8)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
struct FMagicLeapLightEstimationAmbientGlobalState {
	struct TArray<float> AmbientIntensityNits; // 0x0 (16)
	struct FTimespan Timestamp; // 0x10 (8)
};

