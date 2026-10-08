// /Game/BP/AI/Basic/Mounts/BTTask_PerformAction_Mount.BTTask_PerformAction_Mount_C
// Derives from: UBTTask_PerformAction_Base_C > UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1D0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PerformAction_Mount_C : public UBTTask_PerformAction_Base_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag AnimationTag;  // 0x019C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusGOAPAction> FallbackGOAPAction;  // 0x01A8, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMontage(UAnimMontage*& Montage) const;  // parameters 0x8
};
