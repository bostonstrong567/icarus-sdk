// /Game/BP/AI/Bosses/BT/BTTask_GreatApe_FindRunAwayLocation.BTTask_GreatApe_FindRunAwayLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x12C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_GreatApe_FindRunAwayLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector RunAwayKeyLocation;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpTrunkKeyLocation;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector JumpBranchKeyLocation;  // 0x0100, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x0128, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_GreatApe_FindRunAwayLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidRunAwayPoint(AActor* Pawn, bool& Success);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void GetValuesForItem(ABP_GreatApe_Runaway_Location_C* Item);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
