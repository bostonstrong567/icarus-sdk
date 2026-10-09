// /Script/Niagara.NiagaraDataInterfaceArray
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArray.h

UCLASS(Abstract, EditInlineNew)
class UNiagaraDataInterfaceArray : public UNiagaraDataInterface
{
public:
    FWindowsRWLock ArrayRWGuard;  // 0x0038, not reflected
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 MaxElements;  // 0x0040, size 0x4
protected:
    TUniquePtr<INiagaraDataInterfaceArrayImpl,TDefaultDelete<INiagaraDataInterfaceArrayImpl> > Impl;  // 0x0048, not reflected
};
