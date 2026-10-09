// /Script/Icarus.TargetRangeTargetRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeTargetRecorderComponent.h

UCLASS(Config=Engine)
class UTargetRangeTargetRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) bool bAllowMultipleHits;  // 0x01C0, size 0x1
    UPROPERTY(SaveGame) float MovementDistance;  // 0x01C4, size 0x4
    UPROPERTY(SaveGame) float MovementDelay;  // 0x01C8, size 0x4
};
