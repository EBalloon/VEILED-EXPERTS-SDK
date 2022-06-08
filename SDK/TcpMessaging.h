// Class TcpMessaging.TcpMessagingSettings
class UTcpMessagingSettings : public Object {

public:

	bool EnableTransport; // 0x28 (1)
	struct FString ListenEndpoint; // 0x30 (16)
	struct TArray<struct FString> ConnectToEndpoints; // 0x40 (16)
	int32_t ConnectionRetryDelay; // 0x50 (4)
	bool bStopServiceWhenAppDeactivates; // 0x54 (1)
};

