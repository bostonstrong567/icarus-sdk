// /Game/BP/AI/Bosses/BT/BTTask_IceMammoth_BirdSwarm.BTTask_IceMammoth_BirdSwarm_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xB0, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_IceMammoth_BirdSwarm_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BTTask_IceMammoth_BirdSwarm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
