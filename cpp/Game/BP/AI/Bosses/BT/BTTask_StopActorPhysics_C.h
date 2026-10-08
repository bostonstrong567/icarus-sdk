// /Game/BP/AI/Bosses/BT/BTTask_StopActorPhysics.BTTask_StopActorPhysics_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_StopActorPhysics_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector ActorKey;  // 0x00B0, size 0x28

    UFUNCTION() void ExecuteUbergraph_BTTask_StopActorPhysics(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
