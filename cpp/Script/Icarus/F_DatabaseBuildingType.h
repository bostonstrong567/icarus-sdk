// /Script/Icarus.DatabaseBuildingType
// size 0x20, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FDatabaseBuildingType
{
public:
    UPROPERTY(BlueprintReadOnly) FName BuildableRowName;  // 0x0000, size 0x8
    UPROPERTY(BlueprintReadOnly) FName BuildingItemStaticRowName;  // 0x0008, size 0x8
    UPROPERTY(BlueprintReadOnly) TArray<FBuildingInstance> BuildingInstances;  // 0x0010, size 0x10
};
