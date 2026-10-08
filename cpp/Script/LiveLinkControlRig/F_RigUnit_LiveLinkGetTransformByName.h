// /Script/LiveLinkControlRig.RigUnit_LiveLinkGetTransformByName
// size 0x60, declared in Engine/Plugins/Experimental/LiveLinkControlRig/Source/LiveLinkControlRig/Public/LiveLinkRigUnits.h

USTRUCT()
struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase
{
    UPROPERTY() FSubjectFrameHandle SubjectFrame;  // 0x0008, size 0x18
    UPROPERTY() FName TransformName;  // 0x0020, size 0x8
    UPROPERTY() EBoneGetterSetterMode Space;  // 0x0028, size 0x1
    UPROPERTY() FTransform Transform;  // 0x0030, size 0x30
};
