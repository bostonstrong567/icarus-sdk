// /Script/Niagara.NiagaraSystemScalabilityOverride
// size 0x50, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h

USTRUCT()
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
    UPROPERTY(EditAnywhere) uint8 bOverrideDistanceSettings : 1;  // 0x0048, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bOverrideInstanceCountSettings : 1;  // 0x0048, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bOverridePerSystemInstanceCountSettings : 1;  // 0x0048, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bOverrideTimeSinceRendererSettings : 1;  // 0x0048, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bOverrideGlobalBudgetCullingSettings : 1;  // 0x0048, mask 0x10
};
