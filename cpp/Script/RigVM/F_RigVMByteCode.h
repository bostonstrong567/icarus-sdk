// /Script/RigVM.RigVMByteCode
// size 0x30, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMByteCode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TArray<uint8> ByteCode;  // 0x0000, size 0x10
    UPROPERTY() int32 NumInstructions;  // 0x0010, size 0x4
    UPROPERTY() TArray<FRigVMByteCodeEntry> Entries;  // 0x0018, size 0x10
    bool bByteCodeIsAligned;  // 0x0028, not reflected
};
