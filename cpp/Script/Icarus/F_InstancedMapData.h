// /Script/Icarus.InstancedMapData
// size 0x80, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InstancedMapDataLibrary.generated.h

USTRUCT()
struct FInstancedMapData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UWorld> MapAsset;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBox MapBounds;  // 0x0040, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CaveID;  // 0x005C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumEntrances;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBox RVTBounds;  // 0x0064, size 0x1C
};
