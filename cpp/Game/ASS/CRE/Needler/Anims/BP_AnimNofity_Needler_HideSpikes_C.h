// /Game/ASS/CRE/Needler/Anims/BP_AnimNofity_Needler_HideSpikes.BP_AnimNofity_Needler_HideSpikes_C
// Derives from: UAnimNotify > UObject
// size 0x38, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNofity_Needler_HideSpikes_C : public UAnimNotify
{
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
