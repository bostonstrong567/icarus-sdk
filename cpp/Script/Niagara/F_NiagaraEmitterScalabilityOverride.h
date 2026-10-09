// /Script/Niagara.NiagaraEmitterScalabilityOverride
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h

USTRUCT()
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
public:
    UPROPERTY(EditAnywhere) uint8 bOverrideSpawnCountScale : 1;  // 0x0038, mask 0x01
};
