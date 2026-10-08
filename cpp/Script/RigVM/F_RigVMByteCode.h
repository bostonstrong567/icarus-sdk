// /Script/RigVM.RigVMByteCode
// size 0x30, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMByteCode
{
    UPROPERTY() TArray<uint8> ByteCode;  // 0x0000, size 0x10
    UPROPERTY() int32 NumInstructions;  // 0x0010, size 0x4
    UPROPERTY() TArray<FRigVMByteCodeEntry> Entries;  // 0x0018, size 0x10

    // Not reflected:
    bool bByteCodeIsAligned;  // 0x0028
};
