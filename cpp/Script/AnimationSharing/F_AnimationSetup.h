// /Script/AnimationSharing.AnimationSetup
// size 0x18, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingTypes.h

USTRUCT()
struct FAnimationSetup
{
public:
    UPROPERTY(EditAnywhere) UAnimSequence* AnimSequence;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<UAnimSharingStateInstance> AnimBlueprint;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FPerPlatformInt NumRandomizedInstances;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) FPerPlatformBool Enabled;  // 0x0014, size 0x1
};
