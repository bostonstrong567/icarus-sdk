// /Script/OnlineSubsystemEOS.OnlineSubsystemEOSConfig
// Derives from: UDeveloperSettings > UObject
// size 0xD0, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Public/OnlineSubsystemEOSConfig.h

UCLASS(Config=Game)
class UOnlineSubsystemEOSConfig : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FString ProductName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ProductVersion;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ProductId;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config) FString SandboxId;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, Config) FString DeploymentId;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, Config) FString SupportTicketingKey;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) FString SupportTicketingURL;  // 0x0098, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ClientId;  // 0x00A8, size 0x10
    UPROPERTY(EditAnywhere, Config) FString ClientSecret;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) ELogLevel LogLevel;  // 0x00C8, size 0x1
};
