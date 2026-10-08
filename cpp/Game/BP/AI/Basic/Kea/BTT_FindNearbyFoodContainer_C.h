// /Game/BP/AI/Basic/Kea/BTT_FindNearbyFoodContainer.BTT_FindNearbyFoodContainer_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x14E, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindNearbyFoodContainer_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance2D;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool AvoidNearbyPlayers;  // 0x0104, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FoodContainerKey;  // 0x0108, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OnlyAcceptUnshelteredContainers;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle ContainerQuery;  // 0x0134, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SortByPathCost;  // 0x014C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IgnoreUnreachable;  // 0x014D, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTT_FindNearbyFoodContainer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidItem(FVector AroundLocation, float MaxDistance, AIcarusActor*& Item, bool& Success);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void IsLocationFreeFromHostileTargets(FVector Location, bool& FreeFromHostiles);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
