// /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Derives from: UObject
// size 0x90, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy.h

UCLASS(MinimalAPI)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseQueryResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseQueryResult OnFailure;  // 0x0038, size 0x10
private:
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> InAppPurchaseReadCompleteDelegate;  // 0x0048, not reflected
    FDelegateHandle InAppPurchaseReadCompleteDelegateHandle;  // 0x0058, not reflected
    TSharedPtr<FOnlineProductInformationRead,1> ReadObject;  // 0x0060, not reflected
    bool bFailedToEvenSubmit;  // 0x0070, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0074, not reflected
    bool bSavedWasSuccessful;  // 0x007C, not reflected
    TArray<FInAppPurchaseProductInfo,TSizedDefaultAllocator<32> > SavedProductInformation;  // 0x0080, not reflected
public:
    UFUNCTION(BlueprintCallable) static UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);  // parameters 0x20
};
