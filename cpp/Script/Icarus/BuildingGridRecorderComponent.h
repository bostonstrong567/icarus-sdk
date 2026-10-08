// /Script/Icarus.BuildingGridRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x210, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

UCLASS(Config=Engine)
class UBuildingGridRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame, BlueprintReadWrite) FBuildingGridSaveData BuildingGridRecord;  // 0x01C0, size 0x50

    UFUNCTION(BlueprintCallable) void AddBuildingToGrid(const FTransform& GridTransform, const FName& BuildableRowName, const FName& BuildingItemName, const FItemData& BuildingItemData, FBuildingInfo BuildingInfo);  // parameters 0x2B0
};
