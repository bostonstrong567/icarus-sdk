// /Script/Engine.NavCollisionBase
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h

UCLASS(Abstract, Config=Engine)
class UNavCollisionBase : public UObject
{
public:
    UPROPERTY(EditAnywhere, Config) uint8 bIsDynamicObstacle : 1;  // 0x0028, mask 0x01

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bHasConvexGeometry;  // 0x0028, protected
    FNavCollisionConvex TriMeshCollision;  // 0x0030, protected
    FNavCollisionConvex ConvexCollision;  // 0x0050, protected

    // Virtual functions that start here:
    //   DrawSimpleGeom, ExportGeometry, GetNavigationModifier, Setup
};
