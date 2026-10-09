// /Script/Icarus.IcarusSessionBase
// Derives from: UBlueprintAsyncActionBase > UObject
// size 0x398, declared in Icarus/Source/Icarus/Session/IcarusSessionBase.h

UCLASS(MinimalAPI)
class UIcarusSessionBase : public UBlueprintAsyncActionBase
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FIcarusSessionResult OnSuccess;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FIcarusSessionResult OnFailure;  // 0x0040, size 0x10
    bool bIsAutomaticRetryAttempt;  // 0x0050, not reflected
    EErrorCodes ResetCharacterProspectStateErrorCode;  // 0x0388, not reflected
    UPROPERTY() UResetCharacterProspectStateCallbackProxyGen* ResetCharacterProspectStateCallback;  // 0x0390, size 0x8
protected:
    TOptional<enum EErrorCodes> OnCompleteErrorCode;  // 0x0054, not reflected
    FTimerHandle ExecuteConsoleCommandTimerHandle;  // 0x0060, not reflected
    FProspectListRowHandle ProspectRowHandle;  // 0x0068, not reflected
    FIcarusSession IcarusSession;  // 0x0080, not reflected
    FString Options;  // 0x0240, not reflected
    FOnlineProfileCharacter OnlineProfileCharacter;  // 0x0250, not reflected
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> PlayerControllerWeakPtr;  // 0x0340, not reflected
    UPROPERTY(Instanced) UConfirmationPopupBase* ConfirmationPopup;  // 0x0348, size 0x8
    UPROPERTY() UJoinSessionCallbackProxyAdvanced* JoinSessionCallbackProxy;  // 0x0350, size 0x8
    UPROPERTY() UDestroySessionCallbackProxy* DestroySessionCallbackProxy;  // 0x0358, size 0x8
    UPROPERTY() bool bTimeoutSessionNode;  // 0x0360, size 0x1
    UPROPERTY() float SessionNodeTime;  // 0x0364, size 0x4
    UPROPERTY() float SessionNodeMaxTime;  // 0x0368, size 0x4
    TDelegate<bool __cdecl(float),FDefaultDelegateUserPolicy> TickDelegate;  // 0x0370, not reflected
    FDelegateHandle TickDelegateHandle;  // 0x0380, not reflected
public:
    UFUNCTION() void OnDestroyedSessionFailure();
    UFUNCTION() void OnDestroyedSessionSuccess();
    UFUNCTION() void OnJoinedSessionFailure();
    UFUNCTION() void OnJoinedSessionSuccess();
    UFUNCTION() void OnPackagedLoadoutFailure();
    UFUNCTION() void OnPackagedLoadoutSuccess();
    UFUNCTION() void OnPackagedLoadoutUpdated();
    UFUNCTION() void ResetCharacterProspectStateCallbackFailure(const FResResetCharacterProspectState& Response);  // parameters 0x1
    UFUNCTION() void ResetCharacterProspectStateCallbackSuccess(const FResResetCharacterProspectState& Response);  // parameters 0x1
    UFUNCTION() bool SessionTick(float DeltaSeconds);  // parameters 0x5

    // Virtual functions that start here:
    //   Cleanup, JoinSession, OnCompleted, OnDestroyedSessionFailure, OnDestroyedSessionSuccess
    //   OnJoinedSessionFailure, OnJoinedSessionSuccess, OnPackagedLoadoutFailure, OnPackagedLoadoutSuccess
    //   ServerTravel, SessionTick, Setup, ShouldCompleteResetCharacterProspectState, ValidateCharacter
    //   ValidatePlayer, ValidateProspect
};
