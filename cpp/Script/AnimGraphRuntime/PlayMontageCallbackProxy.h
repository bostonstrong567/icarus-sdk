// /Script/AnimGraphRuntime.PlayMontageCallbackProxy
// Derives from: UObject
// size 0xA8, declared in Engine/Source/Runtime/AnimGraphRuntime/Public/PlayMontageCallbackProxy.h

UCLASS(MinimalAPI)
class UPlayMontageCallbackProxy : public UObject
{
public:
    UPROPERTY(BlueprintAssignable) FOnMontagePlayDelegate OnCompleted;  // 0x0028, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMontagePlayDelegate OnBlendOut;  // 0x0038, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMontagePlayDelegate OnInterrupted;  // 0x0048, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMontagePlayDelegate OnNotifyBegin;  // 0x0058, size 0x10
    UPROPERTY(BlueprintAssignable) FOnMontagePlayDelegate OnNotifyEnd;  // 0x0068, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TWeakObjectPtr<UAnimInstance,FWeakObjectPtr> AnimInstancePtr;  // 0x0078, private
    int32 MontageInstanceID;  // 0x0080, private
    uint32 : 1 bInterruptedCalledBeforeBlendingOut;  // 0x0084, private
    TDelegate<void __cdecl(UAnimMontage *,bool),FDefaultDelegateUserPolicy> BlendingOutDelegate;  // 0x0088, private
    TDelegate<void __cdecl(UAnimMontage *,bool),FDefaultDelegateUserPolicy> MontageEndedDelegate;  // 0x0098, private

    UFUNCTION(BlueprintCallable) static UPlayMontageCallbackProxy* CreateProxyObjectForPlayMontage(USkeletalMeshComponent* InSkeletalMeshComponent, UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, FName StartingSection);  // parameters 0x28
    UFUNCTION() void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION() void OnMontageEnded(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION() void OnNotifyBeginReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);  // parameters 0x28
    UFUNCTION() void OnNotifyEndReceived(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);  // parameters 0x28
};
