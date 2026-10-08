// /Game/BP/AI/Bosses/BT/BTTask_PerformActionMount_EatFromCorpse.BTTask_PerformActionMount_EatFromCorpse_C
// Derives from: UBTT_Mount_ConsumeSurvivalResouce_C > UBTTask_PerformAction_Mount_C > UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x24C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformActionMount_EatFromCorpse_C : public UBTT_Mount_ConsumeSurvivalResouce_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CorpseActorKey;  // 0x0220, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CorpseHarvestMultiplier;  // 0x0248, size 0x4

    UFUNCTION(BlueprintCallable) void DoAction();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetContainerInventory(UInventory*& Inventory);  // parameters 0x8
};
