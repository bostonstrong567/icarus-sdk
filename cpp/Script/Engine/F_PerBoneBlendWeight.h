// /Script/Engine.PerBoneBlendWeight
// size 0x8, declared in Engine/Source/Runtime/Engine/Public/Animation/AnimTypes.h

USTRUCT()
struct FPerBoneBlendWeight
{
public:
    UPROPERTY() int32 SourceIndex;  // 0x0000, size 0x4
    UPROPERTY() float BlendWeight;  // 0x0004, size 0x4
};
