// /Script/IcarusGenerated.ResUnlockAccountFlags
// size 0x18, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/UnlockAccountFlagsCallbackProxyGen.generated.h

USTRUCT()
struct FResUnlockAccountFlags
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0008, size 0x10
};
