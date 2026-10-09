// /Script/LiveLinkControlRig.RigUnit_LiveLinkGetParameterValueByName
// size 0x30, declared in Engine/Plugins/Experimental/LiveLinkControlRig/Source/LiveLinkControlRig/Public/LiveLinkRigUnits.h

USTRUCT()
struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase
{
public:
    UPROPERTY() FSubjectFrameHandle SubjectFrame;  // 0x0008, size 0x18
    UPROPERTY() FName ParameterName;  // 0x0020, size 0x8
    UPROPERTY() float Value;  // 0x0028, size 0x4
};
