// /Script/ClothingSystemRuntimeInterface.ClothCollisionData
// size 0x40, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionData.h

USTRUCT()
struct FClothCollisionData
{
    UPROPERTY(EditAnywhere) TArray<FClothCollisionPrim_Sphere> Spheres;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere) TArray<FClothCollisionPrim_SphereConnection> SphereConnections;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere) TArray<FClothCollisionPrim_Convex> Convexes;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere) TArray<FClothCollisionPrim_Box> Boxes;  // 0x0030, size 0x10
};
