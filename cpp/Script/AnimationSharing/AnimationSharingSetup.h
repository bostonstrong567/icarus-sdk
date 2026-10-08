// /Script/AnimationSharing.AnimationSharingSetup
// Derives from: UObject
// size 0x48, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingSetup.h

UCLASS(Config=Engine)
class UAnimationSharingSetup : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) FAnimationSharingScalability ScalabilitySettings;  // 0x0038, size 0x10
};
