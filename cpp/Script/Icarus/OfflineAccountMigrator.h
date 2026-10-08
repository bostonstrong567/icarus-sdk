// /Script/Icarus.OfflineAccountMigrator
// Derives from: UObject
// size 0x2E8, declared in Icarus/Source/Icarus/Subsystems/Offline/OfflineAccountMigrator.h

UCLASS()
class UOfflineAccountMigrator : public UObject
{
public:
    UPROPERTY(BlueprintReadOnly) EMigrationStep CurrentMigrationStep;  // 0x0028, size 0x1
    UPROPERTY(BlueprintAssignable) FOnMigrationSuccess OnMigrationSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMigrationFailed OnMigrationFailed;  // 0x0040, size 0x10
    UPROPERTY() UGetUserProfileCallbackProxyGen* GetUserProfileCallbackProxy;  // 0x00C8, size 0x8
    UPROPERTY() UGetCharactersCallbackProxyGen* GetCharactersCallbackProxy;  // 0x00D8, size 0x8
    UPROPERTY() UGetAllProspectsCallbackProxyGen* GetProspectsCallbackProxy;  // 0x00E8, size 0x8
    UPROPERTY() UGetProspectCallbackProxyGen* GetProspectCallbackProxy;  // 0x00F8, size 0x8
    UPROPERTY() UGetCharacterLoadoutCallbackProxyGen* GetCharacterLoadoutCallbackProxy;  // 0x0108, size 0x8
    UPROPERTY() UGetLoadoutInventoryCallbackProxyGen* GetLoadoutInventoryCallbackProxy;  // 0x0118, size 0x8
    UPROPERTY() UGetPreparedLoadoutCallbackProxyGen* GetPreparedLoadoutCallbackProxy;  // 0x0128, size 0x8
    UPROPERTY() UGetMetaInventoryCallbackProxyGen* GetMetaInventoryCallbackProxy;  // 0x0138, size 0x8
    UPROPERTY() USyncCharacterTalentsCallbackProxyGen* SyncCharacterTalentsCallbackProxy;  // 0x0148, size 0x8
    UPROPERTY() FOnlineProfileUser DownloadedAccountData;  // 0x0158, size 0x48
    UPROPERTY() FOnlineProfileUser OfflineAccountData;  // 0x01A0, size 0x48
    UPROPERTY() TArray<FOnlineProfileCharacter> DownloadedCharacters;  // 0x01E8, size 0x10
    UPROPERTY() TArray<FProspectInfo> DownloadedProspectInfos;  // 0x01F8, size 0x10
    UPROPERTY() TArray<FOnlineProfileCharacter> OfflineCharacters;  // 0x0250, size 0x10
    UPROPERTY() TArray<FProspectInfo> OfflineProspectInfos;  // 0x0260, size 0x10
    UPROPERTY() TArray<FOnlineProfileCharacter> MergedCharacters;  // 0x02A8, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<IOnlineProspectManagementGen,1> OnlineProspectManagementGenPtr;  // 0x0050, protected
    TSharedPtr<IOnlineProfileGen,1> OnlineProfileGenPtr;  // 0x0060, protected
    TSharedPtr<IOnlineProspectGen,1> OnlineProspectGenPtr;  // 0x0070, protected
    TSharedPtr<IOnlineInventoryGen,1> OnlineInventoryGenPtr;  // 0x0080, protected
    TSharedPtr<IOnlineFactionMissionsGen,1> OnlineFactionMissionsGenPtr;  // 0x0090, protected
    FOfflineProspectManagementIcarus * OfflineProspectManagement;  // 0x00A0, protected
    FOfflineProfileIcarus * OfflineProfile;  // 0x00A8, protected
    FOfflineProspectIcarus * OfflineProspect;  // 0x00B0, protected
    FOfflineInventoryIcarus * OfflineInventory;  // 0x00B8, protected
    FOfflineFactionMissionsIcarus * OfflineFactionMissionsIcarus;  // 0x00C0, protected
    int32 CurrentGetUserProfileAttempt;  // 0x00D0, private
    int32 CurrentGetCharactersAttempt;  // 0x00E0, private
    int32 CurrentGetProspectInfosAttempt;  // 0x00F0, private
    int32 CurrentGetProspectBlobIndex;  // 0x0100, private
    int32 CurrentGetProspectBlobAttempt;  // 0x0104, private
    int32 CurrentGetCharacterLoadoutIndex;  // 0x0110, private
    int32 CurrentGetCharacterLoadoutAttempt;  // 0x0114, private
    int32 CurrentGetLoadoutInventoryAttempt;  // 0x0120, private
    int32 CurrentGetPreparedLoadoutAttempt;  // 0x0130, private
    int32 CurrentGetMetaInventoryAttempt;  // 0x0140, private
    int32 CurrentGetDropInventoryIndex;  // 0x0144, private
    int32 CurrentSyncCharacterTalentsIndex;  // 0x0150, private
    int32 CurrentSyncCharacterTalentsAttempt;  // 0x0154, private
    TArray<TTuple<FString,FProspectBlob>,TSizedDefaultAllocator<32> > DownloadedProspectBlobs;  // 0x0208, private
    TArray<TTuple<int,FCharacterLoadout>,TSizedDefaultAllocator<32> > DownloadedCharacterLoadouts;  // 0x0218, private
    TArray<FMetaItem,TSizedDefaultAllocator<32> > DownloadedLoadoutInventoryItems;  // 0x0228, private
    FInventoryDelta DownloadedMetaInventory;  // 0x0238, private
    TArray<FProspectBlob,TSizedDefaultAllocator<32> > OfflineProspectBlobs;  // 0x0270, private
    TArray<TTuple<int,FCharacterLoadout>,TSizedDefaultAllocator<32> > OfflineCharacterLoadouts;  // 0x0280, private
    FInventoryDelta OfflineMetaInventory;  // 0x0290, private
    TArray<TTuple<int,int>,TSizedDefaultAllocator<32> > CollidedCharacterSlots;  // 0x02B8, private
    int32 CurrentStepIndex;  // 0x02C8, private
    bool bIsOnlineStep;  // 0x02CC, private
    bool bHasInitialisedInterfaces;  // 0x02CD, private
    bool bHasCreatedPlayerData;  // 0x02CE, private
    int32 MigratorVersion;  // 0x02D0, private
    FTimerHandle GetProfileTimeoutHandle;  // 0x02D8, private
    bool bGetProfileTimedout;  // 0x02E0, private

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
