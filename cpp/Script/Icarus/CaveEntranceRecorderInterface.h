// /Script/Icarus.CaveEntranceRecorderInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/CaveEntranceRecorderComponent.h

UCLASS(Abstract, MinimalAPI)
class UCaveEntranceRecorderInterface : public UInterface
{
public:

    UFUNCTION(BlueprintNativeEvent) AVoxelResource* GetVoxelActor() const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void SetVoxelBlockerSaveData(const TArray<FVoxelMinedSphere>& VoxelBlockerSaveData);  // parameters 0x10
};
