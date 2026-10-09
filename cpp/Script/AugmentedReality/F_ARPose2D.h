// /Script/AugmentedReality.ARPose2D
// size 0x48, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/AugmentedReality/ARBlueprintLibrary.generated.h

USTRUCT()
struct FARPose2D
{
public:
    UPROPERTY(BlueprintReadOnly) FARSkeletonDefinition SkeletonDefinition;  // 0x0000, size 0x28
    UPROPERTY(BlueprintReadOnly) TArray<FVector2D> JointLocations;  // 0x0028, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<bool> IsJointTracked;  // 0x0038, size 0x10
};
