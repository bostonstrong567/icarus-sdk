// /Script/Engine.SkeletalMeshSamplingRegionBoneFilter
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h

USTRUCT()
struct FSkeletalMeshSamplingRegionBoneFilter
{
    UPROPERTY(EditAnywhere) FName BoneName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) uint8 bIncludeOrExclude : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bApplyToChildren : 1;  // 0x0008, mask 0x02
};
