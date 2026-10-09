// /Script/TimeManagement.GenlockedFixedRateCustomTimeStep
// Derives from: UGenlockedCustomTimeStep > UFixedFrameRateCustomTimeStep > UEngineCustomTimeStep > UObject
// size 0x48, declared in Engine/Source/Runtime/TimeManagement/Public/GenlockedFixedRateCustomTimeStep.h

UCLASS(EditInlineNew)
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
    UPROPERTY(EditAnywhere) FFrameRate FrameRate;  // 0x0028, size 0x8
private:
    uint32 LastSyncCountDelta;  // 0x0030, not reflected
    double QuantizedCurrentTime;  // 0x0038, not reflected
    double LastIdleTime;  // 0x0040, not reflected
};
