// /Script/AugmentedReality.ARSkeletonDefinition
// size 0x28, declared in Engine/Source/Runtime/AugmentedReality/Public/ARTypes.h

USTRUCT()
struct FARSkeletonDefinition
{
public:
    UPROPERTY(BlueprintReadOnly) int32 NumJoints;  // 0x0000, size 0x4
    UPROPERTY(BlueprintReadOnly) TArray<FName> JointNames;  // 0x0008, size 0x10
    UPROPERTY(BlueprintReadOnly) TArray<int32> ParentIndices;  // 0x0018, size 0x10
};
