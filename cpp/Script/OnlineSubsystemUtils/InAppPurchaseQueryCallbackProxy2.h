// /Script/OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Derives from: UObject
// size 0x68, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseQueryCallbackProxy2.h

UCLASS(MinimalAPI)
class UInAppPurchaseQueryCallbackProxy2 : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseQuery2Result OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseQuery2Result OnFailure;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0048, private
    bool bSavedWasSuccessful;  // 0x0050, private
    TArray<FOnlineProxyStoreOffer,TSizedDefaultAllocator<32> > SavedProductInformation;  // 0x0058, private

    UFUNCTION(BlueprintCallable) static UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);  // parameters 0x20
};
