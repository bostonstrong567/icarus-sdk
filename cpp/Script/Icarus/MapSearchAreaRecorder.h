// /Script/Icarus.MapSearchAreaRecorder
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/Map/MapSearchAreaRecorder.h

UCLASS(Config=Engine)
class UMapSearchAreaRecorder : public UActorStateRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) FName MapSearchAreaName;  // 0x01C0, size 0x8
    UPROPERTY(SaveGame) float Radius;  // 0x01C8, size 0x4
};
