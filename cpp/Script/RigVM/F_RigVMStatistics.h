// /Script/RigVM.RigVMStatistics
// size 0x2C, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMStatistics.h

USTRUCT()
struct FRigVMStatistics
{
public:
    UPROPERTY(EditAnywhere) uint32 BytesForCDO;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) uint32 BytesPerInstance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) FRigVMMemoryStatistics LiteralMemory;  // 0x0008, size 0xC
    UPROPERTY(EditAnywhere) FRigVMMemoryStatistics WorkMemory;  // 0x0014, size 0xC
    UPROPERTY(EditAnywhere) uint32 BytesForCaching;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere) FRigVMByteCodeStatistics ByteCode;  // 0x0024, size 0x8
};
