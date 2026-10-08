// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Pawn_WorldSpawner.BP_Pawn_WorldSpawner_C
// Derives from: ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x34C, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Pawn_WorldSpawner_C : public ABP_WorldObject_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FCreatureSpawned CreatureSpawned;  // 0x0328, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<APawn*> SpawnedPawns;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRadius;  // 0x0348, size 0x4

    UFUNCTION(BlueprintCallable) void CreatureSpawned__DelegateSignature();
    UFUNCTION(BlueprintCallable) void CustomEvent_1(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION() void ExecuteUbergraph_BP_Pawn_WorldSpawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnSpawnLocationFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnSpawnedActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnPawns(AActor* Origin);  // parameters 0x8
};
