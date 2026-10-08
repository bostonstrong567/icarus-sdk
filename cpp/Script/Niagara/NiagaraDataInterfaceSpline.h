// /Script/Niagara.NiagaraDataInterfaceSpline
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceSpline.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
    UPROPERTY(EditAnywhere) AActor* Source;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding SplineUserParameter;  // 0x0040, size 0x20
};
