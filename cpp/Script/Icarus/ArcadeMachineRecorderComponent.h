// /Script/Icarus.ArcadeMachineRecorderComponent
// Derives from: UDeployableRecorderComponent > UItemStateRecorderComponent > UActorStateRecorderComponent > UIcarusStateRecorderComponent > UActorComponent > UObject
// size 0x2A0, declared in Icarus/Source/Icarus/Systems/GameStateRecorder/ArcadeMachineRecorderComponent.h

UCLASS(Config=Engine)
class UArcadeMachineRecorderComponent : public UDeployableRecorderComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(SaveGame) TArray<FArcadeMachineScore> PlayerScores;  // 0x0290, size 0x10
};
