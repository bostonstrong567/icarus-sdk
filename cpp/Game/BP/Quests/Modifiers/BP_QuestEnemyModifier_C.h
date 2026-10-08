// /Game/BP/Quests/Modifiers/BP_QuestEnemyModifier.BP_QuestEnemyModifier_C
// Derives from: UBP_QuestModifierBase_C > UQuestModifierBase > UActorComponent > UObject
// size 0x138, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_QuestEnemyModifier_C : public UBP_QuestModifierBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AnchorTargetKey;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName HostileTargetLocationKey;  // 0x0100, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSubclassOf<UObject>> LoadedAIClasses;  // 0x0108, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedEnemies;  // 0x0118, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EnemiesToSpawn;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SpawnTimerHandle;  // 0x0130, size 0x8

    UFUNCTION(BlueprintCallable) void EnemyDestroyed(AActor* DestroyedActor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_QuestEnemyModifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) TArray<TSoftClassPtr<AActor>> GetAIClasses();  // parameters 0x10
    UFUNCTION(BlueprintCallable) void GetAITarget();
    UFUNCTION(BlueprintCallable) FQuestEnemyModifier GetEnemyModifierData();  // parameters 0x60
    UFUNCTION(BlueprintCallable) void InitQuestListening();
    UFUNCTION(BlueprintCallable) void OnLoaded_E27239C84FEE2ECDA1A4DC9F66E44E3A(TSubclassOf<UObject> Loaded);  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool SpawnEnemy(AIcarusNPCGOAPCharacter*& Enemy);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SpawnTimeTriggered();
    UFUNCTION(BlueprintCallable) void UpdateSpawnTimer();
};
