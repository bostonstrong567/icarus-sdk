// /Script/Engine.MaterialExpressionVolumetricAdvancedMaterialOutput
// Derives from: UMaterialExpressionCustomOutput > UMaterialExpression > UObject
// size 0xF0, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionVolumetricAdvancedMaterialOutput.h

UCLASS(MinimalAPI)
class UMaterialExpressionVolumetricAdvancedMaterialOutput : public UMaterialExpressionCustomOutput
{
public:
    UPROPERTY() FExpressionInput PhaseG;  // 0x0040, size 0x14
    UPROPERTY() FExpressionInput PhaseG2;  // 0x0054, size 0x14
    UPROPERTY() FExpressionInput PhaseBlend;  // 0x0068, size 0x14
    UPROPERTY() FExpressionInput MultiScatteringContribution;  // 0x007C, size 0x14
    UPROPERTY() FExpressionInput MultiScatteringOcclusion;  // 0x0090, size 0x14
    UPROPERTY() FExpressionInput MultiScatteringEccentricity;  // 0x00A4, size 0x14
    UPROPERTY() FExpressionInput ConservativeDensity;  // 0x00B8, size 0x14
    UPROPERTY(EditAnywhere) float ConstPhaseG;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere) float ConstPhaseG2;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere) float ConstPhaseBlend;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere) bool PerSamplePhaseEvaluation;  // 0x00D8, size 0x1
    UPROPERTY(EditAnywhere) uint32 MultiScatteringApproximationOctaveCount;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere) float ConstMultiScatteringContribution;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere) float ConstMultiScatteringOcclusion;  // 0x00E4, size 0x4
    UPROPERTY(EditAnywhere) float ConstMultiScatteringEccentricity;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere) bool bGroundContribution;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere) bool bGrayScaleMaterial;  // 0x00ED, size 0x1
    UPROPERTY(EditAnywhere) bool bRayMarchVolumeShadow;  // 0x00EE, size 0x1
};
