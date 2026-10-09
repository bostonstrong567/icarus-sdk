// /Script/Niagara.NiagaraEmitterScriptProperties
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h

USTRUCT()
struct FNiagaraEmitterScriptProperties
{
public:
    UPROPERTY() UNiagaraScript* Script;  // 0x0000, size 0x8
    UPROPERTY() TArray<FNiagaraEventReceiverProperties> EventReceivers;  // 0x0008, size 0x10
    UPROPERTY() TArray<FNiagaraEventGeneratorProperties> EventGenerators;  // 0x0018, size 0x10
};
