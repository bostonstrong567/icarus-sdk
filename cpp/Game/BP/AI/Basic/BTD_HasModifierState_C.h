// /Game/BP/AI/Basic/BTD_HasModifierState.BTD_HasModifierState_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_HasModifierState_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle ModifierState;  // 0x00A0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
