// /Script/AdvancedSessions.GetUserPrivilegeCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x80, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/GetUserPrivilegeCallbackProxy.h

UCLASS()
class UGetUserPrivilegeCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintGetUserPrivilegeDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FEmptyOnlineDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FBPUniqueNetId PlayerUniqueNetID;  // 0x0050, private
    EBPUserPrivileges UserPrivilege;  // 0x0070, private
    UObject * WorldContextObject;  // 0x0078, private

    UFUNCTION(BlueprintCallable) static UGetUserPrivilegeCallbackProxy* GetUserPrivilege(UObject* WorldContextObject, const EBPUserPrivileges& PrivilegeToCheck, const FBPUniqueNetId& PlayerUniqueNetID);  // parameters 0x38
};
