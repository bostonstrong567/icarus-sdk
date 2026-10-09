// /Script/Icarus.TeleportInfo
// size 0xC0, declared in Icarus/Source/Icarus/World/InstancedLevels/TeleportComponent.h

USTRUCT()
struct FTeleportInfo
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGroupedInstancedMapDataRowHandle MapSet;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SubCaveID;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EntranceID;  // 0x0094, size 0x4
protected:
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UWorld> DestLevel;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere) FBox DestLevelBounds;  // 0x0040, size 0x1C
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTransform DestLocation;  // 0x0060, size 0x30
    UPROPERTY(EditAnywhere) TSoftObjectPtr<UWorld> SourceLevel;  // 0x0098, size 0x28
};
