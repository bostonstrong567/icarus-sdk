// /Script/AIModule.BTService
// Derives from: UBTAuxiliaryNode > UBTNode > UObject
// size 0x70, declared in Engine/Source/Runtime/AIModule/Classes/BehaviorTree/BTService.h

UCLASS(Abstract)
class UBTService : public UBTAuxiliaryNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) float Interval;  // 0x0060, size 0x4
    UPROPERTY(EditAnywhere) float RandomDeviation;  // 0x0064, size 0x4
    uint32 : 1 bNotifyOnSearch;  // 0x0068, not reflected
    UPROPERTY(EditAnywhere) uint8 bCallTickOnSearchStart : 1;  // 0x0068, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bRestartTimerOnEachActivation : 1;  // 0x0068, mask 0x02

    // Virtual functions that start here:
    //   GetStaticServiceDescription, OnSearchStart, ScheduleNextTick
};
