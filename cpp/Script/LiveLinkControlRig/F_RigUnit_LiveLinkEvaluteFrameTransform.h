// /Script/LiveLinkControlRig.RigUnit_LiveLinkEvaluteFrameTransform
// size 0x90, declared in Engine/Plugins/Experimental/LiveLinkControlRig/Source/LiveLinkControlRig/Public/LiveLinkRigUnits.h

USTRUCT()
struct FRigUnit_LiveLinkEvaluteFrameTransform : public FRigUnit_LiveLinkBase
{
    UPROPERTY() FName SubjectName;  // 0x0008, size 0x8
    UPROPERTY() bool bDrawDebug;  // 0x0010, size 0x1
    UPROPERTY() FLinearColor DebugColor;  // 0x0014, size 0x10
    UPROPERTY() FTransform DebugDrawOffset;  // 0x0030, size 0x30
    UPROPERTY() FTransform Transform;  // 0x0060, size 0x30
};
