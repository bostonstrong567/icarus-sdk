// /Script/Niagara.NiagaraDataInterfaceGrid2DCollectionReader
// Derives from: UNiagaraDataInterfaceGrid2D > UNiagaraDataInterfaceRWBase > UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x168, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceGrid2DCollectionReader.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2D
{
public:
    UPROPERTY(EditAnywhere) FString EmitterName;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere) FString DIName;  // 0x0108, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMap<unsigned __int64,FGrid2DCollectionReaderInstanceData_GameThread *,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned __int64,FGrid2DCollectionReaderInstanceData_GameThread *,0> > SystemInstancesToProxyData_GT;  // 0x0118, protected
};
