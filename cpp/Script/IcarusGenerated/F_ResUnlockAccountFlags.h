// /Script/IcarusGenerated.ResUnlockAccountFlags
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResUnlockAccountFlags.h

USTRUCT()
struct FResUnlockAccountFlags
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0008, size 0x10
};
