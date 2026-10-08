// /Script/Icarus.IcarusJoinSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x3D8, declared in Icarus/Source/Icarus/Session/IcarusJoinSession.h

UCLASS(MinimalAPI)
class UIcarusJoinSession : public UIcarusSessionBase
{
public:
    UPROPERTY() UJoinProspectCallbackProxyGen* JoinProspectCallbackProxy;  // 0x0378, size 0x8
    UPROPERTY() TMap<EIcarusJoinConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups;  // 0x0380, size 0x50
    UPROPERTY() bool bJoinCancelled;  // 0x03D0, size 0x1
    UPROPERTY() bool bJoiningDedicated;  // 0x03D1, size 0x1

    UFUNCTION(BlueprintCallable) static UIcarusJoinSession* IcarusJoinSession(UObject* WorldContextObject, const FIcarusSession& IcarusSession, APlayerController* PlayerController, FOnlineProfileCharacter OnlineProfileCharacter, UConfirmationPopupBase* InConfirmationPopup, TMap<EIcarusJoinConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups, FString Options);  // parameters 0x310
    UFUNCTION() void OnConfirmationCancel();
    UFUNCTION() void OnJoinProspectFailure(const FResJoinProspect& Result);  // parameters 0xA8
    UFUNCTION() void OnJoinProspectSuccess(const FResJoinProspect& Result);  // parameters 0xA8

    // Virtual functions that start here:
    //   FriendCheck, OnJoinProspectFailure, OnJoinProspectSuccess
};
