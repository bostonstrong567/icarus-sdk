// /Game/BP/Quests/Components/BPQC_AnimalSwarm.BPQC_AnimalSwarm_C
// Derives from: UActorComponent > UObject
// size 0x1D8, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBPQC_AnimalSwarm_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawns;  // 0x00B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawnsMultiplier;  // 0x00BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxCreatures;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle Creature;  // 0x00C4, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusNPCGOAPCharacter*> NPCs;  // 0x00E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Random_Stream;  // 0x00F0, size 0x8, named "Random Stream"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Target;  // 0x00F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureKilled CreatureKilled;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Item;  // 0x0110, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Player_Max_Number_Scaling;  // 0x011C, size 0x1, named "Player Max Number Scaling"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalCreaturesPerPlayer;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Hard_Creature_Limit;  // 0x0124, size 0x4, named "Hard Creature Limit"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> Creatures;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* SpawnTarget;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinPlayerDistance;  // 0x0140, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x0144, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0148, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spacing;  // 0x014C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x0150, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* QueryTemplate;  // 0x0158, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LevelBonus;  // 0x0160, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform SpawnTransformOverride;  // 0x0170, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator SpawnRotation;  // 0x01A0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreature;  // 0x01AC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureSpawned CreatureSpawned;  // 0x01C8, size 0x10

    UFUNCTION(BlueprintCallable) void AngerNPC(AIcarusNPCGOAPCharacter* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSpawn();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Configure_Distances(float MinPlayerDistance, float MinDistance, float MaxDistance, float Spacing);  // parameters 0x10, named "Configure Distances"
    UFUNCTION(BlueprintCallable) void CreatureKilled__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CreatureSpawned__DelegateSignature(AActor* Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void EQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQC_AnimalSwarm(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void Get_Creature(FAISetupRowHandle& Creature);  // parameters 0x18, named "Get Creature"
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxCreatures(int32& ScaledNumber);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetLevelBonus(int32 LevelBonus);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetTimeBetweenSpawnsMultiplier(float TimeBetweenSpawnsMultiplier);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Setup(float TimeBetweenSpawns, int32 MaxCreatures, FAISetupRowHandle Creature);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetupMultiCreature(float TimeBetweenSpawns, int32 MaxCreatures, TArray<FAISetupRowHandle>& Creature);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetupMultiplayerScaling(bool Player_Max_Number_Scaling, float AdditionalCreaturesPerPlayer, int32 HardLimit);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void SpawnAtCustomLocation();
    UFUNCTION(BlueprintCallable) void SpawnCreature();
    UFUNCTION(BlueprintCallable) void UpdateSpawnTarget(TArray<AActor*>& SpawnTargets);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void UpdateTarget(AActor* Target);  // parameters 0x8
};
