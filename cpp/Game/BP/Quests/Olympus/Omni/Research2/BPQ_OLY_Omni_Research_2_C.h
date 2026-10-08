// /Game/BP/Quests/Olympus/Omni/Research2/BPQ_OLY_Omni_Research_2.BPQ_OLY_Omni_Research_2_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x480, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_OLY_Omni_Research_2_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawned_Protector;  // 0x0470, size 0x8, named "Spawned Protector"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawn;  // 0x0478, size 0x8

    UFUNCTION(BlueprintCallable) void BPQ_OLY_Omni_Research_2_AutoGenFunc(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_OLY_Omni_Research_2(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void HandleQuestEvent(FQuestEventsEnum Event, AQuest* Quest);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetFormationOpen(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMammothOpen(bool Open);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnCorpses();
    UFUNCTION(BlueprintCallable) void SpawnFormation();
    UFUNCTION(BlueprintCallable) void SpawnProtector();
    UFUNCTION(BlueprintCallable) void UpdateFormationOpen();
    UFUNCTION(BlueprintCallable) void UpdateMammothOpen();
};
