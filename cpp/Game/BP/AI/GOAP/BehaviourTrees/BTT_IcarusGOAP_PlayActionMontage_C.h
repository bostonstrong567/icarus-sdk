// /Game/BP/AI/GOAP/BehaviourTrees/BTT_IcarusGOAP_PlayActionMontage.BTT_IcarusGOAP_PlayActionMontage_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x10A, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_IcarusGOAP_PlayActionMontage_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* MeshRef;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGOAPActionsRowHandle GOAPAction;  // 0x00B8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* MontageToPlay;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OverrideInitialMontageSection;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SecondaryMontageSection;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SecondaryDelay;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DelayDeviation;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Section;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SecondaryTimer;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_IcarusNPCGOAPCharacter_C* GOAPCharRef;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishImmediately;  // 0x0108, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishOnBlendOut;  // 0x0109, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_IcarusGOAP_PlayActionMontage(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSecondaryDelay();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBlendOut_DDFC1BB84168821694EAB4959526218A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_DDFC1BB84168821694EAB4959526218A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_DDFC1BB84168821694EAB4959526218A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_3D149E2642EDF2E7858CF39F8F3947B4(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_DDFC1BB84168821694EAB4959526218A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_DDFC1BB84168821694EAB4959526218A(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlaySecondarySection();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
