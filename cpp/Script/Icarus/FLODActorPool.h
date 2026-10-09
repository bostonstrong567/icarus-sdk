// /Script/Icarus.FLODActorPool
// Derives from: UObject
// size 0x48, declared in Icarus/Source/Icarus/Systems/FLOD/FLODActorPool.h

UCLASS()
class UFLODActorPool : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TSubclassOf<AActor> ActorClass;  // 0x0028, size 0x8
    UPROPERTY() int32 InstancesInUse;  // 0x0030, size 0x4
    UPROPERTY() int32 InitBucketSize;  // 0x0034, size 0x4
    UPROPERTY() TArray<AActor*> FreeBucket;  // 0x0038, size 0x10
public:
    UFUNCTION(BlueprintCallable) static TSubclassOf<UFLODActorPool> DeterminePoolForActorClass(const TSubclassOf<AActor>& ActorClass);  // parameters 0x10
    UFUNCTION() void OnRetrievedActorDestroyed(AActor* DestroyedActor);  // parameters 0x8

    // Virtual functions that start here:
    //   CreateNewActorImpl, Init, Retrieve
};
