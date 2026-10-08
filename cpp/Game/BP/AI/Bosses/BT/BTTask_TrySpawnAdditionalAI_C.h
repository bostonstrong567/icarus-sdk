// /Game/BP/AI/Bosses/BT/BTTask_TrySpawnAdditionalAI.BTTask_TrySpawnAdditionalAI_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x1A8, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_TrySpawnAdditionalAI_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAISetupRowHandle AI_ToSpawn;  // 0x00B0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FEpicCreaturesRowHandle EpicCreatureRow;  // 0x00C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnScale;  // 0x00E0, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 NearbyRange;  // 0x00EC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) APawn* PawnRef;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RequiredSpawns;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RemainingSpawns;  // 0x00FC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxSpawnsForThisAction;  // 0x0100, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpawnRadius;  // 0x0104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<EMissionDifficulty, AdditionalAddsBTTaskConfig> PerDifficultyConfig;  // 0x0108, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UEnvQuery* EQS;  // 0x0158, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<EEnvQueryRunMode> RunMode;  // 0x0160, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MakeSpawnHostileTowardsNearestPlayer;  // 0x0161, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MakeSpawnHostileTowardsRandomNearbyPlayer;  // 0x0162, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName TargetActorKeyName;  // 0x0164, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NearestHostilePlayerDistance;  // 0x016C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool MakeSpawnHostileTowardsTarget;  // 0x0170, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBlackboardKeySelector HostileTargetActor;  // 0x0178, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName OverrideSpawnLocationSocket;  // 0x01A0, size 0x8

    UFUNCTION(BlueprintCallable) void ConfigureSpawnedAI(AActor* SpawnedAI);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BTTask_TrySpawnAdditionalAI(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetConfigForCurrentDifficulty(AdditionalAddsBTTaskConfig& Config);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMaxAdds(int32& Max);  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetNumNearbyAdds();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SpawnAI(FVector Spawn_Transform_Location);  // parameters 0xC
};
