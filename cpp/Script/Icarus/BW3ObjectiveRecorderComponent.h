// /Script/Icarus.BW3ObjectiveRecorderComponent
// Derives from: UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0xE0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/BW3ObjectiveRecorderComponent.h

UCLASS(Config=Engine)
class UBW3ObjectiveRecorderComponent : public UIcarusStateRecorderComponent
{
public:
    UPROPERTY(SaveGame) int32 SavedState;  // 0x00D8, size 0x4
};
