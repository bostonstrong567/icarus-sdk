// /Script/Engine.SkeletalMeshSamplingRegion
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h

USTRUCT()
struct FSkeletalMeshSamplingRegion
{
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) int32 LODIndex;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint8 bSupportUniformlyDistributedSampling : 1;  // 0x000C, mask 0x01
    UPROPERTY(EditAnywhere) TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters;  // 0x0020, size 0x10
};
