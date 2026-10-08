// /Script/Icarus.IcarusPlayerControllerSurvival
// Derives from: AIcarusPlayerController > AIcarusController > APlayerController > AController > AActor > UObject
// size 0xA68, declared in Icarus/Source/Icarus/Controllers/IcarusPlayerControllerSurvival.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusPlayerControllerSurvival : public AIcarusPlayerController
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemPriority> ItemPriorities;  // 0x07C0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnItemBounced OnItemBounced;  // 0x07D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSet<FInventoryIDEnum> AccessibleInventoriesBlacklist;  // 0x07E0, size 0x50
    UPROPERTY(BlueprintAssignable) FOnLivingItemChallengeUpdated OnLivingItemChallengeUpdated;  // 0x0830, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLivingItemChallengeCompleted OnLivingItemChallengeCompleted;  // 0x0840, size 0x10
    UPROPERTY(Instanced) UProspectAudioComponent* ProspectAudio;  // 0x0850, size 0x8
    UPROPERTY(EditAnywhere) UScopedViewportBlocker* InitialisationViewportBlocker;  // 0x0858, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bServerHasCharacterLoadout;  // 0x0860, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bServerHasCharacterBestiary;  // 0x0861, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FOnlineProfileCharacter TestProspectCharacter;  // 0x0868, size 0xF0
    UPROPERTY(BlueprintAssignable) FOnClientLeaveProspectSessionComplete OnLeaveProspectSessionComplete;  // 0x0958, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ELeaveProspectSessionType ServerPendingLeaveProspectSession;  // 0x0959, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bServerCancelPendingLeaveProspectSession;  // 0x095A, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) ELeaveProspectSessionType ReplicatedLeftProspectSession;  // 0x095B, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bServerReturnToHabComplete;  // 0x095C, size 0x1
    UPROPERTY(EditAnywhere) UScopedViewportBlocker* LeaveProspectViewportBlocker;  // 0x0960, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AIcarusRocketSpawnBase* AssignedDropshipSpawn;  // 0x0970, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AIcarusRocket* AssignedDropship;  // 0x0978, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) AGravestoneBase* AssignedGravestone;  // 0x0980, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UPlayerRecorderComponent* Recorder;  // 0x0988, size 0x8
    UPROPERTY(EditAnywhere) FText ForceRemovePlayerDebugCommandText;  // 0x0990, size 0x18
    UPROPERTY() UResetCharacterProspectStateCallbackProxyGen* ResetCharacterProspectStateCallback;  // 0x09A8, size 0x8
    UPROPERTY() EForceRemovePlayerReason ForceRemovePlayerReason;  // 0x09B0, size 0x1
    UPROPERTY() bool bClientWasKicked;  // 0x09B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugCameraLocationChanges;  // 0x09C8, size 0x1
    UPROPERTY(BlueprintAssignable) FPlayerBestiaryProgressed OnPlayerBestiaryProgressed;  // 0x09C9, size 0x1
    UPROPERTY(BlueprintAssignable) FPlayerBestiaryUnlocked OnPlayerBestiaryUnlocked;  // 0x09CA, size 0x1
    UPROPERTY(BlueprintAssignable) FPlayerFishUnlocked OnPlayerFishUnlocked;  // 0x09CB, size 0x1
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) URemoteUserSettings* RemoteUserSettings;  // 0x09D0, size 0x8
    UPROPERTY(BlueprintAssignable) FOnGetResourceGeneratedAlterationsResponse OnGetResourceGeneratedAlterationsResponse;  // 0x09D8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UResourceNetworkDataRequesterComponent* ResourceNetworkDataRequesterComponent;  // 0x09E8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle ShowDelayedLeavingPromptHandle;  // 0x0968, protected
    FTimerHandle UpdateCharacterProspectLocationDelayTimer;  // 0x09B8, protected
    bool bQueuedUpdateCharacterProspectLocation;  // 0x09C0, protected
    int32 FailedUpdateCharacterProspectLocationCount;  // 0x09C4, protected
    TWeakObjectPtr<AActor,FWeakObjectPtr> PendingRequestGeneratedAlterationsCraftingDevice;  // 0x09F0, private
    TArray<FItemData,TSizedDefaultAllocator<32> > PendingRequestGeneratedAlterationsItemList;  // 0x09F8, private
    TWeakObjectPtr<UResourceComponent,FWeakObjectPtr> ResourceComponentUpdateTarget;  // 0x0A08, private
    TSet<enum ERequestResourceComponentDataSource,DefaultKeyFuncs<enum ERequestResourceComponentDataSource,0>,FDefaultSetAllocator> ClientResourceComponentRequests;  // 0x0A10, private
    bool bRegisteredForResourceNetworkTickComplete;  // 0x0A60, private

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ActivateHotbarSlot(int32 NewSelection, bool bForce, bool bQuickCraft, bool bDelayedActivate);  // parameters 0x7
    UFUNCTION(BlueprintImplementableEvent) void BP_ClientOpenContainer(UInventory* Inventory, bool bShowStoreAll, bool bShowTakeAll);  // parameters 0xA
    UFUNCTION(BlueprintImplementableEvent) void BP_ServerAttemptRevive_Implementation(AGravestoneBase* Gravestone);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void BP_ServerCorpseUnstuck_Implementation();
    UFUNCTION(BlueprintImplementableEvent) void BP_Server_Unstuck_Implementation();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CalculateQuickItemMove(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientHandleProspectExpired(FProspectInfo Prospect);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientOpenContainer(UInventory* Inventory, bool bShowStoreAll, bool bShowTakeAll);  // parameters 0xA
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveGeneratedAlterationsForItems(TArray<FItemResourceGeneratedAlterationResult> Results);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveResourceComponentUpdate(UResourceComponent* ResourceComp, FClientResourceComponentValues ResourceComponentData);  // parameters 0x20
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_FlagFreezeWorldComposition(bool bFreeze);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_NotifyDynamicQuestCompleted(int32 NumCredits, int32 NumExperience);  // parameters 0x8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_NotifyExoticsBanked(int32 Amount, FMetaCurrencyRowHandle Type);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_NotifyQuestCompleted(AQuest* Quest, FFactionMissionsRowHandle MissionsRowHandle, bool bIsCurrentQuest, TArray<FMetaResource> ReceivedResources);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void DelayedShowSavingDialog();
    UFUNCTION(BlueprintCallable) void EmptyInventories();
    UFUNCTION(BlueprintCallable) void ForceRemoveFromProspect(EForceRemovePlayerReason ForceRemovePlayerReason);  // parameters 0x1
    UFUNCTION() void ForceRemoveFromProspectResetCallbackFailure(const FResResetCharacterProspectState& Response);  // parameters 0x1
    UFUNCTION() void ForceRemoveFromProspectResetCallbackSuccess(const FResResetCharacterProspectState& Response);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) void GatherMetaItems(TArray<FItemData>& OutMetaItems, TArray<FMetaResource>& OutMetaResources) const;  // parameters 0x20
    UFUNCTION(BlueprintCallable) TArray<UInventory*> GetAllInventories(bool bIncludeInaccessible);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UIcarusCriticalHitComponent* GetCriticalHitComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UResourceNetworkDataRequesterComponent* GetResourceNetworkDataRequesterComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLeftProspectSession() const;  // parameters 0x1
    UFUNCTION() bool IsSyncingUpdateCharacterProspectLocation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsTryingToUnstuck() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void MapTravelBackToHab();
    UFUNCTION() void NotifyBestiaryProgress(const FBestiaryDataRowHandle& Group, int32 NowPoints, int32 MaxPoints);  // parameters 0x20
    UFUNCTION() void NotifyBestiaryUnlock(const FBestiaryDataRowHandle& Group, EBestiaryUnlockPopup PopType);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void NotifyDynamicQuestCompleted(int32 NumCredits, int32 NumExperience);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void NotifyExoticsBanked(int32 Amount, FMetaCurrencyRowHandle Type);  // parameters 0x1C
    UFUNCTION() void NotifyFishUnlock(const FFishTypeTracking& Tracking, const EFishUnlockPopup& PopType);  // parameters 0x29
    UFUNCTION(Client, BlueprintNativeEvent) void NotifyItemBounced(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintNativeEvent) void NotifyQuestCompleted(AQuest* Quest, const FFactionMissionsRowHandle& MissionRowHandle, bool bIsCurrentQuest, const TArray<FMetaResource>& ReceivedResources);  // parameters 0x38
    UFUNCTION() void OnLeaveProspectSessionBackToHab(bool bSuccess, APlayerController* Controller);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnLeaveProspectSessionCompleteImpl();
    UFUNCTION() void OnLeaveProspectSessionStatisticsUpdated(bool bSuccess);  // parameters 0x1
    UFUNCTION() void OnProspectLocationChanged(EProspectLocation ProspectLocation);  // parameters 0x1
    UFUNCTION() void OnRep_ReplicatedLeftProspectSession();
    UFUNCTION() void OnResourceNetworkTickComplete();
    UFUNCTION() void OnServerInitialise_GetCharacterLoadout(const FPlayerLoadoutData& Loadout);  // parameters 0x3E0
    UFUNCTION() void OnServerInitialise_GetPlayerBestiary();
    UFUNCTION() void OnServerInitialise_IcarusBeginPlay();
    UFUNCTION() void OnServerUpdateCharacterProspectLocation(bool bSuccess);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OpenFieldGuideToItem(FFieldGuideCategoriesRowHandle Category, FItemsStaticRowHandle Item);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void PlayProspectMissionIntroDialogue();
    UFUNCTION() void PostTrackerInit();
    UFUNCTION(BlueprintCallable) void RegisterForResourceComponentUpdates(ERequestResourceComponentDataSource RequestSource, UResourceComponent* ResourceComponent);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void RequestGeneratedAlterationsForItem(AActor* CraftingDevice, const FItemData& Item);  // parameters 0x1F8
    UFUNCTION() void SendGeneratedAlterationsForItems();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SendPlayerToBedOrDropShip();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerAttemptRevive(AGravestoneBase* Gravestone);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerCancelLeaveProspectSession();
    UFUNCTION(BlueprintNativeEvent) void ServerFinaliseLeaveProspectSession(ELeaveProspectSessionType LeaveProspectSessionType);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerLeaveProspectSession(ELeaveProspectSessionType LeaveProspectSessionType);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerLeaveProspectSessionWithoutSave();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerLeftByDropship();
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, BlueprintImplementableEvent) void ServerPushClientDynamicWidget(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActor, bool bFocusCameraOnActor);  // parameters 0x11
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerRegisterForResourceComponentUpdates(UResourceComponent* ResourceComponent);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerRequestGeneratedAlterationsForItems(AActor* CraftingDevice, TArray<FItemData> ForItems);  // parameters 0x18
    UFUNCTION() void ServerSyncCharacterProspectLocation();
    UFUNCTION() void ServerTryCompleteLeaveProspectSession();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerUnregisterForResourceComponentUpdates();
    UFUNCTION(BlueprintCallable) void ServerUpdateCharacterProspectLocation(bool bSkipDelay);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_CorpseUnstuck();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_Unstuck();
    UFUNCTION(BlueprintCallable) void SetAssignedDropship(AIcarusRocket* Dropship);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetAssignedGravestone(AGravestoneBase* Gravestone);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool ShouldRotateCameraOnDeployableInteract() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ShowDelayedLeavingPrompt(const FConfirmationPopupDetails& ConfirmationPopupDetails);  // parameters 0x98
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void TriggerLoadShip(AIcarusRocket* Rocket);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UnregisterForResourceComponentUpdates(ERequestResourceComponentDataSource RequestSource);  // parameters 0x1

    // Virtual functions that start here:
    //   ClientHandleProspectExpired_Implementation, Client_NotifyExoticsBanked_Implementation
    //   GatherMetaItems_Implementation, MapTravelBackToHab_Implementation, NotifyItemBounced_Implementation
    //   OnLeaveProspectSessionCompleteImpl_Implementation, PlayProspectMissionIntroDialogue_Implementation
    //   ServerCancelLeaveProspectSession_Implementation, ServerFinaliseLeaveProspectSession_Implementation
    //   ServerLeaveProspectSessionWithoutSave_Implementation, ServerLeaveProspectSession_Implementation
    //   ServerLeftByDropship_Implementation
};
