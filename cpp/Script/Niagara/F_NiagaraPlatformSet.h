// /Script/Niagara.NiagaraPlatformSet
// size 0x30, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraPlatformSet.h

USTRUCT()
struct FNiagaraPlatformSet
{
public:
    UPROPERTY(EditAnywhere) int32 QualityLevelMask;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNiagaraPlatformSetCVarCondition> CVarConditions;  // 0x0018, size 0x10
private:
    uint32 LastBuiltFrame;  // 0x0028, not reflected
    bool bEnabledForCurrentProfileAndEffectQuality;  // 0x002C, not reflected
};
