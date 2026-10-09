// /Script/RigVM.RigVMJumpOp
// size 0x8, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMJumpOp : public FRigVMBaseOp
{
public:
    int32 InstructionIndex;  // 0x0004, not reflected
};
