// /Script/Icarus.EnzymeGeyserRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/EnzymeGeyserRecorderComponent.h

UCLASS(Config=Engine)
class UEnzymeGeyserRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) int32 Completions;  // 0x01C0, size 0x4
    UPROPERTY(SaveGame) FName HordeDTKey;  // 0x01C4, size 0x8
};
