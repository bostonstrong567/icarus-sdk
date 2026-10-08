// /Script/Icarus.BackendProxyComponent
// Derives from: UActorComponent > UObject
// size 0x4D0, declared in Icarus/Source/Icarus/Backend/BackendProxyComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UBackendProxyComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FMetaResourcesUpdated MetaResourcesUpdated;  // 0x00B0, size 0x1
    UPROPERTY(BlueprintAssignable) FMetaInventoryUpdated MetaInventoryUpdated;  // 0x00B1, size 0x1
    UPROPERTY(BlueprintAssignable) FMetaInventorySlotUpdated MetaInventorySlotUpdated;  // 0x00B2, size 0x1
    UPROPERTY(BlueprintAssignable) FWorkshopPurchaseResult WorkshopPurchaseResult;  // 0x00B3, size 0x1
    UPROPERTY(BlueprintAssignable) FDropshipsUpdated DropshipsUpdated;  // 0x00B4, size 0x1
    UPROPERTY(BlueprintAssignable) FDropshipCreationResult DropshipCreationResult;  // 0x00B5, size 0x1
    UPROPERTY(BlueprintAssignable) FDropshipModificationResult DropshipModificationResult;  // 0x00B6, size 0x1
    UPROPERTY(BlueprintAssignable) FDropshipDeletionResult DropshipDeletionResult;  // 0x00B7, size 0x1
    UPROPERTY(BlueprintAssignable) FPreparedLoadoutUpdated PreparedLoadoutUpdated;  // 0x00B8, size 0x1
    UPROPERTY(BlueprintAssignable) FCharacterLoadoutUpdated CharacterLoadoutUpdated;  // 0x00B9, size 0x1
    UPROPERTY(BlueprintAssignable) FLoadoutInventoryUpdated LoadoutInventoryUpdated;  // 0x00BA, size 0x1
    UPROPERTY(BlueprintAssignable) FLoadoutInventorySlotUpdated LoadoutInventorySlotUpdated;  // 0x00BB, size 0x1
    UPROPERTY(BlueprintAssignable) FLoadoutPackaged LoadoutPackaged;  // 0x00BC, size 0x1
    UPROPERTY(BlueprintAssignable) FCreditsUpdated CreditsUpdated;  // 0x00BD, size 0x1
    UPROPERTY(BlueprintAssignable) FProspectsUpdated ProspectsUpdated;  // 0x00BE, size 0x1
    UPROPERTY(BlueprintAssignable) FClaimedProspectResult ClaimedProspectResult;  // 0x00BF, size 0x1
    UPROPERTY(BlueprintAssignable) FSettleProspectResult SettleProspectResult;  // 0x00C0, size 0x1
    UPROPERTY(BlueprintAssignable) FNotificationsUpdated NotificationsUpdated;  // 0x00C1, size 0x1
    UPROPERTY(BlueprintAssignable) FTalentUnlocked TalentUnlocked;  // 0x00C2, size 0x1
    UPROPERTY(BlueprintAssignable) FTrackedStatisticsUpdateResult TrackedStatisticsUpdateResult;  // 0x00C3, size 0x1
    UPROPERTY(BlueprintAssignable) FFactionMissionUpdateResult FactionMissionUpdateResult;  // 0x00C4, size 0x1
    UPROPERTY(BlueprintAssignable) FBackToHabResult BackToHabResult;  // 0x00C5, size 0x1
    UPROPERTY(BlueprintAssignable) FGetCharacterProfileResult GetCharacterProfileResult;  // 0x0118, size 0x1
    UPROPERTY(BlueprintAssignable) FGetUserProfileResult GetUserProfileResult;  // 0x0119, size 0x1
    UPROPERTY(BlueprintAssignable) FPackageLoadoutResult PackageLoadoutResult;  // 0x011A, size 0x1
    UPROPERTY(BlueprintAssignable) FWorkshopResearchResult WorkshopResearchResult;  // 0x011B, size 0x1
    UPROPERTY(BlueprintAssignable) FWorkshopReplicationResult WorkshopReplicationResult;  // 0x011C, size 0x1
    UPROPERTY(BlueprintAssignable) FGetCharacterLoadoutResult GetCharacterLoadoutResult;  // 0x011D, size 0x1
    UPROPERTY() FUpdateCharacterProgressResult UpdateCharacterProgressResult;  // 0x011E, size 0x1
    UPROPERTY() FUpdateCharacterProspectLocationResult UpdateCharacterProspectLocationResult;  // 0x011F, size 0x1
    UPROPERTY() FSyncCharacterTalentsResult SyncCharacterTalentsResult;  // 0x0120, size 0x1
    UPROPERTY() FSyncAccountTalentsResult SyncAccountTalentsResult;  // 0x0121, size 0x1
    UPROPERTY() FSyncAccountFlagsResult SyncAccountFlagsResult;  // 0x0122, size 0x1
    UPROPERTY(BlueprintAssignable) FExchangeCurrencyResult ExchangeCurrencyResult;  // 0x0123, size 0x1
    UPROPERTY(BlueprintAssignable) FWorkshopRepairResult WorkshopRepairResult;  // 0x0124, size 0x1
    UPROPERTY() UGetMetaResourceCallbackProxyGen* MetaResourcesCallback;  // 0x0128, size 0x8
    UPROPERTY() UGetMetaInventoryCallbackProxyGen* MetaInventoryCallback;  // 0x0130, size 0x8
    UPROPERTY() UGetLoadoutInventoryCallbackProxyGen* LoadoutInventoryCallback;  // 0x0138, size 0x8
    UPROPERTY() UMoveMetaInventoryItemCallbackProxyGen* ShiftMetaItemCallbackProxy;  // 0x0140, size 0x8
    UPROPERTY() URemoveMetaItemCallbackProxyGen* RemoveMetaItemCallbackProxy;  // 0x0148, size 0x8
    UPROPERTY() UGetDropshipsCallbackProxyGen* GetDropshipsCallbackProxy;  // 0x0150, size 0x8
    UPROPERTY() UCreateDropshipCallbackProxyGen* CreateDropshipsCallbackProxy;  // 0x0158, size 0x8
    UPROPERTY() UModifyDropshipCallbackProxyGen* ModifyDropshipsCallbackProxy;  // 0x0160, size 0x8
    UPROPERTY() UDeleteDropshipCallbackProxyGen* DeleteDropshipsCallbackProxy;  // 0x0168, size 0x8
    UPROPERTY() USelectDropshipCallbackProxyGen* SelectDropshipCallbackProxy;  // 0x0170, size 0x8
    UPROPERTY() URemoveSelectedDropshipCallbackProxyGen* RemoveSelectedDropshipCallbackProxy;  // 0x0178, size 0x8
    UPROPERTY() USelectEnvirosuitCallbackProxyGen* SelectEnvirosuitCallbackProxy;  // 0x0180, size 0x8
    UPROPERTY() URemoveEnvirosuitCallbackProxyGen* RemoveEnvirosuitCallbackProxy;  // 0x0188, size 0x8
    UPROPERTY() UPackageLoadoutCallbackProxyGen* PackageLoadoutCallbackProxy;  // 0x0190, size 0x8
    UPROPERTY() UUnpackageLoadoutCallbackProxyGen* UnpackageLoadoutCallbackProxy;  // 0x0198, size 0x8
    UPROPERTY() UGetCharacterLoadoutCallbackProxyGen* CharacterLoadoutCallbackProxy;  // 0x01A0, size 0x8
    UPROPERTY() UGetPreparedLoadoutCallbackProxyGen* PreparedLoadoutCallbackProxy;  // 0x01A8, size 0x8
    UPROPERTY() UGetCreditsCallbackProxyGen* GetCreditsCallbackProxy;  // 0x01B0, size 0x8
    UPROPERTY() UGetAllProspectsCallbackProxyGen* GetAllProspectsCallbackProxy;  // 0x01B8, size 0x8
    UPROPERTY() UClaimProspectCallbackProxyGen* ClaimProspectCallbackProxy;  // 0x01C0, size 0x8
    UPROPERTY() USettleProspectCallbackProxyGen* SettleProspectCallbackProxy;  // 0x01C8, size 0x8
    UPROPERTY() UGetNotificationsCallbackProxyGen* GetNotificationsCallbackProxy;  // 0x01D0, size 0x8
    UPROPERTY() UClaimNotificationAttachmentsCallbackProxyGen* ClaimNotificationAttachmentsCallbackProxy;  // 0x01D8, size 0x8
    UPROPERTY() UDeleteNotificationCallbackProxyGen* DeleteNotificationCallbackProxy;  // 0x01E0, size 0x8
    UPROPERTY() UReadNotificationCallbackProxyGen* ReadNotificationCallbackProxy;  // 0x01E8, size 0x8
    UPROPERTY() UUpdateCharacterProgressCallbackProxyGen* UpdateCharacterProgressProxy;  // 0x01F0, size 0x8
    UPROPERTY() UUpdateCharacterProspectLocationCallbackProxyGen* UpdateCharacterProspectLocationProxy;  // 0x01F8, size 0x8
    UPROPERTY() UUpdateTrackedStatsCallbackProxyGen* UpdateTrackedStatsCallbackProxy;  // 0x0200, size 0x8
    UPROPERTY() UUpdateFactionMissionProgressCallbackProxyGen* UpdateFactionMissionProgressCallbackProxy;  // 0x0208, size 0x8
    UPROPERTY() USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalentsCallbackProxy;  // 0x0210, size 0x8
    UPROPERTY() USyncAccountTalentsCallbackProxyGen* SyncAccountTalentsCallbackProxy;  // 0x0218, size 0x8
    UPROPERTY() USyncAccountFlagsCallbackProxyGen* SyncAccountFlagsCallbackProxy;  // 0x0220, size 0x8
    UPROPERTY() UGetCharacterProfileCallbackProxyGen* GetCharacterProfileCallbackProxy;  // 0x0228, size 0x8
    UPROPERTY() UGetUserProfileCallbackProxyGen* GetUserProfileCallbackProxy;  // 0x0230, size 0x8
    UPROPERTY() UBackToHabCallbackProxyGen* BackToHabCallbackProxy;  // 0x0238, size 0x8
    UPROPERTY() UUnlockWorkshopItemCallbackProxyGen* UnlockWorkshopItemCallbackProxy;  // 0x0240, size 0x8
    UPROPERTY() UReplicateWorkshopItemCallbackProxyGen* ReplicateWorkshopItemCallbackProxy;  // 0x0248, size 0x8
    UPROPERTY() URepairWorkshopItemCallbackProxyGen* RepairWorkshopItemCallbackProxy;  // 0x0250, size 0x8
    UPROPERTY() UExchangeCurrencyCallbackProxyGen* ExchangeCurrencyCallbackProxy;  // 0x0258, size 0x8
    UPROPERTY() UTalentRefundCallbackProxyGen* TalentRefundCallbackProxy;  // 0x0260, size 0x8
    UPROPERTY() TMap<ERateLimitedRequests, int32> RequestTimers;  // 0x0268, size 0x50
    UPROPERTY() float CurrentTime;  // 0x02B8, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FMetaResource> MetaResources;  // 0x02C0, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) int32 Credits;  // 0x02D0, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FMetaItem> MetaInventory;  // 0x02D8, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FMetaItem> LoadoutInventory;  // 0x02E8, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FDropship> Dropships;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 PreparedDropship;  // 0x0308, size 0x4
    UPROPERTY() int32 PreparedDropshipID;  // 0x030C, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FMetaItem PreparedEnvirosuit;  // 0x0310, size 0x40
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FCharacterLoadout CharacterLoadout;  // 0x0350, size 0x138
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) bool PreparedLoadout;  // 0x0488, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FProspectInfo> Prospects;  // 0x0490, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<FNotification> Notifications;  // 0x04A0, size 0x10
    UPROPERTY() FPendingInventorySwap PendingInventorySwap;  // 0x04B0, size 0x20

    // Not reflected: the engine's scripting cannot see these.
    int32 BacktoHabRetryAttempts;  // 0x00C8
    FReqBackToHab RequestBackToHab;  // 0x00D0

    UFUNCTION(BlueprintCallable) bool CanPerformCurrencyConversion(FCurrencyConversionsRowHandle Conversion, int32 Iterations);  // parameters 0x1D
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_AvailableProspects();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_CharacterLoadout();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ClaimNotificationAttachements(FString NotificationID);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ClaimProspect(FProspectInfo ProspectInfo);  // parameters 0xA0
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_CreateDropship();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_Credits();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_DeleteDropship(int32 Index);  // parameters 0x4
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_DeleteNotification(FString NotificationID);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_Dropships();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ExchangeCurrency(FCurrencyConversionsRowHandle Conversion, int32 Iterations);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_GetCharacterProfile(int32 CharSlot);  // parameters 0x4
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_GetNotifications(bool RequestCompleteList);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_GetUserProfile();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_LeaveProspectByDropship();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_LoadoutInventory();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_MetaInventory();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_MetaResources();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ModifyDropship(int32 Index, FDropshipModification Dropship);  // parameters 0x30
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_PackageLoadout_WithCharacter(FOnlineProfileCharacter OnlineProfileCharacter);  // parameters 0xF0
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_PrepareDropship(int32 Index);  // parameters 0x4
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_PrepareEnvirosuit(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_PreparedLoadout();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ReadNotification(FString NotificationID);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_RemoveMetaItem(UInventory* SourceInventory, int32 SourceSlot, int32 Amount);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_RemovePreparedDropship();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_RemovePreparedEnvirosuit();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_RepairWorkshopItem(FString ItemId);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ReplicateWorkshopItem(FTalentsRowHandle TalentsRowHandle);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_SettleProspect(FString ProspectID, bool SettleProspect);  // parameters 0x11
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_ShiftInventoryItem(UInventory* SourceInventory, UInventory* DestinationInventory, int32 SourceSlot, int32 DestinationSlot, int32 Amount);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_SyncAccountFlags();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_SyncAccountTalents();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_SyncCharacterTalents();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_TalentRefund(FTalentsRowHandle Talent, int32 CharacterSlot);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_UnlockWorkshopItem(FTalentsRowHandle TalentsRowHandle);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_UnpackageLoadout();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_UpdateCharacterProgress();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_UpdateCharacterProspectLocation(EProspectLocation Location);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_UpdateFactionMissionProgress(FFactionMissionsRowHandle Mission, int32 Progress);  // parameters 0x1C
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_UpdateTrackedStats();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_WorkshopPacks();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_Request_WorkshopPurchaseWorkshopPack(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FCharacterLoadout GetCharacterLoadout();  // parameters 0x138
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetCredits();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FDropship> GetDropships();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FMetaItem> GetLoadoutInventory();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FMetaItem> GetMetaInventory();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FMetaResource> GetMetaResources();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FNotification> GetNotifications();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FProspectInfo> GetProspects();  // parameters 0x10
    UFUNCTION() void LoadoutInventoryRequestFailure(const FResLoadoutInventory& Response);  // parameters 0x18
    UFUNCTION() void OnBackToHab(const FResBackToHab& Response);  // parameters 0x1
    UFUNCTION() void OnCharacterLoadoutRequest(const FResGetCharacterLoadout& Response);  // parameters 0x140
    UFUNCTION() void OnClaimNotificationAttachmentsFailure(const FResClaimNotificationAttachments& Response);  // parameters 0x48
    UFUNCTION() void OnClaimNotificationAttachmentsSuccess(const FResClaimNotificationAttachments& Response);  // parameters 0x48
    UFUNCTION() void OnClaimProspectFailure(const FResClaimProspect& Response);  // parameters 0xA8
    UFUNCTION() void OnClaimProspectSuccess(const FResClaimProspect& Response);  // parameters 0xA8
    UFUNCTION() void OnCreateDropshipsRequestFailure(const FResCreateDropship& Response);  // parameters 0x100
    UFUNCTION() void OnCreateDropshipsRequestSuccess(const FResCreateDropship& Response);  // parameters 0x100
    UFUNCTION() void OnDeleteDropshipsRequestFailure(const FResDeleteDropship& Response);  // parameters 0x20
    UFUNCTION() void OnDeleteDropshipsRequestSuccess(const FResDeleteDropship& Response);  // parameters 0x20
    UFUNCTION() void OnDeleteNotificationFailure(const FResDeleteNotification& Response);  // parameters 0x18
    UFUNCTION() void OnDeleteNotificationSuccess(const FResDeleteNotification& Response);  // parameters 0x18
    UFUNCTION() void OnExchangeCurrency(const FResExchangeCurrency& Response);  // parameters 0x18
    UFUNCTION() void OnFactionMissionProgressUpdated(const FResUpdateFactionMissionProgress& Response);  // parameters 0x1
    UFUNCTION() void OnGetAllProspectsFailure(const FResGetAllProspects& Response);  // parameters 0x18
    UFUNCTION() void OnGetAllProspectsSuccess(const FResGetAllProspects& Response);  // parameters 0x18
    UFUNCTION() void OnGetCharacterProfile(const FResGetCharacterProfile& Response);  // parameters 0xF8
    UFUNCTION() void OnGetCreditsRequestFailure(const FResGetCredits& Response);  // parameters 0x8
    UFUNCTION() void OnGetCreditsRequestSuccess(const FResGetCredits& Response);  // parameters 0x8
    UFUNCTION() void OnGetDropshipsRequestFailure(const FResGetDropships& Response);  // parameters 0x18
    UFUNCTION() void OnGetDropshipsRequestSuccess(const FResGetDropships& Response);  // parameters 0x18
    UFUNCTION() void OnGetNotificationsFailure(const FResGetNotifications& Response);  // parameters 0x18
    UFUNCTION() void OnGetNotificationsSuccess(const FResGetNotifications& Response);  // parameters 0x18
    UFUNCTION() void OnGetUserProfile(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION() void OnInventoryRequestFailure(const FResGetMetaInventory& Response);  // parameters 0x20
    UFUNCTION() void OnInventoryRequestSuccess(const FResGetMetaInventory& Response);  // parameters 0x20
    UFUNCTION() void OnLoadoutInventoryRequest(const FResLoadoutInventory& Response);  // parameters 0x18
    UFUNCTION() void OnMetaResourcesRequestFailure(const FResGetMetaResources& Response);  // parameters 0x18
    UFUNCTION() void OnMetaResourcesRequestSuccess(const FResGetMetaResources& Response);  // parameters 0x18
    UFUNCTION() void OnModifyDropshipsRequestFailure(const FResModifyDropship& Response);  // parameters 0x100
    UFUNCTION() void OnModifyDropshipsRequestSuccess(const FResModifyDropship& Response);  // parameters 0x100
    UFUNCTION() void OnOnPackageLoadoutRequestSuccess(const FResPackageLoadout& Response);  // parameters 0x108
    UFUNCTION() void OnPackageLoadoutRequestFailure(const FResPackageLoadout& Response);  // parameters 0x108
    UFUNCTION() void OnPrepareDropshipRequestFailure(const FResSelectDropship& Response);  // parameters 0x8
    UFUNCTION() void OnPrepareDropshipRequestSuccess(const FResSelectDropship& Response);  // parameters 0x8
    UFUNCTION() void OnPrepareEnvirosuitRequestFailure(const FResSelectEnvirosuit& Response);  // parameters 0x60
    UFUNCTION() void OnPrepareEnvirosuitRequestSuccess(const FResSelectEnvirosuit& Response);  // parameters 0x60
    UFUNCTION() void OnPreparedLoadoutRequestFailure(const FResPreparedLoadout& Response);  // parameters 0x50
    UFUNCTION() void OnPreparedLoadoutRequestSuccess(const FResPreparedLoadout& Response);  // parameters 0x50
    UFUNCTION() void OnReadNotificationFailure(const FResReadNotification& Response);  // parameters 0x18
    UFUNCTION() void OnReadNotificationSuccess(const FResReadNotification& Response);  // parameters 0x18
    UFUNCTION() void OnRemoveMetaItemRequestFailure(const FResRemoveMetaInventoryItem& Response);  // parameters 0x20
    UFUNCTION() void OnRemoveMetaItemRequestSuccess(const FResRemoveMetaInventoryItem& Response);  // parameters 0x20
    UFUNCTION() void OnRemovePreparedDropshipRequestFailure(const FResRemoveSelectedDropship& Response);  // parameters 0x8
    UFUNCTION() void OnRemovePreparedDropshipRequestSuccess(const FResRemoveSelectedDropship& Response);  // parameters 0x8
    UFUNCTION() void OnRemovePreparedEnvirosuitRequestFailure(const FResRemoveEnvirosuit& Response);  // parameters 0x60
    UFUNCTION() void OnRemovePreparedEnvirosuitRequestSuccess(const FResRemoveEnvirosuit& Response);  // parameters 0x60
    UFUNCTION() void OnRep_AvailableProspects();
    UFUNCTION() void OnRep_CharacterLoadout();
    UFUNCTION() void OnRep_Credits();
    UFUNCTION() void OnRep_Dropships();
    UFUNCTION() void OnRep_LoadoutInventory();
    UFUNCTION() void OnRep_MetaInventory();
    UFUNCTION() void OnRep_MetaResources();
    UFUNCTION() void OnRep_Notifications();
    UFUNCTION() void OnRep_PreparedDropship();
    UFUNCTION() void OnRep_PreparedEnvirosuit();
    UFUNCTION() void OnRep_PreparedLoadout();
    UFUNCTION() void OnRep_WorkshopPacks();
    UFUNCTION() void OnRepairWorkshopItem(const FResRepairWorkshopItem& Response);  // parameters 0x30
    UFUNCTION() void OnReplicateWorkshopItemFailure(const FResReplicateWorkshopItem& Response);  // parameters 0x30
    UFUNCTION() void OnReplicateWorkshopItemSuccess(const FResReplicateWorkshopItem& Response);  // parameters 0x30
    UFUNCTION() void OnSettleProspectFailure(const FResSettleProspect& Response);  // parameters 0xA8
    UFUNCTION() void OnSettleProspectSuccess(const FResSettleProspect& Response);  // parameters 0xA8
    UFUNCTION() void OnShiftMetaItemRequestFailure(const FResMoveMetaInventoryItem& Response);  // parameters 0x18
    UFUNCTION() void OnShiftMetaItemRequestSuccess(const FResMoveMetaInventoryItem& Response);  // parameters 0x18
    UFUNCTION() void OnSyncAccountFlags(const FResSyncAccountFlags& Response);  // parameters 0x18
    UFUNCTION() void OnSyncAccountTalents(const FResSyncAccountTalents& Response);  // parameters 0x18
    UFUNCTION() void OnSyncCharacterTalents(const FResSyncCharacterTalents& Response);  // parameters 0x18
    UFUNCTION() void OnTalentRefundFailure(const FResTalentRefund& Response);  // parameters 0x30
    UFUNCTION() void OnTalentRefundSuccess(const FResTalentRefund& Response);  // parameters 0x30
    UFUNCTION() void OnTrackedStatsUpdated(const FResUpdateTrackedStats& Response);  // parameters 0x1
    UFUNCTION() void OnUnlockWorkshopItemFailure(const FResUnlockWorkshopItem& Response);  // parameters 0x28
    UFUNCTION() void OnUnlockWorkshopItemSuccess(const FResUnlockWorkshopItem& Response);  // parameters 0x28
    UFUNCTION() void OnUnpackageLoadoutRequestFailure(const FResUnpackageLoadout& Response);  // parameters 0x2
    UFUNCTION() void OnUnpackageLoadoutRequestSuccess(const FResUnpackageLoadout& Response);  // parameters 0x2
    UFUNCTION() void OnUpdateCharacterProgress(const FResUpdateCharacterProgress& Response);  // parameters 0x1
    UFUNCTION() void OnUpdateCharacterProspectLocation(const FResUpdateCharacterProspectLocation& Response);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void PrepareDropship(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PrepareEnvirosuit(UInventory* Inventory, int32 InventorySlot);  // parameters 0xC
    UFUNCTION() void ProcessDropshipDelta(FDropshipDelta DropshipDelta);  // parameters 0xE0
    UFUNCTION() void ProcessInventoryDelta(const FInventoryDelta& InventoryDelta);  // parameters 0x18
    UFUNCTION() void ProcessResourceDelta(TArray<FMetaResource> ResourcesDelta);  // parameters 0x10
    UFUNCTION() void ProcessSwapInventoryDelta(const FInventoryDelta& InventoryDelta);  // parameters 0x18
    UFUNCTION() bool RateLimitCheck(ERateLimitedRequests RequestType);  // parameters 0x2
    UFUNCTION() void RemoveDropship(int32 DropshipID);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_AvailableProspects();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_CharacterLoadout();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ClaimNotificationAttachements(FString NotificationID);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ClaimProspect(FProspectInfo ProspectInfo);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_CreateDropship();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_Credits();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_DeleteDropship(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_DeleteNotification(FString NotificationID);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_Dropships();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ExchangeCurrency(FCurrencyConversionsRowHandle Conversion, int32 Iterations);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_GetCharacterProfile(int32 CharSlot);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_GetNotifications(bool RequestCompleteList);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_GetUserProfile();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_LeaveProspectByDropship();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_LoadoutInventory();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_MetaInventory();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_MetaResources();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ModifyDropship(int32 Index, FDropshipModification Dropship);  // parameters 0x30
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_PackageLoadout();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_PackageLoadout_WithCharacter(FOnlineProfileCharacter OnlineProfileCharacter);  // parameters 0xF0
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_PrepareDropship(int32 Index);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_PrepareEnvirosuit(UInventory* Inventory, int32 Slot);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_PreparedLoadout();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ReadNotification(FString NotificationID);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_RemoveMetaItem(UInventory* SourceInventory, int32 SourceSlot, int32 Amount);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_RemovePreparedDropship();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_RemovePreparedEnvirosuit();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_RepairWorkshopItem(UInventory* SourceInventory, int32 SourceSlot);  // parameters 0xC
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ReplicateWorkshopItem(FTalentsRowHandle TalentsRowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_SettleProspect(FString ProspectID, bool SettleProspect);  // parameters 0x11
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_ShiftInventoryItem(UInventory* SourceInventory, UInventory* DestinationInventory, int32 SourceSlot, int32 DestinationSlot, int32 Amount);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_SyncAccountFlags();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_SyncAccountTalents();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_SyncCharacterTalents();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_TalentRefund(FTalentsRowHandle Talent, int32 CharacterSlot);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_UnlockWorkshopItem(FTalentsRowHandle TalentsRowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_UnpackageLoadout();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_UpdateCharacterProgress();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_UpdateCharacterProspectLocation(EProspectLocation Location);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_UpdateFactionMissionProgress(FFactionMissionsRowHandle Mission, int32 Progress);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_UpdateTrackedStats();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Request_WorkshopPacks();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Request_WorkshopPurchaseWorkshopPack(int32 Index);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_AvailableProspects(FResGetAllProspects Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_CharacterLoadout(FResGetCharacterLoadout Response);  // parameters 0x140
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ClaimNotificationAttachements(FResClaimNotificationAttachments Response);  // parameters 0x48
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ClaimProspect(FResClaimProspect Response);  // parameters 0xA8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_CreateDropship(FResCreateDropship Response);  // parameters 0x100
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_Credits(FResGetCredits Response);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_DeleteDropship(FResDeleteDropship Response);  // parameters 0x20
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_DeleteNotification(FResDeleteNotification Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_Dropships(FResGetDropships Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ExchangeCurrency(FResExchangeCurrency Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_GetCharacterProfile(FResGetCharacterProfile Response);  // parameters 0xF8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_GetNotifications(FResGetNotifications Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_GetUserProfile(FResGetUserProfile Response);  // parameters 0x50
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_LeaveProspectByDropship(FResBackToHab Response);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_LoadoutInventory(FResLoadoutInventory Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_MetaInventory(FResGetMetaInventory Response);  // parameters 0x20
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_MetaResources(FResGetMetaResources Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ModifyDropship(FResModifyDropship Response);  // parameters 0x100
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_PackageLoadout_WithCharacter(FResPackageLoadout Response);  // parameters 0x108
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_PrepareDropship(FResSelectDropship Response);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_PrepareEnvirosuit(FResSelectEnvirosuit Response);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_PreparedLoadout(FResPreparedLoadout Response);  // parameters 0x50
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ReadNotification(FResReadNotification Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_RemoveMetaItem(FResRemoveMetaInventoryItem Response);  // parameters 0x20
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_RemovePreparedDropship(FResRemoveSelectedDropship Response);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_RemovePreparedEnvirosuit(FResRemoveEnvirosuit Response);  // parameters 0x60
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_RepairWorkshopItem(FResRepairWorkshopItem Response);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ReplicateWorkshopItem(FResReplicateWorkshopItem Response);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_SettleProspect(FResSettleProspect Response);  // parameters 0xA8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_ShiftInventoryItem(FResMoveMetaInventoryItem Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_SyncAccountFlags(FResSyncAccountFlags Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_SyncAccountTalents(FResSyncAccountTalents Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_SyncCharacterTalents(FResSyncCharacterTalents Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_TalentRefund(FResTalentRefund Response);  // parameters 0x30
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_UnlockWorkshopItem(FResUnlockWorkshopItem Response);  // parameters 0x28
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_UnpackageLoadout(FResUnpackageLoadout Response);  // parameters 0x2
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_UpdateCharacterProgress(FResUpdateCharacterProgress Response);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_UpdateCharacterProspectLocation(FResUpdateCharacterProspectLocation Response);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_UpdateFactionMissionProgress(FResUpdateFactionMissionProgress Response);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_UpdateTrackedStats(FResUpdateTrackedStats Response);  // parameters 0x1
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_WorkshopPacks(FResGetWorkshopPacks Response);  // parameters 0x18
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Response_WorkshopPurchaseWorkshopPack();
    UFUNCTION(BlueprintCallable) void RetrieveCharacterLoadout();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerClaimProspectResult(bool Success, FProspectInfo ProspectInfo);  // parameters 0xA8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerDropshipCreationResult(bool Success);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerDropshipDeletionResult(bool Success);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerDropshipModificationResult(bool Success);  // parameters 0x1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerLoadoutPackage();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerProspectSettleResult(bool Success, FProspectInfo ProspectInfo);  // parameters 0xA8
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerTalentUnlocked(FTalentsRowHandle Talent, int32 Rank, bool Success);  // parameters 0x1D
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void TriggerWorkshopPurchaseResult(bool Success);  // parameters 0x1
    UFUNCTION() void UpdateSelectedDropship();

    // Virtual functions that start here:
    //   Client_Request_AvailableProspects_Implementation, Client_Request_CharacterLoadout_Implementation
    //   Client_Request_ClaimNotificationAttachements_Implementation
    //   Client_Request_ClaimProspect_Implementation, Client_Request_CreateDropship_Implementation
    //   Client_Request_Credits_Implementation, Client_Request_DeleteDropship_Implementation
    //   Client_Request_DeleteNotification_Implementation, Client_Request_Dropships_Implementation
    //   Client_Request_ExchangeCurrency_Implementation, Client_Request_GetCharacterProfile_Implementation
    //   Client_Request_GetNotifications_Implementation, Client_Request_GetUserProfile_Implementation
    //   Client_Request_LeaveProspectByDropship_Implementation
    //   Client_Request_LoadoutInventory_Implementation, Client_Request_MetaInventory_Implementation
    //   Client_Request_MetaResources_Implementation, Client_Request_ModifyDropship_Implementation
    //   Client_Request_PackageLoadout_WithCharacter_Implementation
    //   Client_Request_PrepareDropship_Implementation, Client_Request_PrepareEnvirosuit_Implementation
    //   Client_Request_PreparedLoadout_Implementation, Client_Request_ReadNotification_Implementation
    //   Client_Request_RemoveMetaItem_Implementation, Client_Request_RemovePreparedDropship_Implementation
    //   Client_Request_RemovePreparedEnvirosuit_Implementation
    //   Client_Request_RepairWorkshopItem_Implementation
    //   Client_Request_ReplicateWorkshopItem_Implementation, Client_Request_SettleProspect_Implementation
    //   Client_Request_ShiftInventoryItem_Implementation, Client_Request_SyncAccountFlags_Implementation
    //   Client_Request_SyncAccountTalents_Implementation
    //   Client_Request_SyncCharacterTalents_Implementation, Client_Request_TalentRefund_Implementation
    //   Client_Request_UnlockWorkshopItem_Implementation, Client_Request_UnpackageLoadout_Implementation
    //   Client_Request_UpdateCharacterProgress_Implementation
    //   Client_Request_UpdateCharacterProspectLocation_Implementation
    //   Client_Request_UpdateFactionMissionProgress_Implementation
    //   Client_Request_UpdateTrackedStats_Implementation, Client_Request_WorkshopPacks_Implementation
    //   Client_Request_WorkshopPurchaseWorkshopPack_Implementation
    //   Request_AvailableProspects_Implementation, Request_CharacterLoadout_Implementation
    //   Request_ClaimNotificationAttachements_Implementation, Request_ClaimProspect_Implementation
    //   Request_CreateDropship_Implementation, Request_Credits_Implementation
    //   Request_DeleteDropship_Implementation, Request_DeleteNotification_Implementation
    //   Request_Dropships_Implementation, Request_ExchangeCurrency_Implementation
    //   Request_GetCharacterProfile_Implementation, Request_GetNotifications_Implementation
    //   Request_GetUserProfile_Implementation, Request_LeaveProspectByDropship_Implementation
    //   Request_LoadoutInventory_Implementation, Request_MetaInventory_Implementation
    //   Request_MetaResources_Implementation, Request_ModifyDropship_Implementation
    //   Request_PackageLoadout_Implementation, Request_PackageLoadout_WithCharacter_Implementation
    //   Request_PrepareDropship_Implementation, Request_PrepareEnvirosuit_Implementation
    //   Request_PreparedLoadout_Implementation, Request_ReadNotification_Implementation
    //   Request_RemoveMetaItem_Implementation, Request_RemovePreparedDropship_Implementation
    //   Request_RemovePreparedEnvirosuit_Implementation, Request_RepairWorkshopItem_Implementation
    //   Request_ReplicateWorkshopItem_Implementation, Request_SettleProspect_Implementation
    //   Request_ShiftInventoryItem_Implementation, Request_SyncAccountFlags_Implementation
    //   Request_SyncAccountTalents_Implementation, Request_SyncCharacterTalents_Implementation
    //   Request_TalentRefund_Implementation, Request_UnlockWorkshopItem_Implementation
    //   Request_UnpackageLoadout_Implementation, Request_UpdateCharacterProgress_Implementation
    //   Request_UpdateCharacterProspectLocation_Implementation
    //   Request_UpdateFactionMissionProgress_Implementation, Request_UpdateTrackedStats_Implementation
    //   Request_WorkshopPacks_Implementation, Request_WorkshopPurchaseWorkshopPack_Implementation
    //   Response_AvailableProspects_Implementation, Response_CharacterLoadout_Implementation
    //   Response_ClaimNotificationAttachements_Implementation, Response_ClaimProspect_Implementation
    //   Response_CreateDropship_Implementation, Response_Credits_Implementation
    //   Response_DeleteDropship_Implementation, Response_DeleteNotification_Implementation
    //   Response_Dropships_Implementation, Response_ExchangeCurrency_Implementation
    //   Response_GetCharacterProfile_Implementation, Response_GetNotifications_Implementation
    //   Response_GetUserProfile_Implementation, Response_LeaveProspectByDropship_Implementation
    //   Response_LoadoutInventory_Implementation, Response_MetaInventory_Implementation
    //   Response_MetaResources_Implementation, Response_ModifyDropship_Implementation
    //   Response_PackageLoadout_WithCharacter_Implementation, Response_PrepareDropship_Implementation
    //   Response_PrepareEnvirosuit_Implementation, Response_PreparedLoadout_Implementation
    //   Response_ReadNotification_Implementation, Response_RemoveMetaItem_Implementation
    //   Response_RemovePreparedDropship_Implementation, Response_RemovePreparedEnvirosuit_Implementation
    //   Response_RepairWorkshopItem_Implementation, Response_ReplicateWorkshopItem_Implementation
    //   Response_SettleProspect_Implementation, Response_ShiftInventoryItem_Implementation
    //   Response_SyncAccountFlags_Implementation, Response_SyncAccountTalents_Implementation
    //   Response_SyncCharacterTalents_Implementation, Response_TalentRefund_Implementation
    //   Response_UnlockWorkshopItem_Implementation, Response_UnpackageLoadout_Implementation
    //   Response_UpdateCharacterProgress_Implementation
    //   Response_UpdateCharacterProspectLocation_Implementation
    //   Response_UpdateFactionMissionProgress_Implementation, Response_UpdateTrackedStats_Implementation
    //   Response_WorkshopPacks_Implementation, Response_WorkshopPurchaseWorkshopPack_Implementation
    //   TriggerClaimProspectResult_Implementation, TriggerDropshipCreationResult_Implementation
    //   TriggerDropshipDeletionResult_Implementation, TriggerDropshipModificationResult_Implementation
    //   TriggerLoadoutPackage_Implementation, TriggerProspectSettleResult_Implementation
    //   TriggerTalentUnlocked_Implementation, TriggerWorkshopPurchaseResult_Implementation
};
