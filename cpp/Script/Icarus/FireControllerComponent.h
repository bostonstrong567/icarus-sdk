// /Script/Icarus.FireControllerComponent
// Derives from: UActorComponent > UObject
// size 0x148, declared in Icarus/Source/Icarus/Systems/Disaster/FireControllerComponent.h

UCLASS(Config=Engine)
class UFireControllerComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AFireInstance> FireInstanceClass;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AFireInstanceShadow> FireInstanceShadowClass;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle CanIgniteFireQueryRowHandle;  // 0x00C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<AFireInstance*> ActiveFireInstances;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<AFireInstanceShadow*> ActiveFireInstanceShadows;  // 0x00F0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UFlammableInstance*> ActiveFlammableInstances;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UFlammableInstance*> DynamicInstances;  // 0x0110, size 0x10
    UPROPERTY(EditAnywhere) bool bReplicatedStatesDirty;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<TSubclassOf<UFlammableComponent>> DebugFlammableClasses;  // 0x0128, size 0x10
    UPROPERTY(EditAnywhere) int32 CurrentFlammableInstanceIndex;  // 0x0138, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    int32 LastActiveFireIndexBoundsChecked;  // 0x00E8, protected
    TUniquePtr<FFlammableInstanceOctree,TDefaultDelete<FFlammableInstanceOctree> > InstancesOctree;  // 0x0140, protected

    UFUNCTION(BlueprintCallable) static TArray<TSubclassOf<UObject>> GetAllFlammableComponentClasses();  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool GetDebugFlammableState(TSubclassOf<UFlammableComponent> FlammableClass);  // parameters 0x9
    UFUNCTION() TArray<AFireInstance*> GetFireInstancesIntersectingBoundsBatch(const FBoxSphereBounds& Bounds);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UFlammableInstance*> GetFlammableInstancesIntersectingBounds(const FBoxSphereBounds& Bounds) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable) TArray<UFlammableInstance*> GetFlammableInstancesWithinBiome(FBiomesRowHandle Biome);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsDebugDisableFiresEnabled() const;  // parameters 0x1
    UFUNCTION() void OnFireInstanceDestroyed(AActor* DestroyedFireInstance);  // parameters 0x8
    UFUNCTION() void OnFireInstanceShadowDestroyed(AActor* DestroyedFireInstance);  // parameters 0x8
    UFUNCTION() void OnFlammableInstanceState_Combusting_Enter(UFlammableInstance* Instance, UFlammableState* FlammableState);  // parameters 0x10
    UFUNCTION() void OnFlammableInstanceState_Destroyed_Enter(UFlammableInstance* Instance, UFlammableState* FlammableState);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetDebugDisableFires(bool bState);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetDebugFlammableState(TSubclassOf<UFlammableComponent> FlammableClass, bool bState);  // parameters 0x9
};
