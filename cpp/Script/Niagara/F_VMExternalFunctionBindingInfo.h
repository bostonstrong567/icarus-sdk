// /Script/Niagara.VMExternalFunctionBindingInfo
// size 0x38, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraCommon.h

USTRUCT()
struct FVMExternalFunctionBindingInfo
{
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() FName OwnerName;  // 0x0008, size 0x8
    UPROPERTY() TArray<bool> InputParamLocations;  // 0x0010, size 0x10
    UPROPERTY() int32 NumOutputs;  // 0x0020, size 0x4
    UPROPERTY() TArray<FVMFunctionSpecifier> FunctionSpecifiers;  // 0x0028, size 0x10
};
