// /Script/Icarus.IcarusPlayerController
// Derives from: AIcarusController > APlayerController > AController > AActor > UObject
// size 0x7C0, declared in Icarus/Source/Icarus/Controllers/IcarusPlayerController.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusPlayerController : public AIcarusController, public IMutableGameplayTagInterface
{
public:
    UPROPERTY(Replicated, ReplicatedUsing) AIcarusPlayerCharacter* IcarusPlayerCharacter;  // 0x05A0, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<AContextMenuFactory> ContextMenuFactoryClass;  // 0x05A8, size 0x8
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float InputAimYawScale;  // 0x05B4, size 0x4
    UPROPERTY(EditAnywhere, Config, BlueprintReadWrite) float InputAimPitchScale;  // 0x05B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFreeLook;  // 0x05BC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FRotator FreeLookInput;  // 0x05C0, size 0xC
    UPROPERTY(BlueprintAssignable) FToggleThirdPersonSignature OnToggleThirdPerson;  // 0x05D0, size 0x10
    UPROPERTY() bool bIsThirdPerson;  // 0x05E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsClientAdmin;  // 0x05E1, size 0x1
    UPROPERTY(BlueprintAssignable) FOnChatMessageReceived OnChatMessageReceived;  // 0x05E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnServerMessageReceived OnServerMessageReceived;  // 0x05F8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLocalMessageReceived OnLocalMessageReceived;  // 0x0608, size 0x10
    UPROPERTY(BlueprintAssignable) FOnViewTraceResultsUpdatedDelegate OnViewTraceResultsUpdated;  // 0x0618, size 0x10
    UPROPERTY(Replicated, BlueprintReadWrite) bool bCaptureViewTraces;  // 0x0628, size 0x1
    UPROPERTY(EditAnywhere) TMap<UObject*, FViewTraceRegistration> ViewTraceRegistrations;  // 0x0630, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<FViewTraceResult> ViewTraceResults;  // 0x0680, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ViewTraceCapsuleRadius;  // 0x0690, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ViewTraceIterationCount;  // 0x0694, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bDebugCaptureViewTraceResultsStats;  // 0x0698, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName DebugCaptureViewTraceResultsTag;  // 0x069C, size 0x8
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UBackendProxyComponent* BackendProxyComponent;  // 0x06A8, size 0x8
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UPlayerDataComponent* PlayerDataComponent;  // 0x06B0, size 0x8
    UPROPERTY(Replicated, Instanced, BlueprintReadOnly) UBestiaryManagerComponent* BestiaryManagerComponent;  // 0x06B8, size 0x8
    UPROPERTY(BlueprintReadOnly) FServerFriendsUpdated OnServerFriendsUpdated;  // 0x06C0, size 0x10
    UPROPERTY() UGetFriendsCallbackProxy* GetFriendsListCallBackProxy;  // 0x06D0, size 0x8
    UPROPERTY() TArray<FBPFriendInfo> ClientFriendsList;  // 0x06D8, size 0x10
    UPROPERTY() TArray<FString> FriendIds;  // 0x06E8, size 0x10
    UPROPERTY() bool bClientFriendsListReady;  // 0x06F8, size 0x1
    UPROPERTY() bool bServerFriendsReady;  // 0x06F9, size 0x1
    UPROPERTY(BlueprintReadOnly) bool bClientIsInitialisingPlayerProfile;  // 0x06FA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float SyncBackendStateCooldown;  // 0x070C, size 0x4
    UPROPERTY(BlueprintAssignable) FCharacterProgressionSynced OnCharacterProgressionSynced;  // 0x0710, size 0x1
    UPROPERTY(BlueprintAssignable) FCharacterTalentsSynced OnCharacterTalentsSynced;  // 0x0728, size 0x1
    UPROPERTY(BlueprintAssignable) FAccountTalentsSynced OnAccountTalentsSynced;  // 0x0740, size 0x1
    UPROPERTY(BlueprintAssignable) FAccountFlagsSynced OnAccountFlagsSynced;  // 0x0758, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x0770, size 0x20
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle LastFieldGuideItem;  // 0x0790, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFieldGuideCategoriesRowHandle LastFieldGuideCategory;  // 0x07A8, size 0x18

    // Not reflected: the engine's scripting cannot see these.
    int32 UIInputStack;  // 0x05B0, private
    int32 ServerInitialisationChrSlot;  // 0x06FC, protected
    int32 ServerRetryGetUserProfileCount;  // 0x0700, protected
    int32 ServerRetryGetCharacterProfileCount;  // 0x0704, protected
    int32 ServerRetryGetCharacterLoadout;  // 0x0708, protected
    FTimerHandle UpdateCharacterProgressionDelayTimer;  // 0x0718, protected
    bool bQueuedUpdateCharacterProgression;  // 0x0720, protected
    int32 FailedUpdateCharacterProgressCount;  // 0x0724, protected
    FTimerHandle UpdateCharacterTalentsDelayTimer;  // 0x0730, protected
    bool bQueuedUpdateCharacterTalents;  // 0x0738, protected
    int32 FailedUpdateCharacterTalentsCount;  // 0x073C, protected
    FTimerHandle UpdateAccountTalentsDelayTimer;  // 0x0748, protected
    bool bQueuedUpdateAccountTalents;  // 0x0750, protected
    bool bPauseAccountTalentSync;  // 0x0751, protected
    int32 FailedUpdateAccountTalentsCount;  // 0x0754, protected
    FTimerHandle UpdateAccountFlagsDelayTimer;  // 0x0760, protected
    bool bQueuedUpdateAccountFlags;  // 0x0768, protected
    int32 FailedUpdateAccountFlagsCount;  // 0x076C, protected

    UFUNCTION(BlueprintCallable) void AddForcedPitchInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddForcedYawInput(float Val);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void AddLocalMessage(FString Message);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void BP_ClientReceiveChatMessage(AIcarusPlayerState* FromPlayer, FString Message);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void BP_ClientReceiveServerMessage(FString Message);  // parameters 0x10
    UFUNCTION(Exec, BlueprintCallable) void Bookmark(FString InputString);  // parameters 0x10
    UFUNCTION() void CaptureViewTraceResults(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ChatMessageHook(FString InputString);  // parameters 0x10
    UFUNCTION(Exec, BlueprintCallable) void Cheat(FString InputString);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ClearUIInput();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientConnectedPlayerInitialiseComplete(FErrorCodesEnum FailureError);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientNotifyBecomeAdmin();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientNotifyLivingItemChallengeCompleted(FItemData ItemData);  // parameters 0x1F0
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientNotifyLivingItemChallengeProgressUpdated(FItemData ItemData, int32 ProgressAmount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientOpenBagWidget(UInventory* SourceInventory, int32 SlotIndex);  // parameters 0xC
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientQueryForFriendsList();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveChatMessage(AIcarusPlayerState* FromPlayer, FString Message);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveServerMessage(FString Message);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_CheckEntireTalentTreeUnlockedTrackerTask(FAccoladesRowHandle Accolade);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_CheckOffPlayerTrackerTask(FAccoladesRowHandle Accolade, FRowHandle TaskRow);  // parameters 0x30
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_IncrementPlayerTracker(FPlayerTrackersRowHandle PlayerTracker, int32 AmountToAdd);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_SetPlayerTracker(FPlayerTrackersRowHandle PlayerTracker, int32 NewAmount);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_TryCompleteOneOffAccolade(FAccoladesRowHandle Accolade);  // parameters 0x18
    UFUNCTION(BlueprintCallable) AContextMenuFactory* CreateContextMenu();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) UIcarusLinkedActorPanelBase* DisplayDynamicWidget(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool External_CanPerformInputAction(bool bBlockedByUI, bool bIgnoreAnimLock);  // parameters 0x3
    UFUNCTION() void FinaliseConnectedPlayerInitialisation(const FConnectedPlayer& ConnectedPlayer);  // parameters 0x38
    UFUNCTION(BlueprintCallable) bool FindBestViewTraceResult(UObject* Registrant, const FViewTraceResultPriorityDelegate& ResultPriorityCallback, FViewTraceResult& OutBestResult, float DebugDrawDuration);  // parameters 0xA9
    UFUNCTION(BlueprintCallable, BlueprintPure) FTransform GetAudioListenerTransform() const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) UBackendProxyComponent* GetBackendProxyComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) UBestiaryManagerComponent* GetBestiaryManagerComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UCheatOverlayBase* GetCheatOverlay(UObject* WorldContextObject) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) static EViewTraceResultPriority GetGenericViewTraceResultPriority(const FViewTraceResult& Result, bool bResultIsRelevant, bool bMeleeAttackTrace);  // parameters 0x8F
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusPlayerCharacter* GetIcarusPlayerCharacter() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusPlayerState* GetIcarusPlayerState() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool GetIsThirdPerson() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) UNetworkProxyComponent* GetNetworkProxyComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerCharacterID GetPlayerCharacterID() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) UPlayerDataComponent* GetPlayerDataComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) FRotator GetRotationInput() const;  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) UUserInterfaceBase* GetUserInterfaceInternal() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetViewTraceStartEndPoints(float TraceDistance, FVector& OutStart, FVector& OutEnd);  // parameters 0x1C
    UFUNCTION(BlueprintNativeEvent) void HandleLivingItemChallengeCompleted(const FItemData& ItemData);  // parameters 0x1F0
    UFUNCTION(BlueprintNativeEvent) void HandleLivingItemChallengeProgressUpdated(const FItemData& ItemData, int32 ProgressAmount);  // parameters 0x1F4
    UFUNCTION(BlueprintCallable) void InitialiseLocalSelectedPlayerProfile();
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAiming() const;  // parameters 0x1
    UFUNCTION() bool IsSyncingUpdateAccountFlags() const;  // parameters 0x1
    UFUNCTION() bool IsSyncingUpdateAccountTalents() const;  // parameters 0x1
    UFUNCTION() bool IsSyncingUpdateCharacterProgression() const;  // parameters 0x1
    UFUNCTION() bool IsSyncingUpdateCharacterTalents() const;  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) bool IsThirdPersonToggleDisabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void NotifyOfCheater(FString CharacterName);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnConnectedPlayerInitialised();
    UFUNCTION() void OnGetFriendsListFailure(const TArray<FBPFriendInfo>& Results);  // parameters 0x10
    UFUNCTION() void OnGetFriendsListSuccess(const TArray<FBPFriendInfo>& Results);  // parameters 0x10
    UFUNCTION(BlueprintNativeEvent) void OnPawnLeavingGame();
    UFUNCTION(BlueprintNativeEvent) bool OnPlayerDeath();  // parameters 0x1
    UFUNCTION(BlueprintNativeEvent) void OnRep_IcarusPlayerCharacter();
    UFUNCTION() void OnServerInitialise_GetPlayerCharacterProfileResult(bool bSuccess, const FOnlineProfileCharacter& InCharacterProfile);  // parameters 0xF8
    UFUNCTION() void OnServerInitialise_GetPlayerUserProfileResult(bool bSuccess, const FOnlineProfileUser& InUserProfile);  // parameters 0x50
    UFUNCTION() void OnServerUpdateAccountFlags(bool bSuccess, const TArray<int32>& Flags);  // parameters 0x18
    UFUNCTION() void OnServerUpdateAccountTalents(bool bSuccess, const TArray<FBackendTalent>& BackendTalents);  // parameters 0x18
    UFUNCTION() void OnServerUpdateCharacterProgression(bool bSuccess);  // parameters 0x1
    UFUNCTION() void OnServerUpdateCharacterTalents(bool bSuccess, const TArray<FBackendTalent>& BackendTalents);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void OnServer_PlayerDeath();
    UFUNCTION() void OnWorkshopItemPurchased(bool bSuccess, const FItemData& Item);  // parameters 0x1F8
    UFUNCTION(BlueprintImplementableEvent) void OpenBagWidgetUI(const FItemData& SourceItem);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void OutputProgressState(float Duration) const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void OwningClientDisplayDynamicWidget(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void OwningClientDisplayDynamicWidgetNoteItem(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget, FItemData NoteItem);  // parameters 0x200
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OwningClientDisplayDynamicWidgetNoteItem_Inner(TSubclassOf<UIcarusLinkedActorPanelBase> WidgetClass, AActor* LinkedActorForWidget, const FItemData& NoteItem);  // parameters 0x200
    UFUNCTION(BlueprintCallable) void PopUIInput();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FIcarusPlayerChatMessage ProcessChatMessage(AIcarusPlayerState* FromPlayer, FString Message);  // parameters 0x58
    UFUNCTION(BlueprintCallable) void PushUIInput(UWidget* WidgetToFocus, bool bAllowGameInput, bool bShowMouse);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void RegisterForViewTraces(UObject* Registrant, float MaxDistance);  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool RetrieveViewTraceResults(UObject* Registrant, TArray<FViewTraceResult>& OutFilteredResults);  // parameters 0x19
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerFriendsListUpdated(TArray<FString> NewFriendIds);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, BlueprintNativeEvent) void ServerSendChatMessage(FString Message);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSyncAccountFlags();
    UFUNCTION() void ServerSyncAccountTalents();
    UFUNCTION() void ServerSyncCharacterProgression();
    UFUNCTION() void ServerSyncCharacterTalents();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerUpdateAccountFlags(bool bSkipDelay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ServerUpdateAccountTalents(bool bSkipDelay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ServerUpdateCharacterProgression(bool bSkipDelay);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ServerUpdateCharacterTalents(bool bSkipDelay);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_BeginPlayerInitialisation(int32 ChrSlot);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_ToggleThirdPerson(bool bThirdPerson);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetUIVisibility(bool bHide, bool bHideDebug);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void ToggleThirdPerson();
    UFUNCTION(BlueprintCallable) bool ViewTraceByChannel(FViewTraceResult& Result, TEnumAsByte<ECollisionChannel> TraceChannel, const FViewTraceParams& ViewTraceParams);  // parameters 0xC1

    // Virtual functions that start here:
    //   AddForcedPitchInput, AddForcedYawInput, ClientConnectedPlayerInitialiseComplete_Implementation
    //   ClientNotifyBecomeAdmin_Implementation, ClientNotifyLivingItemChallengeCompleted_Implementation
    //   ClientNotifyLivingItemChallengeProgressUpdated_Implementation
    //   ClientQueryForFriendsList_Implementation
    //   Client_CheckEntireTalentTreeUnlockedTrackerTask_Implementation
    //   Client_CheckOffPlayerTrackerTask_Implementation, Client_IncrementPlayerTracker_Implementation
    //   Client_SetPlayerTracker_Implementation, Client_TryCompleteOneOffAccolade_Implementation
    //   External_CanPerformInputAction_Implementation, GetIsThirdPerson_Implementation
    //   HandleLivingItemChallengeCompleted_Implementation
    //   HandleLivingItemChallengeProgressUpdated_Implementation, IsThirdPersonToggleDisabled_Implementation
    //   NotifyBecomeAdmin, OnConnectedPlayerInitialised_Implementation, OnPawnLeavingGame_Implementation
    //   OnRep_IcarusPlayerCharacter_Implementation, OnServerConnectedPlayerInitialiseFailed
    //   OnServerInitialise_GetPlayerCharacterProfileResult, OnServerInitialise_GetPlayerUserProfileResult
    //   OnServerRequestSyncResponse, OwningClientDisplayDynamicWidgetNoteItem_Implementation
    //   OwningClientDisplayDynamicWidget_Implementation, ServerBindConnectedPlayerEvents
    //   ServerCanPlayerFinishInitialisation, ServerFriendsListUpdated_Implementation, ServerRequestSync
    //   ServerSyncAccountFlags_Implementation, ServerUpdateAccountFlags_Implementation
    //   Server_BeginPlayerInitialisation_Implementation, Server_ToggleThirdPerson_Implementation
    //   ToggleThirdPerson_Implementation, WasClientKicked
};
