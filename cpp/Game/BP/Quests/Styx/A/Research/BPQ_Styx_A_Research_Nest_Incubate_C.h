// /Game/BP/Quests/Styx/A/Research/BPQ_Styx_A_Research_Nest_Incubate.BPQ_Styx_A_Research_Nest_Incubate_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_Styx_A_Research_Nest_Incubate_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AnimalSwarm_C* BPQC_AnimalSwarm;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* Target;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ActivateSpawners;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool DeactivateSpawners;  // 0x0489, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_Styx_A_Research_Nest_Incubate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetClosestCharacter(ABP_IcarusPlayerCharacterSurvival_C*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateSpawners(bool EggValid);  // parameters 0x1
};
