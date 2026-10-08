// /Game/BP/AI/Bosses/Misc/AnimNotify_ChooseDamageSource.AnimNotify_ChooseDamageSource_C
// Derives from: UAnimNotify_PlayMontageNotify > UAnimNotify > UObject
// size 0x48, a blueprint class, blueprint

UCLASS(Const, EditInlineNew, Config=Engine)
class UAnimNotify_ChooseDamageSource_C : public UAnimNotify_PlayMontageNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DamageSourceSocketName;  // 0x0040, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
};
