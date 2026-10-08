// /Script/Icarus.FlammableState
// Derives from: UObject
// size 0x30, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableState.h

UCLASS()
class UFlammableState : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnFlammableStateInit OnInit;  // 0x0028, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFlammableStateEnter OnEnter;  // 0x0029, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFlammableStateExit OnExit;  // 0x002A, size 0x1
    UPROPERTY(BlueprintAssignable) FOnFlammableStateTick OnTick;  // 0x002B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float EnterStateTime;  // 0x002C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) EFlammableState GetFlammableState() const;  // parameters 0x1

    // Virtual functions that start here:
    //   CanTransitionState, Enter, Exit, GetDebugVisualStatsString, GetFlammableState, Init, Tick
    //   TransitionState
};
