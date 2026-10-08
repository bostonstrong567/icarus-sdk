// /Script/AIModule.PawnActionsComponent
// Derives from: UActorComponent > UObject
// size 0xE8, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnActionsComponent.h

UCLASS(Config=Engine)
class UPawnActionsComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintReadOnly) APawn* ControlledPawn;  // 0x00B0, size 0x8
    UPROPERTY() TArray<FPawnActionStack> ActionStacks;  // 0x00B8, size 0x10
    UPROPERTY() TArray<FPawnActionEvent> ActionEvents;  // 0x00C8, size 0x10
    UPROPERTY(Transient) UPawnAction* CurrentAction;  // 0x00D8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bLockedAILogic;  // 0x00E0, protected
    uint32 ActionEventIndex;  // 0x00E4, private

    UFUNCTION(BlueprintCallable) TEnumAsByte<EPawnActionAbortState> K2_AbortAction(UPawnAction* ActionToAbort);  // parameters 0x9
    UFUNCTION(BlueprintCallable) TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(UPawnAction* ActionToAbort);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static bool K2_PerformAction(APawn* Pawn, UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);  // parameters 0x12
    UFUNCTION(BlueprintCallable) bool K2_PushAction(UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, UObject* Instigator);  // parameters 0x19
};
