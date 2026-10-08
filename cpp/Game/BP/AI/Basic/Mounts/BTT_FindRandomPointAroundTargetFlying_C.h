// /Game/BP/AI/Basic/Mounts/BTT_FindRandomPointAroundTargetFlying.BTT_FindRandomPointAroundTargetFlying_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x10C, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_FindRandomPointAroundTargetFlying_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector InTargetActor;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector OutTargetLocationKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Radius;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Retries;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HeightAbovePoint;  // 0x0108, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTT_FindRandomPointAroundTargetFlying(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PickRandomDirection(AAIController* Controller, APawn* Pawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
