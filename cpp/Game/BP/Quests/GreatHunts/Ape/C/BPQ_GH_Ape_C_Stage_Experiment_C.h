// /Game/BP/Quests/GreatHunts/Ape/C/BPQ_GH_Ape_C_Stage_Experiment.BPQ_GH_Ape_C_Stage_Experiment_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x470, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C_Stage_Experiment_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C_Stage_Experiment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
};
