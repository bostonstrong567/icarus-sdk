// /Game/BP/AI/Bosses/BP_FactionBoss_Controller.BP_FactionBoss_Controller_C
// Derives from: AAIController > AController > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(NotPlaceable, Config=Engine)
class ABP_FactionBoss_Controller_C : public AAIController
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0328, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBlackboardData* DefaultBlackboard;  // 0x0330, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UBehaviorTree* DefaultBehaviourTree;  // 0x0338, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_FactionBoss_Controller(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
