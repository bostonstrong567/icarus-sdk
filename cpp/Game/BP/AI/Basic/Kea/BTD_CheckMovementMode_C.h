// /Game/BP/AI/Basic/Kea/BTD_CheckMovementMode.BTD_CheckMovementMode_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA1, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckMovementMode_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> DesiredMovementMode;  // 0x00A0, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
