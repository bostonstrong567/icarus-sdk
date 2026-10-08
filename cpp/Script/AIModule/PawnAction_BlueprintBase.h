// /Script/AIModule.PawnAction_BlueprintBase
// Derives from: UPawnAction > UObject
// size 0x90, declared in Engine/Source/Runtime/AIModule/Classes/Actions/PawnAction_BlueprintBase.h

UCLASS(Abstract, EditInlineNew)
class UPawnAction_BlueprintBase : public UPawnAction
{
public:

    UFUNCTION(BlueprintImplementableEvent) void ActionFinished(APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ActionPause(APawn* ControlledPawn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ActionResume(APawn* ControlledPawn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ActionStart(APawn* ControlledPawn);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ActionTick(APawn* ControlledPawn, float DeltaSeconds);  // parameters 0xC
};
