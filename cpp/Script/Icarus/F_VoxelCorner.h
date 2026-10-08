// /Script/Icarus.VoxelCorner
// size 0x30, declared in Icarus/Source/Icarus/Objects/VoxelStructs.h

USTRUCT()
struct FVoxelCorner
{

    // Not reflected:
    FVector Location;  // 0x0000
    FIntVector Coord;  // 0x000C
    int32 NumIntersectingSpheres;  // 0x0018
    bool bStaticSet;  // 0x001C
    bool bMined;  // 0x001D
    bool bDirty;  // 0x001E
    TArray<FVoxelCorner *,TSizedDefaultAllocator<32> > SupportCorners;  // 0x0020
};
