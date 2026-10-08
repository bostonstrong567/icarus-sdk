// /Script/Icarus.BuildingRecordAlterationData
// size 0xC, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FBuildingRecordAlterationData
{
    UPROPERTY(SaveGame, BlueprintReadWrite) FName Alteration;  // 0x0000, size 0x8
    UPROPERTY(SaveGame, BlueprintReadWrite) int32 Value;  // 0x0008, size 0x4
};
