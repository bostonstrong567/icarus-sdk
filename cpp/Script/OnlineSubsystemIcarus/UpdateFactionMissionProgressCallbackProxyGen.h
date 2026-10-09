// /Script/OnlineSubsystemIcarus.UpdateFactionMissionProgressCallbackProxyGen
// Derives from: UOnlineBlueprintCallProxyBase > UBlueprintAsyncActionBase > UObject
// size 0x90, declared in Icarus/Plugins/OnlineSubsystemIcarus/Source/OnlineSubsystemIcarus/Public/IcarusGenerated/CallbackProxy/UpdateFactionMissionProgressCallbackProxyGen.h

UCLASS()
class UUpdateFactionMissionProgressCallbackProxyGen : public UOnlineBlueprintCallProxyBase
{
public:
    UPROPERTY(BlueprintAssignable) FOnUpdateFactionMissionProgressEventSignature OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FOnUpdateFactionMissionProgressEventSignature OnFail;  // 0x0040, size 0x10
private:
    FReqUpdateFactionMissionProgress ReqUpdateFactionMissionProgress;  // 0x0050, not reflected
public:
    UFUNCTION(BlueprintCallable) static UUpdateFactionMissionProgressCallbackProxyGen* UpdateFactionMissionProgress(const FReqUpdateFactionMissionProgress& Request);  // parameters 0x48
};
