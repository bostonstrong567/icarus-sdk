// /Script/Niagara.NiagaraDataInterfaceVectorCurve
// Derives from: UNiagaraDataInterfaceCurveBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x1F0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceVectorCurve.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
    UPROPERTY(EditAnywhere) FRichCurve XCurve;  // 0x0070, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve YCurve;  // 0x00F0, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve ZCurve;  // 0x0170, size 0x80
};
