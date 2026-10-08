// /Script/AdvancedSteamSessions.SteamWSRequestUGCDetailsCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x88, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/SteamWSRequestUGCDetailsCallbackProxy.h

UCLASS(MinimalAPI)
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintWorkshopDetailsDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintWorkshopDetailsDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    CCallResult<USteamWSRequestUGCDetailsCallbackProxy,SteamUGCQueryCompleted_t> m_callResultUGCRequestDetails;  // 0x0050, private
    FBPSteamWorkshopID WorkShopID;  // 0x0078, private
    UObject * WorldContextObject;  // 0x0080, private

    UFUNCTION(BlueprintCallable) static USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(UObject* WorldContextObject, FBPSteamWorkshopID WorkShopID);  // parameters 0x18
};
