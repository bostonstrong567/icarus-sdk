// /Game/BP/AI/GOAP/BehaviourTrees/BTD_IcarusGOAP_IsPropertySet.BTD_IcarusGOAP_IsPropertySet_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xB8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_IcarusGOAP_IsPropertySet_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPPropertiesRowHandle GOAP_Property;  // 0x00A0, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x11
};
