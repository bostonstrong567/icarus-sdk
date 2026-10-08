// /Script/Engine.GameState
// Derives from: AGameStateBase > AInfo > AActor > UObject
// size 0x290, declared in Engine/Source/Runtime/Engine/Classes/GameFramework/GameState.h

UCLASS(NotPlaceable, Config=Game)
class AGameState : public AGameStateBase
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FName MatchState;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName PreviousMatchState;  // 0x0278, size 0x8
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) int32 ElapsedTime;  // 0x0280, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle TimerHandle_DefaultTimer;  // 0x0288, protected

    UFUNCTION() void OnRep_ElapsedTime();
    UFUNCTION() void OnRep_MatchState();

    // Virtual functions that start here:
    //   DefaultTimer, HandleLeavingMap, HandleMatchHasEnded, HandleMatchHasStarted
    //   HandleMatchIsWaitingToStart, IsMatchInProgress, OnRep_ElapsedTime, OnRep_MatchState, ShouldShowGore
};
