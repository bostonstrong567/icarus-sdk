// /Script/Icarus.BlueprintUnlock
// size 0x58, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/BlueprintUnlocksLibrary.generated.h

USTRUCT()
struct FBlueprintUnlock : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemableRowHandle Itemable;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterFlagsRowHandle> Requirements;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCharacterFlagsRowHandle> Unlocks;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredPointsToUnlock;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredLevel;  // 0x0054, size 0x4
};
