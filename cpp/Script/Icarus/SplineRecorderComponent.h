// /Script/Icarus.SplineRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x250, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SplineRecorderComponent.h

UCLASS(Config=Engine)
class USplineRecorderComponent : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FRecordedSplineActorStruct Record;  // 0x01C0, size 0x88
private:
    int32 CollidedSplineID;  // 0x0248, not reflected
};
