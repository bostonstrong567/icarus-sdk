// /Game/BP/Audio/Footsteps/BP_AnimNotify_Footstep.BP_AnimNotify_Footstep_C
// Derives from: UAnimNotify > UObject
// size 0x3A, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_Footstep_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EFootstepType> Footstep_Type;  // 0x0038, size 0x1, named "Footstep Type"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EPlayerAudioStance> Player_Stance;  // 0x0039, size 0x1, named "Player Stance"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
