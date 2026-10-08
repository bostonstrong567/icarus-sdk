// /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Derives from: UObject
// size 0x90, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy.h

UCLASS(MinimalAPI)
class UInAppPurchaseQueryCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseQueryResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseQueryResult OnFailure;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> InAppPurchaseReadCompleteDelegate;  // 0x0048, private
    FDelegateHandle InAppPurchaseReadCompleteDelegateHandle;  // 0x0058, private
    TSharedPtr<FOnlineProductInformationRead,1> ReadObject;  // 0x0060, private
    bool bFailedToEvenSubmit;  // 0x0070, private
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0074, private
    bool bSavedWasSuccessful;  // 0x007C, private
    TArray<FInAppPurchaseProductInfo,TSizedDefaultAllocator<32> > SavedProductInformation;  // 0x0080, private

    UFUNCTION(BlueprintCallable) static UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);  // parameters 0x20
};
