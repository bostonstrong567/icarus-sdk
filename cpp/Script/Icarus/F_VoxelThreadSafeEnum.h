// /Script/Icarus.VoxelThreadSafeEnum
// size 0x18, declared in Icarus/Source/Icarus/Objects/VoxelThreadSafeEnum.h

USTRUCT()
struct FVoxelThreadSafeEnum
{

    // Not reflected:
    FThreadStateChanged OnThreadStateChanged;  // 0x0000
    volatile int32 Flags;  // 0x0010
};
