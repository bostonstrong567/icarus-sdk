// /Script/RigVM.RigVMRegisterOffset
// size 0x48, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMMemory.h

USTRUCT()
struct FRigVMRegisterOffset
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<int32> Segments;  // 0x0000, size 0x10
    UPROPERTY() ERigVMRegisterType Type;  // 0x0010, size 0x1
    UPROPERTY() FName CPPType;  // 0x0014, size 0x8
    UPROPERTY() UScriptStruct* ScriptStruct;  // 0x0020, size 0x8
    UPROPERTY() UScriptStruct* ParentScriptStruct;  // 0x0028, size 0x8
    UPROPERTY() int32 ArrayIndex;  // 0x0030, size 0x4
    UPROPERTY() uint16 ElementSize;  // 0x0034, size 0x2
    UPROPERTY() FString CachedSegmentPath;  // 0x0038, size 0x10
};
