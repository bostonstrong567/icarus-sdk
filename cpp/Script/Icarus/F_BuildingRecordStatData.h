// /Script/Icarus.BuildingRecordStatData
// size 0xC, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FBuildingRecordStatData
{
    UPROPERTY(SaveGame, BlueprintReadWrite) FName Stat;  // 0x0000, size 0x8
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 Value;  // 0x0008, size 0x4
};
