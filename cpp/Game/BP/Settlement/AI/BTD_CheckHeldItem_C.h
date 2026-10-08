// /Game/BP/Settlement/AI/BTD_CheckHeldItem.BTD_CheckHeldItem_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckHeldItem_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementNPCItemsRowHandle DesiredItem;  // 0x00A0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
