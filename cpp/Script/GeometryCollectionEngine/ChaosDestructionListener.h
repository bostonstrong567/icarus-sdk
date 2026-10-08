// /Script/GeometryCollectionEngine.ChaosDestructionListener
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x420, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/ChaosBlueprint.h

UCLASS(Config=Engine)
class UChaosDestructionListener : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsCollisionEventListeningEnabled : 1;  // 0x01F8, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsBreakingEventListeningEnabled : 1;  // 0x01F8, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadOnly) uint8 bIsTrailingEventListeningEnabled : 1;  // 0x01F8, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FChaosCollisionEventRequestSettings CollisionEventRequestSettings;  // 0x01FC, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FChaosBreakingEventRequestSettings BreakingEventRequestSettings;  // 0x0214, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FChaosTrailingEventRequestSettings TrailingEventRequestSettings;  // 0x022C, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSet<AChaosSolverActor*> ChaosSolverActors;  // 0x0248, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TSet<AGeometryCollectionActor*> GeometryCollectionActors;  // 0x0298, size 0x50
    UPROPERTY(BlueprintAssignable) FOnChaosCollisionEvents OnCollisionEvents;  // 0x02E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnChaosBreakingEvents OnBreakingEvents;  // 0x02F8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnChaosTrailingEvents OnTrailingEvents;  // 0x0308, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    FThreadSafeCounter TaskState;  // 0x0318, protected
    TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32> > RawCollisionDataArray;  // 0x0320, protected
    TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32> > RawBreakingDataArray;  // 0x0330, protected
    TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32> > RawTrailingDataArray;  // 0x0340, protected
    FTransform ChaosComponentTransform;  // 0x0350, protected
    FThreadSafeBool bChanged;  // 0x0380, protected
    float LastCollisionDataTimeStamp;  // 0x0384, protected
    float LastBreakingDataTimeStamp;  // 0x0388, protected
    float LastTrailingDataTimeStamp;  // 0x038C, protected
    TSet<Chaos::FPBDRigidsSolver *,DefaultKeyFuncs<Chaos::FPBDRigidsSolver *,0>,FDefaultSetAllocator> Solvers;  // 0x0390, protected
    TArray<FGeometryCollectionPhysicsProxy const *,TSizedDefaultAllocator<32> > GeometryCollectionPhysicsProxies;  // 0x03E0, protected
    TSharedPtr<FChaosCollisionEventFilter,0> ChaosCollisionFilter;  // 0x03F0, protected
    TSharedPtr<FChaosBreakingEventFilter,0> ChaosBreakingFilter;  // 0x0400, protected
    TSharedPtr<FChaosTrailingEventFilter,0> ChaosTrailingFilter;  // 0x0410, protected

    UFUNCTION(BlueprintCallable) void AddChaosSolverActor(AChaosSolverActor* ChaosSolverActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void AddGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsEventListening() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void RemoveChaosSolverActor(AChaosSolverActor* ChaosSolverActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveGeometryCollectionActor(AGeometryCollectionActor* GeometryCollectionActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetBreakingEventEnabled(bool bIsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetBreakingEventRequestSettings(const FChaosBreakingEventRequestSettings& InSettings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetCollisionEventEnabled(bool bIsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCollisionEventRequestSettings(const FChaosCollisionEventRequestSettings& InSettings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetTrailingEventEnabled(bool bIsEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTrailingEventRequestSettings(const FChaosTrailingEventRequestSettings& InSettings);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);  // parameters 0x11
};
