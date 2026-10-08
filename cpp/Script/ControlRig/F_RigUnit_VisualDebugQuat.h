// /Script/ControlRig.RigUnit_VisualDebugQuat
// size 0x40, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_VisualDebug.h

USTRUCT()
struct FRigUnit_VisualDebugQuat : public FRigUnit_DebugBase
{
    UPROPERTY() FQuat Value;  // 0x0010, size 0x10
    UPROPERTY() bool bEnabled;  // 0x0020, size 0x1
    UPROPERTY() float Thickness;  // 0x0024, size 0x4
    UPROPERTY() float Scale;  // 0x0028, size 0x4
    UPROPERTY() FName BoneSpace;  // 0x002C, size 0x8
};
