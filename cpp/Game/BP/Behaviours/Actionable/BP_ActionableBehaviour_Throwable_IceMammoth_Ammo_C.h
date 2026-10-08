// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Throwable_IceMammoth_Ammo.BP_ActionableBehaviour_Throwable_IceMammoth_Ammo_C
// Derives from: UBP_ActionableBehaviour_Throwable_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0x491, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Throwable_IceMammoth_Ammo_C : public UBP_ActionableBehaviour_Throwable_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle AmmoItemData;  // 0x0470, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* NoAmmoSound;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasShownNoAmmoMessage;  // 0x0490, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanThrow(bool& CanThrow);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Consume_Ice_Ammo();  // named "Consume Ice Ammo"
    UFUNCTION(BlueprintCallable) void DoThrow(FTransform SpawnTransform, float Power);  // parameters 0x34
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Throwable_IceMammoth_Ammo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void HasIceAmmo(bool& GotIce);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayNoAmmoSound();
    UFUNCTION(BlueprintCallable) void Setup(AActor* OwningActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldConsumeActionInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xB
    UFUNCTION(BlueprintCallable) void ShowNoAmmoWarning();
    UFUNCTION(BlueprintCallable) void WantsBowMode(bool& bWantsBowMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void WantsShowCrosshair(bool& bShowCrosshair);  // parameters 0x1
};
