// /Script/RigVM.RigVMInstruction
// size 0x10, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMInstruction
{
    UPROPERTY() uint64 ByteCodeIndex;  // 0x0000, size 0x8
    UPROPERTY() ERigVMOpCode OpCode;  // 0x0008, size 0x1
    UPROPERTY() uint8 OperandAlignment;  // 0x0009, size 0x1
};
