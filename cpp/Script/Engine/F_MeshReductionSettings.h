// /Script/Engine.MeshReductionSettings
// size 0x24, declared in Engine/Source/Runtime/Engine/Classes/Engine/MeshMerging.h

USTRUCT()
struct FMeshReductionSettings
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PercentTriangles;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PercentVertices;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDeviation;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PixelError;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WeldingThreshold;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HardAngleThreshold;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseLODModel;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMeshFeatureImportance> SilhouetteImportance;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMeshFeatureImportance> TextureImportance;  // 0x001D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMeshFeatureImportance> ShadingImportance;  // 0x001E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bRecalculateNormals : 1;  // 0x001F, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bGenerateUniqueLightmapUVs : 1;  // 0x001F, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bKeepSymmetry : 1;  // 0x001F, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bVisibilityAided : 1;  // 0x001F, mask 0x08
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCullOccluded : 1;  // 0x001F, mask 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EStaticMeshReductionTerimationCriterion TerminationCriterion;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMeshFeatureImportance> VisibilityAggressiveness;  // 0x0021, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMeshFeatureImportance> VertexColorImportance;  // 0x0022, size 0x1
};
