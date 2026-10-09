// /Script/Icarus.SettlementBuildingRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x240, declared in Icarus/Source/Icarus/Settlement/SettlementBuildingRecorderComponent.h

UCLASS(Config=Engine)
class USettlementBuildingRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, SaveGame) int32 SettlementBuildingRecorderVersion;  // 0x01C0, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) int32 InstanceId;  // 0x01C4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FName BuildingDefinitionRow;  // 0x01C8, size 0x8
    UPROPERTY(EditAnywhere, SaveGame) ESettlementBuildState BuildState;  // 0x01D0, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) float BuildProgress;  // 0x01D4, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) bool bPendingRepair;  // 0x01D8, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) bool bIsBuildingActive;  // 0x01D9, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) bool bIsPowered;  // 0x01DA, size 0x1
    UPROPERTY(EditAnywhere, SaveGame) float PowerDrawAccumulator;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) TArray<float> GenerationAccumulators;  // 0x01E0, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) TArray<int32> GenerationInputCredits;  // 0x01F0, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FGuid ConstructionTaskId;  // 0x0200, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) FGuid DeconstructionTaskId;  // 0x0210, size 0x10
    UPROPERTY(EditAnywhere, SaveGame) int32 OwningSettlementUID;  // 0x0220, size 0x4
    UPROPERTY(EditAnywhere, SaveGame) FString OwningSettlementClassName;  // 0x0228, size 0x10
};
