// /Script/AugmentedReality.ARPoseUpdatePayload
// size 0x40, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARPoseUpdatePayload
{
public:
    UPROPERTY(BlueprintReadWrite) FTransform WorldTransform;  // 0x0000, size 0x30
    UPROPERTY(BlueprintReadWrite) TArray<FTransform> JointTransforms;  // 0x0030, size 0x10
};
