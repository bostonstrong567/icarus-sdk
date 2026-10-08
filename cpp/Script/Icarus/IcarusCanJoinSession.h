// /Script/Icarus.IcarusCanJoinSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x3A0, declared in Icarus/Source/Icarus/Session/IcarusCanJoinSession.h

UCLASS(MinimalAPI)
class UIcarusCanJoinSession : public UIcarusSessionBase
{
public:
    UPROPERTY() UCanJoinProspectCallbackProxyGen* CanJoinProspectCallbackProxy;  // 0x0398, size 0x8

    UFUNCTION(BlueprintCallable) static UIcarusCanJoinSession* IcarusCanJoinSession(UObject* WorldContextObject, const FProspectInfo& ProspectInfo, APlayerController* PlayerController);  // parameters 0xB8
    UFUNCTION() void OnCanJoinProspectFailure(const FResCanJoinProspect& Result);  // parameters 0x1
    UFUNCTION() void OnCanJoinProspectSuccess(const FResCanJoinProspect& Result);  // parameters 0x1

    // Virtual functions that start here:
    //   OnCanJoinProspectFailure, OnCanJoinProspectSuccess
};
