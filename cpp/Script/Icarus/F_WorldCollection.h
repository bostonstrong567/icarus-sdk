// /Script/Icarus.WorldCollection
// size 0x60, declared in Icarus/Source/Icarus/DataStructs/WorldData.h

USTRUCT()
struct FWorldCollection : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CollectionName;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UWorld>> HeightmapLevels;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> DeveloperLevel;  // 0x0038, size 0x28
};
