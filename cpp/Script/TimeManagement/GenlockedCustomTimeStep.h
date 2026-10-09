// /Script/TimeManagement.GenlockedCustomTimeStep
// Derives from: UFixedFrameRateCustomTimeStep > UEngineCustomTimeStep > UObject
// size 0x28, declared in Engine/Source/Runtime/TimeManagement/Public/GenlockedCustomTimeStep.h

UCLASS(Abstract)
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{

    // Virtual functions that start here:
    //   GetExpectedSyncCountDelta, GetLastSyncCountDelta, GetSyncRate, IsLastSyncDataValid, WaitForSync
};
