// /Script/Niagara.NiagaraDeviceProfileStateEntry
// size 0x10, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h

USTRUCT()
struct FNiagaraDeviceProfileStateEntry
{
    UPROPERTY(EditAnywhere) FName ProfileName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) uint32 QualityLevelMask;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere) uint32 SetQualityLevelMask;  // 0x000C, size 0x4
};
