// /Script/Icarus.DelayedTreeRestore
// size 0x20, declared in Icarus/Source/Icarus/Systems/FLOD/FLODLibrary.h

USTRUCT()
struct FDelayedTreeRestore
{
public:
    FTimerHandle TimerHandle;  // 0x0000, not reflected
    FVector Location;  // 0x0008, not reflected
    float Radius;  // 0x0014, not reflected
    UPROPERTY() UObject* WorldContextObject;  // 0x0018, size 0x8
};
