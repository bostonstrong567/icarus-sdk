// /Script/Icarus.SplineRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x250, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/SplineRecorderComponent.h

UCLASS(Config=Engine)
class USplineRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) FRecordedSplineActorStruct Record;  // 0x01C0, size 0x88

    // Not reflected: the engine's scripting cannot see these.
    int32 CollidedSplineID;  // 0x0248, private
};
