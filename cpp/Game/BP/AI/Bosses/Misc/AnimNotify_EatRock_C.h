// /Game/BP/AI/Bosses/Misc/AnimNotify_EatRock.AnimNotify_EatRock_C
// Derives from: UAnimNotify > UObject
// size 0x48, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UAnimNotify_EatRock_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetActorKey;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ConsumeAllRocks;  // 0x0040, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ArmourPercentToAdd;  // 0x0044, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
