// /Game/BP/AI/Bosses/BT/BTTask_ScorpionBoss_DisableCarapace.BTTask_ScorpionBoss_DisableCarapace_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0xD8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_ScorpionBoss_DisableCarapace_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector Has_Carapace_Blackboard_Key;  // 0x00B0, size 0x28, named "Has Carapace Blackboard Key"

    UFUNCTION() void ExecuteUbergraph_BTTask_ScorpionBoss_DisableCarapace(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
};
