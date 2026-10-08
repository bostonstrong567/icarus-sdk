// /Script/Icarus.RocketableData
// size 0x90, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/InventoryItemLibrary.generated.h

USTRUCT()
struct FRocketableData : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Image;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FStatsEnum, int32> StatsGranted;  // 0x0040, size 0x50
};
