// /Game/BP/Player/BP_IcarusPlayerControllerSurvival.BP_IcarusPlayerControllerSurvival_C
// Derives from: AIcarusPlayerControllerSurvival > AIcarusPlayerController > AIcarusController > APlayerController > AController > AActor > UObject
// size 0xD34, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Game)
class ABP_IcarusPlayerControllerSurvival_C : public AIcarusPlayerControllerSurvival, public IUIControllerInterface_C, public IBP_SpawnTetherInterface_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0A48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_SurvivalMetaController_C* BP_SurvivalMetaController;  // 0x0A50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_NetworkProxyComponentSurvival_C* BP_NetworkProxyComponent;  // 0x0A58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingManager_C* BP_HuntingManager;  // 0x0A60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_CriticalHitComponent_C* BP_CriticalHitComponent;  // 0x0A68, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_UserInterface_C* UserInterface;  // 0x0A70, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EnvirosuitInventoryReference;  // 0x0A78, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* BackpackInventoryReference;  // 0x0A80, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* QuickbarInventoryReference;  // 0x0A88, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool FocusedOnObject;  // 0x0A90, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* EquipmentInventoryReference;  // 0x0A98, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 CurrentSessionEndTime;  // 0x0AA0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FChatMessageArrived ChatMessageArrived;  // 0x0AA8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FLocalMessageArrived LocalMessageArrived;  // 0x0AB8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CharacterProgressionUpdateDelay;  // 0x0AC8, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* UpgradeInventoryRef;  // 0x0AD0, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* VisionInventoryRef;  // 0x0AD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_SpectatorActor_C* SpectatorActor;  // 0x0AE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DBNOHoldLength;  // 0x0AE8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DBNOHoldTimestamp;  // 0x0AEC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterLoadout LastLoadout;  // 0x0AF0, size 0x138
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastCameraLocation;  // 0x0C28, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DebugCameraLocationChanges;  // 0x0C34, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintAssignable, BlueprintReadWrite) FOnRevived OnRevived;  // 0x0C38, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) float OutOfBoundsTimestamp;  // 0x0C48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutOfBoundsMaxTime;  // 0x0C4C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle OutOfBoundsTimerHandle;  // 0x0C50, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool IsRunningUnStuckEQS;  // 0x0C58, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle HeatmapBoundsTimer;  // 0x0C60, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FServerMessage ServerMessage;  // 0x0C68, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FModifierStatesRowHandle SoloRespawnModifier;  // 0x0C78, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SoloRespawnBuffLength;  // 0x0C90, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SoloRespawnBuffUID;  // 0x0C94, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle InventoryFullMessageCooldown;  // 0x0C98, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_PhotoCamera_C* PhotoCamera;  // 0x0CA0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DelayedTargetFocusedSlot;  // 0x0CA8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DelayedFocusSlotTimer;  // 0x0CB0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DelayedForceFocusSlot;  // 0x0CB8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanDoDBNOInput;  // 0x0CB9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool WasThirdPersonBeforePhotoMode;  // 0x0CBA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnLootAll OnLootAll;  // 0x0CC0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<FChallengesRowHandle> InitialChallengeNotificationsShown;  // 0x0CD0, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnHotbarPressed OnHotbarPressed;  // 0x0D20, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SlotToSelect;  // 0x0D30, size 0x4

    UFUNCTION(BlueprintCallable) void AClicked();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ActivateHotbarSlot(int32 NewSelection, bool bForce, bool bQuickCraft, bool bDelayedActivate);  // parameters 0x7
    UFUNCTION(BlueprintCallable, Server, Reliable) void AddItemToInventory(FItemTemplateRowHandle ItemTemplate);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void AddSoloRespawnModifier();
    UFUNCTION(BlueprintCallable) void BClicked();
    UFUNCTION(BlueprintImplementableEvent) void BP_ClientOpenContainer(UInventory* Inventory, bool bShowStoreAll, bool bShowTakeAll);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void BP_ServerAttemptRevive_Implementation(AGravestoneBase* Gravestone);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void BP_ServerCorpseUnstuck_Implementation();
    UFUNCTION(BlueprintImplementableEvent) void BP_Server_Unstuck_Implementation();
    UFUNCTION(BlueprintCallable) void Calculate_Quick_Item_Move(UInventory* Inventory, int32 Slot);  // parameters 0xC, named "Calculate Quick Item Move"
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanFocusSlot(int32 SlotToFocus, bool& CanFocus) const;  // parameters 0x5
    UFUNCTION(BlueprintCallable) void CanRespawn(bool& CanRespawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CanSupportNewTetheredAI(bool& CanSupport);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ChatMessageArrived__DelegateSignature(TChatMessage Message);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void CheckOutOfBounds();
    UFUNCTION(BlueprintCallable) void CheckPlayerViewDelta(bool Init);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckQuickCraft(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_Build(AIcarusRocket* Rocket);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_NoUnstuckFound();
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_Revived();
    UFUNCTION(BlueprintCallable) void Corpse_Unstuck(bool DoMove, bool& CorpseAvailable);  // parameters 0x2, named "Corpse Unstuck"
    UFUNCTION(BlueprintCallable) void CreateOverflowBag(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CustomEvent();
    UFUNCTION(BlueprintCallable) void DBNO_OptionAClicked();
    UFUNCTION(BlueprintCallable) void DBNO_OptionBClicked_Event();
    UFUNCTION(BlueprintCallable) void DelayedHotbarSelect();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DelayedShowSavingDialog();
    UFUNCTION(BlueprintCallable) void DevTeleport(FVector Location, FRotator Rotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UIcarusLinkedActorPanelBase* DisplayDynamicWidget(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void EQSFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void EmptyHands();
    UFUNCTION(BlueprintCallable) void EndPhotoMode();
    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerControllerSurvival(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool External_CanPerformInputAction(bool bBlockedByUI, bool bIgnoreAnimLock);  // parameters 0x3
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GatherMetaItems(TArray<FItemData>& OutMetaItems, TArray<FMetaResource>& OutMetaResources) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) ABP_IcarusRespawnShipSpawn_C* GetAvailableRespawnPod();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UCheatOverlayBase* GetCheatOverlay(UObject* WorldContextObject) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UIcarusCriticalHitComponent* GetCriticalHitComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UInventory*> GetDynamicWidgetInventories();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) ABP_IcarusPlayerCharacterSurvival_C* GetIcarusPlayerCharacterBP() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsThirdPerson() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void GetItem(int32 InventoryId, int32 InventorySlot, FItemData& Item);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UNetworkProxyComponent* GetNetworkProxyComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetOutOfBoundsRemainingTime();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FString GetPlayerUID();  // parameters 0x10
    UFUNCTION(BlueprintCallable) float GetRespawnDistance();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetRespawnPodLocations(bool FilterBiome, TArray<ABP_IcarusRespawnShipSpawn_C*>& AvailableSpawns, TArray<ABP_IcarusRespawnShipSpawn_C*>& OtherSpawns, TArray<ABP_IcarusRespawnShipSpawn_C*>& AllSpawns);  // parameters 0x38
    UFUNCTION(BlueprintCallable) TEnumAsByte<ERespawnType> GetRespawnType();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetUserID(FString& UserID);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetUserInterface(UUMG_UserInterface_Base_C*& UserInterface) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UUserInterfaceBase* GetUserInterfaceInternal() const;  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void HandleLivingItemChallengeCompleted(const FItemData& ItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintImplementableEvent) void HandleLivingItemChallengeProgressUpdated(const FItemData& ItemData, int32 ProgressAmount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) bool HasAvailableBed(ABP_BedBase_C*& AvailableBed);  // parameters 0x10
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_30(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Crafting_K2Node_InputActionEvent_16(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Escape_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Escape_K2Node_InputActionEvent_13(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_F10_K2Node_InputKeyEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_31(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hands_K2Node_InputActionEvent_11(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HideQuestUI_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HideUI_K2Node_InputActionEvent_19(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar0_K2Node_InputActionEvent_28(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar1_K2Node_InputActionEvent_29(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar2_K2Node_InputActionEvent_27(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar3_K2Node_InputActionEvent_26(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar4_K2Node_InputActionEvent_25(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar5_K2Node_InputActionEvent_24(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar6_K2Node_InputActionEvent_23(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar7_K2Node_InputActionEvent_22(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar8_K2Node_InputActionEvent_21(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Hotbar9_K2Node_InputActionEvent_20(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarBackSlot_K2Node_InputActionEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarBack_K2Node_InputActionEvent_12(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_HotbarForward_K2Node_InputActionEvent_9(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_IcarusLogWindow_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_32(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_33(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Inventory_K2Node_InputActionEvent_17(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_LootAll_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Map_K2Node_InputActionEvent_14(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_OpenBestiaryIndex_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_OpenBestiary_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Screenshot_K2Node_InputActionEvent_18(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Tech_K2Node_InputActionEvent_15(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_TextChat_K2Node_InputActionEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_ToggleMenus_K2Node_InputActionEvent_10(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_TogglePhotoMode_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisEvt_LookRight_K2Node_InputAxisEvent_1(float AxisValue);  // parameters 0x4
    UFUNCTION() void InpAxisEvt_LookUp_K2Node_InputAxisEvent_0(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InventoryFullMessageCooldownComplete();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsOutOfBounds();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool IsThirdPersonToggleDisabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsTryingToUnstuck() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void LocalMessageArrived__DelegateSignature(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void MapTravelBackToHab();
    UFUNCTION(BlueprintCallable) void MovePlayerIfGravestoneIsInInstanced(ABP_Gravestone_C* Gravestone);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void NotifyDynamicQuestCompleted(int32 NumCredits, int32 NumExperience);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void NotifyExoticsBanked(int32 Amount, FMetaCurrencyRowHandle Type);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void NotifyItemsReturned(const TArray<FItemData>& Items);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void NotifyQuestCompleted(AQuest* Quest, const FFactionMissionsRowHandle& MissionRowHandle, bool bIsCurrentQuest, const TArray<FMetaResource>& ReceivedResources);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void On_Mouse_Sensitivity_Changed();  // named "On Mouse Sensitivity Changed"
    UFUNCTION(BlueprintCallable, Client, Reliable) void OnClient_DeathCleanup();
    UFUNCTION(BlueprintCallable, Client, Reliable) void OnClient_ItemGained(FItemData Item, int32 Count);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable, Client, Reliable) void OnClient_RespawnCleanup();
    UFUNCTION(BlueprintCallable, Client, Reliable) void OnClient_UpdateHotBarSelection(int32 NewSelection, bool Force);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void OnConnectedPlayerInitialised();
    UFUNCTION(BlueprintCallable) void OnDeath();
    UFUNCTION(BlueprintCallable) void OnDevTeleport(FVector Location, FRotator Rotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnFailure_6B795656432A1EEE40E31586F8BAF647();
    UFUNCTION(BlueprintCallable) void OnFailure_B0AA2EB344D9F6EDFC53F7B071532FE2();
    UFUNCTION(BlueprintCallable) void OnGainedItem(FItemData Item, int32 TotalCount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) void OnHotbarItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnHotbarPressed__DelegateSignature(int32 Slots);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnItemBounced_Event(const FItemData& ItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintImplementableEvent) void OnLeaveProspectSessionCompleteImpl();
    UFUNCTION(BlueprintCallable) void OnLootAll__DelegateSignature();
    UFUNCTION(BlueprintImplementableEvent) void OnPawnLeavingGame();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnPlayerDeath();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnPlayerRespawn();
    UFUNCTION(BlueprintCallable) void OnPlayerRevive(float HealthRestoredPercent);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnRep_OutOfBoundsTimestamp();
    UFUNCTION(BlueprintCallable) void OnRevived__DelegateSignature();
    UFUNCTION(BlueprintCallable, Server, Reliable) void OnServer_GiveFocusToObject(AActor* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void OnServer_ReturnFocus();
    UFUNCTION(BlueprintCallable, Server, Reliable) void OnServer_SetFocusedSlot(int32 NewFocused, bool Force);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void OnSessionFlagsUpdated();
    UFUNCTION(BlueprintCallable) void OnSuccess_6B795656432A1EEE40E31586F8BAF647();
    UFUNCTION(BlueprintCallable) void OnSuccess_B0AA2EB344D9F6EDFC53F7B071532FE2();
    UFUNCTION(BlueprintImplementableEvent) void OpenBagWidgetUI(const FItemData& SourceItem);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void OpenFieldGuideAt(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item, bool ForceOpenNoItem);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OpenFieldGuideToItem(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OutOfBoundsTimeElapsed();
    UFUNCTION(BlueprintCallable) void OutOfBoundsUpdated(AIcarusPlayerCharacter* Player, bool OutOfBounds);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OwningClientDisplayDynamicWidgetNoteItem_Inner(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget, const FItemData& NoteItem);  // parameters 0x200
    UFUNCTION(BlueprintCallable, Client, Reliable) void OwningClient_ForceSlotHighlight(int32 NewSlot);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FIcarusPlayerChatMessage ProcessChatMessage(AIcarusPlayerState* FromPlayer, FString Message);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void ProcessSendPlayerToBedOrDropShip();
    UFUNCTION(BlueprintCallable) void ProcessUnstuckAtShip();
    UFUNCTION(BlueprintCallable) void QuickCraft(FProcessorRecipesRowHandle Recipe);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveSoloRespawnModifier();
    UFUNCTION(BlueprintCallable) void ResetUnstuck();
    UFUNCTION(BlueprintCallable) void Respawn(ABP_Gravestone_C* Target);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void SERVER_ReviveFailsafe();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SendPlayerToBedOrDropShip();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerDevTeleport(FVector Location, FRotator Rotation);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ServerMessage__DelegateSignature(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerPossessCamera();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintImplementableEvent) void ServerPushClientDynamicWidget(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActor, bool bFocusCameraOnActor);  // parameters 0x11
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerStopPossessingCamera();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_AttemptRespawn(ABP_Gravestone_C* Gravestone);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SendPlayerToBedOrDropship();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SetAmmo(UInventory* Inventory, int32 Slot, bool Unload);  // parameters 0xD
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SetBuildingVariation(int32 Variation);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_UnstuckAtRespawnShip();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetUIVisibility(bool bHide, bool bHideDebug);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void ShouldShowChallengePopup(FItemData Item, int32 ProgressAmount, bool& ShouldShow);  // parameters 0x1F5
    UFUNCTION(BlueprintCallable) void ShowPourInto(UInventory* PourFromInventory, int32 PourFromSlot);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SpawnGravestone(bool DBNO);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void StartPhotoMode();
    UFUNCTION(BlueprintCallable, Server, Reliable) void StartQuickCraft(FProcessorRecipesRowHandle Recipe);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void ToggleUIVisibility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TriggerLoadShip(AIcarusRocket* Rocket);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TryToggleThirdPerson();
    UFUNCTION(BlueprintCallable) void UIBeginPlay();
    UFUNCTION(BlueprintCallable) void UITick();
    UFUNCTION(BlueprintCallable) void UnstuckAtRespawnShipNo();
    UFUNCTION(BlueprintCallable) void UnstuckAtRespawnShipYes();
    UFUNCTION(BlueprintCallable) void UpdateHotbar();
    UFUNCTION(BlueprintCallable) void WantsPlayerDeadUI(bool IsDead);  // parameters 0x1
};
