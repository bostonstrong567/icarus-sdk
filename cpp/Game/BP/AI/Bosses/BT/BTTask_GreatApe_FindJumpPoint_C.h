// /Game/BP/AI/Bosses/BT/BTTask_GreatApe_FindJumpPoint.BTTask_GreatApe_FindJumpPoint_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x12A, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_GreatApe_FindJumpPoint_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpStartKeyLocation;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpTrunkKeyLocation;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpBranch1KeyLocation;  // 0x0100, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Furtherest;  // 0x0128, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Random;  // 0x0129, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_GreatApe_FindJumpPoint(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidJumpPoint(AActor* Pawn, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetValuesForIndex(int32 Index, TArray<ABP_GreatApe_JumpPoint_C*>& Values, bool& Success);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
