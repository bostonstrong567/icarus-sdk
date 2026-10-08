// /Script/Engine.PoseSnapshot
// size 0x38, declared in Engine/Source/Runtime/Engine/Public/Animation/PoseSnapshot.h

USTRUCT()
struct FPoseSnapshot
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> LocalTransforms;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FName> BoneNames;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SkeletalMeshName;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SnapshotName;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsValid;  // 0x0030, size 0x1
};
