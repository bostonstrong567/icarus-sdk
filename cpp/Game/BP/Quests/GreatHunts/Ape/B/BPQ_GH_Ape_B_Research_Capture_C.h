// /Game/BP/Quests/GreatHunts/Ape/B/BPQ_GH_Ape_B_Research_Capture.BPQ_GH_Ape_B_Research_Capture_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_Ape_B_Research_Capture_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawned_AI;  // 0x0478, size 0x8, named "Spawned AI"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_ManualAISpawnPoint_C* Spawner;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle DeathTimer;  // 0x0488, size 0x8

    UFUNCTION(BlueprintCallable) void AISpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent();
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_Ape_B_Research_Capture(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetMissionActor();
    UFUNCTION(BlueprintCallable) void InteractHandler();
    UFUNCTION(BlueprintCallable) void OnActorDeath(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureKilled(AIcarusPlayerCharacter* Player, AIcarusActor* Causer, AActor* Creature, APawn* KillingBlowFromPawn);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
