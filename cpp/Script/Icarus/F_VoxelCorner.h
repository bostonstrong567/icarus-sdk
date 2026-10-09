// /Script/Icarus.VoxelCorner
// size 0x30, declared in Icarus/Source/Icarus/Objects/VoxelStructs.h

USTRUCT()
struct FVoxelCorner
{
public:
    FVector Location;  // 0x0000, not reflected
    FIntVector Coord;  // 0x000C, not reflected
    int32 NumIntersectingSpheres;  // 0x0018, not reflected
    bool bStaticSet;  // 0x001C, not reflected
    bool bMined;  // 0x001D, not reflected
    bool bDirty;  // 0x001E, not reflected
    TArray<FVoxelCorner *,TSizedDefaultAllocator<32> > SupportCorners;  // 0x0020, not reflected
};
