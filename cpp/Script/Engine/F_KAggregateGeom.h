// /Script/Engine.KAggregateGeom
// size 0x58, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h

USTRUCT()
struct FKAggregateGeom
{
    UPROPERTY(EditAnywhere) TArray<FKSphereElem> SphereElems;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<FKBoxElem> BoxElems;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<FKSphylElem> SphylElems;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) TArray<FKConvexElem> ConvexElems;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere) TArray<FKTaperedCapsuleElem> TaperedCapsuleElems;  // 0x0040, size 0x10

    // Not reflected:
    FKConvexGeomRenderInfo * RenderInfo;  // 0x0050
};
