// /Script/Niagara.NiagaraComponentSettings
// Derives from: UObject
// size 0x118, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentSettings.h

UCLASS(Config=Game)
class UNiagaraComponentSettings : public UObject
{
public:
    UPROPERTY(Config) TSet<FName> SuppressActivationList;  // 0x0028, size 0x50
    UPROPERTY(Config) TSet<FName> ForceAutoPooolingList;  // 0x0078, size 0x50
    UPROPERTY(Config) TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList;  // 0x00C8, size 0x50
};
