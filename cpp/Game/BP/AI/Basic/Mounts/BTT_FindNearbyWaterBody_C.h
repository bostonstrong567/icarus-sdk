// /Game/BP/AI/Basic/Mounts/BTT_FindNearbyWaterBody.BTT_FindNearbyWaterBody_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindNearbyWaterBody_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearbyDistance;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxBodyDistance;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FWaterSetupRowHandle> ValidSetupTypes;  // 0x0108, size 0x10

    UFUNCTION() void ExecuteUbergraph_BTT_FindNearbyWaterBody(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FindValidLocation(FVector AroundLocation, float MaxDistance, APawn* OwnerPawn, FVector& Location, AActor*& LocationActor, bool& Success);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
