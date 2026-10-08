// /Script/TimeManagement.TimeSynchronizationSource
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/TimeManagement/Public/TimeSynchronizationSource.h

UCLASS(Abstract)
class UTimeSynchronizationSource : public UObject
{
public:
    UPROPERTY(EditAnywhere) bool bUseForSynchronization;  // 0x0028, size 0x1
    UPROPERTY(EditAnywhere) int32 FrameOffset;  // 0x002C, size 0x4

    // Virtual functions that start here:
    //   Close, GetDisplayName, GetFrameRate, GetNewestSampleTime, GetOldestSampleTime, IsReady, Open, Start
};
