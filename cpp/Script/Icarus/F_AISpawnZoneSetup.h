// /Script/Icarus.AISpawnZoneSetup
// size 0x1C, declared in Icarus/Source/Icarus/AI/AISpawnConfigData.h

USTRUCT()
struct FAISpawnZoneSetup
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISpawnZonesRowHandle SpawnZone;  // 0x0004, size 0x18
};
