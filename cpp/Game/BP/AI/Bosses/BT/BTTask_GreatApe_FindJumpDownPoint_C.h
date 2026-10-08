// /Game/BP/AI/Bosses/BT/BTTask_GreatApe_FindJumpDownPoint.BTTask_GreatApe_FindJumpDownPoint_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD9, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_GreatApe_FindJumpDownPoint_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpStartKeyLocation;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Random;  // 0x00D8, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_GreatApe_FindJumpDownPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void JumpPointDownPoint(AActor* Pawn, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
