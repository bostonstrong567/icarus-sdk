// /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// size 0x18, declared in Engine/Source/Runtime/Experimental/GeometryCollectionEngine/Public/GeometryCollection/GeometryCollectionDebugDrawActor.h

USTRUCT()
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
public:
    UPROPERTY(EditAnywhere) int32 Id;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) AChaosSolverActor* Solver;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere) AGeometryCollectionActor* GeometryCollection;  // 0x0010, size 0x8
};
