// /Script/Niagara.NiagaraSystemScalabilityOverrides
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h

USTRUCT()
struct FNiagaraSystemScalabilityOverrides
{
public:
    UPROPERTY(EditAnywhere) TArray<FNiagaraSystemScalabilityOverride> Overrides;  // 0x0000, size 0x10
};
