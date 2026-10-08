// /Script/RigVM.RigVM
// Derives from: UObject
// size 0x2F8, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVM.h

UCLASS()
class URigVM : public UObject
{
public:
    UPROPERTY() FRigVMMemoryContainer WorkMemoryStorage;  // 0x0028, size 0xA0
    UPROPERTY() FRigVMMemoryContainer LiteralMemoryStorage;  // 0x00D0, size 0xA0
    UPROPERTY() FRigVMByteCode ByteCodeStorage;  // 0x0178, size 0x30
    UPROPERTY(Transient) FRigVMInstructionArray Instructions;  // 0x01B0, size 0x10
    UPROPERTY(Transient) FRigVMExecuteContext Context;  // 0x01C0, size 0x58
    UPROPERTY() TArray<FName> FunctionNamesStorage;  // 0x0218, size 0x10
    UPROPERTY() TArray<FRigVMParameter> Parameters;  // 0x0248, size 0x10
    UPROPERTY() TMap<FName, int32> ParametersNameMap;  // 0x0258, size 0x50
    UPROPERTY(Transient) URigVM* DeferredVMToCopy;  // 0x02F0, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FRigVMMemoryContainer * WorkMemoryPtr;  // 0x00C8
    FRigVMMemoryContainer * LiteralMemoryPtr;  // 0x0170
    FRigVMByteCode * ByteCodePtr;  // 0x01A8
    TArray<FName,TSizedDefaultAllocator<32> > * FunctionNamesPtr;  // 0x0228, private
    TArray<void (__cdecl*)(FRigVMExecuteContext &,FRigVMFixedArray<FRigVMMemoryHandle>),TSizedDefaultAllocator<32> > FunctionsStorage;  // 0x0230, private
    TArray<void (__cdecl*)(FRigVMExecuteContext &,FRigVMFixedArray<FRigVMMemoryHandle>),TSizedDefaultAllocator<32> > * FunctionsPtr;  // 0x0240, private
    TArray<unsigned int,TSizedDefaultAllocator<32> > FirstHandleForInstruction;  // 0x02A8, private
    TArray<FRigVMMemoryHandle,TSizedDefaultAllocator<32> > CachedMemoryHandles;  // 0x02B8, private
    TArray<FRigVMMemoryContainer *,TSizedDefaultAllocator<32> > CachedMemory;  // 0x02C8, private
    TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32> > ExternalVariables;  // 0x02D8, private
    int32 ExecutingThreadId;  // 0x02E8, private

    UFUNCTION() int32 AddRigVMFunction(UScriptStruct* InRigVMStruct, const FName& InMethodName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) bool Execute(const FName& InEntryName);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetParameterArraySize(const FName& InParameterName) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool GetParameterValueBool(const FName& InParameterName, int32 InArrayIndex);  // parameters 0xD
    UFUNCTION(BlueprintCallable) float GetParameterValueFloat(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) int32 GetParameterValueInt(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) FName GetParameterValueName(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) FQuat GetParameterValueQuat(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable) FString GetParameterValueString(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x20
    UFUNCTION(BlueprintCallable) FTransform GetParameterValueTransform(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x40
    UFUNCTION(BlueprintCallable) FVector GetParameterValueVector(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FVector2D GetParameterValueVector2D(const FName& InParameterName, int32 InArrayIndex);  // parameters 0x14
    UFUNCTION() FString GetRigVMFunctionName(int32 InFunctionIndex) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetParameterValueBool(const FName& InParameterName, bool InValue, int32 InArrayIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetParameterValueFloat(const FName& InParameterName, float InValue, int32 InArrayIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetParameterValueInt(const FName& InParameterName, int32 InValue, int32 InArrayIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetParameterValueName(const FName& InParameterName, const FName& InValue, int32 InArrayIndex);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetParameterValueQuat(const FName& InParameterName, const FQuat& InValue, int32 InArrayIndex);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void SetParameterValueString(const FName& InParameterName, FString InValue, int32 InArrayIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetParameterValueTransform(const FName& InParameterName, const FTransform& InValue, int32 InArrayIndex);  // parameters 0x44
    UFUNCTION(BlueprintCallable) void SetParameterValueVector(const FName& InParameterName, const FVector& InValue, int32 InArrayIndex);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetParameterValueVector2D(const FName& InParameterName, const FVector2D& InValue, int32 InArrayIndex);  // parameters 0x14
};
