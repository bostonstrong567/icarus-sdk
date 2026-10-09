// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_FillableAmmo.BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xAE0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C : public UBP_ActionableBehaviour_FireArm_FireController_Base_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<CanFireReturnType> CanFire();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DoFire();
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsAiming(bool& IsAiming);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ProcessResource();
    UFUNCTION(BlueprintCallable) void TriggerFire();
};
