// /Game/BP/Quests/Elysium/SideQuests/Ambush/BPQ_ELY_SQ_Ambush_Repair_Progress.BPQ_ELY_SQ_Ambush_Repair_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x47C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_SQ_Ambush_Repair_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Fixed;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Unique;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Repaired;  // 0x0478, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckGrid(ABP_Grid_Base_C* Grid, bool& AllRepaired);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_SQ_Ambush_Repair_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
