// /Script/Engine.NavCollisionBase
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h

UCLASS(Abstract, Config=Engine)
class UNavCollisionBase : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    uint32 : 1 bHasConvexGeometry;  // 0x0028, not reflected
    UPROPERTY(EditAnywhere, Config) uint8 bIsDynamicObstacle : 1;  // 0x0028, mask 0x01
    FNavCollisionConvex TriMeshCollision;  // 0x0030, not reflected
    FNavCollisionConvex ConvexCollision;  // 0x0050, not reflected

    // Virtual functions that start here:
    //   DrawSimpleGeom, ExportGeometry, GetNavigationModifier, Setup
};
