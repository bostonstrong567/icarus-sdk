// /Script/Niagara.NiagaraInputConditionMetadata
// size 0x18, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraInputConditionMetadata
{
public:
    UPROPERTY(EditAnywhere) FName InputName;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere) TArray<FString> TargetValues;  // 0x0008, size 0x10
};
