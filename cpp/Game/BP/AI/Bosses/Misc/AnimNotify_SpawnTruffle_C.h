// /Game/BP/AI/Bosses/Misc/AnimNotify_SpawnTruffle.AnimNotify_SpawnTruffle_C
// Derives from: UAnimNotify > UObject
// size 0x38, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UAnimNotify_SpawnTruffle_C : public UAnimNotify
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
