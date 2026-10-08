// /Script/ControlRig.RigUnit_DebugArc
// size 0x110, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Units/Debug/RigUnit_DebugPrimitives.h

USTRUCT()
struct FRigUnit_DebugArc : public FRigUnit_DebugBaseMutable
{
    UPROPERTY() FTransform Transform;  // 0x0070, size 0x30
    UPROPERTY() FLinearColor Color;  // 0x00A0, size 0x10
    UPROPERTY() float Radius;  // 0x00B0, size 0x4
    UPROPERTY() float MinimumDegrees;  // 0x00B4, size 0x4
    UPROPERTY() float MaximumDegrees;  // 0x00B8, size 0x4
    UPROPERTY() float Thickness;  // 0x00BC, size 0x4
    UPROPERTY() int32 Detail;  // 0x00C0, size 0x4
    UPROPERTY() FName Space;  // 0x00C4, size 0x8
    UPROPERTY() FTransform WorldOffset;  // 0x00D0, size 0x30
    UPROPERTY() bool bEnabled;  // 0x0100, size 0x1
};
