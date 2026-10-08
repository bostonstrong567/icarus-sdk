// /Script/Engine.StaticMeshOptimizationSettings
// size 0x1C, declared in Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h

USTRUCT()
struct FStaticMeshOptimizationSettings
{
    UPROPERTY() TEnumAsByte<EOptimizationType> ReductionMethod;  // 0x0000, size 0x1
    UPROPERTY() float NumOfTrianglesPercentage;  // 0x0004, size 0x4
    UPROPERTY() float MaxDeviationPercentage;  // 0x0008, size 0x4
    UPROPERTY() float WeldingThreshold;  // 0x000C, size 0x4
    UPROPERTY() bool bRecalcNormals;  // 0x0010, size 0x1
    UPROPERTY() float NormalsThreshold;  // 0x0014, size 0x4
    UPROPERTY() uint8 SilhouetteImportance;  // 0x0018, size 0x1
    UPROPERTY() uint8 TextureImportance;  // 0x0019, size 0x1
    UPROPERTY() uint8 ShadingImportance;  // 0x001A, size 0x1
};
