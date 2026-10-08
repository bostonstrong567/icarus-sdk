// /Game/BP/Quests/Elysium/SideQuests/Ambush/BPQ_ELY_SQ_Ambush_Report_Leave.BPQ_ELY_SQ_Ambush_Report_Leave_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x471, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Ambush_Report_Leave_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bAreaIsClear;  // 0x0470, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Ambush_Report_Leave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OutsideSpawned(APrebuiltStructure* Structure);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
