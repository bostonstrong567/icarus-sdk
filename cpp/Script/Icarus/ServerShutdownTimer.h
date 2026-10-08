// /Script/Icarus.ServerShutdownTimer
// Derives from: AActor > UObject
// size 0x240, declared in Icarus/Source/Icarus/DedicatedServer/ServerShutdownTimer.h

UCLASS(Config=Engine)
class AServerShutdownTimer : public AActor
{
public:
    UPROPERTY() FOnTimerElapsed OnTimerElapsed;  // 0x0220, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    float ElapsedTime;  // 0x0230, private
    float TotalTime;  // 0x0234, private
    bool bActive;  // 0x0238, private
};
