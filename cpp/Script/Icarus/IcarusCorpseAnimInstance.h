// /Script/Icarus.IcarusCorpseAnimInstance
// Derives from: UIcarusAnimInstance > UAnimInstance > UObject
// size 0x320, declared in Icarus/Source/Icarus/Animation/IcarusCorpseAnimInstance.h

UCLASS(Transient)
class UIcarusCorpseAnimInstance : public UIcarusAnimInstance
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) AIcarusCorpse* OwningCorpse;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UAnimSequence* CarryAnim;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FPoseSnapshot RagdollPose;  // 0x02E0, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsThirdPerson;  // 0x0318, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsCarried;  // 0x0319, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bHasHiddenInstigator;  // 0x031A, private
};
