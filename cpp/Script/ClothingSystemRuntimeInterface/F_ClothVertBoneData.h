// /Script/ClothingSystemRuntimeInterface.ClothVertBoneData
// size 0x4C, declared in Engine/Source/Runtime/ClothingSystemRuntimeInterface/Public/ClothVertBoneData.h

USTRUCT()
struct FClothVertBoneData
{
public:
    UPROPERTY() int32 NumInfluences;  // 0x0000, size 0x4
    UPROPERTY() uint16 BoneIndices;  // 0x0004, size 0x2
    UPROPERTY() float BoneWeights;  // 0x001C, size 0x4
};
