// /Game/BP/Quests/Elysium/SideQuests/Courier/BPQ_ELY_SQ_Courier_Fix_Repair_Movement.BPQ_ELY_SQ_Courier_Fix_Repair_Movement_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x474, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Courier_Fix_Repair_Movement_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x0470, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Courier_Fix_Repair_Movement(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
