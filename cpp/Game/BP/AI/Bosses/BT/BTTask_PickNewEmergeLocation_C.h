// /Game/BP/AI/Bosses/BT/BTTask_PickNewEmergeLocation.BTTask_PickNewEmergeLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_PickNewEmergeLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> EmergeLocations;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TestActor;  // 0x00C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTargetDistanceToEmergePoint;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ClosestTargetableToEmergePoint;  // 0x00D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClosestTargetableDistance;  // 0x00E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* OutEmergePoint;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector EmergeLocationKey;  // 0x00F0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinimumDistanceToOtherWorms;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_FactionBoss_SandWorm_C*> OtherWorms;  // 0x0120, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceToValidTarget;  // 0x0130, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxSandWormDistanceToEmergePoint;  // 0x0134, size 0x4

    UFUNCTION() void ExecuteUbergraph_BTTask_PickNewEmergeLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
