// /Script/Engine.KConvexElem
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h

USTRUCT()
struct FKConvexElem : public FKShapeElem
{
    UPROPERTY() TArray<FVector> VertexData;  // 0x0030, size 0x10
    UPROPERTY() TArray<int32> IndexData;  // 0x0040, size 0x10
    UPROPERTY() FBox ElemBox;  // 0x0050, size 0x1C
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30

    // Not reflected:
    physx::PxConvexMesh * ConvexMesh;  // 0x00A0
    physx::PxConvexMesh * ConvexMeshNegX;  // 0x00A8
};
