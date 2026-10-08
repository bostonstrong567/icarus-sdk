// /Script/Icarus.TargetRangeTrigger
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D0, declared in Icarus/Source/Icarus/Systems/TargetRange/TargetRangeTrigger.h

UCLASS(Config=Engine)
class ATargetRangeTrigger : public AIcarusActor
{
public:
    UPROPERTY(BlueprintAssignable) FTriggerRange OnTriggerRange;  // 0x02C0, size 0x10

    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_TriggerRange();

    // Virtual functions that start here:
    //   OnServer_TriggerRange_Implementation
};
