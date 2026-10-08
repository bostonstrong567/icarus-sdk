// /Script/RigVM.RigVMBinaryOp
// size 0xE, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMBinaryOp : public FRigVMBaseOp
{

    // Not reflected:
    FRigVMOperand ArgA;  // 0x0002
    FRigVMOperand ArgB;  // 0x0008
};
