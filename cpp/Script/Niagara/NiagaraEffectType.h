// /Script/Niagara.NiagaraEffectType
// Derives from: UObject
// size 0x98, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h

UCLASS(Config=Niagara)
class UNiagaraEffectType : public UObject
{
public:
    UPROPERTY(EditAnywhere) ENiagaraScalabilityUpdateFrequency UpdateFrequency;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraCullReaction CullReaction;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, Instanced) UNiagaraSignificanceHandler* SignificanceHandler;  // 0x0030, size 0x8
    UPROPERTY(Deprecated) TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere) FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Instanced) UNiagaraBaselineController* PerformanceBaselineController;  // 0x0070, size 0x8
    UPROPERTY(Config) FNiagaraPerfBaselineStats PerfBaselineStats;  // 0x0078, size 0x10
    UPROPERTY(Config) FGuid PerfBaselineVersion;  // 0x0088, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    int32 NumInstances;  // 0x0068
    uint32 : 1 bNewSystemsSinceLastScalabilityUpdate;  // 0x006C
};
