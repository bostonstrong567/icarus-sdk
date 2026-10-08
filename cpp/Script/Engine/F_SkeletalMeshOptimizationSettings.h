// /Script/Engine.SkeletalMeshOptimizationSettings
// size 0x3C, declared in Engine/Source/Runtime/Engine/Public/SkeletalMeshReductionSettings.h

USTRUCT()
struct FSkeletalMeshOptimizationSettings
{
    UPROPERTY(EditAnywhere) TEnumAsByte<SkeletalMeshTerminationCriterion> TerminationCriterion;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) float NumOfTrianglesPercentage;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) float NumOfVertPercentage;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint32 MaxNumOfTriangles;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) uint32 MaxNumOfVerts;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MaxDeviationPercentage;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<SkeletalMeshOptimizationType> ReductionMethod;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<SkeletalMeshOptimizationImportance> SilhouetteImportance;  // 0x0019, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<SkeletalMeshOptimizationImportance> TextureImportance;  // 0x001A, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<SkeletalMeshOptimizationImportance> ShadingImportance;  // 0x001B, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<SkeletalMeshOptimizationImportance> SkinningImportance;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere) uint8 bRemapMorphTargets : 1;  // 0x001D, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bRecalcNormals : 1;  // 0x001D, mask 0x02
    UPROPERTY(EditAnywhere) float WeldingThreshold;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) float NormalsThreshold;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxBonesPerVertex;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) uint8 bEnforceBoneBoundaries : 1;  // 0x002C, mask 0x01
    UPROPERTY(EditAnywhere) float VolumeImportance;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) uint8 bLockEdges : 1;  // 0x0034, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bLockColorBounaries : 1;  // 0x0034, mask 0x02
    UPROPERTY(EditAnywhere) int32 BaseLOD;  // 0x0038, size 0x4
};
