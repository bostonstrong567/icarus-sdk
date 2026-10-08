// /Script/Icarus.MatchmakingSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x338, declared in Icarus/Source/Icarus/Subsystems/GameInstance/MatchmakingSubsystem.h

UCLASS()
class UMatchmakingSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY() UCancelFindSessionsCallbackProxy* CancelFindSessionsCallbackProxy;  // 0x0030, size 0x8
    UPROPERTY(BlueprintAssignable) FOnFindServerInstance OnFindFriendInstance;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FFriendSessionsUpdated OnFriendSessionsUpdated;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FOnFriendSessionsCleared OnFriendSessionsCleared;  // 0x0060, size 0x10
    UPROPERTY() UFindFriendSessionCallbackProxy* FindFriendSessionCallbackProxy;  // 0x0078, size 0x8
    UPROPERTY() FString FindFriendUserId;  // 0x0080, size 0x10
    UPROPERTY() TMap<FString, UIcarusSessionResult*> FriendSessions;  // 0x0090, size 0x50
    UPROPERTY(BlueprintAssignable) FOnFindServerInstance OnFindServerInstance;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FDedicatedSessionsUpdated OnDedicatedSessionsUpdated;  // 0x00F0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnDedicatedSessionsCleared OnDedicatedSessionsCleared;  // 0x0100, size 0x10
    UPROPERTY() UFindSessionsCallbackProxyAdvanced* FindSessionsCallbackProxy;  // 0x0118, size 0x8
    UPROPERTY() TArray<UIcarusSessionResult*> MultiplayerSessions;  // 0x0120, size 0x10
    UPROPERTY() AIcarusPlayerController* PlayerController;  // 0x0158, size 0x8
    UPROPERTY() AIcarusPlayerState* PlayerState;  // 0x0160, size 0x8
    UPROPERTY() FIcarusSession ActiveSession;  // 0x0168, size 0x1C0
    UPROPERTY() TArray<UProspectHistoryResult*> ProspectHistory;  // 0x0328, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bSearchAfterCancel;  // 0x0038, private
    bool bClearAfterCancel;  // 0x0039, private
    ESessionSearchType CurrentSearchType;  // 0x003A, private
    bool bSearchingFriendSessions;  // 0x0070, private
    bool bSearchingDedicatedSessions;  // 0x0110, private
    TArray<FFavoriteEntry,TSizedDefaultAllocator<32> > CachedFavoriteList;  // 0x0130, private
    TArray<FSessionsSearchSetting,TSizedDefaultAllocator<32> > DedicatedQueryFilters;  // 0x0140, private
    ESteamSearchType SteamSearchType;  // 0x0150, private

    UFUNCTION(BlueprintCallable) bool AddFavoriteServer(UIcarusSessionResult* Server, bool bIsHistory);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void CancelFindSessions(bool bClearResults, bool bSearchAfter);  // parameters 0x2
    UFUNCTION(BlueprintCallable) FIcarusSession GetActiveSession();  // parameters 0x1C0
    UFUNCTION(BlueprintCallable, BlueprintPure) ESessionSearchType GetCurrentSearchType();  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumTotalDedicatedSessions() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<UProspectHistoryResult*> GetProspectHistory();  // parameters 0x10
    UFUNCTION(BlueprintCallable) TArray<UIcarusSessionResult*> GetSessions(ESessionSearchType SearchType, const FSessionQuery& QuerySettings);  // parameters 0x38
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFavoriteServer(UIcarusSessionResult* Server);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFindDedicatedSessionsRunning() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsFindFriendSessionsRunning() const;  // parameters 0x1
    UFUNCTION() void OnCancelFindSessions();
    UFUNCTION() void OnFindDedicatedSessionsFailure(const TArray<FBlueprintSessionResult>& Result);  // parameters 0x10
    UFUNCTION() void OnFindDedicatedSessionsSuccess(const TArray<FBlueprintSessionResult>& Result);  // parameters 0x10
    UFUNCTION() void OnFindFriendSessionResult(const TArray<FBlueprintSessionResult>& Result);  // parameters 0x10
    UFUNCTION() void OnInstanceReturned(const FBlueprintSessionResult& Result);  // parameters 0x108
    UFUNCTION() void OnPlayerControllerFriendsUpdated(AIcarusPlayerController* RegisteredController);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RefreshDedicatedSessions();
    UFUNCTION(BlueprintCallable) void RefreshFriendSessions();
    UFUNCTION(BlueprintCallable) bool RemoveFavoriteServer(UIcarusSessionResult* Server, bool bIsHistory);  // parameters 0xA
    UFUNCTION(BlueprintCallable) void SetCurrentSearchType(ESessionSearchType SearchType);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDedicatedQueryFilters(const TArray<FSessionsSearchSetting>& InFilters);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetSteamSearchType(ESteamSearchType SearchType);  // parameters 0x1
};
