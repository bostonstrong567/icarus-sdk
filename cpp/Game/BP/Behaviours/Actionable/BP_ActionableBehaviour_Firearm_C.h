// /Game/BP/Behaviours/Actionable/BP_ActionableBehaviour_Firearm.BP_ActionableBehaviour_Firearm_C
// Derives from: UActionableBehaviour > UTraitBehaviour > UActorComponent > UObject
// size 0xA8C, a blueprint class, blueprint

UCLASS(Transient, Config=Engine)
class UBP_ActionableBehaviour_Firearm_C : public UActionableBehaviour, public IAmmoDisplayInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* OwningActor;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusPlayerCharacterSurvival_C* OwningPlayer;  // 0x02E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LocalCurrentAmmo;  // 0x02E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFirearmData FirearmData;  // 0x02F0, size 0x690
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanFireSemiAuto;  // 0x0980, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Reloading;  // 0x0981, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle ReloadTimer;  // 0x0988, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Firing;  // 0x0990, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle FireCheckHandle;  // 0x0998, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FireTime;  // 0x09A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AimAlpha;  // 0x09A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RadialOpen;  // 0x09A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ReloadAmount;  // 0x09AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ChargePower;  // 0x09B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastChargePower;  // 0x09B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FullChargePowerTimeStamp;  // 0x09B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LocalChargeCancel;  // 0x09BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMatineeCameraShake* CameraShake;  // 0x09C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UObject*> LoadedAssets;  // 0x09C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AssetsLoaded;  // 0x09D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle LocalAmmoType;  // 0x09DC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusItem* PreviewItem;  // 0x09F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FireAnimPlaying;  // 0x0A00, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProjectileFired ProjectileFired;  // 0x0A08, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<UFMODAudioComponent*, FFirearmSoundData> PersistentAudioComponents;  // 0x0A18, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StaminaUsed;  // 0x0A68, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName QuickbarInventoryActionId;  // 0x0A6C, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BackpackInventoryActionId;  // 0x0A74, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UContextMenuWidget* CurrentContextMenu;  // 0x0A80, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 HoldModifierUID;  // 0x0A88, size 0x4

    UFUNCTION(BlueprintCallable) void AIStimulus();
    UFUNCTION(BlueprintCallable) void AddAmmoToInventory();
    UFUNCTION(BlueprintCallable) void AddHoldModifier();
    UFUNCTION(BlueprintCallable) FRotator ApplySpread(FRotator BaseAim);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void AssociatedItemUpdated();
    UFUNCTION(BlueprintCallable) void AttachPreviewItem();
    UFUNCTION(BlueprintCallable) void CaclulateReloadAmount(int32& ReloadAmount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanFire(bool& CanFire);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CancelCharging();
    UFUNCTION(BlueprintCallable) void ChangeFireMode();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ChangeFireMode_Server();
    UFUNCTION(BlueprintCallable) void CheckCurrentProjectile();
    UFUNCTION(BlueprintCallable) void CheckExistingAmmoType();
    UFUNCTION(BlueprintCallable) void CheckFire(bool FiringReleased);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckFireAutomatic();
    UFUNCTION(BlueprintCallable) void CheckReload();
    UFUNCTION(BlueprintCallable) void CleanupPreviewItem();
    UFUNCTION(BlueprintCallable) void ClientTryFire();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_ForceReload();
    UFUNCTION(BlueprintCallable) void ContextMenuAmmoSelected(FName ActionId, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ContextMenuUnloadSelected(FName ActionId, int32 Payload);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void DynamicDataUpdated();
    UFUNCTION() void ExecuteUbergraph_BP_ActionableBehaviour_Firearm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidAmmoData(FItemsStaticRowHandle AmmoType, FItemsStaticRowHandle& ProjectileItem, bool& Found);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void FireProjectile(FTransform SpawnTransform, bool ConsumeAmmo);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void FiredReload();
    UFUNCTION(BlueprintCallable) void Get_Number_Of_Projeciles_To_Fire(int32& Number_of_Projectiles);  // parameters 0x4, named "Get Number Of Projeciles To Fire"
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetADSTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetAmmoCapacity();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAmmorWarningDesc(FText& OutText);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetAnimPlayRate(UAnimMontage* Anim, bool Reload);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetAssociatedInventory(UInventory*& Inventory);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetChargeTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCurrentAmmo();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentAmmoInfo(TSoftObjectPtr<UTexture2D>& AmmoIcon, FText& CurrentAmmo, FText& TotalAmmo, FText& AmmoTextOverride, bool& HideReload, bool& IsFluid, FIcarusResourcesRowHandle& Resource, float& Percent);  // parameters 0x90
    UFUNCTION(BlueprintCallable, BlueprintPure) FItemsStaticRowHandle GetCurrentAmmoType();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) EFireMode GetCurrentFireMode();  // parameters 0x1
    UFUNCTION(BlueprintCallable) FRotator GetFireRotation();  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetFirerate();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetInventoryAmmoCount(int32& TotalAmmo);  // parameters 0x4
    UFUNCTION(BlueprintCallable) UInventory* GetInventoryFromName(FName InventoryName);  // parameters 0x10
    UFUNCTION(BlueprintCallable) float GetLaunchForce();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetNameForInventory(UInventory* Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetReloadTimeMultiplier();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetSelectedAmmoType(FItemData& AmmoItem, bool& ValidAmmoItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetStat(FStatsEnum Stat, bool WarnIfZero);  // parameters 0x18
    UFUNCTION(BlueprintCallable) int32 GetStatAdjustedDurability(int32 DurabilityLost);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsADS(bool& ADS);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void IsCharging(bool& Charging);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsToggleADS();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LocalOrServer(bool& Local, bool& Server);  // parameters 0x2
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTICAST_SemiAuto();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PostFireProjectile();
    UFUNCTION(BlueprintImplementableEvent) void OnActionInsufficientDurability(EActionableTrigger ActionTrigger);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnBlendOut_6BBBC036452FB2EC7092AF8B3265C6A9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_8C8C44024A5631C2A5012C85CDB54F1C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_D352811F43772AF9DF8FC3A758F63965(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_DCCE210F42A6F31E62C64DB21D2A8273(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_F1A7CE62495190E6CE5CD09C5C08D4CF(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_6BBBC036452FB2EC7092AF8B3265C6A9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_8C8C44024A5631C2A5012C85CDB54F1C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_D352811F43772AF9DF8FC3A758F63965(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_DCCE210F42A6F31E62C64DB21D2A8273(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_F1A7CE62495190E6CE5CD09C5C08D4CF(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_6BBBC036452FB2EC7092AF8B3265C6A9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_8C8C44024A5631C2A5012C85CDB54F1C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_D352811F43772AF9DF8FC3A758F63965(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_DCCE210F42A6F31E62C64DB21D2A8273(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_F1A7CE62495190E6CE5CD09C5C08D4CF(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInventoryItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnLoaded_2B8B2B624CE5F97DAE6892B7BB36C5DD(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6DCFAB9D43B094CB3CF9C7811370CA6E(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6DCFAB9D43B094CB3CF9C7816E1FA122(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6DCFAB9D43B094CB3CF9C7818D49C043(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6DCFAB9D43B094CB3CF9C781ADBDE313(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_6DCFAB9D43B094CB3CF9C781FA2FC40D(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnLoaded_F09D9ADE44F875B5BE81EF89D157E20B(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_6BBBC036452FB2EC7092AF8B3265C6A9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_8C8C44024A5631C2A5012C85CDB54F1C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_D352811F43772AF9DF8FC3A758F63965(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_DCCE210F42A6F31E62C64DB21D2A8273(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_F1A7CE62495190E6CE5CD09C5C08D4CF(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_6BBBC036452FB2EC7092AF8B3265C6A9(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_8C8C44024A5631C2A5012C85CDB54F1C(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_D352811F43772AF9DF8FC3A758F63965(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_DCCE210F42A6F31E62C64DB21D2A8273(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_F1A7CE62495190E6CE5CD09C5C08D4CF(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnRep_Firing();
    UFUNCTION(BlueprintCallable) void OnRep_Reloading();
    UFUNCTION(BlueprintImplementableEvent) void OnTraitAnimNotify(const FAnimNotifyEvent& Notify, AActor* AnimInstancePawn);  // parameters 0xC0
    UFUNCTION(BlueprintCallable) void OpenAmmoContextMenu(bool AsRadial, bool& Opened);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OwnerFireEffects();
    UFUNCTION(BlueprintImplementableEvent) void PerformAction(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void PlayFireAudio();
    UFUNCTION(BlueprintCallable) void PlayFireVisuals();
    UFUNCTION(BlueprintCallable) void PlayFirearmSound(FFirearmSoundData FirearmSoundData);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void PlayNoFireAudio();
    UFUNCTION(BlueprintCallable) void PlayReloadVisuals();
    UFUNCTION(BlueprintCallable) void PlayReloadVisualsNew();
    UFUNCTION(BlueprintCallable) void PlayUseWhenBrokenSound();
    UFUNCTION(BlueprintCallable) void ProcessInput(AActor* InvokingActor, EActionableEventType OnActionType, EActionableTrigger ActionTrigger);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void ProjectileFired__DelegateSignature(float Power);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReloadAmmo();
    UFUNCTION(BlueprintCallable) void ReloadTimerComplete();
    UFUNCTION(BlueprintCallable) void RemoveAmmoFromFirearm();
    UFUNCTION(BlueprintCallable) void RemoveAmmoFromInventory();
    UFUNCTION(BlueprintCallable) void RemoveHoldModifier();
    UFUNCTION(BlueprintCallable) void ResetReload(bool Completed);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ResetSemiAuto();
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_SemiAuto();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RequestFireProjectile(FTransform SpawnTransform, bool ConsumeAmmo);  // parameters 0x31
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_RequestNewAmmoType(FItemsStaticRowHandle NewAmmoType);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UnloadAmmoType();
    UFUNCTION(BlueprintCallable) void SetCurrentAmmo(int32 CurrentAmmo);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCurrentAmmoType(FItemsStaticRowHandle FireMode);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetCurrentFireMode(EFireMode FireMode);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetPreviewItem(AIcarusItem* NewPreviewItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Setup(AIcarusActor* Owner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupFirearmData();
    UFUNCTION(BlueprintCallable) void SetupOwner(AIcarusActor* Owner);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupPlayer();
    UFUNCTION(BlueprintCallable) void StartPersistentAudio();
    UFUNCTION(BlueprintCallable) void StopPersistentAudio();
    UFUNCTION(BlueprintCallable) void TickCharge();
    UFUNCTION(BlueprintCallable) void TryReload(bool Force, bool ForceIfReloading);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateADS(bool NewADS);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateAudioPerspective();
    UFUNCTION(BlueprintCallable) void UpdateLocalAmmo();
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudioCharge();
    UFUNCTION(BlueprintCallable) void UpdatePersistentAudioReloading();
    UFUNCTION(BlueprintCallable) void UpdatePostProcess();
    UFUNCTION(BlueprintCallable) void UpdatePostProcessing();
    UFUNCTION(BlueprintCallable) void UpdatePreviewItem(bool Show);  // parameters 0x1
};
