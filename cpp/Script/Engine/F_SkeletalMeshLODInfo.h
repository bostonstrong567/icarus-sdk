// /Script/Engine.SkeletalMeshLODInfo
// size 0xB8, declared in Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h

USTRUCT()
struct FSkeletalMeshLODInfo
{
    UPROPERTY(EditAnywhere) FPerPlatformFloat ScreenSize;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) float LODHysteresis;  // 0x0004, size 0x4
    UPROPERTY() TArray<int32> LODMaterialMap;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) FSkeletalMeshBuildSettings BuildSettings;  // 0x0018, size 0x14
    UPROPERTY(EditAnywhere) FSkeletalMeshOptimizationSettings ReductionSettings;  // 0x002C, size 0x3C
    UPROPERTY(EditAnywhere) TArray<FBoneReference> BonesToRemove;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) TArray<FBoneReference> BonesToPrioritize;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) float WeightOfPrioritization;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere) UAnimSequence* BakePose;  // 0x0090, size 0x8
    UPROPERTY(EditAnywhere) UAnimSequence* BakePoseOverride;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere) FString SourceImportFilename;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere) ESkinCacheUsage SkinCacheUsage;  // 0x00B0, size 0x1
    UPROPERTY() uint8 bHasBeenSimplified : 1;  // 0x00B1, mask 0x01
    UPROPERTY() uint8 bHasPerLODVertexColors : 1;  // 0x00B1, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAllowCPUAccess : 1;  // 0x00B1, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bSupportUniformlyDistributedSampling : 1;  // 0x00B1, mask 0x08
};
