// /Script/Engine.AnimNode_LinkedInputPose
// size 0x118, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedInputPose.h

USTRUCT()
struct FAnimNode_LinkedInputPose : public FAnimNode_Base
{
public:
    UPROPERTY(EditAnywhere) FName Name;  // 0x0010, size 0x8
    UPROPERTY() FName Graph;  // 0x0018, size 0x8
    UPROPERTY() FPoseLink InputPose;  // 0x0020, size 0x10
    FCompactHeapPose CachedInputPose;  // 0x0030, not reflected
    FBlendedHeapCurve CachedInputCurve;  // 0x0048, not reflected
    FHeapCustomAttributes CachedAttributes;  // 0x0078, not reflected
    int32 OuterGraphNodeIndex;  // 0x0108, not reflected
private:
    FAnimInstanceProxy * InputProxy;  // 0x0110, not reflected
};
