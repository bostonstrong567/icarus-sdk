// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes.BP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes_C
// Derives from: UBP_AISpawnBehaviour_AroundPlayers_C > UAISpawnBehaviour > UObject
// size 0x1C8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes_C : public UBP_AISpawnBehaviour_AroundPlayers_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0160, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LocToSpawn;  // 0x0168, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTag TAG_TO_MATCH;  // 0x0174, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagQuery ValidLakeQuery;  // 0x0180, size 0x48

    UFUNCTION(BlueprintCallable) void Cleanup(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void CleanupAI(AActor* AI);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundPlayers_SulphurWormsInLakes(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetNextAIToSpawn(FAISetupEnum& AISetup, TSoftClassPtr<AIcarusActor>& ActorClass) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable) void OnSpawnedAI(AActor* AISpawned);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TrySpawnAsync(AActor* AroundPlayer);  // parameters 0x8
};
