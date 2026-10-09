// /Script/Engine.SkelMeshSkinWeightInfo
// size 0x3C, declared in Engine/Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h

USTRUCT()
struct FSkelMeshSkinWeightInfo
{
public:
    UPROPERTY() int32 Bones;  // 0x0000, size 0x4
    UPROPERTY() uint8 Weights;  // 0x0030, size 0x1
};
