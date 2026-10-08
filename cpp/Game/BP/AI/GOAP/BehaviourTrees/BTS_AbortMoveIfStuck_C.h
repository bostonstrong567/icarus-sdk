// /Game/BP/AI/GOAP/BehaviourTrees/BTS_AbortMoveIfStuck.BTS_AbortMoveIfStuck_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x10C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_AbortMoveIfStuck_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeoutTime;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CMPerSecondTimeoutThreshold;  // 0x00A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeSpentBelowThreshold;  // 0x00A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CurrentlyPlayingMontage;  // 0x00AC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShouldClearKeyOnAbort;  // 0x00AD, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector KeyToClearOnAbort;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastPawnLocation;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName LastFailedMoveTargetLocationKey;  // 0x00E4, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AAIController* AIControllerRef;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* GOAPCharacterRef;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PreviousMovementTarget;  // 0x0100, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTS_AbortMoveIfStuck(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
