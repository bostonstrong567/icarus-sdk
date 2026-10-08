// /Game/BP/AI/Basic/Kea/BTTask_RandomFlight.BTTask_RandomFlight_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x188, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_RandomFlight_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlightDuration;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlightDurationRandomDeviation;  // 0x00B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TargetDir;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastMoveInput;  // 0x00C4, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CompleteFlightTimer;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle NewDirTimer;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredTurnSpeed;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* CharacterRef;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ObstacleAvoidanceTraceDistance;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsPathAheadBlocked;  // 0x00F4, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PathBlockDistance;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastTurnDirection;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetHeight;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TargetHeightRandomDeviation;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredHeight;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightBias;  // 0x010C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxAscendDescendRate;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CurrentZInput;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FirstDirection;  // 0x0118, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementBlendInDuration;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementBlendOutDuration;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> ValidFlightDirections;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTurnMovementDuration;  // 0x0138, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTurnMovementDuration;  // 0x013C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinForwardMovementDuration;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxForwardMovementDuration;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomFlightDuration;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTurnRate;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxRotationPerTurn;  // 0x0150, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator TurnStartingRotation;  // 0x0154, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetFlightHeight;  // 0x0160, size 0x28

    UFUNCTION(BlueprintCallable) void BlendInOutInput(FVector MoveInput, FVector& BlendedInput);  // parameters 0x18
    UFUNCTION() void ExecuteUbergraph_BTTask_RandomFlight(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FinishFlight();
    UFUNCTION(BlueprintCallable) void ForceNewDir();
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetApproximateTerrainDistance(float& Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetCurrentTerrainDistance(float& Distance);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetNextMoveInput(float DeltaSeconds, FVector& DesiredMoveInput);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTurnRate(float& TurnRate, int32& Direction);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void NewDir();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
