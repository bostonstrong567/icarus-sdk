// /Script/Niagara.NiagaraDataInterfaceVector2DCurve
// Derives from: UNiagaraDataInterfaceCurveBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x170, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceVector2DCurve.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
    UPROPERTY(EditAnywhere) FRichCurve XCurve;  // 0x0070, size 0x80
    UPROPERTY(EditAnywhere) FRichCurve YCurve;  // 0x00F0, size 0x80
};
