// /Script/AugmentedReality.ARPose3D
// size 0x50, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/AugmentedReality/ARTrackable.generated.h

USTRUCT()
struct FARPose3D
{
    UPROPERTY(BlueprintReadOnly) FARSkeletonDefinition SkeletonDefinition;  // 0x0000, size 0x28
    UPROPERTY(BlueprintReadOnly) TArray<FTransform> JointTransforms;  // 0x0028, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<bool> IsJointTracked;  // 0x0038, size 0x10
    UPROPERTY(BlueprintReadOnly) EARJointTransformSpace JointTransformSpace;  // 0x0048, size 0x1
};
