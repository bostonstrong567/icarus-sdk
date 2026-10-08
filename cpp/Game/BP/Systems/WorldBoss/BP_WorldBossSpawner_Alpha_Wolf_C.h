// /Game/BP/Systems/WorldBoss/BP_WorldBossSpawner_Alpha_Wolf.BP_WorldBossSpawner_Alpha_Wolf_C
// Derives from: ABP_WorldBossSpawner_C > AWorldBossSpawner > AIcarusActor > AActor > UObject
// size 0x4D0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBossSpawner_Alpha_Wolf_C : public ABP_WorldBossSpawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* DenRadius;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube19;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube18;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube17;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube16;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Den_5;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube15;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube14;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube13;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube12;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Den_4;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube11;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube10;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube9;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube8;  // 0x03E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Den_3;  // 0x03F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube7;  // 0x03F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube6;  // 0x0400, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube5;  // 0x0408, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube4;  // 0x0410, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Den_2;  // 0x0418, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube3;  // 0x0420, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube2;  // 0x0428, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube1;  // 0x0430, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x0438, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Den_1;  // 0x0440, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Den_Spawns;  // 0x0448, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_05;  // 0x0450, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_04;  // 0x0458, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_03;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_02;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NavPoint_01;  // 0x0470, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* ValidNavigationPoints;  // 0x0478, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BossSpawn;  // 0x0480, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Root;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusNavigationDirtier* IcarusNavigationDirtier;  // 0x0490, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USceneComponent*> DenSpawnLocations;  // 0x0498, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RandomSeed;  // 0x04A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<ABP_Faction_Mission_Boss_Den_C*> SpawnedDens;  // 0x04B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool FailedToSpawnFollower;  // 0x04C0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UFMODEvent* SpawnedFollowersSound;  // 0x04C8, size 0x8

    UFUNCTION() void ExecuteUbergraph_BP_WorldBossSpawner_Alpha_Wolf(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void IsNavigationValid(bool& IsValid) const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlaySpawnedFollowersAudio(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRandomSeedInitialised(int32 Seed);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PlaySpawnedFollowersEffects();
    UFUNCTION(BlueprintCallable) void ProjectSpawnLocationsToLandscape();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* SpawnBoss();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnDens();
    UFUNCTION(BlueprintCallable) void StartSpawnTimer();
    UFUNCTION(BlueprintCallable) void TrySpawnAggressiveFollowerWolf();
};
