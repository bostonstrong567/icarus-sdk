// /Game/BP/AI/Bosses/BT/BTTask_PlayMontage.BTTask_PlayMontage_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x129, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PlayMontage_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* Montage;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MontageStartTime;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PlayRate;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPawn* IcarusPawnRef;  // 0x00C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName StartingSection;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAIController* ControllerRef;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* IcarusCharacterRef;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RandomSection;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishOnBlendOut;  // 0x00E1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishImmediately;  // 0x00E2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* MontageToPlay;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SecondaryMontageSection;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryDelay;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayDeviation;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SecondaryTimer;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentSection;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimNotify* CurrentNotify;  // 0x0110, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FScalingRulesEnum SecondaryDelayScaleRule;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AllowInvalidMontage;  // 0x0128, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanSuccessfullyFinishExecute(bool& CanFinish) const;  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BTTask_PlayMontage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMontage(UAnimMontage*& Montage) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSecondaryDelay();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ManualCompletion();
    UFUNCTION(BlueprintCallable) void OnBlendOut_ADF47BDC4F84AE417FDFE595ECA80D65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_ADF47BDC4F84AE417FDFE595ECA80D65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_ADF47BDC4F84AE417FDFE595ECA80D65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnMontageBlendOut();
    UFUNCTION(BlueprintCallable) void OnMontageComplete();
    UFUNCTION(BlueprintCallable) void OnMontageInterrupted();
    UFUNCTION(BlueprintCallable) void OnMontageNotifyBegin(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnMontageNotifyEnd(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_ADF47BDC4F84AE417FDFE595ECA80D65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_ADF47BDC4F84AE417FDFE595ECA80D65(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlaySecondaryMontageSection();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
