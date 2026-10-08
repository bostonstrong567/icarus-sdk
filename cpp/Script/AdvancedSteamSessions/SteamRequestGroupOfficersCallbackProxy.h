// /Script/AdvancedSteamSessions.SteamRequestGroupOfficersCallbackProxy
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0xA0, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/SteamRequestGroupOfficersCallbackProxy.h

UCLASS(MinimalAPI)
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FBlueprintGroupOfficerDetailsDelegate OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FBlueprintGroupOfficerDetailsDelegate OnFailure;  // 0x0040, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    CCallResult<USteamRequestGroupOfficersCallbackProxy,ClanOfficerListResponse_t> m_callResultGroupOfficerRequestDetails;  // 0x0050, private
    FBPUniqueNetId GroupUniqueID;  // 0x0078, private
    UObject * WorldContextObject;  // 0x0098, private

    UFUNCTION(BlueprintCallable) static USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(UObject* WorldContextObject, FBPUniqueNetId GroupUniqueNetID);  // parameters 0x30
};
