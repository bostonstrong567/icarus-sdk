// /Script/Niagara.NiagaraDataSetCompiledData
// size 0x40, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataSet.h

USTRUCT()
struct FNiagaraDataSetCompiledData
{
public:
    UPROPERTY() TArray<FNiagaraVariable> Variables;  // 0x0000, size 0x10
    UPROPERTY() TArray<FNiagaraVariableLayoutInfo> VariableLayouts;  // 0x0010, size 0x10
    UPROPERTY() FNiagaraDataSetID ID;  // 0x0020, size 0xC
    UPROPERTY() uint32 TotalFloatComponents;  // 0x002C, size 0x4
    UPROPERTY() uint32 TotalInt32Components;  // 0x0030, size 0x4
    UPROPERTY() uint32 TotalHalfComponents;  // 0x0034, size 0x4
    UPROPERTY() uint8 bRequiresPersistentIDs : 1;  // 0x0038, mask 0x01
    UPROPERTY() ENiagaraSimTarget SimTarget;  // 0x003C, size 0x1
};
