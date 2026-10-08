// /Game/BP/Quests/Elysium/Story/Story1/BPQ_ELY_Story_1_Beacon_Defend_Progress.BPQ_ELY_Story_1_Beacon_Defend_Progress_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_ELY_Story_1_Beacon_Defend_Progress_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBPQC_AdvancedAnimalSwarm_C* BPQC_AdvancedAnimalSwarm;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxScanTime;  // 0x0478, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Delta_Seconds;  // 0x047C, size 0x4, named "Delta Seconds"
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool InRange;  // 0x0480, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0484, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Character;  // 0x0488, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* ToSet;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AQuestMarker*> Spawners;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AQuestMarker* SpawnerLocation;  // 0x04A8, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_ELY_Story_1_Beacon_Defend_Progress(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindTargetActor(AActor* Target, AIcarusPlayerCharacter*& Character);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnCreatureKilled(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
