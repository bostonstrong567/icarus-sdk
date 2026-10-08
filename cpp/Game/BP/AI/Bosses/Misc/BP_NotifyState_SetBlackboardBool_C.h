// /Game/BP/AI/Bosses/Misc/BP_NotifyState_SetBlackboardBool.BP_NotifyState_SetBlackboardBool_C
// Derives from: UAnimNotifyState > UObject
// size 0x38, a blueprint class, blueprint

UCLASS(Const, EditInlineNew, Config=Engine)
class UBP_NotifyState_SetBlackboardBool_C : public UAnimNotifyState
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BlackboardKeyName;  // 0x0030, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
