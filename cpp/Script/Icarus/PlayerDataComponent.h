// /Script/Icarus.PlayerDataComponent
// Derives from: UActorComponent > UObject
// size 0x568, declared in Icarus/Source/Icarus/PlayerData/PlayerDataComponent.h

UCLASS(Config=Engine)
class UPlayerDataComponent : public UActorComponent
{
public:
    UPROPERTY(BlueprintAssignable) FOnMetaCurrencyChanged OnMetaCurrencyChanged;  // 0x00B0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMetaInventoryChanged OnMetaInventoryChanged;  // 0x00E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnReceivedPlayerLoadout OnReceivedPlayerLoadout;  // 0x00F8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnReceivedPlayerLoadoutExtension OnReceivedPlayerLoadoutExtension;  // 0x0108, size 0x10
    UPROPERTY(BlueprintAssignable) FOnReceivedReturnedItems OnReceivedReturnedItems;  // 0x0118, size 0x10
    UPROPERTY(BlueprintAssignable) FOnResearchWorkshopItemCompleteMC OnResearchWorkshopItemComplete;  // 0x0128, size 0x10
    UPROPERTY(BlueprintAssignable) FOnReplicateWorkshopItemCompleteMC OnReplicateWorkshopItemComplete;  // 0x0138, size 0x10
    UPROPERTY() TArray<FTalentsRowHandle> PendingAccountTalents;  // 0x0558, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FFactionMissionsRowHandle RetryGrantMissionRewardsMission;  // 0x00C0, protected
    int32 RetryGrantMissionRewardsMissionIndex;  // 0x00D8, protected
    bool bRetryGrantMissionRewardsIsCurrentMission;  // 0x00DC, protected
    TWeakObjectPtr<AQuest,FWeakObjectPtr> RetryGrantMissionRewardsInitialQuest;  // 0x00E0, protected
    FPlayerLoadoutData CachedLoadout;  // 0x0148, private
    bool bHasLoadout;  // 0x0528, private
    TArray<FItemData,TSizedDefaultAllocator<32> > PendingLoadoutExtensionItems;  // 0x0530, private
    bool bLoadoutExtensionAddInsurance;  // 0x0540, private
    TArray<FMountSaveData,TSizedDefaultAllocator<32> > PendingLoadoutExtensionMounts;  // 0x0548, private

