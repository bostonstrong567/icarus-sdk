// /Script/RigVM.RigVMExecuteOp
// size 0x4, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMExecuteOp : public FRigVMBaseOp
{
public:
    uint16 FunctionIndex;  // 0x0002, not reflected
};
