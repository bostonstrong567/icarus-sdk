// /Script/Icarus.ArcadeMachineRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ArcadeMachineRecorderComponent.h

UCLASS(Config=Engine)
class UArcadeMachineRecorderComponent : public UDeployableRecorderComponent
{
public:
    UPROPERTY(SaveGame) TArray<FArcadeMachineScore> PlayerScores;  // 0x0290, size 0x10
};
