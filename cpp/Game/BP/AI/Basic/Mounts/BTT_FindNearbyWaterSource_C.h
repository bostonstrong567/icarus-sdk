// /Game/BP/AI/Basic/Mounts/BTT_FindNearbyWaterSource.BTT_FindNearbyWaterSource_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x130, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindNearbyWaterSource_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FillableContainerKey;  // 0x0108, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_FindNearbyWaterSource(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidItem(FVector AroundLocation, float MaxDistance, APawn* OwnerPawn, AIcarusActor*& Item, bool& Success);  // parameters 0x21
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
