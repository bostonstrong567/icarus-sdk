// /Script/GeometryCollectionEngine.GeometryCollectionComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x900, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionComponent.h

UCLASS(Config=Engine)
class UGeometryCollectionComponent : public UMeshComponent, public IChaosNotifyHandlerInterface
{
public:
    UPROPERTY(EditAnywhere) AChaosSolverActor* ChaosSolverActor;  // 0x0480, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UGeometryCollection* RestCollection;  // 0x0568, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<AFieldSystemActor*> InitializationFields;  // 0x0570, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Simulating;  // 0x0580, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EObjectStateTypeEnum ObjectType;  // 0x0588, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnableClustering;  // 0x0589, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ClusterGroupIndex;  // 0x058C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxClusterLevel;  // 0x0590, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> DamageThreshold;  // 0x0598, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EClusterConnectionTypeEnum ClusterConnectionType;  // 0x05A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CollisionGroup;  // 0x05AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CollisionSampleFraction;  // 0x05B0, size 0x4
    UPROPERTY(Deprecated) float LinearEtherDrag;  // 0x05B4, size 0x4
    UPROPERTY(Deprecated) float AngularEtherDrag;  // 0x05B8, size 0x4
    UPROPERTY(Deprecated) UChaosPhysicalMaterial* PhysicalMaterial;  // 0x05C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EInitialVelocityTypeEnum InitialVelocityType;  // 0x05C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialLinearVelocity;  // 0x05CC, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector InitialAngularVelocity;  // 0x05D8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPhysicalMaterial* PhysicalMaterialOverride;  // 0x05E8, size 0x8
    UPROPERTY() FGeomComponentCacheParameters CacheParameters;  // 0x05F0, size 0x50
    UPROPERTY(BlueprintAssignable) FNotifyGeometryCollectionPhysicsStateChange NotifyGeometryCollectionPhysicsStateChange;  // 0x0640, size 0x10
    UPROPERTY(BlueprintAssignable) FNotifyGeometryCollectionPhysicsLoadingStateChange NotifyGeometryCollectionPhysicsLoadingStateChange;  // 0x0650, size 0x10
    UPROPERTY(BlueprintAssignable) FOnChaosBreakEvent OnChaosBreakEvent;  // 0x0678, size 0x10
    UPROPERTY(EditAnywhere, Transient, Interp, BlueprintReadWrite) float DesiredCacheTime;  // 0x0688, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool CachePlayback;  // 0x068C, size 0x1
    UPROPERTY(BlueprintAssignable) FOnChaosPhysicsCollision OnChaosPhysicsCollision;  // 0x0690, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bNotifyBreaks;  // 0x06A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bNotifyCollisions;  // 0x06A1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableReplication;  // 0x06A2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnableAbandonAfterLevel;  // 0x06A3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ReplicationAbandonClusterLevel;  // 0x06A4, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing) FGeometryCollectionRepData RepData;  // 0x06A8, size 0x18
    UPROPERTY(Transient) UBodySetup* DummyBodySetup;  // 0x08D8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TManagedArray<FVector> * IndirectVertexArray;  // 0x0488, private
    TManagedArray<FVector2D> * IndirectUVArray;  // 0x0490, private
    TManagedArray<FLinearColor> * IndirectColorArray;  // 0x0498, private
    TManagedArray<FVector> * IndirectTangentUArray;  // 0x04A0, private
    TManagedArray<FVector> * IndirectTangentVArray;  // 0x04A8, private
    TManagedArray<FVector> * IndirectNormalArray;  // 0x04B0, private
    TManagedArray<int> * IndirectBoneMapArray;  // 0x04B8, private
    TManagedArray<FIntVector> * IndirectIndicesArray;  // 0x04C0, private
    TManagedArray<bool> * IndirectVisibleArray;  // 0x04C8, private
    TManagedArray<int> * IndirectMaterialIndexArray;  // 0x04D0, private
    TManagedArray<int> * IndirectMaterialIDArray;  // 0x04D8, private
    TManagedArray<int> * IndirectTransformIndexArray;  // 0x04E0, private
    TManagedArray<FBox> * IndirectBoundingBoxArray;  // 0x04E8, private
    TManagedArray<float> * IndirectInnerRadiusArray;  // 0x04F0, private
    TManagedArray<float> * IndirectOuterRadiusArray;  // 0x04F8, private
    TManagedArray<int> * IndirectVertexStartArray;  // 0x0500, private
    TManagedArray<int> * IndirectVertexCountArray;  // 0x0508, private
    TManagedArray<int> * IndirectFaceStartArray;  // 0x0510, private
    TManagedArray<int> * IndirectFaceCountArray;  // 0x0518, private
    TManagedArray<FGeometryCollectionSection> * IndirectSectionsArray;  // 0x0520, private
    TManagedArray<FString> * IndirectBoneNameArray;  // 0x0528, private
    TManagedArray<FLinearColor> * IndirectBoneColorArray;  // 0x0530, private
    TManagedArray<FTransform> * IndirectTransformArray;  // 0x0538, private
    TManagedArray<int> * IndirectParentArray;  // 0x0540, private
    TManagedArray<TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> > * IndirectChildrenArray;  // 0x0548, private
    TManagedArray<int> * IndirectSimulationTypeArray;  // 0x0550, private
    TManagedArray<int> * IndirectTransformToGeometryIndexArray;  // 0x0558, private
    TManagedArray<int> * IndirectStatusFlagsArray;  // 0x0560, private
    ESimulationInitializationState InitializationState;  // 0x0584
    TArray<bool,TSizedDefaultAllocator<32> > DisabledFlags;  // 0x0660
    int32 BaseRigidBodyIndex;  // 0x0670
    int32 NumParticlesAdded;  // 0x0674
    bool bRenderStateDirty;  // 0x06C0, private
    bool bShowBoneColors;  // 0x06C1, private
    bool bEnableBoneSelection;  // 0x06C2, private
    int32 ViewLevel;  // 0x06C4, private
    uint32 NavmeshInvalidationTimeSliceIndex;  // 0x06C8, private
    bool IsObjectDynamic;  // 0x06CC, private
    bool IsObjectLoading;  // 0x06CD, private
    FCollisionFilterData InitialSimFilter;  // 0x06D0, private
    FCollisionFilterData InitialQueryFilter;  // 0x06E0, private
    FPhysxUserData PhysicsUserData;  // 0x06F0, private
    TArray<FMatrix,TSizedDefaultAllocator<32> > GlobalMatrices;  // 0x0700, private
    FBox LocalBounds;  // 0x0710, private
    FBoxSphereBounds WorldBounds;  // 0x072C, private
    float CurrentCacheTime;  // 0x0748, private
    TArray<bool,TSizedDefaultAllocator<32> > EventsPlayed;  // 0x0750, private
    FGeometryCollectionPhysicsProxy * PhysicsProxy;  // 0x0760, private
    TUniquePtr<FGeometryDynamicCollection,TDefaultDelete<FGeometryDynamicCollection> > DynamicCollection;  // 0x0768, private
    TArray<FManagedArrayBase * *,TSizedDefaultAllocator<32> > CopyOnWriteAttributeList;  // 0x0770, private
    FBodyInstance DummyBodyInstance;  // 0x0780, private
    TArray<bool,TSizedDefaultAllocator<32> > TransformsAreEqual;  // 0x08E0, private
    int32 TransformsAreEqualIndex;  // 0x08F0, private
    UChaosGameplayEventDispatcher * EventDispatcher;  // 0x08F8, private

    UFUNCTION(BlueprintCallable) void ApplyKinematicField(float Radius, FVector Position);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, UFieldSystemMetaData* MetaData, UFieldNodeBase* Field);  // parameters 0x18
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void NetAbandonCluster(int32 TransformIndex);  // parameters 0x4
    UFUNCTION() void OnRep_RepData(const FGeometryCollectionRepData& OldData);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void ReceivePhysicsCollision(const FChaosPhysicsCollisionInfo& CollisionInfo);  // parameters 0x70
    UFUNCTION(BlueprintCallable) void SetNotifyBreaks(bool bNewNotifyBreaks);  // parameters 0x1

    // Virtual functions that start here:
    //   NetAbandonCluster_Implementation, NotifyBreak
};
