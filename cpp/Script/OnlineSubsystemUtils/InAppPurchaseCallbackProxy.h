// /Script/OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Derives from: UObject
// size 0x80, declared in Engine/Plugins/Online/OnlineSubsystemUtils/Source/OnlineSubsystemUtils/Classes/InAppPurchaseCallbackProxy.h

UCLASS(MinimalAPI)
class UInAppPurchaseCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult OnSuccess;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FInAppPurchaseResult OnFailure;  // 0x0038, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TDelegate<void __cdecl(enum EInAppPurchaseState::Type),FDefaultDelegateUserPolicy> InAppPurchaseCompleteDelegate;  // 0x0048, private
    FDelegateHandle InAppPurchaseCompleteDelegateHandle;  // 0x0058, private
    TSharedPtr<FOnlineInAppPurchaseTransaction,1> PurchaseRequest;  // 0x0060, private
    bool bFailedToEvenSubmit;  // 0x0070, private
    TWeakObjectPtr<UWorld,FWeakObjectPtr> WorldPtr;  // 0x0074, private
    EInAppPurchaseState::Type SavedPurchaseState;  // 0x007C, private

    UFUNCTION(BlueprintCallable) static UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);  // parameters 0x28
};
