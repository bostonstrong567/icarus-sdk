// /Game/BP/AI/Bosses/BT/BTTask_DestroyAllCreaturesOfType.BTTask_DestroyAllCreaturesOfType_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xBC, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_DestroyAllCreaturesOfType_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorsToDestroy;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DistanceToOwner;  // 0x00B8, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_DestroyAllCreaturesOfType(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
