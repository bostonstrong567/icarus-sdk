// /Script/ClothingSystemRuntimeInterface.ClothCollisionPrim_Box
// size 0x30, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h

USTRUCT()
struct FClothCollisionPrim_Box
{
public:
    UPROPERTY() FVector LocalPosition;  // 0x0000, size 0xC
    UPROPERTY() FQuat LocalRotation;  // 0x0010, size 0x10
    UPROPERTY() FVector HalfExtents;  // 0x0020, size 0xC
    UPROPERTY() int32 BoneIndex;  // 0x002C, size 0x4
};
