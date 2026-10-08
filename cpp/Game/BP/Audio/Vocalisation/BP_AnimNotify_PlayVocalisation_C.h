// /Game/BP/Audio/Vocalisation/BP_AnimNotify_PlayVocalisation.BP_AnimNotify_PlayVocalisation_C
// Derives from: UAnimNotify > UObject
// size 0x50, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_PlayVocalisation_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FVocalisationsRowHandle Vocalisation;  // 0x0038, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
