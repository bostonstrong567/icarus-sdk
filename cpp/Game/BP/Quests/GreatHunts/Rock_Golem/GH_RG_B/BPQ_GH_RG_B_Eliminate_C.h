// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_B/BPQ_GH_RG_B_Eliminate.BPQ_GH_RG_B_Eliminate_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x4A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_B_Eliminate_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool A;  // 0x0470, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool B;  // 0x0471, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x0474, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPawn*> Spawned;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Selected_Player;  // 0x0488, size 0x8, named "Selected Player"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDialogueRowHandle Dialogue;  // 0x0490, size 0x18

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent_1(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CustomEvent_3(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_B_Eliminate(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupWorm(AIcarusPawn* Creature);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TriggerSpawn(AActor* Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TrigggerDialogue(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void WormDamageResetTimer(AActor* DamagedActor, float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void WormDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void WormDeleted(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
};
