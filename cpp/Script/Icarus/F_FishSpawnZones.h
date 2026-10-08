// /Script/Icarus.FishSpawnZones
// size 0x70, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/FishSpawnZonesLibrary.generated.h

USTRUCT()
struct FFishSpawnZones : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FFishDataEnum, int32> SpawnList;  // 0x0018, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ZoneFishQuality;  // 0x0068, size 0x4
};
