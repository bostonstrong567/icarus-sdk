// /Script/Niagara.NiagaraDataInterfaceCollisionQuery
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCollisionQuery.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:

    // Not reflected: the engine's scripting cannot see these.
    FNiagaraSystemInstance * SystemInstance;  // 0x0038
    UEnum * TraceChannelEnum;  // 0x0040, private
};
