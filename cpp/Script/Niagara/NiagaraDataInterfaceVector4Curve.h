// /Script/Niagara.NiagaraDataInterfaceVector4Curve
// Derives from: UNiagaraDataInterfaceCurveBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x270, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceVector4Curve.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
    UPROPERTY(EditAnywhere) FRichCurve XCurve;  // 0x0070, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve YCurve;  // 0x00F0, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve ZCurve;  // 0x0170, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve WCurve;  // 0x01F0, size 0x80
};
