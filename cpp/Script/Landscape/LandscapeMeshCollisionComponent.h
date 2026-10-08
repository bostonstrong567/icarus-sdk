// /Script/Landscape.LandscapeMeshCollisionComponent
// Derives from: ULandscapeHeightfieldCollisionComponent > UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x550, declared in Engine/Source/Runtime/Landscape/Classes/LandscapeMeshCollisionComponent.h

UCLASS(Config=Engine)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
    UPROPERTY() FGuid MeshGuid;  // 0x0530, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TRefCountPtr<ULandscapeMeshCollisionComponent::FTriMeshGeometryRef> MeshRef;  // 0x0540
};
