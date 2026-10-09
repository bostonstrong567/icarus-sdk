// /Script/RigVM.RigVMChangeTypeOp
// size 0x10, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMChangeTypeOp : public FRigVMUnaryOp
{
public:
    ERigVMRegisterType Type;  // 0x0008, not reflected
    uint16 ElementSize;  // 0x000A, not reflected
    uint16 ElementCount;  // 0x000C, not reflected
    uint16 SliceCount;  // 0x000E, not reflected
};
