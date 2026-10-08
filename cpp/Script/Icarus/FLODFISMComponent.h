// /Script/Icarus.FLODFISMComponent
// Derives from: UFoliageInstancedStaticMeshComponent > UHierarchicalInstancedStaticMeshComponent > UInstancedStaticMeshComponent > UStaticMeshComponent > UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x760, declared in Icarus/Source/Icarus/Systems/FLOD/FLODFISMComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UFLODFISMComponent : public UFoliageInstancedStaticMeshComponent, public IMutableGameplayTagInterface
{
public:
    UPROPERTY(BlueprintReadOnly) int32 RegisteredRecordIndex;  // 0x06B0, size 0x4
    UPROPERTY(BlueprintReadOnly) TWeakObjectPtr<AFLODTile> RegisteredFLODTile;  // 0x06B4, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) TWeakObjectPtr<UFlammableFISM> RegisteredFlammable;  // 0x06BC, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FGameplayTagContainer GameplayTags;  // 0x06C8, size 0x20
    UPROPERTY() UFoliageType* CachedFoliageType;  // 0x06E8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    bool bTryRegisterSelf;  // 0x06C4
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> InsidePhysicsBoundsIndices;  // 0x06F0, protected
    TArray<FTransform,TSizedDefaultAllocator<32> > InitialInstanceTransforms;  // 0x0740, protected
    bool bForceNextNavUpdate;  // 0x0750, protected
    float MaxDistanceSq;  // 0x0754, protected
    bool bHasCalculatedMaxDistance;  // 0x0758, protected

    UFUNCTION(BlueprintCallable) static bool GetFISMPhysDebugEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) static float GetInfluenceOverlapRadius();  // parameters 0x4
    UFUNCTION(BlueprintCallable) static float GetInfluencePhysicsRadius();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FName GetLevelTileName() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) static void GetTotalFISMPhysInstanceChanges(int32& TotalAdded, int32& TotalRemoved);  // parameters 0x8
    UFUNCTION(BlueprintCallable) static int32 GetTotalFISMPhysInstances();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasRegisteredToFLOD() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetFISMPhysDebugEnabled(bool bNewEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetInfluenceFireInstanceRadius(UObject* WorldContextObject, float NewRadius);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetInfluenceOverlapRadius(UObject* WorldContextObject, float NewRadius);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetInfluencePhysicsRadius(UObject* WorldContextObject, float NewRadius);  // parameters 0xC
};
