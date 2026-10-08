// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LavaHunterFlamethrower.BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LavaHunterFlamethrower_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xAE4, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_LavaHunterFlamethrower_C : public UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultRadius;  // 0x0AE0, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<CanFireReturnType> CanFire();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConsumeFillableBioFuel();
    UFUNCTION(BlueprintCallable) void DoFire();
    UFUNCTION(BlueprintCallable) void Fire_Burst();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetExplosiveAttributes(float& Radius);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProcessResource();
};
