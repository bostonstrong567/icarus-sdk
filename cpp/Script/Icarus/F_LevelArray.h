// /Script/Icarus.LevelArray
// size 0x28, declared in Icarus/Source/Icarus/DataStructs/WorldData.h

USTRUCT()
struct FLevelArray : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UWorld>> Levels;  // 0x0018, size 0x10
};
