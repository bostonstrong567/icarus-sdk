// /Script/AnimGraphRuntime.AnimNode_HandIKRetargeting
// size 0x120, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/BoneControllers/AnimNode_HandIKRetargeting.h

USTRUCT()
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
    UPROPERTY(EditAnywhere) FBoneReference RightHandFK;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference LeftHandFK;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference RightHandIK;  // 0x00E8, size 0x10
    UPROPERTY(EditAnywhere) FBoneReference LeftHandIK;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneReference> IKBonesToMove;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HandFKWeight;  // 0x0118, size 0x4
};
