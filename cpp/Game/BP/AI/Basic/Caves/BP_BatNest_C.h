// /Game/BP/AI/Basic/Caves/BP_BatNest.BP_BatNest_C
// Derives from: ABP_Nest_Base_C > ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4AC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BatNest_C : public ABP_Nest_Base_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Break;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UDestructibleComponent* DestructibleMesh;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* Smoke;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_010;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_09;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_08;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_07;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_06;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_05;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_04;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_03;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_02;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Attach_01;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* AttachPoints;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SpawnLocation;  // 0x03E0, size 0x8
    UPROPERTY() float Emissive_Intensity_Emission_Brightness_528BA2B14842961B15D9B3B3AEADC802;  // 0x03E8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Emissive_Intensity__Direction_528BA2B14842961B15D9B3B3AEADC802;  // 0x03EC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Emissive_Intensity;  // 0x03F0, size 0x8
    UPROPERTY() float Light_Intensity_Intensity_421BABE64270D0A7266544BF81269576;  // 0x03F8, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> Light_Intensity__Direction_421BABE64270D0A7266544BF81269576;  // 0x03FC, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* Light_Intensity;  // 0x0400, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream RandomStream;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Runtime_NumToSpawn;  // 0x0410, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) bool HasBeenDestroyed;  // 0x0414, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Runtime_InitialSpawnCount;  // 0x0418, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedBats;  // 0x0420, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AdditionalSpawnTimer;  // 0x0430, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NestBlackboardKey;  // 0x0438, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName AggressiveBlackboardKey;  // 0x0440, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle SpawnBatType;  // 0x0448, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* Destroyed_Mesh_State;  // 0x0460, size 0x8, named "Destroyed Mesh State"
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UDestructibleComponent* DM_CRE_Bat_Nest_Cave_DES_DM;  // 0x0468, size 0x8, named "DM CRE Bat Nest Cave DES DM"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UDestructibleMesh* DestrucibleMesh;  // 0x0470, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CheckPlayersNearbyTimer;  // 0x0478, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USceneComponent*> InitialSpawnPoints;  // 0x0480, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* LastDamagingPlayer;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName CurrentTargetKey;  // 0x0498, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Setup_InitalSpawnMin;  // 0x04A0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Setup_InitalSpawnMax;  // 0x04A4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Setup_TotalActive;  // 0x04A8, size 0x4

    UFUNCTION(BlueprintCallable) void CheckPlayersNearby();
    UFUNCTION() void Emissive_Intensity__FinishedFunc();
    UFUNCTION() void Emissive_Intensity__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_BatNest(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION() void Light_Intensity__FinishedFunc();
    UFUNCTION() void Light_Intensity__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintPure) void ModifyRotation(FRotator Input, FRotator& Output);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void NotifyCaveAISpawned(AActor* NewActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnActorDeath_Event(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDamaged_Event(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void OnDestroyedFX();
    UFUNCTION(BlueprintCallable) void OnRep_HasBeenDestroyed();
    UFUNCTION(BlueprintCallable) void OnSpawnedBatEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SpawnBat(const FVector& Location, FRotator Rotation, bool StartAggressive);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void SpawnVisuals();
    UFUNCTION(BlueprintCallable) void StartSpawning();
    UFUNCTION(BlueprintCallable) void StopSpawning();
    UFUNCTION(BlueprintCallable) void TrySpawnAdditionalBats();
};
