// /Script/MaterialShaderQualitySettings.MaterialQualityOverrides
// size 0x9, declared in Engine/Source/Runtime/MaterialShaderQualitySettings/Classes/ShaderPlatformQualitySettings.h

USTRUCT()
struct FMaterialQualityOverrides
{
    UPROPERTY(EditAnywhere, Config) bool bDiscardQualityDuringCook;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableOverride;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForceFullyRough;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForceNonMetal;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForceDisableLMDirectionality;  // 0x0004, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForceLQReflections;  // 0x0005, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bForceDisablePreintegratedGF;  // 0x0006, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bDisableMaterialNormalCalculation;  // 0x0007, size 0x1
    UPROPERTY(EditAnywhere, Config) EMobileShadowQuality MobileShadowQuality;  // 0x0008, size 0x1
};
