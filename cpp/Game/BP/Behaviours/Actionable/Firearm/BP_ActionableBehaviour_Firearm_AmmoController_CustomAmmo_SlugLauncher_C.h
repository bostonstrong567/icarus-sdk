// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_SlugLauncher.BP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_SlugLauncher_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C > UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE78, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_SlugLauncher_C : public UBP_ActionableBehaviour_Firearm_AmmoController_CustomAmmo_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanReload(bool& CanReload);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckAmmo(bool bInitial);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ConsumeAmmo(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetFiredProjectileInfo(bool& HasBallisticData, FBallisticData& BallisticData, int32& ProjectileCount, FVector2D& ProjectileAccuracy);  // parameters 0x204
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReloadAnimPlayRate(UAnimMontage* Montage);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReloadTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAmmo(bool& HasAmmo);  // parameters 0x1
};
