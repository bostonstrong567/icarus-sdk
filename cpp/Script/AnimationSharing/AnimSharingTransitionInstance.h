// /Script/AnimationSharing.AnimSharingTransitionInstance
// Derives from: UAnimInstance > UObject
// size 0x2D0, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingInstances.h

UCLASS(Transient)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
    UPROPERTY(EditAnywhere, Transient, Instanced, BlueprintReadOnly) TWeakObjectPtr<USkeletalMeshComponent> FromComponent;  // 0x02B8, size 0x8
    UPROPERTY(EditAnywhere, Transient, Instanced, BlueprintReadOnly) TWeakObjectPtr<USkeletalMeshComponent> ToComponent;  // 0x02C0, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) float BlendTime;  // 0x02C8, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadOnly) bool bBlendBool;  // 0x02CC, size 0x1
};
