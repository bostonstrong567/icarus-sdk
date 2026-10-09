// /Script/Niagara.NiagaraEventGeneratorProperties
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h

USTRUCT()
struct FNiagaraEventGeneratorProperties
{
public:
    UPROPERTY(EditAnywhere) int32 MaxEventsPerFrame;  // 0x0000, size 0x4
    UPROPERTY() FName ID;  // 0x0004, size 0x8
    UPROPERTY() FNiagaraDataSetCompiledData DataSetCompiledData;  // 0x0010, size 0x40
};
