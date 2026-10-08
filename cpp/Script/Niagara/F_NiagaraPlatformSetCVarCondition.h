// /Script/Niagara.NiagaraPlatformSetCVarCondition
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h

USTRUCT()
struct FNiagaraPlatformSetCVarCondition
{
    UPROPERTY(EditAnywhere) FName CVarName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) bool Value;  // 0x0008, size 0x1
    UPROPERTY(EditAnywhere) int32 MinInt;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxInt;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere) float MinFloat;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere) float MaxFloat;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseMinInt : 1;  // 0x001C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bUseMaxInt : 1;  // 0x001C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bUseMinFloat : 1;  // 0x001C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bUseMaxFloat : 1;  // 0x001C, mask 0x08

    // Not reflected:
    IConsoleVariable * CachedCVar;  // 0x0020
};
