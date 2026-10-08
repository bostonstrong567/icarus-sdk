// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Drone_Spawner.BP_Drone_Spawner_C
// Derives from: ABP_Faction_Mission_Spawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x4FC, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Drone_Spawner_C : public ABP_Faction_Mission_Spawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0488, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube7;  // 0x0490, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube6;  // 0x0498, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube5;  // 0x04A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube4;  // 0x04A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube3;  // 0x04B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube2;  // 0x04B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube1;  // 0x04C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Cube;  // 0x04C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_DistanceField;  // 0x04D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_IcarusPointLight_C* BP_IcarusPointLight;  // 0x04D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene_Lights;  // 0x04E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x04E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool StartSpawnerActive;  // 0x04F0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName NestBlackboardKey;  // 0x04F4, size 0x8

    UFUNCTION(BlueprintCallable) void AttemptSpawn();
    UFUNCTION() void ExecuteUbergraph_BP_Drone_Spawner(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_DisableDFShadows();
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnCreatureSpawned(AActor* Creature);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
};
