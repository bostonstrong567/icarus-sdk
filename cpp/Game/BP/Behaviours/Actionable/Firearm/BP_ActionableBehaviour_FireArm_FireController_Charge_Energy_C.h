// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_Charge_Energy.BP_ActionableBehaviour_FireArm_FireController_Charge_Energy_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_Charge_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xB1D, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_Charge_Energy_C : public UBP_ActionableBehaviour_FireArm_FireController_Charge_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<CanFireReturnType> CanFire();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConsumeZapEnergy();
    UFUNCTION(BlueprintCallable) void EndFire();
};
