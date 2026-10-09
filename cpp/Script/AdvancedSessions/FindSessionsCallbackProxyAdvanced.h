// /Script/AdvancedSessions.FindSessionsCallbackProxyAdvanced
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x130, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/FindSessionsCallbackProxyAdvanced.h

UCLASS()
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintFindSessionsResultDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintFindSessionsResultDelegate OnFailure;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintFindSessionResultDelegate OnResultReturned;  // 0x0050, size 0x10
    TDelegate<bool __cdecl(float),FDefaultDelegateUserPolicy> TickDelegate;  // 0x0060, not reflected
    FDelegateHandle TickDelegateHandle;  // 0x0070, not reflected
    bool bHasCompleted;  // 0x0078, not reflected
private:
    bool bRunSecondSearch;  // 0x0079, not reflected
    bool bIsOnSecondSearch;  // 0x007A, not reflected
    TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32> > SessionSearchResults;  // 0x0080, not reflected
    TQueue<FOnlineSessionSearchResult,1> SessionResults;  // 0x0090, not reflected
    int32 SessionResultCount;  // 0x00A0, not reflected
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x00A4, not reflected
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> Delegate;  // 0x00B0, not reflected
    TDelegate<void __cdecl(FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> ResultDelegate;  // 0x00C0, not reflected
    FDelegateHandle DelegateHandle;  // 0x00D0, not reflected
    FDelegateHandle ResultDelegateHandle;  // 0x00D8, not reflected
    TSharedPtr<FOnlineSessionSearch,0> SearchObject;  // 0x00E0, not reflected
    TSharedPtr<FOnlineSessionSearch,0> SearchObjectDedicated;  // 0x00F0, not reflected
    bool bUseLAN;  // 0x0100, not reflected
    EBPServerPresenceSearchType ServerSearchType;  // 0x0101, not reflected
    int32 MaxResults;  // 0x0104, not reflected
    TArray<FSessionsSearchSetting,TSizedDefaultAllocator<32> > SearchSettings;  // 0x0108, not reflected
    bool bEmptyServersOnly;  // 0x0118, not reflected
    bool bNonEmptyServersOnly;  // 0x0119, not reflected
    bool bSecureServersOnly;  // 0x011A, not reflected
    bool bSearchLobbies;  // 0x011B, not reflected
    int32 MinSlotsAvailable;  // 0x011C, not reflected
    FWeakObjectPtr WorldContextObject;  // 0x0120, not reflected
public:
    UFUNCTION(BlueprintCallable) static void FilterSessionResults(const TArray<FBlueprintSessionResult>& SessionResults, const TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);  // parameters 0x38
    UFUNCTION() bool SessionTick(float DeltaSeconds);  // parameters 0x5

    // Virtual functions that start here:
    //   SessionTick
};
