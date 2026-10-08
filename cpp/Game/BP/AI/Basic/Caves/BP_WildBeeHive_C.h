// /Game/BP/AI/Basic/Caves/BP_WildBeeHive.BP_WildBeeHive_C
// Derives from: ABP_Nest_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x400, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WildBeeHive_C : public ABP_Nest_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* BeeNestAudio;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpawnLocation;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* DestructibleMesh;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NumToSpawn;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool HasBeenDestroyed;  // 0x038C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 InitialSpawnCount;  // 0x0390, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedBees;  // 0x0398, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AdditionalSpawnTimer;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NestBlackboardKey;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AggressiveBlackboardKey;  // 0x03B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle SpawnType;  // 0x03C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Destroyed_Mesh_State;  // 0x03D8, size 0x8, named "Destroyed Mesh State"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* DestrucibleMesh;  // 0x03E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CheckPlayersNearbyTimer;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName BeeCurrentTargetKey;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* LastDamagingPlayer;  // 0x03F8, size 0x8

    UFUNCTION(BlueprintCallable) void CheckPlayersNearby();
    UFUNCTION() void ExecuteUbergraph_BP_WildBeeHive(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void NotifyCaveAISpawned(AActor* NewActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnActorDeath_Event(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void OnDestroyedFX();
    UFUNCTION(BlueprintCallable) void OnDestroyedStateUpdated();
    UFUNCTION(BlueprintCallable) void OnRep_HasBeenDestroyed();
    UFUNCTION(BlueprintCallable) void OnSpawnedBeeEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void ReceiveAnyDamage(float Damage, UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnBee(const FVector& Location, FRotator Rotation, bool StartAggressive);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SpawnVisuals();
    UFUNCTION(BlueprintCallable) void StartSpawning();
    UFUNCTION(BlueprintCallable) void StopSpawning();
    UFUNCTION(BlueprintCallable) void TrySpawnAdditionalBees();
};
