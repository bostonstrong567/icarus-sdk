// /Script/Niagara.NiagaraEventReceiverProperties
// size 0x18, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h

USTRUCT()
struct FNiagaraEventReceiverProperties
{
    UPROPERTY(EditAnywhere) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FName SourceEventGenerator;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) FName SourceEmitter;  // 0x0010, size 0x8
};
