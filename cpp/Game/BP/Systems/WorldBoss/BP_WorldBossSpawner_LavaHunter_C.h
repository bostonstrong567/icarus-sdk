// /Game/BP/Systems/WorldBoss/BP_WorldBossSpawner_LavaHunter.BP_WorldBossSpawner_LavaHunter_C
// Derives from: ABP_WorldBossSpawner_C > AWorldBossSpawner > AIcarusActor > AActor > UObject
// size 0x391, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBossSpawner_LavaHunter_C : public ABP_WorldBossSpawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle LavaHunterMission;  // 0x0378, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMissionActive;  // 0x0390, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanSpawnLavaHunter(bool& CanSpawn) const;  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_WorldBossSpawner_LavaHunter(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnFactionMissionChanged(FFactionMissionsRowHandle FactionMission);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnQuestComplete(AQuest* InitialQuest);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnWorldStatsUpdated();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* SpawnBoss();  // parameters 0x8
};
