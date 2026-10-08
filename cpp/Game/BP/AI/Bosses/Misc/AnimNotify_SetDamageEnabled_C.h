// /Game/BP/AI/Bosses/Misc/AnimNotify_SetDamageEnabled.AnimNotify_SetDamageEnabled_C
// Derives from: UAnimNotify > UObject
// size 0x39, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UAnimNotify_SetDamageEnabled_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DamageEnabled;  // 0x0038, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
