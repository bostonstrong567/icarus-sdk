// /Game/BP/Quests/Common/BPQ_Common_Clear_Area.BPQ_Common_Clear_Area_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x49C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Common_Clear_Area_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Creature_to_Kill_Count;  // 0x0478, size 0x4, named "Creature to Kill Count"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x047C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Max_Creatures_Spawned_at_a_Time;  // 0x0494, size 0x4, named "Max Creatures Spawned at a Time"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Time_Between_Spawns;  // 0x0498, size 0x4, named "Time Between Spawns"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Common_Clear_Area(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnCreatureKilled();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
