// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_Prebuilt_WorldSpawner_NPC_Outpost.BP_Prebuilt_WorldSpawner_NPC_Outpost_C
// Derives from: ABP_Prebuilt_WorldSpawner_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x3B8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Prebuilt_WorldSpawner_NPC_Outpost_C : public ABP_Prebuilt_WorldSpawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x03A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasPoppedFlare;  // 0x03A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FlareDelayTime;  // 0x03AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DroneDelayTime;  // 0x03B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BackupDronesToSpawn;  // 0x03B4, size 0x4

    UFUNCTION(BlueprintCallable) void DelayedSummonBackup();
    UFUNCTION() void ExecuteUbergraph_BP_Prebuilt_WorldSpawner_NPC_Outpost(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool GetFirstAliveNPC(AActor*& AliveNPC) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_EnemyDetected();
    UFUNCTION(BlueprintCallable) void OnBackupLocationsFound(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnSpawnedNPCTargetUpdated(AActor* NewTarget);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SpawnDroneBackup();
    UFUNCTION(BlueprintCallable) void TrySpawnAI();
};
