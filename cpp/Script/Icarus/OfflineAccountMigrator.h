// /Script/Icarus.OfflineAccountMigrator
// Derives from: UObject
// size 0x2E8, declared in Icarus/Source/Icarus/Subsystems/Offline/OfflineAccountMigrator.h

UCLASS()
class UOfflineAccountMigrator : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintReadOnly) EMigrationStep CurrentMigrationStep;  // 0x0028, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMigrationSuccess OnMigrationSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMigrationFailed OnMigrationFailed;  // 0x0040, size 0x10
protected:
    TSharedPtr<IOnlineProspectManagementGen,1> OnlineProspectManagementGenPtr;  // 0x0050, not reflected
    TSharedPtr<IOnlineProfileGen,1> OnlineProfileGenPtr;  // 0x0060, not reflected
    TSharedPtr<IOnlineProspectGen,1> OnlineProspectGenPtr;  // 0x0070, not reflected
    TSharedPtr<IOnlineInventoryGen,1> OnlineInventoryGenPtr;  // 0x0080, not reflected
    TSharedPtr<IOnlineFactionMissionsGen,1> OnlineFactionMissionsGenPtr;  // 0x0090, not reflected
    FOfflineProspectManagementIcarus * OfflineProspectManagement;  // 0x00A0, not reflected
    FOfflineProfileIcarus * OfflineProfile;  // 0x00A8, not reflected
    FOfflineProspectIcarus * OfflineProspect;  // 0x00B0, not reflected
    FOfflineInventoryIcarus * OfflineInventory;  // 0x00B8, not reflected
    FOfflineFactionMissionsIcarus * OfflineFactionMissionsIcarus;  // 0x00C0, not reflected
private:
    UPROPERTY() UGetUserProfileCallbackProxyGen* GetUserProfileCallbackProxy;  // 0x00C8, size 0x8
    int32 CurrentGetUserProfileAttempt;  // 0x00D0, not reflected
    UPROPERTY() UGetCharactersCallbackProxyGen* GetCharactersCallbackProxy;  // 0x00D8, size 0x8
    int32 CurrentGetCharactersAttempt;  // 0x00E0, not reflected
    UPROPERTY() UGetAllProspectsCallbackProxyGen* GetProspectsCallbackProxy;  // 0x00E8, size 0x8
    int32 CurrentGetProspectInfosAttempt;  // 0x00F0, not reflected
    UPROPERTY() UGetProspectCallbackProxyGen* GetProspectCallbackProxy;  // 0x00F8, size 0x8
    int32 CurrentGetProspectBlobIndex;  // 0x0100, not reflected
    int32 CurrentGetProspectBlobAttempt;  // 0x0104, not reflected
    UPROPERTY() UGetCharacterLoadoutCallbackProxyGen* GetCharacterLoadoutCallbackProxy;  // 0x0108, size 0x8
    int32 CurrentGetCharacterLoadoutIndex;  // 0x0110, not reflected
    int32 CurrentGetCharacterLoadoutAttempt;  // 0x0114, not reflected
    UPROPERTY() UGetLoadoutInventoryCallbackProxyGen* GetLoadoutInventoryCallbackProxy;  // 0x0118, size 0x8
    int32 CurrentGetLoadoutInventoryAttempt;  // 0x0120, not reflected
    UPROPERTY() UGetPreparedLoadoutCallbackProxyGen* GetPreparedLoadoutCallbackProxy;  // 0x0128, size 0x8
    int32 CurrentGetPreparedLoadoutAttempt;  // 0x0130, not reflected
    UPROPERTY() UGetMetaInventoryCallbackProxyGen* GetMetaInventoryCallbackProxy;  // 0x0138, size 0x8
    int32 CurrentGetMetaInventoryAttempt;  // 0x0140, not reflected
    int32 CurrentGetDropInventoryIndex;  // 0x0144, not reflected
    UPROPERTY() USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalentsCallbackProxy;  // 0x0148, size 0x8
    int32 CurrentSyncCharacterTalentsIndex;  // 0x0150, not reflected
    int32 CurrentSyncCharacterTalentsAttempt;  // 0x0154, not reflected
    UPROPERTY() FOnlineProfileUser DownloadedAccountData;  // 0x0158, size 0x48
    UPROPERTY() FOnlineProfileUser OfflineAccountData;  // 0x01A0, size 0x48
    UPROPERTY() TArray<FOnlineProfileCharacter> DownloadedCharacters;  // 0x01E8, size 0x10
    UPROPERTY() TArray<FProspectInfo> DownloadedProspectInfos;  // 0x01F8, size 0x10
    TArray<TTuple<FString,FProspectBlob>,TSizedDefaultAllocator<32> > DownloadedProspectBlobs;  // 0x0208, not reflected
    TArray<TTuple<int,FCharacterLoadout>,TSizedDefaultAllocator<32> > DownloadedCharacterLoadouts;  // 0x0218, not reflected
    TArray<FMetaItem,TSizedDefaultAllocator<32> > DownloadedLoadoutInventoryItems;  // 0x0228, not reflected
    FInventoryDelta DownloadedMetaInventory;  // 0x0238, not reflected
    UPROPERTY() TArray<FOnlineProfileCharacter> OfflineCharacters;  // 0x0250, size 0x10
    UPROPERTY() TArray<FProspectInfo> OfflineProspectInfos;  // 0x0260, size 0x10
    TArray<FProspectBlob,TSizedDefaultAllocator<32> > OfflineProspectBlobs;  // 0x0270, not reflected
    TArray<TTuple<int,FCharacterLoadout>,TSizedDefaultAllocator<32> > OfflineCharacterLoadouts;  // 0x0280, not reflected
    FInventoryDelta OfflineMetaInventory;  // 0x0290, not reflected
    UPROPERTY() TArray<FOnlineProfileCharacter> MergedCharacters;  // 0x02A8, size 0x10
    TArray<TTuple<int,int>,TSizedDefaultAllocator<32> > CollidedCharacterSlots;  // 0x02B8, not reflected
    int32 CurrentStepIndex;  // 0x02C8, not reflected
    bool bIsOnlineStep;  // 0x02CC, not reflected
    bool bHasInitialisedInterfaces;  // 0x02CD, not reflected
    bool bHasCreatedPlayerData;  // 0x02CE, not reflected
    int32 MigratorVersion;  // 0x02D0, not reflected
    FTimerHandle GetProfileTimeoutHandle;  // 0x02D8, not reflected
    bool bGetProfileTimedout;  // 0x02E0, not reflected
