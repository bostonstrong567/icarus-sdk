// /Script/Icarus.IcarusResumeSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x400, declared in Icarus/Source/Icarus/Session/IcarusResumeSession.h

UCLASS(MinimalAPI)
class UIcarusResumeSession : public UIcarusSessionBase
{
public:
    UPROPERTY() UResumeProspectCallbackProxyGen* ResumeProspectCallbackProxy;  // 0x0398, size 0x8
    UPROPERTY() TMap<EIcarusResumeConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups;  // 0x03A0, size 0x50
    UPROPERTY() bool bAttemptHostMigration;  // 0x03F8, size 0x1
    UPROPERTY() bool bResumeCancelled;  // 0x03FA, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle ConfirmationDelayHandle;  // 0x03F0, protected
    EResumeStep ResumeStep;  // 0x03F9, protected

    UFUNCTION(BlueprintCallable) static UIcarusResumeSession* IcarusResumeSession(UObject* WorldContextObject, const FProspectInfo& ProspectInfo, APlayerController* PlayerController, FOnlineProfileCharacter OnlineProfileCharacter, UConfirmationPopupBase* InConfirmationPopup, TMap<EIcarusResumeConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups, bool bAttemptHostMigration);  // parameters 0x208
    UFUNCTION() void OnResumeProspectFailure(const FResResumeProspect& Result);  // parameters 0xF8
    UFUNCTION() void OnResumeProspectSuccess(const FResResumeProspect& Result);  // parameters 0xF8
    UFUNCTION() void ResumeCancel();
    UFUNCTION() void ResumeContinue();

    // Virtual functions that start here:
    //   OnResumeProspectFailure, OnResumeProspectSuccess
};
