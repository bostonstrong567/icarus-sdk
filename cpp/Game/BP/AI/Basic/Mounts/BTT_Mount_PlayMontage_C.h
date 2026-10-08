// /Game/BP/AI/Basic/Mounts/BTT_Mount_PlayMontage.BTT_Mount_PlayMontage_C
// Derives from: UBTTask_PlayMontage_C > UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x160, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_Mount_PlayMontage_C : public UBTTask_PlayMontage_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag AnimationTag;  // 0x012C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UIcarusGOAPAction> FallbackGOAPAction;  // 0x0138, size 0x28

    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMontage(UAnimMontage*& Montage) const;  // parameters 0x8
};
