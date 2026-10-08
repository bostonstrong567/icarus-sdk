// /Game/BP/AI/Basic/BTD_CheckSightlineToTarget.BTD_CheckSightlineToTarget_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xD2, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckSightlineToTarget_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Controller_Needs_Line_Of_Sight_to_Target;  // 0x00C8, size 0x1, named "Controller Needs Line Of Sight to Target"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Needs_Target_Within_Controller_View;  // 0x00C9, size 0x1, named "Needs Target Within Controller View"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Needs_Controller_Within_Target_View;  // 0x00CA, size 0x1, named "Needs Controller Within Target View"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredDotLimit;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseControlRotationInsteadOfLookRotation;  // 0x00D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Use2DDotChecks;  // 0x00D1, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
