// /Game/BP/AI/Events/BP_AIEvent_SpawnBatDogs.BP_AIEvent_SpawnBatDogs_C
// Derives from: AAIEvent > AActor > UObject
// size 0x284, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_AIEvent_SpawnBatDogs_C : public AAIEvent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SpawnCount;  // 0x0258, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> SpawnLocations;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* TargetActor;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusNPCGOAPCharacter* InstigatorNPC;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxNearbyBatDogLimit;  // 0x0280, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool ArePreconditionsValid(AActor* InInstigatorActor) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void DetermineSpawnCount();
    UFUNCTION() void ExecuteUbergraph_BP_AIEvent_SpawnBatDogs(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) int32 GetNearbyBatDogCount(UObject* Context, FVector WorldLocation) const;  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnQueryFinished(UEnvQueryInstanceBlueprintWrapper* QueryInstance, TEnumAsByte<EEnvQueryStatus> QueryStatus);  // parameters 0x9
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent) void SetupEvent(FAIEventsRowHandle Event, AActor* EventInstigator);  // parameters 0x20
    UFUNCTION(BlueprintImplementableEvent) void TickEvent(float DeltaTime);  // parameters 0x4
};
