// /Script/Icarus.ServerShutdownTimer
// Derives from: AActor > UObject
// size 0x240, declared in Icarus/Source/Icarus/DedicatedServer/ServerShutdownTimer.h

UCLASS(Config=Engine)
class AServerShutdownTimer : public AActor
{
public:
    UPROPERTY() FOnTimerElapsed OnTimerElapsed;  // 0x0220, size 0x10
private:
    float ElapsedTime;  // 0x0230, not reflected
    float TotalTime;  // 0x0234, not reflected
    bool bActive;  // 0x0238, not reflected
};
