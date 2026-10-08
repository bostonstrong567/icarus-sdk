// /Script/UdpMessaging.UdpMessagingSettings
// Derives from: UObject
// size 0xA8, declared in Engine/Plugins/Messaging/UdpMessaging/Source/UdpMessaging/Public/Shared/UdpMessagingSettings.h

UCLASS(Config=Engine)
class UUdpMessagingSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) bool EnabledByDefault;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) bool EnableTransport;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bAutoRepair;  // 0x002A, size 0x1
    UPROPERTY(EditAnywhere, Config) float MaxSendRate;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Config) uint32 AutoRepairAttemptLimit;  // 0x0030, size 0x4
    UPROPERTY(Config) bool bStopServiceWhenAppDeactivates;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere, Config) FString UnicastEndpoint;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FString MulticastEndpoint;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) EUdpMessageFormat MessageFormat;  // 0x0058, size 0x1
    UPROPERTY(EditAnywhere, Config) uint8 MulticastTimeToLive;  // 0x0059, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FString> StaticEndpoints;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, Config) bool EnableTunnel;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, Config) FString TunnelUnicastEndpoint;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, Config) FString TunnelMulticastEndpoint;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> RemoteTunnelEndpoints;  // 0x0098, size 0x10
};
