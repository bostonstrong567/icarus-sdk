// /Script/OnlineSubsystemEOS.AuthToken
// size 0x88, declared in Icarus/Plugins/OnlineSubsystemEOS/Source/OnlineSubsystemEOS/Public/OnlineSubsystemEOSTypes.h

USTRUCT()
struct FAuthToken
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ApiVersion;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString App;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ClientId;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString AccessToken;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ExpiresAt;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RefreshToken;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString RefreshExpiresAt;  // 0x0078, size 0x10

    // Not reflected:
    FAccountId AccountId;  // 0x0028
    double ExpiresIn;  // 0x0040
    EOS_EAuthTokenType AuthType;  // 0x0058
    double RefreshExpiresIn;  // 0x0070
};
