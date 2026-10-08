// /Game/BP/AI/Bosses/BT/BTTask_GreatApe_IsTargetActorBehind.BTTask_GreatApe_IsTargetActorBehind_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x144, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_GreatApe_IsTargetActorBehind_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector CurrentTargetActorKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetIsBehindActorKey;  // 0x00D8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector MaxDistanceKey;  // 0x0100, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceToTarget;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector TargetActorLocation;  // 0x012C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector PawnLocation;  // 0x0138, size 0xC

    UFUNCTION() void ExecuteUbergraph_BTTask_GreatApe_IsTargetActorBehind(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
