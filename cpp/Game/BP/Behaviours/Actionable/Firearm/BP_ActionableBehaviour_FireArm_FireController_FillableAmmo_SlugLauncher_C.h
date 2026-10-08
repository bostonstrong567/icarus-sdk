// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_SlugLauncher.BP_ActionableBehaviour_FireArm_FireController_FillableAmmo_SlugLauncher_C
// Derives from: UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C > UBP_ActionableBehaviour_FireArm_FireController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xAE0, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_SlugLauncher_C : public UBP_ActionableBehaviour_FireArm_FireController_FillableAmmo_C, public IAmmoDisplayInterface_C
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) TEnumAsByte<CanFireReturnType> CanFire();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetLaunchForce();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ProcessResource();
};
