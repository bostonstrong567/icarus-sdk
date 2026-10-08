// /Game/BP/Systems/WorldBoss/BP_WorldBossSpawner_SandwyrmQueen.BP_WorldBossSpawner_SandwyrmQueen_C
// Derives from: ABP_WorldBossSpawner_C > AWorldBossSpawner > AIcarusActor > AActor > UObject
// size 0x391, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_WorldBossSpawner_SandwyrmQueen_C : public ABP_WorldBossSpawner_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0370, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFactionMissionsRowHandle QueenMission;  // 0x0378, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsMissionActive;  // 0x0390, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintPure) void CanSpawnSandWyrmQueen(bool& CanSpawn) const;  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_WorldBossSpawner_SandwyrmQueen(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void IcarusBeginPlay();
    UFUNCTION(BlueprintCallable) void OnWorldStatsUpdated();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) AActor* SpawnBoss();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void UpdateIconVisibility();
};
