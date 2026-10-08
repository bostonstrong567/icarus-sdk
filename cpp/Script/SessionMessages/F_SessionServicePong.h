// /Script/SessionMessages.SessionServicePong
// size 0x90, declared in Engine/Source/Runtime/SessionMessages/Public/SessionServiceMessages.h

USTRUCT()
struct FSessionServicePong
{
    UPROPERTY(EditAnywhere) bool Authorized;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FString BuildDate;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FString DeviceName;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) FGuid InstanceId;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) FString InstanceName;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) FString PlatformName;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) FGuid SessionId;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere) FString SessionName;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) FString SessionOwner;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) bool Standalone;  // 0x0088, size 0x1
};
