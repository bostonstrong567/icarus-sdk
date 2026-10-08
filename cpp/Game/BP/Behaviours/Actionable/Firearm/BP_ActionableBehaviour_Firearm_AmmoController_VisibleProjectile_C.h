// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile.BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C
// Derives from: UBP_ActionableBehaviour_Firearm_AmmoController_Base_C > UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE70, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile_C : public UBP_ActionableBehaviour_Firearm_AmmoController_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0E60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* PreviewItem;  // 0x0E68, size 0x8

    UFUNCTION(BlueprintCallable) void AttachPreviewItem();
    UFUNCTION(BlueprintCallable) void CleanupPreviewItem();
    UFUNCTION(BlueprintCallable) void ConsumeAmmo(int32 Amount);  // parameters 0x4
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_VisibleProjectile(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAmmoCapacity();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnAmmoTypeChanged();
    UFUNCTION(BlueprintCallable) void OnAmmoUnloaded();
    UFUNCTION(BlueprintCallable) void OnReloadStart();
    UFUNCTION(BlueprintCallable) void OnWeaponFired();
    UFUNCTION(BlueprintCallable) void OnWeaponInventoryUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RefundAmmo();
    UFUNCTION(BlueprintCallable) void SetPreviewItem(AIcarusItem* NewPreviewItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetPreviewItemVisible(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupPlayer();
    UFUNCTION(BlueprintCallable) void UpdatePreviewItem(bool Show);  // parameters 0x1
};
