// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_WithAbort.BP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE60, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_WithAbort_C : public UBP_ActionableBehaviour_Firearm_AmmoController_Base_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAbortReload(bool& CanAbort);  // parameters 0x1
};
