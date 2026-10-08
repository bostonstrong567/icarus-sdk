// /Script/ControlRig.RigUnit_DebugHierarchy
// size 0xC0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugHierarchy.h

USTRUCT()
struct FRigUnit_DebugHierarchy : public FRigUnit_DebugBaseMutable
{
    UPROPERTY() float Scale;  // 0x0068, size 0x4
    UPROPERTY() FLinearColor Color;  // 0x006C, size 0x10
    UPROPERTY() float Thickness;  // 0x007C, size 0x4
    UPROPERTY() FTransform WorldOffset;  // 0x0080, size 0x30
    UPROPERTY() bool bEnabled;  // 0x00B0, size 0x1
};
