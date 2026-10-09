// /Script/Niagara.NiagaraVMExecutableData
// size 0xF0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraScript.h

USTRUCT()
struct FNiagaraVMExecutableData
{
public:
    UPROPERTY() TArray<uint8> ByteCode;  // 0x0000, size 0x10
    UPROPERTY(Transient) TArray<uint8> OptimizedByteCode;  // 0x0010, size 0x10
    UPROPERTY() int32 NumTempRegisters;  // 0x0020, size 0x4
    UPROPERTY() int32 NumUserPtrs;  // 0x0024, size 0x4
    UPROPERTY() TArray<FNiagaraCompilerTag> CompileTags;  // 0x0028, size 0x10
    UPROPERTY() TArray<uint8> ScriptLiterals;  // 0x0038, size 0x10
    UPROPERTY() TArray<FNiagaraVariable> Attributes;  // 0x0048, size 0x10
    UPROPERTY() FNiagaraScriptDataUsageInfo DataUsage;  // 0x0058, size 0x1
    UPROPERTY() TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;  // 0x0060, size 0x10
    UPROPERTY() TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;  // 0x0070, size 0x10
    TArray<TDelegate<void __cdecl(FVectorVMContext &),FDefaultDelegateUserPolicy>,TSizedDefaultAllocator<32> > CalledVMExternalFunctionBindings;  // 0x0080, not reflected
    UPROPERTY() TArray<FNiagaraDataSetID> ReadDataSets;  // 0x0090, size 0x10
    UPROPERTY() TArray<FNiagaraDataSetProperties> WriteDataSets;  // 0x00A0, size 0x10
    UPROPERTY() TArray<FNiagaraStatScope> StatScopes;  // 0x00B0, size 0x10
    UPROPERTY() TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo;  // 0x00C0, size 0x10
    UPROPERTY() ENiagaraScriptCompileStatus LastCompileStatus;  // 0x00D0, size 0x1
    UPROPERTY() TArray<FSimulationStageMetaData> SimulationStageMetaData;  // 0x00D8, size 0x10
    UPROPERTY() uint8 bReadsSignificanceIndex : 1;  // 0x00E8, mask 0x01
    UPROPERTY() uint8 bNeedsGPUContextInit : 1;  // 0x00E8, mask 0x02
};
