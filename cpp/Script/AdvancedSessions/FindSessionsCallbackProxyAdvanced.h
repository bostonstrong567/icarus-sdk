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

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<bool __cdecl(float),FDefaultDelegateUserPolicy> TickDelegate;  // 0x0060
    FDelegateHandle TickDelegateHandle;  // 0x0070
    bool bHasCompleted;  // 0x0078
    bool bRunSecondSearch;  // 0x0079, private
    bool bIsOnSecondSearch;  // 0x007A, private
    TArray<FBlueprintSessionResult,TSizedDefaultAllocator<32> > SessionSearchResults;  // 0x0080, private
    TQueue<FOnlineSessionSearchResult,1> SessionResults;  // 0x0090, private
    int32 SessionResultCount;  // 0x00A0, private
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x00A4, private
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> Delegate;  // 0x00B0, private
    TDelegate<void __cdecl(FOnlineSessionSearchResult const &),FDefaultDelegateUserPolicy> ResultDelegate;  // 0x00C0, private
    FDelegateHandle DelegateHandle;  // 0x00D0, private
    FDelegateHandle ResultDelegateHandle;  // 0x00D8, private
    TSharedPtr<FOnlineSessionSearch,0> SearchObject;  // 0x00E0, private
    TSharedPtr<FOnlineSessionSearch,0> SearchObjectDedicated;  // 0x00F0, private
    bool bUseLAN;  // 0x0100, private
    EBPServerPresenceSearchType ServerSearchType;  // 0x0101, private
    int32 MaxResults;  // 0x0104, private
    TArray<FSessionsSearchSetting,TSizedDefaultAllocator<32> > SearchSettings;  // 0x0108, private
    bool bEmptyServersOnly;  // 0x0118, private
    bool bNonEmptyServersOnly;  // 0x0119, private
    bool bSecureServersOnly;  // 0x011A, private
    bool bSearchLobbies;  // 0x011B, private
    int32 MinSlotsAvailable;  // 0x011C, private
    FWeakObjectPtr WorldContextObject;  // 0x0120, private

    UFUNCTION(BlueprintCallable) static void FilterSessionResults(const TArray<FBlueprintSessionResult>& SessionResults, const TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);  // parameters 0x38
    UFUNCTION() bool SessionTick(float DeltaSeconds);  // parameters 0x5

    // Virtual functions that start here:
    //   SessionTick
};
