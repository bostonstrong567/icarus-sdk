// /Script/Icarus.VoxelState
// size 0x18, declared in Icarus/Source/Icarus/Objects/VoxelResource.h

USTRUCT()
struct FVoxelState
{
    UPROPERTY() TArray<FMinedSphere> MinedSpheres;  // 0x0000, size 0x10
    UPROPERTY() uint8 bIsFullyMined : 1;  // 0x0010, mask 0x01
    UPROPERTY() uint8 RegenerationCount;  // 0x0011, size 0x1
};
