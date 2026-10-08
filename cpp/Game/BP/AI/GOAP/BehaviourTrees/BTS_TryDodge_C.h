// /Game/BP/AI/GOAP/BehaviourTrees/BTS_TryDodge.BTS_TryDodge_C
// Derives from: UBTService_BlueprintBase > UBTService > UBTAuxiliaryNode > UBTNode > UObject
// size 0xE1, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTS_TryDodge_C : public UBTService_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentTargetKey;  // 0x00A0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* ControlledPawnRef;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DotThreshold;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumTargetDodgeDistance;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DodgeLeft;  // 0x00E0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTS_TryDodge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
