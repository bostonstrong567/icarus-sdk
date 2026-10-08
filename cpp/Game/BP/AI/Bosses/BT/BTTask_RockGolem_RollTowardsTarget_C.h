// /Game/BP/AI/Bosses/BT/BTTask_RockGolem_RollTowardsTarget.BTTask_RockGolem_RollTowardsTarget_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xF8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_RockGolem_RollTowardsTarget_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorOrLocation;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetLocation;  // 0x00D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AcceptableDotThreshold;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AcceptableMaxDistanceToTarget;  // 0x00F4, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_RockGolem_RollTowardsTarget(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
};
