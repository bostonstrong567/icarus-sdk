// /Game/BP/Quests/Components/BPQC_AdvancedAnimalSwarm.BPQC_AdvancedAnimalSwarm_C
// Derives from: UActorComponent > UObject
// size 0x160, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_AdvancedAnimalSwarm_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> Creatures;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawns;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawnsMultiplier;  // 0x00CC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseCreatures;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusNPCGOAPCharacter_C*> SpawnedNPC_s;  // 0x00D8, size 0x10, named "SpawnedNPC's"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Random_Stream;  // 0x00E8, size 0x8, named "Random Stream"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Enemy_Target;  // 0x00F0, size 0x8, named "Enemy Target"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureKilled CreatureKilled;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Item;  // 0x0108, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalCreaturesPerPlayer;  // 0x0114, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Creature_Limit;  // 0x0118, size 0x4, named "Creature Limit"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinQuerierDistance;  // 0x011C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxQuerierDistance;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spacing;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawn_Target;  // 0x0138, size 0x8, named "Spawn Target"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle AIRelationshipOverride;  // 0x0140, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* QueryTemplate;  // 0x0158, size 0x8

    UFUNCTION(BlueprintCallable) void AngerNPC(AIcarusNPCGOAPCharacter* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSpawn();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Configure_Distances(float MinQuerierDistance, float MaxQuerierDistance, float MinDistance, float MaxDistance, float Spacing);  // parameters 0x14, named "Configure Distances"
    UFUNCTION(BlueprintCallable) void CreatureKilled__DelegateSignature();
    UFUNCTION(BlueprintCallable) void EQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQC_AdvancedAnimalSwarm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceSpawn();
    UFUNCTION(BlueprintCallable) void ForceSpawnGroup();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Creature(FAISetupRowHandle& Creature);  // parameters 0x18, named "Get Creature"
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxCreatures(int32& ScaledNumber);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(float TimeBetweenSpawns, int32 BaseCreatures, float AdditionalCreaturesPerPlayer, int32 Creature_Limit, TArray<FAISetupRowHandle>& Creatures);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void KillRemaningCreatures();
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRelationshipOverride(FAIRelationshipsRowHandle Creatures);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SpawnCreature();
    UFUNCTION(BlueprintCallable) void SpawnGroup();
    UFUNCTION(BlueprintCallable) void UpdateTargets(AActor* EnemyTarget, AActor* Spawn_Target);  // parameters 0x10
};
