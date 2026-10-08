// /Script/Niagara.NiagaraSettings
// Derives from: UDeveloperSettings > UObject
// size 0xC8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSettings.h

UCLASS(Config=Niagara)
class UNiagaraSettings : public UDeveloperSettings
{
public:
    UPROPERTY(EditAnywhere, Config) FSoftObjectPath DefaultEffectType;  // 0x0038, size 0x18
    UPROPERTY(EditAnywhere, Config) TArray<FText> QualityLevels;  // 0x0050, size 0x10
    UPROPERTY(EditAnywhere, Config) TMap<FString, FText> ComponentRendererWarningsPerClass;  // 0x0060, size 0x50
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, Config) ENiagaraGpuBufferFormat DefaultGridFormat;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, Config) ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ENDISkelMesh_GpuMaxInfluences> NDISkelMesh_GpuMaxInfluences;  // 0x00B8, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMesh_GpuUniformSamplingFormat;  // 0x00B9, size 0x1
    UPROPERTY(EditAnywhere, Config) TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMesh_AdjacencyTriangleIndexFormat;  // 0x00BA, size 0x1
    UPROPERTY(Transient) UNiagaraEffectType* DefaultEffectTypePtr;  // 0x00C0, size 0x8
};
