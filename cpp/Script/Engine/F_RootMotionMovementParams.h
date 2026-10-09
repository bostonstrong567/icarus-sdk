// /Script/Engine.RootMotionMovementParams
// size 0x40, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h

USTRUCT()
struct FRootMotionMovementParams
{
public:
    UPROPERTY() bool bHasRootMotion;  // 0x0000, size 0x1
    UPROPERTY() float BlendWeight;  // 0x0004, size 0x4
    UPROPERTY() FTransform RootMotionTransform;  // 0x0010, size 0x30
};
