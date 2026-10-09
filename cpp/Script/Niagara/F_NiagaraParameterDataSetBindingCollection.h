// /Script/Niagara.NiagaraParameterDataSetBindingCollection
// size 0x20, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

USTRUCT()
struct FNiagaraParameterDataSetBindingCollection
{
public:
    UPROPERTY() TArray<FNiagaraParameterDataSetBinding> FloatOffsets;  // 0x0000, size 0x10
    UPROPERTY() TArray<FNiagaraParameterDataSetBinding> Int32Offsets;  // 0x0010, size 0x10
};
