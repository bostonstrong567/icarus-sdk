// /Game/BP/AI/GOAP/BehaviourTrees/BTT_TransitionStance.BTT_TransitionStance_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xC8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_TransitionStance_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPCharacterStance TargetStance;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsScared;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPCharacterStance CurrentStance;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* TransitionMontageToPlay;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPCharacter_C* OwningCharRef;  // 0x00C0, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTT_TransitionStance(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBlendOut_2F39B60B415EED7B9297DF9280CFD41D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_2F39B60B415EED7B9297DF9280CFD41D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_2F39B60B415EED7B9297DF9280CFD41D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_2F39B60B415EED7B9297DF9280CFD41D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_2F39B60B415EED7B9297DF9280CFD41D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
