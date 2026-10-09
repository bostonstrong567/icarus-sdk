// /Script/Engine.PerBoneBlendWeights
// size 0x10, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FPerBoneBlendWeights
{
public:
    UPROPERTY() TArray<FPerBoneBlendWeight> BoneBlendWeights;  // 0x0000, size 0x10
};
