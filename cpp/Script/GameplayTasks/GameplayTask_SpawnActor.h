// /Script/GameplayTasks.GameplayTask_SpawnActor
// Derives from: UGameplayTask > UObject
// size 0xA8, declared in Engine/Source/Runtime/GameplayTasks/Classes/Tasks/GameplayTask_SpawnActor.h

UCLASS(MinimalAPI, Config=Game)
class UGameplayTask_SpawnActor : public UGameplayTask
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FGameplayTaskSpawnActorDelegate Success;  // 0x0068, size 0x10
    UPROPERTY(BlueprintAssignable) FGameplayTaskSpawnActorDelegate DidNotSpawn;  // 0x0078, size 0x10
protected:
    FVector CachedSpawnLocation;  // 0x0088, not reflected
    FRotator CachedSpawnRotation;  // 0x0094, not reflected
    UPROPERTY() TSubclassOf<AActor> ClassToSpawn;  // 0x00A0, size 0x8
public:
    UFUNCTION(BlueprintCallable) bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static UGameplayTask_SpawnActor* SpawnActor(TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner, FVector SpawnLocation, FRotator SpawnRotation, TSubclassOf<AActor> Class, bool bSpawnOnlyOnAuthority);  // parameters 0x40

    // Virtual functions that start here:
    //   BeginSpawningActor, FinishSpawningActor
};
