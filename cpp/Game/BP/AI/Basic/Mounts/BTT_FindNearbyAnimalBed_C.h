// /Game/BP/AI/Basic/Mounts/BTT_FindNearbyAnimalBed.BTT_FindNearbyAnimalBed_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x148, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindNearbyAnimalBed_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle BedQuery;  // 0x0104, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector IgnoreUnreachableKey;  // 0x0120, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_FindNearbyAnimalBed(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidItem(FVector AroundLocation, float MaxDistance, APawn* OwnerPawn, AIcarusActor*& Item, bool& Success);  // parameters 0x21
    UFUNCTION(BlueprintCallable) void IsAnimalBedUnoccupied(AActor* BedActor, APawn* OwnerPawn, bool& Unoccupied);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void IsLocationFreeFromHostileTargets(FVector Location, bool& FreeFromHostiles);  // parameters 0xD
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
