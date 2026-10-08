// /Script/Icarus.MinedSphere
// size 0x14, declared in Icarus/Source/Icarus/Objects/VoxelResource.h

USTRUCT()
struct FMinedSphere
{
    UPROPERTY() FVector Center;  // 0x0000, size 0xC
    UPROPERTY() float Radius;  // 0x000C, size 0x4

    // Not reflected:
    bool bHandled;  // 0x0010
};
