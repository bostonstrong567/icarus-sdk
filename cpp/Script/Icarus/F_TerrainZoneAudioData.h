// /Script/Icarus.TerrainZoneAudioData
// size 0x20, declared in Icarus/Source/Icarus/IcarusGenerated/TerrainZoneAudioData/TerrainZoneAudioDataRowHandle.h

USTRUCT()
struct FTerrainZoneAudioData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGlobalEnvironmentTerrainZoneFMODParam FMODParam;  // 0x001C, size 0x1
};