public:
    UFUNCTION(BlueprintCallable) void BeginMigration(bool bForceMigration);  // parameters 0x1
    UFUNCTION() void GetAllCharactersFailed(const FResGetCharacters& Response);  // parameters 0x18
    UFUNCTION() void GetAllCharactersSuccess(const FResGetCharacters& Response);  // parameters 0x18
    UFUNCTION() void GetAllProspectInfosFailed(const FResGetAllProspects& Response);  // parameters 0x18
    UFUNCTION() void GetAllProspectInfosSuccess(const FResGetAllProspects& Response);  // parameters 0x18
    UFUNCTION() void GetCharacterLoadoutFailed(const FResGetCharacterLoadout& Response);  // parameters 0x140
    UFUNCTION() void GetCharacterLoadoutSuccess(const FResGetCharacterLoadout& Response);  // parameters 0x140
    UFUNCTION() void GetLoadoutInventoryFailed(const FResLoadoutInventory& Response);  // parameters 0x18
    UFUNCTION() void GetLoadoutInventorySuccess(const FResLoadoutInventory& Response);  // parameters 0x18
    UFUNCTION() void GetMetaInventoryFailed(const FResGetMetaInventory& Response);  // parameters 0x20
    UFUNCTION() void GetMetaInventorySuccess(const FResGetMetaInventory& Response);  // parameters 0x20
    UFUNCTION() void GetPreparedLoadoutFailed(const FResPreparedLoadout& Response);  // parameters 0x50
    UFUNCTION() void GetPreparedLoadoutSuccess(const FResPreparedLoadout& Response);  // parameters 0x50
    UFUNCTION() void GetProspectBlobFailed(const FResGetProspect& Response);  // parameters 0xE8
    UFUNCTION() void GetProspectBlobSuccess(const FResGetProspect& Response);  // parameters 0xE8
    UFUNCTION() void GetUserProfileFailed(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION() void GetUserProfileSuccess(const FResGetUserProfile& Response);  // parameters 0x50
    UFUNCTION() void GetUserProfileTimedout();
    UFUNCTION(BlueprintCallable) bool HasAccountDataMigrationBeenPerformed();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SkipMigration();
};
