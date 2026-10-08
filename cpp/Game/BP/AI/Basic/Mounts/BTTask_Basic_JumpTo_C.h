// /Game/BP/AI/Basic/Mounts/BTTask_Basic_JumpTo.BTTask_Basic_JumpTo_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_Basic_JumpTo_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Target;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* CharacterReference;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector StartingLocation;  // 0x00F0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastAlpha;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastXAlpha;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* JumpMontageOverride;  // 0x0108, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EMovementMode> New_Movement_Mode;  // 0x0110, size 0x1, named "New Movement Mode"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AdjustForTargetVelocity;  // 0x0111, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeToReachTarget;  // 0x0114, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_Basic_JumpTo(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMontage(UAnimMontage*& Montage) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnJumpFinished(UAnimMontage* Montage, bool bInterrupted);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void StartJump();
};
