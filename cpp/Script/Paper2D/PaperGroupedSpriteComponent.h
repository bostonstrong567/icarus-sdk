// /Script/Paper2D.PaperGroupedSpriteComponent
// Derives from: UMeshComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4B0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperGroupedSpriteComponent.h

UCLASS(Config=Engine)
class UPaperGroupedSpriteComponent : public UMeshComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY() TArray<UMaterialInterface*> InstanceMaterials;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere) TArray<FSpriteInstanceData> PerInstanceSpriteData;  // 0x0488, size 0x10
    TArray<FBodyInstance *,TSizedDefaultAllocator<32> > InstanceBodies;  // 0x0498, not reflected
public:
    UFUNCTION(BlueprintCallable) int32 AddInstance(const FTransform& Transform, UPaperSprite* Sprite, bool bWorldSpace, FLinearColor Color);  // parameters 0x50
    UFUNCTION(BlueprintCallable) void ClearInstances();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetInstanceCount() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetInstanceTransform(int32 InstanceIndex, FTransform& OutInstanceTransform, bool bWorldSpace) const;  // parameters 0x42
    UFUNCTION(BlueprintCallable) bool RemoveInstance(int32 InstanceIndex);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SortInstancesAlongAxis(FVector WorldSpaceSortAxis);  // parameters 0xC
    UFUNCTION(BlueprintCallable) bool UpdateInstanceColor(int32 InstanceIndex, FLinearColor NewInstanceColor, bool bMarkRenderStateDirty);  // parameters 0x16
    UFUNCTION(BlueprintCallable) bool UpdateInstanceTransform(int32 InstanceIndex, const FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);  // parameters 0x44

    // Virtual functions that start here:
    //   AddInstanceWithMaterial, ClearInstances, RemoveInstance, UpdateInstanceColor
    //   UpdateInstanceTransform
};
