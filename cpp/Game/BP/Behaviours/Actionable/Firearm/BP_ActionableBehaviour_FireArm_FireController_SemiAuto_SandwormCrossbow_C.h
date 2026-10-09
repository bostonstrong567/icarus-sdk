// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_SemiAuto_SandwormCrossbow.BP_ActionableBehaviour_FireArm_FireController_SemiAuto_SandwormCrossbow_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xAE0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_SandwormCrossbow_C : public UBP_ActionableBehaviour_FireArm_FireController_SemiAuto_C
{
public:
    UFUNCTION(BlueprintCallable) void OnProjectileLanded(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xA4
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void SpawnProjectile(FProjectileFireParams ProjectileParams);  // parameters 0x10
};
