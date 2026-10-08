// /Script/NiagaraCore.NiagaraDataInterfaceBase
// Derives from: UNiagaraMergeable > UObject
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/NiagaraCore/Public/NiagaraDataInterfaceBase.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraDataInterfaceBase : public UNiagaraMergeable
{
public:

    // Virtual functions that start here:
    //   BindParameters, CreateComputeParameters, GetComputeParametersTypeDesc, HasInternalAttributeReads
    //   SetParameters, UnsetParameters
};
