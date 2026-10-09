// /Script/RigVM.RigVMJumpIfOp
// size 0x10, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMJumpIfOp : public FRigVMUnaryOp
{
public:
    int32 InstructionIndex;  // 0x0008, not reflected
    bool Condition;  // 0x000C, not reflected
};
