// /Script/Icarus.RockBaseRecorderComponent
// Derives from: UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x1D0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/RockBaseRecorderComponent.h

UCLASS(Config=Engine)
class URockBaseRecorderComponent : public UActorStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<bool> BreakArray;  // 0x01C0, size 0x10
};
