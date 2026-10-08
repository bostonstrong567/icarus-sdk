// /Game/BP/AI/GOAP/BehaviourTrees/BTT_GetFollowerMoveLocation.BTT_GetFollowerMoveLocation_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x100, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTT_GetFollowerMoveLocation_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector SquadManagerKey;  // 0x00B0, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ActorMoveTargetKey;  // 0x00D8, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTT_GetFollowerMoveLocation(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecute(AActor* OwnerActor);  // parameters 0x8
};
