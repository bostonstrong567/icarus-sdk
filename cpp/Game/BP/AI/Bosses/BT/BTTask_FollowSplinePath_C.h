// /Game/BP/AI/Bosses/BT/BTTask_FollowSplinePath.BTTask_FollowSplinePath_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FollowSplinePath_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SplinePathKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* MovementSpline;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* CharacterRef;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InputKeyLookahead;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentPointProgress;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_Boss_Spline_Path_C* SplinePathActor;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMovingForward;  // 0x0108, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CanMoveBidirectionally;  // 0x0109, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FinishExecuteAtFinalSegment;  // 0x010A, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FallbackMovementSpeed;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceUseInputVector;  // 0x0110, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasFloor;  // 0x0111, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ForceUpdateRotation;  // 0x0112, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RotationInterpSpeed;  // 0x0114, size 0x4

    UFUNCTION(BlueprintCallable) void AttempLinkCrossing(int32 NextSplinePoint, bool& WasSuccessful);  // parameters 0x5
    UFUNCTION() void ExecuteUbergraph_BTTask_FollowSplinePath(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) FVector GetNextMoveDirection();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnMoveCompleted(FAIRequestID RequestID, TEnumAsByte<EPathFollowingResult> Result);  // parameters 0x5
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void UpdateRotationMode();
};
