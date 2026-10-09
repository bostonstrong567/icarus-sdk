// /Script/AnimationSharing.AnimSharingAdditiveInstance
// Derives from: UAnimInstance > UObject
// size 0x2D0, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingInstances.h

UCLASS(Transient)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere, Transient, Instanced, BlueprintReadOnly) TWeakObjectPtr<USkeletalMeshComponent> BaseComponent;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) TWeakObjectPtr<UAnimSequence> AdditiveAnimation;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float Alpha;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) bool bStateBool;  // 0x02CC, size 0x1
};
