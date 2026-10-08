// /Game/BP/Behaviours/Modifiers/BP_ModifierState_Enzyme_Elixir.BP_ModifierState_Enzyme_Elixir_C
// Derives from: UBP_Modifier_Base_C > UModifierStateComponent > UActorComponent > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_ModifierState_Enzyme_Elixir_C : public UBP_Modifier_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAISetupRowHandle> Creatures;  // 0x03D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawns;  // 0x03E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeBetweenSpawnsMultiplier;  // 0x03EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BaseCreatures;  // 0x03F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_IcarusNPCGOAPCharacter_C*> SpawnedNPC_s;  // 0x03F8, size 0x10, named "SpawnedNPC's"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Random_Stream;  // 0x0408, size 0x8, named "Random Stream"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Enemy_Target;  // 0x0410, size 0x8, named "Enemy Target"
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureKilled CreatureKilled;  // 0x0418, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Item;  // 0x0428, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AdditionalCreaturesPerPlayer;  // 0x0434, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Creature_Limit;  // 0x0438, size 0x4, named "Creature Limit"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinQuerierDistance;  // 0x043C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxQuerierDistance;  // 0x0440, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistance;  // 0x0444, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0448, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Spacing;  // 0x044C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x0450, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Spawn_Target;  // 0x0458, size 0x8, named "Spawn Target"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAIRelationshipsRowHandle AIRelationshipOverride;  // 0x0460, size 0x18

    UFUNCTION(BlueprintCallable) void AngerNPC(AIcarusNPCGOAPCharacter* NPC);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool CanSpawn();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Configure_Distances(float MinQuerierDistance, float MaxQuerierDistance, float MinDistance, float MaxDistance, float Spacing);  // parameters 0x14, named "Configure Distances"
    UFUNCTION(BlueprintCallable) void CreatureKilled__DelegateSignature();
    UFUNCTION(BlueprintCallable) void EQSComplete(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_ModifierState_Enzyme_Elixir(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxCreatures(int32& ScaledNumber);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(float TimeBetweenSpawns, int32 BaseCreatures, float AdditionalCreaturesPerPlayer, int32 Creature_Limit, TArray<FAISetupRowHandle>& Creatures);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ModifierApplied();  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ModifierTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Select_AITo_Spawn(FAISetupRowHandle& Output);  // parameters 0x18, named "Select AITo Spawn"
    UFUNCTION(BlueprintCallable) void SetRelationshipOverride(FAIRelationshipsRowHandle Creatures);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SpawnCreature();
    UFUNCTION(BlueprintCallable) void SpawnGroup();
    UFUNCTION(BlueprintCallable) void UpdateTargets(AActor* EnemyTarget, AActor* Spawn_Target);  // parameters 0x10
};
