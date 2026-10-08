// /Script/Niagara.NiagaraLightRendererProperties
// Derives from: UNiagaraRendererProperties > UNiagaraMergeable > UObject
// size 0x330, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraLightRendererProperties.h

UCLASS(EditInlineNew, MinimalAPI)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
    UPROPERTY(EditAnywhere) uint8 bUseInverseSquaredFalloff : 1;  // 0x0078, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bAffectsTranslucency : 1;  // 0x0078, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bAlphaScalesBrightness : 1;  // 0x0078, mask 0x04
    UPROPERTY(EditAnywhere) float RadiusScale;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere) float DefaultExponent;  // 0x0080, size 0x4
    UPROPERTY(EditAnywhere) FVector ColorAdd;  // 0x0084, size 0xC
    UPROPERTY(EditAnywhere) int32 RendererVisibility;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding LightRenderingEnabledBinding;  // 0x0098, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding LightExponentBinding;  // 0x00F0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding PositionBinding;  // 0x0148, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding ColorBinding;  // 0x01A0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RadiusBinding;  // 0x01F8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding VolumetricScatteringBinding;  // 0x0250, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x02A8, size 0x58

    // Not reflected: the engine's scripting cannot see these.
    FNiagaraDataSetAccessor<FVector> PositionDataSetAccessor;  // 0x0300
    FNiagaraDataSetAccessor<FLinearColor> ColorDataSetAccessor;  // 0x0308
    FNiagaraDataSetAccessor<float> RadiusDataSetAccessor;  // 0x0310
    FNiagaraDataSetAccessor<float> ExponentDataSetAccessor;  // 0x0318
    FNiagaraDataSetAccessor<float> ScatteringDataSetAccessor;  // 0x0320
    FNiagaraDataSetAccessor<FNiagaraBool> EnabledDataSetAccessor;  // 0x0328
    FNiagaraDataSetAccessor<int> RendererVisibilityTagAccessor;  // 0x032C
};