    UFUNCTION(BlueprintCallable) void AbandonLoadout(FString ProspectId);  // parameters 0x10
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void AddAssociatedProspect(int32 ChrSlot, FAssociatedProspectInfo AssociatedProspectInfo);  // parameters 0xE0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanInsureLoadout(const FPlayerLoadoutData& Loadout) const;  // parameters 0x3E1
    UFUNCTION(BlueprintCallable) bool CanPerformCurrencyConversion(FCurrencyConversionsRowHandle Conversion, int32 Iterations);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) TArray<FItemData> CheckInLoadout(TArray<FItemData> MetaItems, bool bProspectWasExpired, bool bSettleLoadout);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ClaimInsurance(FPlayerLoadoutData& Loadout);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void ClearPendingLoadout();
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientAddMetaItem(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientCommitPendingLoadoutExtension();
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientConsumeMetaResource(FMetaResource MetaResource);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantAccountFlagsByRow(TArray<FAccountFlagsRowHandle> AccountFlags);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantAccountTalents(TArray<FTalentsRowHandle> Talents);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantCharacterFlagsByRow(TArray<FCharacterFlagsRowHandle> CharacterFlags);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantDynamicMissionRewards(int32 Credits, int32 Experience);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantMetaItem(FItemData ItemTemplate);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void ClientGrantMetaItemTemplate(const FItemTemplateRowHandle& ItemTemplateRowHandle);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantMetaResource(FMetaResource MetaResource);  // parameters 0x18
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientGrantMissionRewards(FFactionMissionsRowHandle Mission, int32 MissionIndex, bool bIsCurrentMission, AQuest* InitialQuest);  // parameters 0x28
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientGrantMissionScaledMetaResource(FMetaResource MetaResource);  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool ClientOnly_CanAffordMetaResource(const FMetaResource& MetaResource);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool ClientOnly_CanAffordWorkshopCost(const FWorkshopCost& Cost);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) bool ClientOnly_CanAffordWorkshopCosts(TArray<FWorkshopCost> Costs);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool ClientOnly_PurchaseItemUpdate(const FItemData& Item, TArray<FWorkshopCost> Costs);  // parameters 0x201
    UFUNCTION(BlueprintCallable) bool ClientOnly_PurchaseMetaItem(const FItemTemplateRowHandle& Item, TArray<FWorkshopCost> Costs);  // parameters 0x29
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientPrepareLoadout(int32 ChrSlot, FLastProspectHostInfo HostInfo);  // parameters 0x40
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveReturnedItems(TArray<FItemData> Items);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientRemoveMetaItem(FItemData Item);  // parameters 0x1F0
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientSetLastProspect(FString ProspectId);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void ClientUpdateMetaItem(FItemData Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void Client_PurchaseWorkshopItem(FWorkshopItemsRowHandle WorkshopItem);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Client, Reliable, BlueprintNativeEvent) void Client_ResearchWorkshopItem(FTalentsRowHandle WorkshopTalent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) bool ConvertCurrency(FCurrencyConversionsRowHandle Conversion, int32 Iterations);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) void DeleteLoadout(const FPlayerLoadoutData& Loadout);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) bool GetAllAssociatedProspects(TArray<FAssociatedProspectInfo>& AssociatedProspectInfos, bool bIncludeOutpostsAndOpenWorld);  // parameters 0x12
    UFUNCTION(BlueprintCallable) bool GetAllLoadableProspects(TArray<FAssociatedProspectInfo>& AssociatedProspectInfos);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void GetAllLocalProspectInfos(TArray<FProspectInfo>& ProspectInfos);  // parameters 0x10
    UFUNCTION(BlueprintCallable) int32 GetAvailableMetaResource(FMetaCurrencyRowHandle MetaCurrencyRow);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) bool GetCharacterProfile(int32 ChrSlot, FOnlineProfileCharacter& CharacterProfile);  // parameters 0xF9
    UFUNCTION(BlueprintCallable, BlueprintPure) FPlayerLoadoutData GetCurrentLoadout() const;  // parameters 0x3E0
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetInsuranceClaimTime() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool GetLastProspect(FAssociatedProspectInfo& AssociatedProspectInfo);  // parameters 0xD9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetLoadoutForProspect(const FProspectInfo& Prospect, FPlayerLoadoutData& Loadout) const;  // parameters 0x481
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<FPlayerLoadoutData> GetLoadoutRecords() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FItemData> GetMetaInventoryItems();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool GetPendingLoadout(FPlayerLoadoutData& OutPendingLoadoutData, int32 ChrSlot);  // parameters 0x3E5
    UFUNCTION(BlueprintCallable) TArray<FItemData> GetPendingLoadoutExtensionItems();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<FMountSaveData> GetPendingLoadoutExtensionMounts();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetTimeUntilInsuranceClaimable(const FPlayerLoadoutData& Loadout) const;  // parameters 0x3E4
    UFUNCTION() void HandleProspectExpired(const FProspectInfo& Prospect);  // parameters 0xA0
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLoadout() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasLoadoutForProspect(const FProspectInfo& Prospect) const;  // parameters 0xA1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPendingLoadout() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasPendingLoadoutExtentionRequest() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsCurrentLoadoutEmpty() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsInsuranceClaimable(const FPlayerLoadoutData& Loadout) const;  // parameters 0x3E1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsItemInLoadout(const FItemData& Item) const;  // parameters 0x1F1
    UFUNCTION() void OnBackendMetaResourcesUpdated();
    UFUNCTION() void OnOfflineMetaInventoryChanged();
    UFUNCTION() void OnTalentControllersReady();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void RemoveAssociatedProspect(FString ProspectId);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool RepairWorkshopItem(UInventory* SourceInventory, int32 Location);  // parameters 0xD
    UFUNCTION() void RetryGrantMissionRewards();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerAckReceivedReturnedItems(TArray<FItemData> Items);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerAcknowledgeMissionRewardsReceived(int32 MissionIndex);  // parameters 0x4
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerReceiveLoadout(FPlayerLoadoutData ClientsLoadout);  // parameters 0x3E0
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerReceivePendingLoadoutExtensionItems(TArray<FItemData> RequestedItems, bool bAddInsurance, TArray<FMountSaveData> PendingMounts);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void SetPendingLoadout(const FPlayerLoadoutData& PendingLoadoutData);  // parameters 0x3E0
    UFUNCTION(BlueprintCallable) void SetPendingLoadoutExtensionItems(TArray<FItemData> PendingItems, bool bAddInsurance, TArray<FMountSaveData> PendingMounts);  // parameters 0x28

    // Virtual functions that start here:
    //   AddAssociatedProspect_Implementation, ClientAddMetaItem_Implementation
    //   ClientPrepareLoadout_Implementation, ClientRemoveMetaItem_Implementation
    //   ClientSetLastProspect_Implementation, ClientUpdateMetaItem_Implementation
    //   RemoveAssociatedProspect_Implementation
};
