// /Game/BP/Behaviours/Actionable/Firearm/BP_ActionableBehaviour_Firearm_AmmoController_Base.BP_ActionableBehaviour_Firearm_AmmoController_Base_C
// Derives from: UBP_ActionableBehaviour_Firearm_Base_C > UBP_ActionableBehaviour_Base_C > UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xE60, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_AmmoController_Base_C : public UBP_ActionableBehaviour_Firearm_Base_C, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x09D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ReloadTimer;  // 0x09E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LocalCurrentAmmo;  // 0x09E8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Reloading;  // 0x09EC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RadialOpen;  // 0x09ED, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnReloadPressed OnReloadPressed;  // 0x09F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FNotifyReloadStart NotifyReloadStart;  // 0x0A00, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FNotifyReloadEnd NotifyReloadEnd;  // 0x0A10, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AbortReloadRequested;  // 0x0A20, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AwaitingAutoReload;  // 0x0A21, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UContextMenuWidget* CurrentContextMenu;  // 0x0A28, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName QuickbarInventoryActionId;  // 0x0A30, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BackpackInventoryActionId;  // 0x0A38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ScaleReloadAnimMontageSectionName;  // 0x0A40, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 AmmoSlotIndex;  // 0x0A48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData LastAmmoData;  // 0x0A50, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData ClientAmmoType;  // 0x0C40, size 0x1F0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OwnerReady;  // 0x0E30, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InventoryReady;  // 0x0E31, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CachedAmmoCount;  // 0x0E34, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> CachedAmmoIcon;  // 0x0E38, size 0x28

    UFUNCTION(BlueprintCallable) void AutoReload();
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanAbortReload(bool& CanAbort);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanReload(bool& CanReload);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckAmmo(bool bInitial);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckReload();
    UFUNCTION(BlueprintCallable) void ClientCheckAmmoTypeChanged();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_ForceReload();
    UFUNCTION(BlueprintCallable) void Client_OnItemsUpdated();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_OnReloadEnd(int32 NewAmmoCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ConsumeAmmo(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ContextMenuAmmoSelected(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ContextMenuUnloadSelected(FName Id, int32 Payload);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm_AmmoController_Base(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindAmmoTypeToSwapTo(bool& FoundType, FItemData& AmmoType);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void FindItemAndMoveToAmmoContainerFromInventory(int32 Amount, FItemData ItemToFind, UInventory* SourceInventory, UInventory* DestinationInventory, int32& RemainingAmount);  // parameters 0x20C
    UFUNCTION(BlueprintCallable) void FindValidAmmoData(FItemData AmmoType, bool& Found, FItemData& ItemType);  // parameters 0x3E8
    UFUNCTION(BlueprintCallable) void FindValidAmmoDataByStatic(FItemsStaticRowHandle AmmoType, bool& Found, FItemData& ItemType);  // parameters 0x210
    UFUNCTION(BlueprintCallable) void Get_Ammo_Warning_Desc(FText& OutText);  // parameters 0x18, named "Get Ammo Warning Desc"
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAmmoCapacity();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetAutoReloadTime(float& FireRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetCurrentAmmoCount(int32& CurrentAmmoCount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoItem(bool& SlotValid, FItemData& AmmoItemRef);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void GetFiredProjectileInfo(bool& HasBallisticData, FBallisticData& BallisticData, int32& ProjectileCount, FVector2D& ProjectileAccuracy);  // parameters 0x204
    UFUNCTION(BlueprintCallable) void GetInventoryAmmoCount(FItemData& ItemType, int32& Count);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) UInventory* GetInventoryFromName(FName InventoryName);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetNameForInventory(UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetProjectileMeshOverride(TSoftObjectPtr<UStreamableRenderAsset>& OverrideMesh);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReloadAnimPlayRate(UAnimMontage* Montage);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReloadTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWeaponInventoryContainer(UInventory*& Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void HandleReloadAnimNotify(FString NotifyName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void HandleShotRollback();
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasAmmo(bool& HasAmmo);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HasAnyReserveAmmo(bool& HasAnyReserve);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsAwaitingAutoReload(bool& waitingReload);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsReloading(bool& Reloading);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LateSetup();
    UFUNCTION(BlueprintCallable) void LoadAndPlayReloadAnims();
    UFUNCTION(BlueprintCallable) void Local_PlayReload();
    UFUNCTION(BlueprintCallable, NetMulticast) void MC_PlayReload();
    UFUNCTION(BlueprintCallable) void NotifyReloadEnd__DelegateSignature();
    UFUNCTION(BlueprintCallable) void NotifyReloadStart__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnAbortReloadRequested();
    UFUNCTION(BlueprintImplementableEvent) void OnActionInsufficientDurability(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnAmmoTypeChanged();
    UFUNCTION(BlueprintCallable) void OnAmmoUnloaded();
    UFUNCTION(BlueprintCallable) void OnInventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_3BD9368B4FF435E753B9509E9B0FBB43(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnReloadEnd();
    UFUNCTION(BlueprintCallable) void OnReloadPressed__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnReloadStart();
    UFUNCTION(BlueprintCallable) void OnRep_Reloading();
    UFUNCTION(BlueprintCallable) void OnShotRollback();
    UFUNCTION(BlueprintCallable) void OnSprintUpdated(bool Sprinting);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void OnWeaponFired();
    UFUNCTION(BlueprintCallable) void OnWeaponInventoryAvailable();
    UFUNCTION(BlueprintCallable) void OnWeaponInventoryUpdated();
    UFUNCTION(BlueprintCallable) void Open_Ammo_Select_Menu(bool AsRadial, bool& Opened);  // parameters 0x2, named "Open Ammo Select Menu"
    UFUNCTION(BlueprintCallable) void OwningPlayerInventoryUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayReload();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ServerFinishReload();
    UFUNCTION(BlueprintCallable) void Server_CheckInitComplete();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_ClientSetReady();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RequestNewAmmoType(FItemData NewAmmoType);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_TryAbortReload();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_TryReload();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_TryReloadWithTimeStamp(float RequestTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UnloadAmmoType();
    UFUNCTION(BlueprintCallable) void SetCurrentAmmoCount(int32 CurrentAmmo);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCurrentAmmoType(FItemData AmmoType);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void Setup(AIcarusActor* ForOwner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SprintToReload();
    UFUNCTION(BlueprintCallable) void TransferAmmoContainerToInventory();
    UFUNCTION(BlueprintCallable) void TransferItemToAmmoContainer(FItemData ItemType, int32 Amount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) void TryAbortReload();
    UFUNCTION(BlueprintCallable) void TryReload(bool Force, bool ForceIfReloading);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateCachedAmmoInfo();
    UFUNCTION(BlueprintCallable) void UpdateLocalAmmo();
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudio();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool WantsAutoReload();  // parameters 0x1
};
