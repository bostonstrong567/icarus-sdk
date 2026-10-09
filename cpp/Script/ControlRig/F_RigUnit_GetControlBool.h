// /Script/ControlRig.RigUnit_GetControlBool
// size 0x28, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Hierarchy/RigUnit_GetControlTransform.h

USTRUCT()
struct FRigUnit_GetControlBool : public FRigUnit
{
public:
    UPROPERTY() FName Control;  // 0x0008, size 0x8
    UPROPERTY() bool BoolValue;  // 0x0010, size 0x1
    UPROPERTY() FCachedRigElement CachedControlIndex;  // 0x0014, size 0x14
};
