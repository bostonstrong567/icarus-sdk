// /Game/BP/AI/GOAP/BehaviourTrees/BTTask_FindNearestPlayer.BTTask_FindNearestPlayer_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xE1, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_FindNearestPlayer_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x00B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector TargetActorKey;  // 0x00B8, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FailIfNoPlayerFound;  // 0x00E0, size 0x1

    UFUNCTION() void ExecuteUbergraph_BTTask_FindNearestPlayer(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
