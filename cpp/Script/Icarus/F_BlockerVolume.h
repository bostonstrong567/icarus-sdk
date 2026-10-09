// /Script/Icarus.BlockerVolume
// size 0x40, declared in Icarus/Source/Icarus/World/BuildBlocker/BuildBlockerSubsystem.h

USTRUCT()
struct FBlockerVolume
{
public:
    FTransform Transform;  // 0x0000, not reflected
    FVector Extent;  // 0x0030, not reflected
};
