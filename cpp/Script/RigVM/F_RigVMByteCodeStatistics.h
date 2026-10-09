// /Script/RigVM.RigVMByteCodeStatistics
// size 0x8, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMStatistics.h

USTRUCT()
struct FRigVMByteCodeStatistics
{
public:
    UPROPERTY(EditAnywhere) uint32 InstructionCount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) uint32 DataBytes;  // 0x0004, size 0x4
};
