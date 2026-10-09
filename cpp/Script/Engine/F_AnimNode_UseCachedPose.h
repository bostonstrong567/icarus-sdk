// /Script/Engine.AnimNode_UseCachedPose
// size 0x28, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_UseCachedPose.h

USTRUCT()
struct FAnimNode_UseCachedPose : public FAnimNode_Base
{
public:
    UPROPERTY() FPoseLink LinkToCachingNode;  // 0x0010, size 0x10
    UPROPERTY() FName CachePoseName;  // 0x0020, size 0x8
};
