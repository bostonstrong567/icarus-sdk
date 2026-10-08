// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Sphere
// size 0x14, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h

USTRUCT()
struct FClothCollisionPrim_Sphere
{
    UPROPERTY() int32 BoneIndex;  // 0x0000, size 0x4
    UPROPERTY() float Radius;  // 0x0004, size 0x4
    UPROPERTY() FVector LocalPosition;  // 0x0008, size 0xC
};
