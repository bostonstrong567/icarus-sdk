// /Game/BP/AI/Bosses/BT/IceMammoth/BTD_MammothCheckArmorPercent.BTD_MammothCheckArmorPercent_C
// Derives from: UBTDecorator_BlueprintBase > UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0xA5, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTD_MammothCheckArmorPercent_C : public UBTDecorator_BlueprintBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ArmorPercent;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsLessThan;  // 0x00A4, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PerformConditionCheck(AActor* OwnerActor);  // parameters 0x9
};
