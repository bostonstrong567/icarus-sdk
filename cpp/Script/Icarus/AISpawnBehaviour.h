// /Script/Icarus.AISpawnBehaviour
// Derives from: UObject
// size 0x120, declared in Icarus/Source/Icarus/AI/AISpawnBehaviour.h

UCLASS()
class UAISpawnBehaviour : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FAutonomousSpawnData SpawnData;  // 0x0028, size 0xB8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FAutonomousSpawnsRowHandle SpawnsRowHandle;  // 0x00E0, size 0x18
    UPROPERTY(BlueprintAssignable) FSpawnCompleteSignature SpawnComplete;  // 0x00F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> SpawnedAI;  // 0x0108, size 0x10
private:
    UPROPERTY() TSubclassOf<AIcarusActor> CachedActorSpawnClass;  // 0x0118, size 0x8
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool CanCleanupAI(AActor* AI);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void CleanupAI(AActor* AI);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) bool GetNextAIToSpawn(FAISetupEnum& AISetup, TSoftClassPtr<AIcarusActor>& ActorClass) const;  // parameters 0x39
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void InitialiseSpawnBehaviour(const FAutonomousSpawnsRowHandle& InSpawnData);  // parameters 0x18
    UFUNCTION() void OnSpawnedActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ShouldCleanupAI(AActor* AI, TArray<AActor*>& ValidPlayers);  // parameters 0x19
    UFUNCTION(BlueprintCallable) bool SpawnAI(UObject* WorldContextObject, const FTransform& SpawnTransform, AActor*& SpawnedAI, int32 Level, ESpawnActorCollisionHandlingMethod CollisionHandlingMethod);  // parameters 0x4E
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void TryCleanupIrrelevantAI();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool TrySpawnAI(UObject* WorldContextObject);  // parameters 0x9

    // Virtual functions that start here:
    //   CanCleanupAI_Implementation, CleanupAI_Implementation, GetNextAIToSpawn_Implementation
    //   InitialiseSpawnBehaviour_Implementation, ShouldCleanupAI_Implementation
    //   TryCleanupIrrelevantAI_Implementation
};
