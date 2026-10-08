// /Game/BP/AI/Bosses/BT/IceMammoth/BTD_CheckIceMammothState.BTD_CheckIceMammothState_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xC9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_CheckIceMammothState_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector StateKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<IceMammothState> DesiredState;  // 0x00C8, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
