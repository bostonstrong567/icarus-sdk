// /Script/RigVM.RigVMByteCodeEntry
// size 0xC, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMByteCode.h

USTRUCT()
struct FRigVMByteCodeEntry
{
public:
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() int32 InstructionIndex;  // 0x0008, size 0x4
};
