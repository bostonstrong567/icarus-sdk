// /Script/IcarusGenerated.ReqUnlockAccountFlags
// size 0x20, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUnlockAccountFlags.h

USTRUCT()
struct FReqUnlockAccountFlags
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0010, size 0x10
};
