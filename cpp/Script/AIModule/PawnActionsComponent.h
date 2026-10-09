// /Script/AIModule.PawnActionsComponent
// Derives from: UActorComponent > UObject
// size 0xE8, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnActionsComponent.h

UCLASS(Config=Engine)
class UPawnActionsComponent : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(BlueprintReadOnly) APawn* ControlledPawn;  // 0x00B0, size 0x8
    UPROPERTY() TArray<FPawnActionStack> ActionStacks;  // 0x00B8, size 0x10
    UPROPERTY() TArray<FPawnActionEvent> ActionEvents;  // 0x00C8, size 0x10
    UPROPERTY(Transient) UPawnAction* CurrentAction;  // 0x00D8, size 0x8
    uint32 : 1 bLockedAILogic;  // 0x00E0, not reflected
private:
    uint32 ActionEventIndex;  // 0x00E4, not reflected
public:
    UFUNCTION(BlueprintCallable) TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);  // parameters 0x9
    UFUNCTION(BlueprintCallable) TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);  // parameters 0x12
    UFUNCTION(BlueprintCallable) bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);  // parameters 0x19
};
