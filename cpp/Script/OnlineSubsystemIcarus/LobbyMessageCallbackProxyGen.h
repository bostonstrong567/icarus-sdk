// /Script/OnlineSubsystemIcarus.LobbyMessageCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/LobbyMessageCallbackProxyGen.h

UCLASS()
class ULobbyMessageCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnLobbyMessageEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnLobbyMessageEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqLobbyMessage ReqLobbyMessage;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static ULobbyMessageCallbackProxyGen* LobbyMessage(const FReqLobbyMessage& Request);  // parameters 0x48
};
