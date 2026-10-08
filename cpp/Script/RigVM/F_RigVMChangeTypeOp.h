// /Script/RigVM.RigVMChangeTypeOp
// size 0x10, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{

    // Not reflected:
    ERigVMRegisterType Type;  // 0x0008
    uint16 ElementSize;  // 0x000A
    uint16 ElementCount;  // 0x000C
    uint16 SliceCount;  // 0x000E
};
