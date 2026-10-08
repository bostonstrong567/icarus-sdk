// /Script/Landscape.LandscapeHeightfieldCollisionComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x530, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeHeightfieldCollisionComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
    UPROPERTY() TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos;  // 0x0450, size 0x10
    UPROPERTY() int32 SectionBaseX;  // 0x0460, size 0x4
    UPROPERTY() int32 SectionBaseY;  // 0x0464, size 0x4
    UPROPERTY() int32 CollisionSizeQuads;  // 0x0468, size 0x4
    UPROPERTY() float CollisionScale;  // 0x046C, size 0x4
    UPROPERTY() int32 SimpleCollisionSizeQuads;  // 0x0470, size 0x4
    UPROPERTY() TArray<uint8> CollisionQuadFlags;  // 0x0478, size 0x10
    UPROPERTY() FGuid HeightfieldGuid;  // 0x0488, size 0x10
    UPROPERTY() FBox CachedLocalBox;  // 0x0498, size 0x1C
    UPROPERTY(Instanced) TLazyObjectPtr<ULandscapeComponent> RenderComponent;  // 0x04B4, size 0x1C
    UPROPERTY() TArray<UPhysicalMaterial*> CookedPhysicalMaterials;  // 0x04E0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TArray<unsigned char,TSizedDefaultAllocator<32> > CookedCollisionData;  // 0x04D0
    TRefCountPtr<ULandscapeHeightfieldCollisionComponent::FHeightfieldGeometryRef> HeightfieldRef;  // 0x04F0
    int32 HeightfieldRowsCount;  // 0x04F8
    int32 HeightfieldColumnsCount;  // 0x04FC
    FNavHeightfieldSamples CachedHeightFieldSamples;  // 0x0500

    UFUNCTION(BlueprintCallable, BlueprintPure) ULandscapeComponent* GetRenderComponent() const;  // parameters 0x8

    // Virtual functions that start here:
    //   CreateCollisionObject, RecreateCollision
};
