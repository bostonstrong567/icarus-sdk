// /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy.h

UCLASS(MinimalAPI)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult OnFailure;  // 0x0038, size 0x10
private:
    TDelegate<void __cdecl(enum EInAppPurchaseState::Type),FDefaultDelegateUserPolicy> InAppPurchaseCompleteDelegate;  // 0x0048, not reflected
    FDelegateHandle InAppPurchaseCompleteDelegateHandle;  // 0x0058, not reflected
    TSharedPtr<FOnlineInAppPurchaseTransaction,1> PurchaseRequest;  // 0x0060, not reflected
    bool bFailedToEvenSubmit;  // 0x0070, not reflected
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0074, not reflected
    EInAppPurchaseState::Type SavedPurchaseState;  // 0x007C, not reflected
public:
    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);  // parameters 0x28
};
