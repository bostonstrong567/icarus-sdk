// /Script/Icarus.BuildingGridSaveData
// size 0x50, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FBuildingGridSaveData
{
    UPROPERTY(SaveGame, BlueprintReadWrite) FTransform GridTransform;  // 0x0010, size 0x30
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FDatabaseBuildingData> BuildingTypes;  // 0x0040, size 0x10
};
