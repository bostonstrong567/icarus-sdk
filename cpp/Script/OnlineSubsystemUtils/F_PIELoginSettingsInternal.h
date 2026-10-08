// /Script/OnlineSubsystemUtils.PIELoginSettingsInternal
// size 0x40, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Private/OnlinePIESettings.h

USTRUCT()
struct FPIELoginSettingsInternal
{
    UPROPERTY(EditAnywhere) FString Id;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, Transient) FString Token;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) FString Type;  // 0x0020, size 0x10
    UPROPERTY() TArray<uint8> TokenBytes;  // 0x0030, size 0x10
};
