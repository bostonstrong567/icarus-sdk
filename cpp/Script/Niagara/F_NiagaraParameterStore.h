// /Script/Niagara.NiagaraParameterStore
// size 0x78, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraParameterStore.h

USTRUCT()
struct FNiagaraParameterStore
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(Transient) UObject* Owner;  // 0x0008, size 0x8
    UPROPERTY() TArray<FNiagaraVariableWithOffset> SortedParameterOffsets;  // 0x0010, size 0x10
    UPROPERTY() TArray<uint8> ParameterData;  // 0x0020, size 0x10
    UPROPERTY() TArray<UNiagaraDataInterface*> DataInterfaces;  // 0x0030, size 0x10
    UPROPERTY() TArray<UObject*> UObjects;  // 0x0040, size 0x10
    TArray<TTuple<FNiagaraParameterStore *,FNiagaraParameterStoreBinding>,TSizedDefaultAllocator<32> > Bindings;  // 0x0050, not reflected
    TArray<FNiagaraParameterStore *,TSizedDefaultAllocator<32> > SourceStores;  // 0x0060, not reflected
    uint32 : 1 bInterfacesDirty;  // 0x0070, not reflected
    uint32 : 1 bParametersDirty;  // 0x0070, not reflected
    uint32 : 1 bUObjectsDirty;  // 0x0070, not reflected
    uint32 LayoutVersion;  // 0x0074, not reflected
};
