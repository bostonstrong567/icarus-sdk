// /Game/BP/AI/Basic/Kea/BTT_RemoveRandomItemFromInventory.BTT_RemoveRandomItemFromInventory_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x104, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_RemoveRandomItemFromInventory_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetContainerKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ValidItemQuery;  // 0x00D8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemovedItemsCount;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemovedItemsCountDeviation;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SucceedIfAnyItemsFound;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredItemNum;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumItemsRemoved;  // 0x0100, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_RemoveRandomItemFromInventory(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
