// /Script/Icarus.IcarusPlayerCharacter
// Derives from: AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xB90, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacter.h

UCLASS(Config=Game)
class AIcarusPlayerCharacter : public AIcarusCharacter
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NextAllowedInteractTime;  // 0x0748, size 0x4
    UPROPERTY(BlueprintAssignable) FFocusedItemUpdated OnFocusedItemUpdated;  // 0x0754, size 0x1
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) UInventoryComponent* InventoryComponent;  // 0x0758, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EquipmentInventory;  // 0x0760, size 0x8
    UPROPERTY(EditAnywhere) ASeatBase* AttachedToSeat;  // 0x0768, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LookAtBedActor;  // 0x0770, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SleepEffectivenessCurve;  // 0x0778, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SleepDurationCurve;  // 0x0780, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TWeakObjectPtr<APawn> PossessedPhotoCamera;  // 0x0788, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool BlockInputActions;  // 0x0790, size 0x1
    UPROPERTY(Replicated, BlueprintReadOnly) FRotator ReplicatedControlRotation;  // 0x0794, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDisableActiveInteractable;  // 0x07A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FHitResult CachedActiveInteractableHit;  // 0x07A4, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FHitResult CachedActiveHighlightableHit;  // 0x082C, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FHitResult CachedContextImageHit;  // 0x08B4, size 0x88
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FInteractableHitLookup CachedInteractableHitLookup;  // 0x0940, size 0x40
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractionTraceDistance;  // 0x0980, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterStartingStatsRowHandle CharacterSetup;  // 0x0984, size 0x18
    UPROPERTY(BlueprintReadOnly) TMap<int32, FArmourComponentData> EquippedArmourData;  // 0x09A0, size 0x50
    UPROPERTY(BlueprintAssignable) FArmourEquipmentUpdatedSignature OnArmourEquipmentUpdated;  // 0x09F0, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsMale;  // 0x0A00, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) FFocusedItemData FocusedItemData;  // 0x0A08, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UAudioContextPlayerComponent* AudioContext;  // 0x0A18, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPlayerVocalisationComponent* VocalisationComponent;  // 0x0A20, size 0x8
    UPROPERTY(Instanced) UPlayerModifierAudioComponent* ModifierAudioComponent;  // 0x0A28, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UPlayerFeedbackAudioComponent* PlayerFeedbackAudioComponent;  // 0x0A30, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FCharacterVoicesRowHandle Voice;  // 0x0A38, size 0x18
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 RespawnCount;  // 0x0A50, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool HasGrantedLoadout;  // 0x0A54, size 0x1
    UPROPERTY(BlueprintAssignable) FPlayerCrouchUpdatedSignature PlayerCrouchUpdated;  // 0x0A58, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) ADeployable* CurrentlyInteractingWithDeployable;  // 0x0A68, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UIcarusMapIconComponent* PlayerMapIcon;  // 0x0A70, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName EyeSocketName;  // 0x0A78, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) TArray<FItemsStaticRowHandle> CosmeticArmourOverrides;  // 0x0A80, size 0x10
    UPROPERTY(BlueprintReadWrite) bool bPlayerUIHidden;  // 0x0B88, size 0x1
private:
    float LastCachedInteractableHitTime;  // 0x074C, not reflected
    float MinTimeBetweenReplicatedHitUpdates;  // 0x0750, not reflected
    FStreamableManager StreamableManager;  // 0x0A90, not reflected
    bool HasSetupCosmetics;  // 0x0B78, not reflected
    bool bNeedsArmourUpdate;  // 0x0B79, not reflected
    bool bNeedsCosmeticArmourRefresh;  // 0x0B7A, not reflected
    UPROPERTY() APlayerState* CachedPlayerState;  // 0x0B80, size 0x8
