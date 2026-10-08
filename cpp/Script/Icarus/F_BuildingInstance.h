// /Script/Icarus.BuildingInstance
// size 0x40, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BuildingGridRecorderComponent.h

USTRUCT()
struct FBuildingInstance
{
    UPROPERTY(BlueprintReadOnly) FTransform Transform;  // 0x0000, size 0x30
    UPROPERTY(BlueprintReadOnly) int32 Variation;  // 0x0030, size 0x4
    UPROPERTY(BlueprintReadOnly) int32 IcarusUID;  // 0x0034, size 0x4
    UPROPERTY(BlueprintReadOnly) float BurnTimeRemaining;  // 0x0038, size 0x4
};
