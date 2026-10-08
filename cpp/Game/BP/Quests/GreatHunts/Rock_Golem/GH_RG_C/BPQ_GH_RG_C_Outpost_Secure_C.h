// /Game/BP/Quests/GreatHunts/Rock_Golem/GH_RG_C/BPQ_GH_RG_C_Outpost_Secure.BPQ_GH_RG_C_Outpost_Secure_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x48A, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_GH_RG_C_Outpost_Secure_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Duration;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusPawn*> Worm;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Burrows;  // 0x0488, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool KilledWorms;  // 0x0489, size 0x1

    UFUNCTION(BlueprintCallable) void AddToActive(AIcarusPawn* Worm);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void CanSpawn(bool& bCanSpawn);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CustomEvent_1(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void CustomEvent_3(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BPQ_GH_RG_C_Outpost_Secure(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetClosestPlayer(AActor*& Character);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PlayerToWormCheck(bool& Removed);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void RunFlow();
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TriggerSpawn(AActor* Actor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void WormDeath(UActorState* ActorState);  // parameters 0x8
};
