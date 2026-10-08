// /Script/RigVM.RigVMOperand
// size 0x6, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMMemory.h

USTRUCT()
struct FRigVMOperand
{
    UPROPERTY() ERigVMMemoryType MemoryType;  // 0x0000, size 0x1
    UPROPERTY() uint16 RegisterIndex;  // 0x0002, size 0x2
    UPROPERTY() uint16 RegisterOffset;  // 0x0004, size 0x2
};
