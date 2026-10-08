// /Script/Niagara.NiagaraDataInterfaceCurve
// Derives from: UNiagaraDataInterfaceCurveBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0xF0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCurve.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
    UPROPERTY(EditAnywhere) FRichCurve Curve;  // 0x0070, size 0x80
};
