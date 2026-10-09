// /Script/OnlineSubsystemEOS.PlayerAchievementData
// size 0x78, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemEOS/OnlineSubsystemEOSFunctionLibrary.generated.h

USTRUCT()
struct FPlayerAchievementData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString AchievementId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Progress;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDateTime UnlockTime;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FStatProgress> Stats;  // 0x0020, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsUnlocked;  // 0x0070, size 0x1
};
