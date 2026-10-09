// /Script/Niagara.NiagaraDebugHUDSettingsData
// size 0xE0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraDebuggerCommon.h

USTRUCT()
struct FNiagaraDebugHUDSettingsData
{
public:
    UPROPERTY(EditAnywhere) bool bEnabled;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere) bool bValidateSystemSimulationDataBuffers;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere) bool bValidateParticleDataBuffers;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere) bool bOverviewEnabled;  // 0x0003, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraDebugHudFont OverviewFont;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FVector2D OverviewLocation;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, Config) FString ActorFilter;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bComponentFilterEnabled;  // 0x0020, size 0x1
    UPROPERTY(EditAnywhere, Config) FString ComponentFilter;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bSystemFilterEnabled;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, Config) FString SystemFilter;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bEmitterFilterEnabled;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere, Config) FString EmitterFilter;  // 0x0058, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bActorFilterEnabled;  // 0x0068, size 0x1
    UPROPERTY(EditAnywhere, Config) ENiagaraDebugHudVerbosity SystemDebugVerbosity;  // 0x006C, size 0x4
    UPROPERTY(EditAnywhere, Config) ENiagaraDebugHudVerbosity SystemEmitterVerbosity;  // 0x0070, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bSystemShowBounds;  // 0x0074, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bSystemShowActiveOnlyInWorld;  // 0x0075, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bShowSystemVariables;  // 0x0076, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FNiagaraDebugHUDVariable> SystemVariables;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere, Config) FNiagaraDebugHudTextOptions SystemTextOptions;  // 0x0088, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bShowParticleVariables;  // 0x0098, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bEnableGpuParticleReadback;  // 0x0099, size 0x1
    UPROPERTY(EditAnywhere, Config) TArray<FNiagaraDebugHUDVariable> ParticlesVariables;  // 0x00A0, size 0x10
    UPROPERTY(EditAnywhere, Config) FNiagaraDebugHudTextOptions ParticleTextOptions;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere, Config) bool bShowParticlesVariablesWithSystem;  // 0x00C0, size 0x1
    UPROPERTY(EditAnywhere, Config) bool bUseMaxParticlesToDisplay;  // 0x00C1, size 0x1
    UPROPERTY(EditAnywhere, Config) int32 MaxParticlesToDisplay;  // 0x00C4, size 0x4
    UPROPERTY() ENiagaraDebugPlaybackMode PlaybackMode;  // 0x00C8, size 0x1
    UPROPERTY() bool bPlaybackRateEnabled;  // 0x00C9, size 0x1
    UPROPERTY(Config) float PlaybackRate;  // 0x00CC, size 0x4
    UPROPERTY(Config) bool bLoopTimeEnabled;  // 0x00D0, size 0x1
    UPROPERTY(Config) float LoopTime;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere, Config) bool bShowGlobalBudgetInfo;  // 0x00D8, size 0x1
};
