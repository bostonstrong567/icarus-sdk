// /Script/Niagara.NiagaraEmitterScalabilitySettings
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h

USTRUCT()
struct FNiagaraEmitterScalabilitySettings
{
    UPROPERTY(EditAnywhere) FNiagaraPlatformSet Platforms;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere) uint8 bScaleSpawnCount : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) float SpawnCountScale;  // 0x0034, size 0x4
};
