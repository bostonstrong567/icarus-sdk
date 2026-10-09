// /Script/Icarus.FIshSpawnZoneSetup
// size 0x1C, declared in Icarus/Source/Icarus/Systems/Fishing/FishSpawnConfig.h

USTRUCT()
struct FFIshSpawnZoneSetup
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFishSpawnZonesRowHandle SpawnZone;  // 0x0004, size 0x18
};
