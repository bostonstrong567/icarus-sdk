// /Script/RigVM.RigVMMemoryStatistics
// size 0xC, declared in Engine/Source/Runtime/RigVM/Public/RigVMCore/RigVMStatistics.h

USTRUCT()
struct FRigVMMemoryStatistics
{
    UPROPERTY(EditAnywhere) uint32 RegisterCount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) uint32 DataBytes;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) uint32 TotalBytes;  // 0x0008, size 0x4
};
