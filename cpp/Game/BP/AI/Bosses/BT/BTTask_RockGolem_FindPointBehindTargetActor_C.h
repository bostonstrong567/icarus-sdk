// /Game/BP/AI/Bosses/BT/BTTask_RockGolem_FindPointBehindTargetActor.BTTask_RockGolem_FindPointBehindTargetActor_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x10D, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_RockGolem_FindPointBehindTargetActor_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentTargetActor;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector FoundLocation;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool RequireReachable;  // 0x0100, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Distance;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectionRadius;  // 0x0108, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ProjectToNavigation;  // 0x010C, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_RockGolem_FindPointBehindTargetActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
