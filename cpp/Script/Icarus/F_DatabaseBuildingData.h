// /Script/Icarus.DatabaseBuildingData
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FDatabaseBuildingData
{
    UPROPERTY(SaveGame, BlueprintReadWrite) FName BuildableRowName;  // 0x0000, size 0x8
    UPROPERTY(SaveGame, BlueprintReadWrite) FName BuildingItemStaticRowName;  // 0x0008, size 0x8
    UPROPERTY(SaveGame, BlueprintReadWrite) TArray<FBuildingInfo> BuildingInstances;  // 0x0010, size 0x10
};
