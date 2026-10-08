// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Derives from: UActorComponent > UObject
// size 0xC8, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDebugDrawComponent.h

UCLASS(Config=Engine)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere) AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor;  // 0x00B8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UGeometryCollectionComponent * GeometryCollectionComponent;  // 0x00C0
};
