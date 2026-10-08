// /Script/Niagara.NiagaraDataInterfaceColorCurve
// Derives from: UNiagaraDataInterfaceCurveBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x270, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceColorCurve.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
    UPROPERTY(EditAnywhere) FRichCurve RedCurve;  // 0x0070, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve GreenCurve;  // 0x00F0, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve BlueCurve;  // 0x0170, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve AlphaCurve;  // 0x01F0, size 0x80
};
