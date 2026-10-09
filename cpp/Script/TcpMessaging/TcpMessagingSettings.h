// /Script/TcpMessaging.TcpMessagingSettings
// Derives from: UObject
// size 0x58, declared in Engine/Plugins/Messaging/TcpMessaging/Source/TcpMessaging/Private/Settings/TcpMessagingSettings.h

UCLASS(Config=Engine)
class UTcpMessagingSettings : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Config) bool EnableTransport;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere, Config) FString ListenEndpoint;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, Config) TArray<FString> ConnectToEndpoints;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) int32 ConnectionRetryDelay;  // 0x0050, size 0x4
    UPROPERTY(Config) bool bStopServiceWhenAppDeactivates;  // 0x0054, size 0x1
};
