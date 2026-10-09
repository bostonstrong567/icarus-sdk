// /Script/Niagara.NiagaraEmitter
// Derives from: UObject
// size 0x2A0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEmitter.h

UCLASS(MinimalAPI)
class UNiagaraEmitter : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) bool bLocalSpace;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) bool bDeterminism;  // 0x0029, size 0x1
    UPROPERTY(EditAnywhere) int32 RandomSeed;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere) EParticleAllocationMode AllocationMode;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) int32 PreAllocationCount;  // 0x0034, size 0x4
    UPROPERTY() FNiagaraEmitterScriptProperties UpdateScriptProps;  // 0x0038, size 0x28
    UPROPERTY() FNiagaraEmitterScriptProperties SpawnScriptProps;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere) ENiagaraSimTarget SimTarget;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) FBox FixedBounds;  // 0x008C, size 0x1C
    UPROPERTY(Deprecated) int32 MinDetailLevel;  // 0x00A8, size 0x4
    UPROPERTY(Deprecated) int32 MaxDetailLevel;  // 0x00AC, size 0x4
    UPROPERTY(Deprecated) FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides;  // 0x00B0, size 0x14
    UPROPERTY(EditAnywhere) FNiagaraPlatformSet Platforms;  // 0x00C8, size 0x30
    UPROPERTY(EditAnywhere) FNiagaraEmitterScalabilityOverrides ScalabilityOverrides;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere) uint8 bInterpolatedSpawning : 1;  // 0x0108, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bFixedBounds : 1;  // 0x0108, mask 0x02
    UPROPERTY(Deprecated) uint8 bUseMinDetailLevel : 1;  // 0x0108, mask 0x04
    UPROPERTY(Deprecated) uint8 bUseMaxDetailLevel : 1;  // 0x0108, mask 0x08
    UPROPERTY(Deprecated) uint8 bOverrideGlobalSpawnCountScale : 1;  // 0x0108, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bRequiresPersistentIDs : 1;  // 0x0108, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bCombineEventSpawn : 1;  // 0x0108, mask 0x40
    UPROPERTY(EditAnywhere) float MaxDeltaTimePerTick;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere) uint32 DefaultShaderStageIndex;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere) uint32 MaxUpdateIterations;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere) TSet<uint32> SpawnStages;  // 0x0118, size 0x50
    UPROPERTY(EditAnywhere) uint8 bSimulationStagesEnabled : 1;  // 0x0168, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bDeprecatedShaderStagesEnabled : 1;  // 0x0168, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bLimitDeltaTime : 1;  // 0x0168, mask 0x04
protected:
    bool bFullyLoaded;  // 0x016C, not reflected
    UPROPERTY() FString UniqueEmitterName;  // 0x0170, size 0x10
    UPROPERTY() TArray<UNiagaraRendererProperties*> RendererProperties;  // 0x0180, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps;  // 0x0190, size 0x10
    UPROPERTY() TArray<UNiagaraSimulationStageBase*> SimulationStages;  // 0x01A0, size 0x10
    UPROPERTY() UNiagaraScript* GPUComputeScript;  // 0x01B0, size 0x8
    UPROPERTY() TArray<FName> SharedEventGeneratorIds;  // 0x01B8, size 0x10
    uint32 : 1 bRequiresViewUniformBuffer;  // 0x01C8, not reflected
    uint32 MaxInstanceCount;  // 0x01CC, not reflected
    TArray<TUniquePtr<FNiagaraBoundsCalculator,TDefaultDelete<FNiagaraBoundsCalculator> >,TInlineAllocator<1,TSizedDefaultAllocator<32> > > BoundsCalculators;  // 0x01D0, not reflected
    MemoryRuntimeEstimation RuntimeEstimation;  // 0x01E8, not reflected
    FWindowsCriticalSection EstimationCriticalSection;  // 0x0240, not reflected
    FNiagaraEmitterScalabilitySettings CurrentScalabilitySettings;  // 0x0268, not reflected
};
