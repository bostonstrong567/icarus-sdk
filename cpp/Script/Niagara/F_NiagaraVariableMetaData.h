// /Script/Niagara.NiagaraVariableMetaData
// size 0xE0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraTypes.h

USTRUCT()
struct FNiagaraVariableMetaData
{
    UPROPERTY(EditAnywhere) FText Description;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere) FText CategoryName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere) bool bAdvancedDisplay;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) int32 EditorSortPriority;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) bool bInlineEditConditionToggle;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere) FNiagaraInputConditionMetadata EditCondition;  // 0x0040, size 0x18
    UPROPERTY(EditAnywhere) FNiagaraInputConditionMetadata VisibleCondition;  // 0x0058, size 0x18
    UPROPERTY(EditAnywhere) TMap<FName, FString> PropertyMetaData;  // 0x0070, size 0x50
    UPROPERTY(EditAnywhere) FName ParentAttribute;  // 0x00C0, size 0x8
    UPROPERTY() FGuid VariableGuid;  // 0x00C8, size 0x10
    UPROPERTY(Deprecated) bool bIsStaticSwitch;  // 0x00D8, size 0x1
    UPROPERTY(Deprecated) int32 StaticSwitchDefaultValue;  // 0x00DC, size 0x4
};
