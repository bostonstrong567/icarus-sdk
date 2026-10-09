// /Script/Niagara.NiagaraDataInterfaceCollisionQuery
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceCollisionQuery.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
    FNiagaraSystemInstance * SystemInstance;  // 0x0038, not reflected
private:
    UEnum * TraceChannelEnum;  // 0x0040, not reflected
};
