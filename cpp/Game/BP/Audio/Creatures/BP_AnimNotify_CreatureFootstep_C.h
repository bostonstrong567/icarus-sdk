// /Game/BP/Audio/Creatures/BP_AnimNotify_CreatureFootstep.BP_AnimNotify_CreatureFootstep_C
// Derives from: UAnimNotify > UObject
// size 0x3A, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UBP_AnimNotify_CreatureFootstep_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECreatureFootstepType> Type;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ECreatureFootstepDirection> Direction;  // 0x0039, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
