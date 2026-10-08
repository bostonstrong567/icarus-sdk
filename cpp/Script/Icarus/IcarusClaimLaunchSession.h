// /Script/Icarus.IcarusClaimLaunchSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x3E8, declared in Icarus/Source/Icarus/Session/IcarusClaimLaunchSession.h

UCLASS(MinimalAPI)
class UIcarusClaimLaunchSession : public UIcarusSessionBase
{
public:
    UPROPERTY() TMap<EIcarusClaimLaunchConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups;  // 0x0398, size 0x50

    UFUNCTION() void ClaimProspectResult(bool Success, const FProspectInfo& ProspectInfo);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) static UIcarusClaimLaunchSession* IcarusClaimLaunchSession(UObject* WorldContextObject, const FProspectInfo& ProspectInfo, APlayerController* PlayerController, FOnlineProfileCharacter OnlineProfileCharacter, UConfirmationPopupBase* InConfirmationPopup, TMap<EIcarusClaimLaunchConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups);  // parameters 0x200
};
