// /Game/BP/Audio/PlayerMovement/BP_AnimNotify_SwimStroke.BP_AnimNotify_SwimStroke_C
// Derives from: UAnimNotify > UObject
// size 0x38, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_SwimStroke_C : public UAnimNotify
{
public:

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
