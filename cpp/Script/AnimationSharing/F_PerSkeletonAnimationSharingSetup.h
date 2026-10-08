// /Script/AnimationSharing.PerSkeletonAnimationSharingSetup
// size 0x38, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingTypes.h

USTRUCT()
struct FPerSkeletonAnimationSharingSetup
{
    UPROPERTY(EditAnywhere) USkeleton* Skeleton;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) USkeletalMesh* SkeletalMesh;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAnimSharingTransitionInstance> BlendAnimBlueprint;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAnimSharingAdditiveInstance> AdditiveAnimBlueprint;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAnimationSharingStateProcessor> StateProcessorClass;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere) TArray<FAnimationStateEntry> AnimationStates;  // 0x0028, size 0x10
};
