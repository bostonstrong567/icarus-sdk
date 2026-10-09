// /Script/Icarus.TreeBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x350, declared in Icarus/Source/Icarus/Objects/TreeBase.h

UCLASS(Config=Engine)
class ATreeBase : public AIcarusActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) bool bHasBeenModified;  // 0x02C3, size 0x1
    UPROPERTY(BlueprintAssignable) FOnModifiedSignature OnHasBeenModifiedUpdated;  // 0x02C8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UTreePrimitiveComponent* RootPrimitive;  // 0x02D8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UTreePrimitiveComponent*> TreePrimitives;  // 0x02E0, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* ProxyMeshComponent;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) FTreeRuntimeConstructArguments SpawnArguments;  // 0x02F8, size 0x38
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) TArray<int32> RuntimeTreePrimitivesMask;  // 0x0330, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFLODActorComponent* FLODActorComponent;  // 0x0340, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bIsResolvingTreeCollision;  // 0x0348, size 0x1
protected:
    UPROPERTY(EditAnywhere) bool bHasBeenConstructed;  // 0x02C0, size 0x1
    UPROPERTY(EditAnywhere) bool bHasSpawnArguments;  // 0x02C1, size 0x1
    UPROPERTY(EditAnywhere) bool bDefferTreeConstruction;  // 0x02C2, size 0x1
public:
    UFUNCTION(BlueprintCallable) void AddTreePrimitiveToRuntimeMask(UTreePrimitiveComponent* TreePrimitive);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ConsumeHit(FIcarusDamagePacket& DamagePacket);  // parameters 0xD8
    UFUNCTION(BlueprintCallable) void DebugLogHierarchy() const;
    UFUNCTION(BlueprintCallable) bool DetachTreePrimitive(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool GetAttachedTreePrimitives(UTreePrimitiveComponent* SourceTreePrimitive, const TArray<ETreePrimitiveType>& Types, bool bIncludeSource, bool bIncludeAllDescendants, TArray<UTreePrimitiveComponent*>& OutTreePrimitives);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetPrimitiveCountByType(ETreePrimitiveType Type) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) ATreePrefab* GetTreePrefab() const;  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void OnConstructedTreePrimitives();
    UFUNCTION(BlueprintNativeEvent) void OnDetachTreePrimitive(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext);  // parameters 0x20
    UFUNCTION(BlueprintNativeEvent) void OnHitTree(UPrimitiveComponent* Primitive, AActor* DamageCauser, FVector HitLocation, FVector HitNormal);  // parameters 0x28
    UFUNCTION(BlueprintNativeEvent) void OnOrphanTreePrimitive(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext, bool bDestroyingSelf, AIcarusItem* ReplacementItem);  // parameters 0x30
    UFUNCTION(BlueprintNativeEvent) void OnPreConstructedTreePrimitives();
    UFUNCTION() void OnRep_HasBeenModified();
    UFUNCTION() void OnRep_RuntimeTreePrimitivesMask();
    UFUNCTION() void OnRep_SpawnArguments();
    UFUNCTION(BlueprintNativeEvent) void OnTransferTreePrimitiveHierarchy(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext, ATreeBase* NewTree);  // parameters 0x28
    UFUNCTION(BlueprintNativeEvent) void OnUpdateTreePrimitiveRuntimeMaskState(const TArray<UTreePrimitiveComponent*>& RemovedTreePrimitives);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool OrphanTreePrimitive(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext, bool& bDestroySelf);  // parameters 0x22
    UFUNCTION(BlueprintCallable) void ResolveTreeCollision();
    UFUNCTION(BlueprintCallable) void ResolveTreeVisibility();
    UFUNCTION(BlueprintCallable) void SetHasBeenModified(bool Modified);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetRootPrimitive(UTreePrimitiveComponent* InRootPrimitive);  // parameters 0x8
    UFUNCTION(BlueprintNativeEvent) void TransferTreePrimitive(UTreePrimitiveComponent* Original, UTreePrimitiveComponent* New);  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool TransferTreePrimitiveHierarchy(UTreePrimitiveComponent* TreePrimitive, const FTreePrimitiveDetachContext& DetachContext);  // parameters 0x21

    // Virtual functions that start here:
    //   OnConstructedTreePrimitives_Implementation, OnDetachTreePrimitive_Implementation
    //   OnHitTree_Implementation, OnOrphanTreePrimitive_Implementation
    //   OnPreConstructedTreePrimitives_Implementation, OnTransferTreePrimitiveHierarchy_Implementation
    //   OnUpdateTreePrimitiveRuntimeMaskState_Implementation, TransferTreePrimitive_Implementation
};
