// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_ConvexFace
// size 0x20, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h

USTRUCT()
struct FClothCollisionPrim_ConvexFace
{
public:
    UPROPERTY() FPlane Plane;  // 0x0000, size 0x10
    UPROPERTY() TArray<int32> Indices;  // 0x0010, size 0x10
};
