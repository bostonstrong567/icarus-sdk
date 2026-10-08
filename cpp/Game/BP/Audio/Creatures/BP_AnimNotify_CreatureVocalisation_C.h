// /Game/BP/Audio/Creatures/BP_AnimNotify_CreatureVocalisation.BP_AnimNotify_CreatureVocalisation_C
// Derives from: UAnimNotify > UObject
// size 0x39, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_CreatureVocalisation_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EAIVocalisationType Type;  // 0x0038, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
