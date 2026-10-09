// /Script/Icarus.OutOfBoundsArray
// size 0x10, declared in Icarus/Source/Icarus/Subsystems/World/OutOfBoundsSubsystem.h

USTRUCT()
struct FOutOfBoundsArray
{
public:
    UPROPERTY() TArray<AActor*> OverlappedVolumes;  // 0x0000, size 0x10
};
