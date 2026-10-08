// /Game/BP/AI/Bosses/BT/BTTask_SpawnCeilingProjectileRocks.BTTask_SpawnCeilingProjectileRocks_C
// Derives from: UBTTask_BlueprintBase > UBTTaskNode > UBTNode > UObject
// size 0x118, a blueprint class, blueprint

UCLASS(Config=Game)
class UBTTask_SpawnCeilingProjectileRocks_C : public UBTTask_BlueprintBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* CharacterRef;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle RockSpawnTimer;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 RockSpawnsPerMinute;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomDeviationPercentage;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TotalSpawnDuration;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CompletionTimer;  // 0x00D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> Result_Locations;  // 0x00D8, size 0x10, named "Result Locations"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinCeilingDistance;  // 0x00E8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemsStaticRowHandle ProjectileType;  // 0x00EC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector SpawnLocation;  // 0x0104, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RandomTimerDuration;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialDelayInSeconds;  // 0x0114, size 0x4

    UFUNCTION(BlueprintCallable) void CompleteTask();
    UFUNCTION() void ExecuteUbergraph_BTTask_SpawnCeilingProjectileRocks(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintImplementableEvent) void ReceiveAbort(AActor* OwnerActor);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SpawnNewRock();
};
