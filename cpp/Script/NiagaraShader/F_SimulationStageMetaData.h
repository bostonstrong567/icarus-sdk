// /Script/NiagaraShader.SimulationStageMetaData
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/NiagaraShader/Public/NiagaraScriptBase.h

USTRUCT()
struct FSimulationStageMetaData
{
    UPROPERTY() FName SimulationStageName;  // 0x0000, size 0x8
    UPROPERTY() FName IterationSource;  // 0x0008, size 0x8
    UPROPERTY() uint8 bSpawnOnly : 1;  // 0x0010, mask 0x01
    UPROPERTY() uint8 bWritesParticles : 1;  // 0x0010, mask 0x02
    UPROPERTY() uint8 bPartialParticleUpdate : 1;  // 0x0010, mask 0x04
    UPROPERTY() TArray<FName> OutputDestinations;  // 0x0018, size 0x10
    UPROPERTY() int32 MinStage;  // 0x0028, size 0x4
    UPROPERTY() int32 MaxStage;  // 0x002C, size 0x4
};
