// /Script/Niagara.NiagaraScalabilityState
// size 0x8, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FNiagaraScalabilityState
{
    UPROPERTY(EditAnywhere) float Significance;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) uint8 bCulled : 1;  // 0x0004, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bPreviousCulled : 1;  // 0x0004, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bCulledByDistance : 1;  // 0x0004, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bCulledByInstanceCount : 1;  // 0x0004, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bCulledByVisibility : 1;  // 0x0004, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bCulledByGlobalBudget : 1;  // 0x0004, mask 0x20
};
