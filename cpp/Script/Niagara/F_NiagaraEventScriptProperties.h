// /Script/Niagara.NiagaraEventScriptProperties
// size 0x58, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h

USTRUCT()
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
    UPROPERTY(EditAnywhere) EScriptExecutionMode ExecutionMode;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) uint32 SpawnNumber;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) uint32 MaxEventsPerFrame;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) FGuid SourceEmitterID;  // 0x0034, size 0x10
    UPROPERTY(EditAnywhere) FName SourceEventName;  // 0x0044, size 0x8
    UPROPERTY(EditAnywhere) bool bRandomSpawnNumber;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere) uint32 MinSpawnNumber;  // 0x0050, size 0x4
};
