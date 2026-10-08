// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Incubate_Eggs.BPQ_Styx_A_Research_Nest_Incubate_Eggs_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Incubate_Eggs_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 Eggs_Remaining;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FStatsEnum> Required_Stats;  // 0x0490, size 0x10, named "Required Stats"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Research_Nest_Incubate_Eggs(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
};
