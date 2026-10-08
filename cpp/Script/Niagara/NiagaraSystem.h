// /Script/Niagara.NiagaraSystem
// Derives from: UFXSystemAsset > UObject
// size 0x498, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraSystem.h

UCLASS()
class UNiagaraSystem : public UFXSystemAsset
{
public:
    UPROPERTY(EditAnywhere) bool bDumpDebugSystemInfo;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) bool bDumpDebugEmitterInfo;  // 0x0031, size 0x1
    UPROPERTY(EditAnywhere) bool bRequireCurrentFrameData;  // 0x0033, size 0x1
    UPROPERTY(EditAnywhere) uint8 bFixedBounds : 1;  // 0x0034, mask 0x01
    UPROPERTY(EditAnywhere) UNiagaraEffectType* EffectType;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere) bool bOverrideScalabilitySettings;  // 0x0040, size 0x1
    UPROPERTY(Deprecated) TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides;  // 0x0058, size 0x10
    UPROPERTY() TArray<FNiagaraEmitterHandle> EmitterHandles;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere) TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;  // 0x0078, size 0x10
    UPROPERTY() UNiagaraScript* SystemSpawnScript;  // 0x0088, size 0x8
    UPROPERTY() UNiagaraScript* SystemUpdateScript;  // 0x0090, size 0x8
    UPROPERTY() FNiagaraSystemCompiledData SystemCompiledData;  // 0x00A8, size 0x218
    UPROPERTY() FNiagaraUserRedirectionParameterStore ExposedParameters;  // 0x02C0, size 0xC8
    UPROPERTY(EditAnywhere) FBox FixedBounds;  // 0x0388, size 0x1C
    UPROPERTY(EditAnywhere) bool bAutoDeactivate;  // 0x03A4, size 0x1
    UPROPERTY(EditAnywhere) float WarmupTime;  // 0x03A8, size 0x4
    UPROPERTY(EditAnywhere) int32 WarmupTickCount;  // 0x03AC, size 0x4
    UPROPERTY(EditAnywhere) float WarmupTickDelta;  // 0x03B0, size 0x4
    UPROPERTY() bool bHasSystemScriptDIsWithPerInstanceData;  // 0x03B4, size 0x1
    UPROPERTY() bool bNeedsGPUContextInitForDataInterfaces;  // 0x03B5, size 0x1
    UPROPERTY() TArray<FName> UserDINamesReadInSystemScripts;  // 0x03B8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bFullyLoaded;  // 0x0032
    TArray<TSharedRef<FNiagaraEmitterCompiledData const ,0>,TSizedDefaultAllocator<32> > EmitterCompiledData;  // 0x0098, protected
    TArray<FNiagaraEmitterExecutionIndex,TSizedDefaultAllocator<32> > EmitterExecutionOrder;  // 0x03C8, protected
    TArray<FNiagaraRendererExecutionIndex,TSizedDefaultAllocator<32> > RendererPostTickOrder;  // 0x03D8, protected
    TArray<FNiagaraRendererExecutionIndex,TSizedDefaultAllocator<32> > RendererCompletionOrder;  // 0x03E8, protected
    TArray<int,TSizedDefaultAllocator<32> > RendererDrawOrder;  // 0x03F8, protected
    uint32 : 1 bIsValidCached;  // 0x0408, protected
    uint32 : 1 bIsReadyToRunCached;  // 0x0408, protected
    TOptional<float> MaxDeltaTime;  // 0x040C, protected
    FNiagaraDataSetAccessor<enum ENiagaraExecutionState> SystemExecutionStateAccessor;  // 0x0414, protected
    TArray<FNiagaraDataSetAccessor<enum ENiagaraExecutionState>,TSizedDefaultAllocator<32> > EmitterExecutionStateAccessors;  // 0x0418, protected
    TArray<TArray<FNiagaraDataSetAccessor<FNiagaraSpawnInfo>,TSizedDefaultAllocator<32> >,TSizedDefaultAllocator<32> > EmitterSpawnInfoAccessors;  // 0x0428, protected
    FNiagaraSystemScalabilitySettings CurrentScalabilitySettings;  // 0x0438, protected
    FString CrashReporterTag;  // 0x0480, protected
    uint32 : 1 bHasDIsWithPostSimulateTick;  // 0x0490, protected
    uint32 : 1 bHasAnyGPUEmitters;  // 0x0490, protected
    uint32 : 1 bNeedsSortedSignificanceCull;  // 0x0490, protected
    int32 ActiveInstances;  // 0x0494, protected
};
