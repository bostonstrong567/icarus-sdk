// /Script/OnlineSubsystemEOS.AchievementsDef
// size 0x98, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemEOS/OnlineSubsystemEOSFunctionLibrary.generated.h

USTRUCT()
struct FAchievementsDef
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString AchievementId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UnlockedDisplayName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UnlockedDescription;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LockedDisplayName;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LockedDescription;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString FlavorText;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UnlockedIconURL;  // 0x0060, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LockedIconURL;  // 0x0070, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsHidden;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAchivementsStatInfo> StatInfo;  // 0x0088, size 0x10
};
