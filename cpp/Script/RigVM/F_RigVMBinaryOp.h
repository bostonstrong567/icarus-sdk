// /Script/RigVM.RigVMBinaryOp
// size 0xE, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMBinaryOp : public FRigVMBaseOp
{
public:
    FRigVMOperand ArgA;  // 0x0002, not reflected
    FRigVMOperand ArgB;  // 0x0008, not reflected
};
