// /Script/Icarus.IcarusResumeSession
// Derives from: UIcarusSessionBase > UBlueprintAsyncActionBase > UObject
// size 0x400, declared in Icarus/Source/Icarus/Session/IcarusResumeSession.h

UCLASS(MinimalAPI)
class UIcarusResumeSession : public UIcarusSessionBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() UResumeProspectCallbackProxyGen* ResumeProspectCallbackProxy;  // 0x0398, size 0x8
    UPROPERTY() TMap<EIcarusResumeConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups;  // 0x03A0, size 0x50
    FTimerHandle ConfirmationDelayHandle;  // 0x03F0, not reflected
    UPROPERTY() bool bAttemptHostMigration;  // 0x03F8, size 0x1
    EResumeStep ResumeStep;  // 0x03F9, not reflected
    UPROPERTY() bool bResumeCancelled;  // 0x03FA, size 0x1
public:
    UFUNCTION(BlueprintCallable) static UIcarusResumeSession* IcarusResumeSession(UObject* WorldContextObject, const FProspectInfo& ProspectInfo, APlayerController* PlayerController, FOnlineProfileCharacter OnlineProfileCharacter, UConfirmationPopupBase* InConfirmationPopup, TMap<EIcarusResumeConfirmationStep, FConfirmationPopupDetails> ConfirmationSetups, bool bAttemptHostMigration);  // parameters 0x208
    UFUNCTION() void OnResumeProspectFailure(const FResResumeProspect& Result);  // parameters 0xF8
    UFUNCTION() void OnResumeProspectSuccess(const FResResumeProspect& Result);  // parameters 0xF8
    UFUNCTION() void ResumeCancel();
    UFUNCTION() void ResumeContinue();

    // Virtual functions that start here:
    //   OnResumeProspectFailure, OnResumeProspectSuccess
};
