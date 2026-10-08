// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload.BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C > UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE7C, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload_C : public UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0E70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ReloadCancelBlendOutTime;  // 0x0E78, size 0x4

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void AbortReloadAnimations();
    UFUNCTION(BlueprintCallable) void CalculateNumberOfRoundsToLoad(int32& NumRounds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAbortReload(bool& CanAbort);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_SingleRoundReload(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAmmoCapacity();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReloadAnimPlayRate(UAnimMontage* Montage);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void HandleReloadAnimNotify(FString NotifyName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnAbortReloadRequested();
    UFUNCTION(BlueprintCallable) void ReloadSingleRound();
    UFUNCTION(BlueprintCallable) void ServerFinishReload();
    UFUNCTION(BlueprintCallable) void SetReloadMontageNextSections(FName SectionNameToChange, FName NextSection);  // parameters 0x10
};
