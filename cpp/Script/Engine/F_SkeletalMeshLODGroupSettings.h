// /Script/Engine.SkeletalMeshLODGroupSettings
// size 0x80, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h

USTRUCT()
struct FSkeletalMeshLODGroupSettings
{
    UPROPERTY(EditAnywhere) FPerPlatformFloat ScreenSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float LODHysteresis;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) EBoneFilterActionOption BoneFilterActionOption;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) TArray<FBoneFilter> BoneList;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<FName> BonesToPrioritize;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) float WeightOfPrioritization;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) UAnimSequence* BakePose;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FSkeletalMeshOptimizationSettings ReductionSettings;  // 0x0040, size 0x3C
};
