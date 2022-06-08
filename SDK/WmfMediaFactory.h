// Class WmfMediaFactory.WmfMediaSettings
class UWmfMediaSettings : public Object {

public:

	bool AllowNonStandardCodecs; // 0x28 (1)
	bool LowLatency; // 0x29 (1)
	bool NativeAudioOut; // 0x2A (1)
	bool HardwareAcceleratedVideoDecoding; // 0x2B (1)
};

