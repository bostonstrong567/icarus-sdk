// /Script/Icarus.DelayedTreeRestore
// size 0x20, declared in Icarus/Source/Icarus/Systems/FLOD/FLODLibrary.h

USTRUCT()
struct FDelayedTreeRestore
{
    UPROPERTY() UObject* WorldContextObject;  // 0x0018, size 0x8

    // Not reflected:
    FTimerHandle TimerHandle;  // 0x0000
    FVector Location;  // 0x0008
    float Radius;  // 0x0014
};
