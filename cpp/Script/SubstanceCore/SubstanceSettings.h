// /Script/SubstanceCore.SubstanceSettings
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Marketplace/Substance/Source/SubstanceCore/Classes/SubstanceSettings.h

UCLASS(Config=Engine)
class USubstanceSettings : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) int32 MemoryBudgetMb;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 CPUCores;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 AsyncLoadMipClip;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, Config) int32 MaxAsyncSubstancesRenderedPerFrame;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ESubstanceEngineType> SubstanceEngine;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeX;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<EDefaultSubstanceTextureSize> DefaultSubstanceOutputSizeY;  // 0x003A, size 0x1
    UPROPERTY(EditAnywhere, Config) TSoftObjectPtr<UMaterialInterface> DefaultTemplateMaterial;  // 0x0040, size 0x28
};
