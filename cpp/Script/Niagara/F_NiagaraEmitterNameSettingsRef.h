// /Script/Niagara.NiagaraEmitterNameSettingsRef
// size 0x18, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraComponentSettings.h

USTRUCT()
struct FNiagaraEmitterNameSettingsRef
{
public:
    UPROPERTY(EditAnywhere) FName SystemName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) FString EmitterName;  // 0x0008, size 0x10
};
