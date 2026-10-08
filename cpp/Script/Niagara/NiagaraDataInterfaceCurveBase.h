// /Script/Niagara.NiagaraDataInterfaceCurveBase
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x70, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCurveBase.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
    UPROPERTY() TArray<float> ShaderLUT;  // 0x0038, size 0x10
    UPROPERTY() float LUTMinTime;  // 0x0048, size 0x4
    UPROPERTY() float LUTMaxTime;  // 0x004C, size 0x4
    UPROPERTY() float LUTInvTimeRange;  // 0x0050, size 0x4
    UPROPERTY() float LUTNumSamplesMinusOne;  // 0x0054, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseLUT : 1;  // 0x0058, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bExposeCurve : 1;  // 0x0058, mask 0x02
    UPROPERTY(EditAnywhere) FName ExposedName;  // 0x005C, size 0x8
    UPROPERTY() UTexture2D* ExposedTexture;  // 0x0068, size 0x8

    // Virtual functions that start here:
    //   BuildLUT, CompareLUTS, GetCurveData, GetCurveNumElems, UpdateTimeRanges
};
