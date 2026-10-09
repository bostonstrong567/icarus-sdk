// /Game/BP/Behaviours/Actionable/Scanner/BP_ActionableBehaviour_RadiationTracker.BP_ActionableBehaviour_RadiationTracker_C
// Derives from: UBP_ActionableBehaviour_Scanner_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x3AC, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_RadiationTracker_C : public UBP_ActionableBehaviour_Scanner_C
{
public:
    UFUNCTION(BlueprintCallable) void FilterActors(const TArray<AActor*>& Actors, TArray<AActor*>& Filtered);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void UpdateNearbyActors();
};
