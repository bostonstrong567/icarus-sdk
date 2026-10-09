// /Script/Niagara.NiagaraParameterCollection
// Derives from: UObject
// size 0x60, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraParameterCollection.h

UCLASS()
class UNiagaraParameterCollection : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FName Namespace;  // 0x0028, size 0x8
    UPROPERTY() TArray<FNiagaraVariable> Parameters;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) UMaterialParameterCollection* SourceMaterialCollection;  // 0x0040, size 0x8
    UPROPERTY() UNiagaraParameterCollectionInstance* DefaultInstance;  // 0x0048, size 0x8
    UPROPERTY() FGuid CompileId;  // 0x0050, size 0x10
};
