// /Script/RigVM.RigVMMemoryContainer
// size 0xA0, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMMemory.h

USTRUCT()
struct FRigVMMemoryContainer
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() bool bUseNameMap;  // 0x0000, size 0x1
    UPROPERTY() ERigVMMemoryType MemoryType;  // 0x0001, size 0x1
    UPROPERTY() TArray<FRigVMRegister> Registers;  // 0x0008, size 0x10
    UPROPERTY() TArray<FRigVMRegisterOffset> RegisterOffsets;  // 0x0018, size 0x10
    UPROPERTY(Transient) TArray<uint8> Data;  // 0x0028, size 0x10
    UPROPERTY(Transient) TArray<UScriptStruct*> ScriptStructs;  // 0x0038, size 0x10
    UPROPERTY(Transient) TMap<FName, int32> NameMap;  // 0x0048, size 0x50
    UPROPERTY(Transient) bool bEncounteredErrorDuringLoad;  // 0x0098, size 0x1
};
