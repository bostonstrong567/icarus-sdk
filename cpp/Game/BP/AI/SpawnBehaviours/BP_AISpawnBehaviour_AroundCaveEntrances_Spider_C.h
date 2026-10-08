// /Game/BP/AI/SpawnBehaviours/BP_AISpawnBehaviour_AroundCaveEntrances_Spider.BP_AISpawnBehaviour_AroundCaveEntrances_Spider_C
// Derives from: UBP_AISpawnBehaviour_AroundCaveEntrances_C > UAISpawnBehaviour > UObject
// size 0x240, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_AISpawnBehaviour_AroundCaveEntrances_Spider_C : public UBP_AISpawnBehaviour_AroundCaveEntrances_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TetherDistance;  // 0x0230, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ApplyRegenOnReturn;  // 0x0234, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TeleportOnReturnIfBlocked;  // 0x0235, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DawnHour;  // 0x0238, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 DuskHour;  // 0x023C, size 0x4

    UFUNCTION() void ExecuteUbergraph_BP_AISpawnBehaviour_AroundCaveEntrances_Spider(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAdditionalSpiderSpawnLocations(FVector Around, FVector& OutLocation, bool& Success);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void InitialiseSpawnBehaviour(const FAutonomousSpawnsRowHandle& InSpawnData);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnCustomProspectStatsUpdated();
    UFUNCTION(BlueprintCallable) void OnSpawnedAI(AActor* AISpawned);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void QueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ShouldCleanupAI(AActor* AI, TArray<AActor*>& ValidPlayers);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool TrySpawnAI(UObject* WorldContextObject);  // parameters 0x9
};
