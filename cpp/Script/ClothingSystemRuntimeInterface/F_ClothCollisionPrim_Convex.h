// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Convex
// size 0x28, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h

USTRUCT()
struct FClothCollisionPrim_Convex
{
    UPROPERTY() TArray<FClothCollisionPrim_ConvexFace> Faces;  // 0x0000, size 0x10
    UPROPERTY() TArray<FVector> SurfacePoints;  // 0x0010, size 0x10
    UPROPERTY() int32 BoneIndex;  // 0x0020, size 0x4
};
