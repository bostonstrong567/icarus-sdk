// /Script/IcarusGenerated.ReqUnlockCharacterFlags
// size 0x28, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/OnlineSubsystemIcarus/UnlockCharacterFlagsCallbackProxyGen.generated.h

USTRUCT()
struct FReqUnlockCharacterFlags
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0018, size 0x10
};
