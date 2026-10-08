// /Game/BP/AI/GOAP/BehaviourTrees/BTS_PredictTargetLocation.BTS_PredictTargetLocation_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0x104, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_PredictTargetLocation_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetRef;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActor;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookForwardTarget;  // 0x0100, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTS_PredictTargetLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
