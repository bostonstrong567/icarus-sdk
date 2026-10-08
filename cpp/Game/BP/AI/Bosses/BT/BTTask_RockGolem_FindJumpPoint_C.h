// /Game/BP/AI/Bosses/BT/BTTask_RockGolem_FindJumpPoint.BTTask_RockGolem_FindJumpPoint_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x102, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_RockGolem_FindJumpPoint_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpStartLocationKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpEndLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FindNearest;  // 0x0100, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FilterReachable;  // 0x0101, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_RockGolem_FindJumpPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidJumpPoint(AActor* Pawn, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
