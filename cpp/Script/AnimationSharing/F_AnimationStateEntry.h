// /Script/AnimationSharing.AnimationStateEntry
// size 0x30, declared in Engine/Plugins/Developer/AnimationSharing/Source/AnimationSharing/Public/AnimationSharingTypes.h

USTRUCT()
struct FAnimationStateEntry
{
    UPROPERTY(EditAnywhere) uint8 State;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) TArray<FAnimationSetup> AnimationSetups;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) bool bOnDemand;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) bool bAdditive;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere) float BlendTime;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere) bool bReturnToPreviousState;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere) bool bSetNextState;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere) uint8 NextState;  // 0x0022, size 0x1
    UPROPERTY(EditAnywhere) FPerPlatformInt MaximumNumberOfConcurrentInstances;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) float WiggleTimePercentage;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) bool bRequiresCurves;  // 0x002C, size 0x1
};
