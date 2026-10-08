// /Script/AdvancedSessions.AutoLoginUserCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x78, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AutoLoginUserCallbackProxy.h

UCLASS()
class UAutoLoginUserCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    int32 LocalUserNumber;  // 0x0050, private
    TDelegate<void __cdecl(int,bool,FUniqueNetId const &,FString const &),FDefaultDelegateUserPolicy> Delegate;  // 0x0058, private
    FDelegateHandle DelegateHandle;  // 0x0068, private
    UObject * WorldContextObject;  // 0x0070, private

    UFUNCTION(BlueprintCallable) static UAutoLoginUserCallbackProxy* AutoLoginUser(UObject* WorldContextObject, int32 LocalUserNum);  // parameters 0x18
};
