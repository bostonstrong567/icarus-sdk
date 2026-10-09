// /Script/Niagara.NiagaraSystemScalabilitySettings
// size 0x48, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraEffectType.h

USTRUCT()
struct FNiagaraSystemScalabilitySettings
{
public:
    UPROPERTY(EditAnywhere) FNiagaraPlatformSet Platforms;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere) uint8 bCullByDistance : 1;  // 0x0030, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bCullMaxInstanceCount : 1;  // 0x0030, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bCullPerSystemMaxInstanceCount : 1;  // 0x0030, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bCullByMaxTimeWithoutRender : 1;  // 0x0030, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bCullByGlobalBudget : 1;  // 0x0030, mask 0x10
    UPROPERTY(EditAnywhere) float MaxDistance;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxInstances;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxSystemInstances;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) float MaxTimeWithoutRender;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float MaxGlobalBudgetUsage;  // 0x0044, size 0x4
};
