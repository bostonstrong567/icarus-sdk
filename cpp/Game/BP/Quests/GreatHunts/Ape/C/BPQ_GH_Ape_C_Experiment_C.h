// /Game/BP/Quests/GreatHunts/Ape/C/BPQ_GH_Ape_C_Experiment.BPQ_GH_Ape_C_Experiment_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_C_Experiment_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTime;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle StartDialogue;  // 0x0474, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle FailedDialogue;  // 0x048C, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckForRuinedSamples(bool& bHasFailed);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_C_Experiment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InteractedWithDeployable(AIcarusPlayerCharacter* Player, AIcarusActor* Deployable);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InvalidateSamples();
    UFUNCTION(BlueprintCallable) void Reset();
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SampleCollected();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Sort_Scalpel();  // named "Sort Scalpel"
};
