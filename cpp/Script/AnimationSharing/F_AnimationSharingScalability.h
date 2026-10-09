// /Script/AnimationSharing.AnimationSharingScalability
// size 0x10, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingTypes.h

USTRUCT()
struct FAnimationSharingScalability
{
public:
    UPROPERTY(EditAnywhere) FPerPlatformBool UseBlendTransitions;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) FPerPlatformFloat BlendSignificanceValue;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformInt MaximumNumberConcurrentBlends;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformFloat TickSignificanceValue;  // 0x000C, size 0x4
};
