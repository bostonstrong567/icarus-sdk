// /Script/Icarus.DatabaseBuildingGrid
// size 0x40, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FDatabaseBuildingGrid
{
    UPROPERTY(BlueprintReadOnly) FTransform GridTransform;  // 0x0000, size 0x30
    UPROPERTY(BlueprintReadOnly) TArray<FDatabaseBuildingType> BuildingTypes;  // 0x0030, size 0x10
};
