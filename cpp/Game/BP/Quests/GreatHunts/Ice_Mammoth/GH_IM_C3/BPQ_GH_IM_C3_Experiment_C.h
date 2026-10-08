// /Game/BP/Quests/GreatHunts/Ice_Mammoth/GH_IM_C3/BPQ_GH_IM_C3_Experiment.BPQ_GH_IM_C3_Experiment_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_IM_C3_Experiment_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AActor* SpawnedMammoth;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* ArenaTarget;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AnchorTargetKey;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle MovementCheckTimer;  // 0x0488, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_IM_C3_Experiment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTarget(AActor*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAISpawned(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnTakeDamage(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28
    UFUNCTION(BlueprintImplementableEvent) void ReceiveQuestEnded(bool bWasAbandoned);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerAI();
};
