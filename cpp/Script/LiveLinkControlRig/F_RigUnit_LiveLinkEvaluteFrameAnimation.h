// /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameAnimation
// size 0x80, declared in Engine/Plugins/Experimental/LiveLinkControlRig/Source/LiveLinkControlRig/Public/LiveLinkRigUnits.h

USTRUCT()
struct FRigUnit_LiveLinkEvaluteFrameAnimation : public FRigUnit_LiveLinkBase
{
public:
    UPROPERTY() FName SubjectName;  // 0x0008, size 0x8
    UPROPERTY() bool bDrawDebug;  // 0x0010, size 0x1
    UPROPERTY() FLinearColor DebugColor;  // 0x0014, size 0x10
    UPROPERTY() FTransform DebugDrawOffset;  // 0x0030, size 0x30
    UPROPERTY() FSubjectFrameHandle SubjectFrame;  // 0x0060, size 0x18
};
