// /Script/Niagara.NiagaraRibbonUVSettings
// size 0x24, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraRibbonRendererProperties.h

USTRUCT()
struct FNiagaraRibbonUVSettings
{
    UPROPERTY(EditAnywhere) ENiagaraRibbonUVDistributionMode DistributionMode;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraRibbonUVEdgeMode LeadingEdgeMode;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraRibbonUVEdgeMode TrailingEdgeMode;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) float TilingLength;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) FVector2D Offset;  // 0x0010, size 0x8
    UPROPERTY(EditAnywhere) FVector2D Scale;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere) bool bEnablePerParticleUOverride;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere) bool bEnablePerParticleVRangeOverride;  // 0x0021, size 0x1
};