public:
    UFUNCTION() void CheckShouldRefreshEquipmentInventory(UInventory* Inventory, int32 UpdatedSlotNum);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void ClearEquipmentInventory();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ClientSetCharacterVisibility(bool bIsVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ConsumeFocusedItem(int32 Amount);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) bool DoesCurrentSeatPreventOutOfBoundsCheck() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool DropItem(const FItemData& InventoryItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void EndMontage(UAnimMontage* Montage, UAnimMontage* FP_Montage, float BleedOutTime);  // parameters 0x14
    UFUNCTION() TArray<USkeletalMeshComponent*> FindOrCreateEquipmentComponent(int32 ForSlot);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusAndUseItemFromMenu(UInventory* Inventory, int32 Slot, FUsesEnum Use);  // parameters 0x20
    UFUNCTION(BlueprintCallable) bool GetArmourDataForGFurComponent(UGFurComponent* Component, FArmourData& OutArmourData);  // parameters 0x309
    UFUNCTION() FArmourRowHandle GetArmourRowForSlot(int32 SlotIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintPure) ASeatBase* GetAttachedToSeat() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetCurrentSecondarySlotActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetCurrentUtilitySlotActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetEquippedArmourSet(FArmourSetsRowHandle ArmourSet) const;  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) USkeletalMeshComponent* GetFirstPersonBodyMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UCameraComponent* GetFirstPersonCamera() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) USkeletalMeshComponent* GetFirstPersonMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetFocusedItemActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) FItemData GetFocusedItemData(EDataValidity& Validity);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void GetFocusedItemInventoryAndSlot(UInventory*& FocusedItemInventory, int32& FocusedItemSlot, EDataValidity& Validity);  // parameters 0xD
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetHoldTimer(FKeybindingsRowHandle Keybind, FTimerHandle& TimerHandle, bool& bValid) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusPlayerController* GetIcarusPlayerController() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusPlayerState* GetIcarusPlayerState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetInteractCooldown();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FItemData GetItem(int32 InventoryId, int32 InventorySlot);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UItemManipulationComponent* GetItemManipulationComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetLightSlotItemActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UPlayerCharacterState* GetPlayerCharacterState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) USkeletalMeshComponent* GetThirdPersonMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FItemData GetUtilityItemData(EDataValidity& Validity);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) USkeletalMeshComponent* GetVisibleCharacterMesh();  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) bool InitialisationComplete();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool IsClothSimEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool IsHabCharacter();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocallyControlledWithMountResolve() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSeated() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void JumpToMontageSection(UAnimMontage* TPMontage, UAnimMontage* FPMontage, FName NewTPSection, FName NewFPSection);  // parameters 0x20
    UFUNCTION() void MarkEquipmentInventorySlotUpdated(UInventory* Inventory, int32 UpdatedSlotNum);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void MarkEquipmentInventoryUpdated();
    UFUNCTION(BlueprintCallable) void MarkNeedsCosmeticArmourUpdate();
    UFUNCTION(BlueprintNativeEvent) void OnActorHiddenStateUpdated(bool bIsHidden);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnAttachedToSeatChanged(ASeatBase* PreviousSeat);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnConnectedPlayerInitialised();
    UFUNCTION() void OnConnectedPlayersConnectedPlayerInitialised(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintImplementableEvent) void OnConsumableExpired(FItemsStaticRowHandle ItemData);  // parameters 0x18
    UFUNCTION() void OnControllerThirdPersonToggled(bool bIsThirdPerson);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnEquipmentInventoryUpdated(int32 UpdatedSlot);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) bool OnFocusItem(const FItemData& InventoryItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void OnInteract(EInteractType InteractType);  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool OnInteractableLineTraceHit(const FHitResult& HitResult);  // parameters 0x89
    UFUNCTION(BlueprintImplementableEvent) void OnItemUseFailed(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void OnItemUsed(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void OnOwner_ConsumableExpired(FItemsStaticRowHandle ItemData);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void OnOwner_ItemUseFailed(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void OnOwner_ItemUsed(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(BlueprintNativeEvent) void OnPlayerStateSet(APlayerState* NewPlayerState);  // parameters 0x8
    UFUNCTION() void OnRep_CharacterVoice() const;
    UFUNCTION() void OnRep_CosmeticArmourOverrides();
    UFUNCTION() void OnRep_FocusedItemDataUpdated();
    UFUNCTION() void OnRep_Gender();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_DropItem(UInventory* Inventory, int32 Location, int32 Count);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_FocusItem(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_SetStartingStats(FCharacterStartingStatsRowHandle CharacterStartingStatsRowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_UnFocusItem(int32 ItemLocation);  // parameters 0x4
    UFUNCTION(BlueprintNativeEvent) bool OnUnFocusItem(int32 ItemLocation);  // parameters 0x5
    UFUNCTION() void OnViewTraceResultsUpdated(AIcarusPlayerController* RegisteredController);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool PickupItem(AIcarusItem* Item);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void PlayMontage(UAnimMontage* Montage, UAnimMontage* FP_Montage, bool LockMotion, FName StartingSection, FName FP_StartingSection, float PlaySpeed);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void RecalculateArmourSetBonus(UInventory* Inventory) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void RequestSwapGender();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_OnInteract(EInteractType InteractType);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_SetCachedActiveInteractableHit(FReplicatedHitResult Hit);  // parameters 0x2C
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_SetCachedInteractableHitLookup(FInteractableHitLookup Lookup);  // parameters 0x40
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetInteractingWithDeployable(ADeployable* Deployable);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetMontagePlayRate(float PlayRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetPlayerMovementLocked(bool bLocked);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetVoice(FCharacterVoicesRowHandle VoiceRowHandle);  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void SetupCharacterCosmetics();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void StopInteractingWithDeployable();
    UFUNCTION(BlueprintCallable) void UpdateAllEquipment();
    UFUNCTION() void UpdateCachedActiveInteractableHit(const FHitResult& NewHit);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdateCameraPerspective();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void UpdateCosmeticArmourOverride(const FItemsStaticRowHandle& ArmourOverride, const EArmourType& ArmourType);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool UpdateEquipmentForSlot(int32 SlotNum, const FArmourRowHandle& DataRow, const FItemData& Item);  // parameters 0x211
    UFUNCTION(BlueprintCallable) void UpdateHeldItem(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION() EViewTraceResultPriority ViewTraceActiveHighlightableResultPredicate(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION() EViewTraceResultPriority ViewTraceActiveInteractableResultPredicate(const FViewTraceResult& Result);  // parameters 0x8D
    UFUNCTION() void WorldStatsSet();

    // Virtual functions that start here:
    //   ClearInventories, DropItem_Implementation, IsClothSimEnabled_Implementation
    //   IsLocallyControlledWithMountResolve, OnAttachedToSeatChanged_Implementation
    //   OnConnectedPlayerInitialised_Implementation, OnFocusItem_Implementation
    //   OnInteractableLineTraceHit_Implementation, OnOwner_ConsumableExpired_Implementation
    //   OnOwner_ItemUseFailed_Implementation, OnOwner_ItemUsed_Implementation
    //   OnServer_DropItem_Implementation, OnServer_FocusItem_Implementation
    //   OnServer_SetStartingStats_Implementation, OnServer_UnFocusItem_Implementation
    //   OnUnFocusItem_Implementation, PickupItem_Implementation, RequestSwapGender_Implementation
    //   Server_SetCachedActiveInteractableHit_Implementation
    //   Server_SetCachedInteractableHitLookup_Implementation, SetupCharacterCosmetics_Implementation
};
